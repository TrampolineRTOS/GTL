//----------------------------------------------------------------------------------------------------------------------
//
//  Implementation of routines for handling dynamic allocation checking.                         
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 1994, ..., 2010 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_machine.h"
#include "utilities/basic-allocation.h"

//----------------------------------------------------------------------------------------------------------------------

#include <stdlib.h>

//----------------------------------------------------------------------------------------------------------------------

//#define GENERATE_BLOCK_SIZE_STATS
//#define USE_SMALL_BLOCK_FREE_LIST
//#define USE_MALLOC_GOOD_SIZE

//----------------------------------------------------------------------------------------------------------------------

#ifdef USE_MALLOC_GOOD_SIZE
  #include <malloc/malloc.h>
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//                   Parametrage de la gestion memoire                                           
//
//----------------------------------------------------------------------------------------------------------------------

// ATTENTION : l'operateur predefini 'new' n'initialise pas la memoire allouee, tandis
// que celui defini dans ce fichier initialise la memoire allouee a zero. 

//--- Significatif uniquement sous UNIX : si la constante de compilation
// 'CALL_MALLOC_DEBUG' est definie, alors :
//  - le tas est alors verifie avant chaque allocation et desallocation
//  - il faut realiser l'edition de liens avec '/usr/lib/debug/malloc.o'
//#define CALL_MALLOC_DEBUG

#if (defined (CALL_MALLOC_DEBUG)) && (defined (UNIX_TOOL))
  extern "C" { int malloc_debug (int) ; }
#endif

//----------------------------------------------------------------------------------------------------------------------
//
// ALLOCATION IN RELEASE MODE                                                                    
//
//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void noteAllocatedPointerSize (const size_t inSizeInBytes) ;
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef USE_SMALL_BLOCK_FREE_LIST
  typedef struct cBlock {
    int32_t mTag ;
    struct cBlock * mNext ;
    int32_t mPadding [14] ;
  }cBlock ;
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef USE_SMALL_BLOCK_FREE_LIST
  static cBlock * gFreeList ;
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Allocation routines
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef USE_SMALL_BLOCK_FREE_LIST
 void * myAllocRoutine (const size_t inSizeInBytes) {
  void * ptr = nullptr ;
  if (inSizeInBytes <= (sizeof (cBlock) - sizeof (int32_t))) {
    if (gFreeList == nullptr) {
      cBlock * p = (cBlock *) ::malloc (sizeof (cBlock)) ;
      p->mTag = 0 ;
      ptr = & (p->mNext) ;
    }else{
      cBlock * p = gFreeList ;
      gFreeList = gFreeList->mNext ;
      ptr = & (p->mNext) ;
    }
  }else{
  #ifdef GENERATE_BLOCK_SIZE_STATS
    noteAllocatedPointerSize (inSizeInBytes) ;
  #endif
    cBlock * p = (cBlock *) ::malloc (inSizeInBytes + sizeof (int32_t)) ;
    p->mTag = 1 ;
    ptr = & (p->mNext) ;
  }
  return  ptr ;
}
#endif

#ifndef USE_SMALL_BLOCK_FREE_LIST
void * myAllocRoutine (const size_t inSizeInBytes) {
  #ifdef USE_MALLOC_GOOD_SIZE
    const size_t sizeInBytes = malloc_good_size (inSizeInBytes) ;
  #else
    const size_t sizeInBytes = inSizeInBytes ;
  #endif
  #ifdef GENERATE_BLOCK_SIZE_STATS
    noteAllocatedPointerSize (sizeInBytes) ;
  #endif
  #ifdef CALL_MALLOC_DEBUG
    malloc_debug (4) ;
  #endif
  void * ptr = ::malloc (sizeInBytes) ;
  return  ptr ;
}
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Dispose routines
#endif

//----------------------------------------------------------------------------------------------------------------------
  
#ifdef USE_SMALL_BLOCK_FREE_LIST
void myFreeRoutine (void * inPointer) {
  #if CALL_MALLOC_DEBUG
    malloc_debug (4) ;
  #endif
  int32_t * p = (int32_t *) inPointer ;
  p -- ;
  cBlock * ptr = (cBlock *) p ;
  if (ptr->mTag == 0) {
    ptr->mNext = gFreeList ;
    gFreeList = ptr ;
  }else{
    ::free (ptr) ;
  }
}
#endif

#ifndef USE_SMALL_BLOCK_FREE_LIST
void myFreeRoutine (void * inPointer) {
  #ifdef CALL_MALLOC_DEBUG
    malloc_debug (4) ;
  #endif
  ::free (inPointer) ;
}
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Stats about block size
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  typedef struct cAllocatedSizeDescriptorNode {
    public: struct cAllocatedSizeDescriptorNode * mInfPtr ;
    public: struct cAllocatedSizeDescriptorNode * mSupPtr ;
    public: size_t mAllocatedSize ;
    public: uint32_t mCount ;
    public: int16_t mBalance ;    
  } cAllocatedSizeDescriptorNode ; 
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void rotationGauche (cAllocatedSizeDescriptorNode * & a) {
  //--- faire la rotation 
    cAllocatedSizeDescriptorNode * b = a->mSupPtr;
    a->mSupPtr = b->mInfPtr;
    b->mInfPtr = a;
  //--- recalculer l'equilibrage 
    if (b->mBalance >= 0) {
      a->mBalance ++ ;
    }else{
      a->mBalance = (int16_t) (a->mBalance + 1 - b->mBalance) ;
    }
    if (a->mBalance > 0) {
      b->mBalance = (int16_t) (b->mBalance + a->mBalance + 1) ;
    }else{
      b->mBalance ++ ;
    }
    a = b ;
  } 
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void rotationDroite (cAllocatedSizeDescriptorNode * & a) {
  //-- faire la rotation 
    cAllocatedSizeDescriptorNode * b = a->mInfPtr;
    a->mInfPtr = b->mSupPtr;
    b->mSupPtr = a;
   //--- recalculer l'equilibrage 
    if (b->mBalance > 0) {
      a->mBalance = (int16_t) (a->mBalance - b->mBalance - 1) ;
    }else{
      a->mBalance -- ;
    }
    if (a->mBalance >= 0) {
      b->mBalance -- ;
    }else{
      b->mBalance = (int16_t) (b->mBalance + a->mBalance - 1) ;
    }
    a = b ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void internalNoteAllocatedSize (cAllocatedSizeDescriptorNode * & ioRoot,
                                         const size_t inAllocatedSize,
                                         bool & ioExtension) {
    if (ioRoot == nullptr) {
      ioRoot = (cAllocatedSizeDescriptorNode *) ::malloc (sizeof (cAllocatedSizeDescriptorNode)) ;
      ioRoot->mInfPtr = nullptr ;
      ioRoot->mSupPtr = nullptr ;
      ioRoot->mAllocatedSize = inAllocatedSize ;
      ioRoot->mCount = 1 ;
      ioRoot->mBalance = 0 ;    
      ioExtension = true;
    }else{
      if (ioRoot->mAllocatedSize < inAllocatedSize) {
        internalNoteAllocatedSize (ioRoot->mSupPtr, inAllocatedSize, ioExtension) ;
        if (ioExtension) {
          ioRoot->mBalance -- ;
          switch (ioRoot->mBalance) {
          case 0:
            ioExtension = false;
            break;
          case -1:
            break;
          case -2:
            if (ioRoot->mSupPtr->mBalance == 1) {
              rotationDroite (ioRoot->mSupPtr) ;
            }
            rotationGauche (ioRoot) ;
            ioExtension = false;
            break;
          }
        }
      }else if (ioRoot->mAllocatedSize > inAllocatedSize) {
        internalNoteAllocatedSize (ioRoot->mInfPtr, inAllocatedSize, ioExtension);
        if (ioExtension) {
          ioRoot->mBalance++;
          switch (ioRoot->mBalance) {
          case 0:
            ioExtension = false;
            break;
          case 1:
            break;
          case 2:
            if (ioRoot->mInfPtr->mBalance == -1) {
              rotationGauche (ioRoot->mInfPtr) ;
            }
            rotationDroite (ioRoot) ;
            ioExtension = false;
            break;
          }
        }
      }else{
        ioRoot->mCount ++ ;
        ioExtension = false;
      }
    }
  }
#endif
 
//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static cAllocatedSizeDescriptorNode * gAllocatedSizeTreeRoot ;
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void noteAllocatedPointerSize (const size_t inSizeInBytes) {
    bool extension = false ;
    internalNoteAllocatedSize (gAllocatedSizeTreeRoot, inSizeInBytes, extension) ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef GENERATE_BLOCK_SIZE_STATS
  static void internalVisitNode (cAllocatedSizeDescriptorNode * inRoot,
                                 uint32_t & ioNodeCount) {
    if (inRoot != nullptr) {
      internalVisitNode (inRoot->mInfPtr, ioNodeCount) ;
      printf ("|%11lu |%13u |\n", inRoot->mAllocatedSize, inRoot->mCount) ;
      internalVisitNode (inRoot->mSupPtr, ioNodeCount) ;
      ioNodeCount ++ ;
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

void displayAllocatedBlockSizeStats (void) {
  #ifdef GENERATE_BLOCK_SIZE_STATS
    printf ("*- Allocated block size statistics -*\n") ;
    printf ("|       Size |        Count |\n") ;
    uint32_t nodeCount = 0 ;
    internalVisitNode (gAllocatedSizeTreeRoot, nodeCount) ;
    printf ("|------------|--------------|\n") ;
    printf ("%u different sizes\n", nodeCount) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------
