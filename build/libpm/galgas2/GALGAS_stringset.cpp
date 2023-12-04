//----------------------------------------------------------------------------------------------------------------------
//
//  GALGAS_stringset
//
//  This file is part of libpm library
//
//  Copyright (C) 2005, ..., 2023 Pierre Molinaro.
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

#include "all-predefined-types.h"
#include "utilities/MF_MemoryControl.h"
#include "galgas2/cCollectionElement.h"
#include "galgas2/C_Compiler.h"

//----------------------------------------------------------------------------------------------------------------------
//   cCollectionElement_stringset
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_stringset : public cCollectionElement {
//--- Private member
  protected: GALGAS_string mProperty_key ;
  public: inline GALGAS_string attribute_key (void) const { return mProperty_key ; }

//--- Default constructor
  public: cCollectionElement_stringset (const GALGAS_string & inString
                                         COMMA_LOCATION_ARGS) ;

//--- No copy
  private: cCollectionElement_stringset (const cCollectionElement_stringset &) ;
  private: cCollectionElement_stringset & operator = (const cCollectionElement_stringset &) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
 public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_stringset::cCollectionElement_stringset (const GALGAS_string & inKey
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mProperty_key (inKey) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_stringset::isValid (void) const {
  return mProperty_key.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_stringset::compare (const cCollectionElement * inOperand) const {
  const cCollectionElement_stringset * operand = (const cCollectionElement_stringset *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_stringset) ;
  return mProperty_key.objectCompare (operand->mProperty_key) ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_stringset::copy (void) {
  cCollectionElement_stringset * p = nullptr ;
  macroMyNew (p, cCollectionElement_stringset (mProperty_key COMMA_HERE)) ;
  return p ;
}


//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_stringset::description (C_String & ioString, const int32_t inIndentation) const {
  mProperty_key.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//  c S t r i n g s e t N o d e
//
//----------------------------------------------------------------------------------------------------------------------

class cStringsetNode {
  public: cStringsetNode * mInfPtr ;
  public: cStringsetNode * mSupPtr ;
  public: int32_t mBalance ;
  public: C_String mKey ;

//---
  public: cStringsetNode (const C_String & inString) ;
  public: cStringsetNode (const cStringsetNode * inNode) ;

//--- No copy
  private: cStringsetNode (const cStringsetNode &) ;
  private: cStringsetNode & operator = (const cStringsetNode &) ;

//--- Destructor
  public: virtual ~ cStringsetNode (void) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cStringsetNode::cStringsetNode (const C_String & inString) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inString) {
}

//----------------------------------------------------------------------------------------------------------------------

cStringsetNode::cStringsetNode (const cStringsetNode * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance),
mKey (inNode->mKey) {
  if (inNode->mInfPtr != nullptr) {
    macroMyNew (mInfPtr, cStringsetNode (inNode->mInfPtr)) ;
  }
  if (inNode->mSupPtr != nullptr) {
    macroMyNew (mSupPtr, cStringsetNode (inNode->mSupPtr)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cStringsetNode::~cStringsetNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Insertion Implementation
#endif

//----------------------------------------------------------------------------------------------------------------------

static void rotateLeft (cStringsetNode * & ioRootPtr) {
  cStringsetNode * ptr = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = ptr->mInfPtr ;
  ptr->mInfPtr = ioRootPtr;

  if (ptr->mBalance >= 0) {
    ioRootPtr->mBalance ++ ;
  }else{
    ioRootPtr->mBalance += 1 - ptr->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    ptr->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    ptr->mBalance ++ ;
  }
  ioRootPtr = ptr ;
}

//---------------------------------------------------------------------

static void rotateRight (cStringsetNode * & ioRootPtr) {
  cStringsetNode * ptr = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = ptr->mSupPtr ;
  ptr->mSupPtr = ioRootPtr ;

  if (ptr->mBalance > 0) {
    ioRootPtr->mBalance += -ptr->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance -- ;
  }
  if (ioRootPtr->mBalance >= 0) {
    ptr->mBalance -- ;
  }else{
    ptr->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = ptr ;
}

//----------------------------------------------------------------------------------------------------------------------

static void recursiveAddEntry (cStringsetNode * & ioRootPtr,
                               const C_String & inKey,
                               bool & outEntryAdded,
                               bool & ioExtension) {
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, cStringsetNode (inKey)) ;
    ioExtension = true ;
    outEntryAdded = true ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      recursiveAddEntry (ioRootPtr->mInfPtr, inKey, outEntryAdded, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance++;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      recursiveAddEntry (ioRootPtr->mSupPtr, inKey, outEntryAdded, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{
      ioExtension = false ; // Found
      outEntryAdded = false ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Remove Implementation
#endif

//----------------------------------------------------------------------------------------------------------------------

static void supBranchDecreased (cStringsetNode * & ioRoot,
                                bool & ioBranchHasBeenRemoved) {
  ioRoot->mBalance ++ ;
  switch (ioRoot->mBalance) {
  case 0:
    break;
  case 1:
    ioBranchHasBeenRemoved = false;
    break;
  case 2:
    switch (ioRoot->mInfPtr->mBalance) {
    case -1:
      rotateLeft (ioRoot->mInfPtr) ;
      rotateRight (ioRoot) ;
      break;
    case 0:
      rotateRight (ioRoot) ;
      ioBranchHasBeenRemoved = false;
      break;
    case 1:
      rotateRight (ioRoot) ;
      break;
    }
    break;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void infBranchDecreased (cStringsetNode * & ioRoot,
                                bool & ioBranchHasBeenRemoved) {
  ioRoot->mBalance -- ;
  switch (ioRoot->mBalance) {
  case 0:
    break;
  case -1:
    ioBranchHasBeenRemoved = false;
    break;
  case -2:
    switch (ioRoot->mSupPtr->mBalance) {
    case 1:
      rotateRight (ioRoot->mSupPtr) ;
      rotateLeft (ioRoot) ;
      break;
    case 0:
      rotateLeft (ioRoot) ;
      ioBranchHasBeenRemoved = false;
      break;
    case -1:
      rotateLeft (ioRoot) ;
      break;
    }
    break;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void getPreviousElement (cStringsetNode * & ioRoot,
                                cStringsetNode * & ioElement,
                                bool & ioBranchHasBeenRemoved) {
  if (ioRoot->mSupPtr == nullptr) {
    ioElement = ioRoot ;
    ioRoot = ioRoot->mInfPtr ;
    ioBranchHasBeenRemoved = true ;
  }else{
    getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;
    if (ioBranchHasBeenRemoved) {
      supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void internalRemoveRecursively (cStringsetNode * & ioRoot,
                                       const C_String & inKeyToRemove,
                                       bool & outKeyHasBeenRemoved,
                                       bool & ioBranchHasBeenRemoved) {
  if (ioRoot != nullptr) {
    const int32_t comparaison = ioRoot->mKey.compare (inKeyToRemove) ;
    if (comparaison > 0) {
      internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outKeyHasBeenRemoved, ioBranchHasBeenRemoved);
      if (ioBranchHasBeenRemoved) {
        infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
      }
    }else if (comparaison < 0) {
      internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outKeyHasBeenRemoved, ioBranchHasBeenRemoved);
      if (ioBranchHasBeenRemoved) {
        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);
      }
    }else{
      cStringsetNode * p = ioRoot ;
      outKeyHasBeenRemoved = true ;
      if (p->mInfPtr == nullptr) {
        ioRoot = p->mSupPtr;
        p->mSupPtr = nullptr;
        ioBranchHasBeenRemoved = true;
      }else if (p->mSupPtr == nullptr) {
        ioRoot = p->mInfPtr;
        p->mInfPtr = nullptr;
        ioBranchHasBeenRemoved = true;
      }else{
        getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;
        ioRoot->mSupPtr = p->mSupPtr;
        p->mSupPtr = nullptr;
        ioRoot->mInfPtr = p->mInfPtr;
        p->mInfPtr = nullptr;
        ioRoot->mBalance = p->mBalance;
        p->mBalance = 0;
        if (ioBranchHasBeenRemoved) {
          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;
        }
      }
      macroMyDelete (p) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cSharedStringsetRoot
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//  cSharedStringsetRoot
//
//----------------------------------------------------------------------------------------------------------------------

class cSharedStringsetRoot : public C_SharedObject {
//--- Private data members
  private: cStringsetNode * mRoot ;
  private: uint32_t mEntryCount ;

//--- Accessors
  public: inline const cStringsetNode * root (void) const { return mRoot ; }
  public: inline uint32_t count (void) const { return mEntryCount ; }

//--- Default constructor
  public: cSharedStringsetRoot (LOCATION_ARGS) ;

//--- Virtual destructor
  public: virtual ~ cSharedStringsetRoot (void) ;

//--- No copy
  private: cSharedStringsetRoot (const cSharedStringsetRoot &) ;
  private: cSharedStringsetRoot & operator = (const cSharedStringsetRoot &) ;

//--- In debug mode : check methods
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void countStringSetNodes (const cStringsetNode * inNode,
                                       uint32_t & ioCount) const ;
    public: void checkStringset (LOCATION_ARGS) const ;
  #endif

//--- Get root key
  public: C_String rootKey (void) const ;

//--- Add entry
  public: void addKey (const C_String & inKey) ;

//--- Remove key
  public: void removeKey (const C_String & inKey) ;

//--- Has key
  public: bool hasKey (const C_String & inKey) const ;

//--- Build key list
  public: void buildOrderedKeyList (TC_UniqueArray <C_String> & ioList) const ;

//--- enter contents into stringlist
  public: void addToStringList (GALGAS_stringlist & ioResult) const ;

//--- Copy from
  public: void copyFrom (const cSharedStringsetRoot * inSharedRootToCopy) ;

//--- Description
  protected: void displayEntries (const cStringsetNode * inNode,
                                   C_String & ioString) const ;
  public: void description (C_String & ioString) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSharedStringsetRoot::cSharedStringsetRoot (LOCATION_ARGS) :
C_SharedObject (THERE),
mRoot (nullptr),
mEntryCount (0) {
}

//----------------------------------------------------------------------------------------------------------------------

cSharedStringsetRoot::~cSharedStringsetRoot (void) {
  macroMyDelete (mRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cSharedStringsetRoot::countStringSetNodes (const cStringsetNode * inNode,
                                                  uint32_t & ioCount) const {
    if (nullptr != inNode) {
      countStringSetNodes (inNode->mInfPtr, ioCount) ;
      ioCount ++ ;
      countStringSetNodes (inNode->mSupPtr, ioCount) ;
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cSharedStringsetRoot::checkStringset (LOCATION_ARGS) const {
    uint32_t n = 0 ;
    countStringSetNodes (mRoot, n) ;
    MF_AssertThere (n == mEntryCount, "count %lld != mEntryCount %lld", n, mEntryCount) ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::displayEntries (const cStringsetNode * inNode,
                                           C_String & ioString) const {
  if (inNode != nullptr) {
    displayEntries (inNode->mInfPtr, ioString) ;
    ioString << " '" << inNode->mKey << "'" ;
    displayEntries (inNode->mSupPtr, ioString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::description (C_String & ioString) const {
  ioString << cStringWithUnsigned (mEntryCount) ;
  if (mEntryCount > 1) {
    ioString << " entries" ;
  }else{
    ioString << " entry" ;
  }
  displayEntries (mRoot, ioString) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::addKey (const C_String & inKey) {
  macroUniqueSharedObject (this) ;
  bool extension = false ;
  bool entryAdded = false ;
  recursiveAddEntry (mRoot, inKey, entryAdded, extension) ;
  if (entryAdded) {
    mEntryCount ++ ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

C_String cSharedStringsetRoot::rootKey (void) const {
  macroValidPointer (mRoot) ;
  return mRoot->mKey ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::copyFrom (const cSharedStringsetRoot * inSharedRootToCopy) {
  macroValidSharedObject (inSharedRootToCopy, cSharedStringsetRoot) ;
  if (nullptr != inSharedRootToCopy->mRoot) {
    macroMyNew (mRoot, cStringsetNode (inSharedRootToCopy->mRoot)) ;
    mEntryCount = inSharedRootToCopy->mEntryCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::removeKey (const C_String & inKey) {
  macroUniqueSharedObject (this) ;
  bool branchHasBeenRemoved = false ;
  bool keyHasBeenRemoved = false ;
  internalRemoveRecursively (mRoot, inKey, keyHasBeenRemoved, branchHasBeenRemoved) ;
  if (keyHasBeenRemoved) {
    mEntryCount -- ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void recursiveBuildKeyList (const cStringsetNode * inNode,
                                   TC_UniqueArray <C_String> & ioList) {
  if (inNode != nullptr) {
    recursiveBuildKeyList (inNode->mInfPtr, ioList) ;
    ioList.appendObject (inNode->mKey) ;
    recursiveBuildKeyList (inNode->mSupPtr, ioList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::buildOrderedKeyList (TC_UniqueArray <C_String> & ioList) const {
  recursiveBuildKeyList (mRoot, ioList) ;
}

//----------------------------------------------------------------------------------------------------------------------

bool cSharedStringsetRoot::hasKey (const C_String & inKey) const {
  bool found = false ;
  const cStringsetNode * p = mRoot ;
  while ((p != nullptr) && ! found) {
    const int32_t comparaison = p->mKey.compare (inKey) ;
    if (comparaison > 0) {
      p = p->mInfPtr ;
    }else if (comparaison < 0) {
      p = p->mSupPtr ;
    }else{
      found = true ;
    }
  }
  return found ;
}

//----------------------------------------------------------------------------------------------------------------------

static void recursiveAddToStringList (GALGAS_stringlist & ioResult,
                                      const cStringsetNode * inNode) {
  if (inNode != nullptr) {
    recursiveAddToStringList (ioResult, inNode->mInfPtr) ;
    ioResult.addAssign_operation (GALGAS_string (inNode->mKey) COMMA_HERE) ;
    recursiveAddToStringList (ioResult, inNode->mSupPtr) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedStringsetRoot::addToStringList (GALGAS_stringlist & ioResult) const {
  recursiveAddToStringList (ioResult, mRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark GALGAS_stringset
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//  G A L G A S _ s t r i n g s e t
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset::GALGAS_stringset (void) :
AC_GALGAS_root (),
mSharedRoot (nullptr) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset::~GALGAS_stringset (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::drop (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset::GALGAS_stringset (const GALGAS_stringset & inSource) :
AC_GALGAS_root (),
mSharedRoot (nullptr) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset & GALGAS_stringset::operator = (const GALGAS_stringset & inSource) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void GALGAS_stringset::checkStringset (LOCATION_ARGS) const {
    if (nullptr != mSharedRoot) {
      mSharedRoot->checkStringset (THERE) ;
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<@stringset:" ;
  if (nullptr == mSharedRoot) {
    ioString << "not built" ;
  }else{
    mSharedRoot->description (ioString) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::insulate (LOCATION_ARGS) {
  if ((nullptr != mSharedRoot) && !mSharedRoot->isUniquelyReferenced ()) {
    cSharedStringsetRoot * p = nullptr ;
    macroMyNew (p, cSharedStringsetRoot (THERE)) ;
    p->copyFrom (mSharedRoot) ;
    macroAssignSharedObject (mSharedRoot, p) ;
    macroDetachSharedObject (p) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::addAssign_operation (const GALGAS_string & inKey
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && (inKey.isValid ())) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
    insulate (THERE) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
    mSharedRoot->addKey (inKey.stringValue ()) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::setter_removeKey (GALGAS_string inKey
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (THERE) ;
    #endif
    insulate (THERE) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
    if (nullptr != mSharedRoot) {
      mSharedRoot->removeKey (inKey.stringValue ()) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (THERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringset operations
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//    I N T E R S E C T I O N
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::operator_and (const GALGAS_stringset & inOperand2
                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (isValid () && inOperand2.isValid ()) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
      inOperand2.checkStringset (HERE) ;
    #endif
    result = constructor_emptySet (THERE) ;
    if (nullptr != mSharedRoot) {
      const uint32_t leftCount = mSharedRoot->count () ;
      TC_UniqueArray <C_String> leftList ((int32_t) leftCount COMMA_THERE) ;
      mSharedRoot->buildOrderedKeyList (leftList) ;
      const uint32_t rightCount = (nullptr == inOperand2.mSharedRoot) ? 0 : inOperand2.mSharedRoot->count () ;
      TC_UniqueArray <C_String> rightList ((int32_t) rightCount COMMA_THERE) ;
      if (nullptr != inOperand2.mSharedRoot) {
        inOperand2.mSharedRoot->buildOrderedKeyList (rightList) ;
      }
      uint32_t leftIndex = 0 ;
      uint32_t rightIndex = 0 ;
      while ((leftIndex < leftCount) && (rightIndex < rightCount)) {
        const int32_t cmp = leftList ((int32_t) leftIndex COMMA_THERE).compare (rightList ((int32_t) rightIndex COMMA_THERE)) ;
        if (cmp < 0) {
          leftIndex ++ ;
        }else if (cmp > 0) {
          rightIndex ++ ;
        }else{
          result.addAssign_operation (GALGAS_string (leftList ((int32_t) leftIndex COMMA_THERE)) COMMA_HERE) ;
          leftIndex ++ ;
          rightIndex ++ ;
        }
      }
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    U N I O N
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::operator_or (const GALGAS_stringset & inOperand2
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (isValid () && inOperand2.isValid ()) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
      inOperand2.checkStringset (HERE) ;
    #endif
    result = *this ;
    const uint32_t rightCount = (nullptr == inOperand2.mSharedRoot) ? 0 : inOperand2.mSharedRoot->count () ;
    TC_UniqueArray <C_String> rightList ((int32_t) rightCount COMMA_THERE) ;
    if (nullptr != inOperand2.mSharedRoot) {
      inOperand2.mSharedRoot->buildOrderedKeyList (rightList) ;
    }
    for (uint32_t i=0 ; i<rightCount ; i++) {
      result.addAssign_operation (GALGAS_string (rightList ((int32_t) i COMMA_THERE)) COMMA_HERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::plusAssign_operation (const GALGAS_stringset inOperand2,
                                             C_Compiler *
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand2.isValid ()) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
      inOperand2.checkStringset (HERE) ;
    #endif
    const uint32_t rightCount = (nullptr == inOperand2.mSharedRoot) ? 0 : inOperand2.mSharedRoot->count () ;
    TC_UniqueArray <C_String> rightList ((int32_t) rightCount COMMA_THERE) ;
    if (nullptr != inOperand2.mSharedRoot) {
      inOperand2.mSharedRoot->buildOrderedKeyList (rightList) ;
    }
    for (uint32_t i=0 ; i<rightCount ; i++) {
      addAssign_operation (GALGAS_string (rightList ((int32_t) i COMMA_THERE)) COMMA_HERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
    #endif
  }else{
    drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//    D I F F E R E N C E
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::substract_operation (const GALGAS_stringset & inOperand2,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (isValid () && inOperand2.isValid ()) {
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkStringset (HERE) ;
      inOperand2.checkStringset (HERE) ;
    #endif
    result = constructor_emptySet (THERE) ;
    const int32_t leftCount = (int32_t) mSharedRoot->count () ;
    TC_UniqueArray <C_String> leftList (leftCount COMMA_THERE) ;
    mSharedRoot->buildOrderedKeyList (leftList) ;
    for (int32_t i=0 ; i<leftCount ; i++) {
      if (! inOperand2.mSharedRoot->hasKey (leftList (i COMMA_HERE))) {
        result.addAssign_operation (GALGAS_string (leftList (i COMMA_HERE)) COMMA_HERE) ;
      }
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Readers
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_stringset::getter_stringList (LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    mSharedRoot->addToStringList (result) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_stringset::getter_hasKey (const GALGAS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const C_String key = inKey.stringValue () ;
    result = GALGAS_bool (mSharedRoot->hasKey (key)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_stringset::getter_count (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    result = GALGAS_uint (mSharedRoot->count ()) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_stringset::getter_anyString (C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    if (mSharedRoot->count () == 0) {
      C_String message = "@stringset anyString: receiver is empty" ;
      inCompiler->onTheFlySemanticError(message COMMA_THERE) ;
     }else{
      result = GALGAS_string (mSharedRoot->rootKey ()) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringset cEnumerator
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//                 'GALGAS_stringset::cEnumerator' class
//
//----------------------------------------------------------------------------------------------------------------------

static void enterAscendingEnumeration (const cStringsetNode * inNode,
                                       capCollectionElementArray & ioResult) {
  if (inNode != nullptr) {
    enterAscendingEnumeration (inNode->mInfPtr, ioResult) ;
    cCollectionElement_stringset * p = nullptr ;
    GALGAS_string str (GALGAS_string (inNode->mKey)) ;
    macroMyNew (p, cCollectionElement_stringset (str COMMA_HERE)) ;
    capCollectionElement object ;
    object.setPointer (p) ;
    macroDetachSharedObject (p) ;
    ioResult.appendObject (object) ;
    enterAscendingEnumeration (inNode->mSupPtr, ioResult) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringset::populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const {
  if (isValid ()) {
    inEnumerationArray.setCapacity (mSharedRoot->count ()) ;
    enterAscendingEnumeration (mSharedRoot->root (), inEnumerationArray) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      MF_Assert (mSharedRoot->count () == inEnumerationArray.count (),
                 "mSharedRoot->count () %lld != inEnumerationArray.count () %lld",
                 mSharedRoot->count (), inEnumerationArray.count ()) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_stringset::cEnumerator_stringset (const GALGAS_stringset & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_stringset::current_key (LOCATION_ARGS) const {
  const cCollectionElement_stringset * p = (const cCollectionElement_stringset *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringset) ;
  return p->attribute_key () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_stringset::current (LOCATION_ARGS) const {
  const cCollectionElement_stringset * p = (const cCollectionElement_stringset *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringset) ;
  return p->attribute_key () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    C O M P A R I S O N
//
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_stringset::objectCompare (const GALGAS_stringset & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t count1 = (int32_t) mSharedRoot->count () ;
    const cStringsetNode * root1 = mSharedRoot->root () ;
    const int32_t count2 = (int32_t) inOperand.mSharedRoot->count () ;
    const cStringsetNode * root2 = inOperand.mSharedRoot->root () ;
    int32_t r = 0 ;
    if (root1 != root2) {
      r = count1 - count2 ;
      if (r == 0) {
        TC_UniqueArray <C_String> leftList (count1 COMMA_HERE) ;
        mSharedRoot->buildOrderedKeyList (leftList) ;
        TC_UniqueArray <C_String> rightList (count2 COMMA_HERE) ;
        inOperand.mSharedRoot->buildOrderedKeyList (rightList) ;
        for (int32_t i=0 ; (i<count1) && (r == 0) ; i++) {
          r = leftList (i COMMA_HERE).compare (rightList (i COMMA_HERE)) ;
        }
      }
    }
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::constructor_emptySet (LOCATION_ARGS) {
  GALGAS_stringset result ;
  macroMyNew (result.mSharedRoot, cSharedStringsetRoot (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::constructor_setWithString (const GALGAS_string & inString
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
  if (inString.isValid ()) {
    result = constructor_emptySet (THERE) ;
    result.addAssign_operation (inString COMMA_HERE) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::constructor_setWithStringList (const GALGAS_stringlist & inStringList
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
  if (inStringList.isValid ()) {
    result = constructor_emptySet (THERE) ;
    cEnumerator_stringlist enumerator (inStringList, kENUMERATION_UP) ;
    while (enumerator.hasCurrentObject ()) {
      result.addAssign_operation (enumerator.current_mValue (THERE) COMMA_THERE) ;
      enumerator.gotoNextObject () ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_stringset::constructor_setWithLStringList (const GALGAS_lstringlist & inStringList
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
  if (inStringList.isValid ()) {
    result = constructor_emptySet (THERE) ;
    cEnumerator_lstringlist enumerator (inStringList, kENUMERATION_UP) ;
    while (enumerator.hasCurrentObject ()) {
      result.addAssign_operation (enumerator.current_mValue (THERE).mProperty_string COMMA_THERE) ;
      enumerator.gotoNextObject () ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      result.checkStringset (HERE) ;
    #endif
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

