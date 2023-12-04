//----------------------------------------------------------------------------------------------------------------------
//
//  C_String : an implementation of fully dynamic character string
//
//  This file is part of libpm library
//
//  Copyright (C) 1997, ..., 2020 Pierre Molinaro.
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

#include "utilities/MF_MemoryControl.h"
#include "utilities/md5.h"
#include "utilities/C_SharedObject.h"
#include "strings/unicode_string_routines.h"
#include "strings/unicode_character_cpp.h"
#include "generic-arraies/TC_UniqueArray2.h"

//----------------------------------------------------------------------------------------------------------------------

#include <math.h>
#include <string.h>
#include <ctype.h>

//----------------------------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//----------------------------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 1
  #include <sys/stat.h>
#endif

#if COMPILE_FOR_WINDOWS == 0
  #include <unistd.h>
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark cEmbeddedString
#endif

//----------------------------------------------------------------------------------------------------------------------

static const utf32 kEmptyUTF32String [1] = {TO_UNICODE (0)} ;

//----------------------------------------------------------------------------------------------------------------------

class cEmbeddedString : public C_SharedObject {
  public: uint32_t mCapacity ; // Maximun allowed length of the following C string
  public: uint32_t mLength ; // Current length of the following C string
  public: char * mEncodedCString ;
  public: utf32 * mString ; // Zero terminated string

  public: cEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) ;

  public: cEmbeddedString (const cEmbeddedString * inEmbeddedString,
                            const uint32_t inCapacity
                            COMMA_LOCATION_ARGS) ;

  public: virtual ~cEmbeddedString (void) ;

//--- No copy
  private: cEmbeddedString (const cEmbeddedString &) ;
  private: cEmbeddedString & operator = (const cEmbeddedString &) ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkEmbeddedString (LOCATION_ARGS) const ;
  #endif

  public: void reallocEmbeddedString (const uint32_t inCapacity) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

static uint32_t stringGoodSize (const uint32_t inCurrentCapacity,
                                const uint32_t inCapacity) {
  uint32_t newCapacity = (inCurrentCapacity < 128) ? 128 : inCurrentCapacity ;
  while (newCapacity < inCapacity) {
    newCapacity <<= 1 ;
  }
  return newCapacity ;
}

//----------------------------------------------------------------------------------------------------------------------

cEmbeddedString::cEmbeddedString (const uint32_t inCapacity COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mCapacity (0),
mLength (0),
mEncodedCString (nullptr),
mString (nullptr) {
  const uint32_t newCapacity = stringGoodSize (0, inCapacity) ;
  macroMyNewPODArray (mString, utf32, newCapacity) ;
  mCapacity = newCapacity ;
  mString [0] = TO_UNICODE ('\0') ;
}

//----------------------------------------------------------------------------------------------------------------------

cEmbeddedString::cEmbeddedString (const cEmbeddedString * inEmbeddedString,
                                  const uint32_t inCapacity
                                  COMMA_LOCATION_ARGS) :
C_SharedObject (THERE),
mCapacity (0),
mLength (0),
mEncodedCString (nullptr),
mString (nullptr) {
  macroValidPointer (inEmbeddedString) ;
  macroValidPointer (inEmbeddedString->mString) ;
  MF_Assert (inCapacity > inEmbeddedString->mLength, "inCapacity (%lld) < inEmbeddedString->mLength (%lld)", inCapacity, inEmbeddedString->mLength) ;
  const uint32_t newCapacity = stringGoodSize (inEmbeddedString->mCapacity, inCapacity) ;
  macroMyNewPODArray (mString, utf32, newCapacity) ;
  mCapacity = newCapacity ;
  MF_Assert (inEmbeddedString->mLength < mCapacity, "inEmbeddedString->mLength (%lld) >= mCapacity (%lld)", inEmbeddedString->mLength, mCapacity) ;
  for (uint32_t i=0 ; i<=inEmbeddedString->mLength ; i++) {
    mString [i] = inEmbeddedString->mString [i] ;
  }
  mLength = inEmbeddedString->mLength ;
}

//----------------------------------------------------------------------------------------------------------------------

cEmbeddedString::~cEmbeddedString (void) {
  macroMyDeletePODArray (mEncodedCString) ;
  macroMyDeletePODArray (mString) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cEmbeddedString::checkEmbeddedString (LOCATION_ARGS) const {
    if (mCapacity == 0) {
      MF_AssertThere (UNICODE_VALUE (mString [0]) == '\0', "mString [0] (%lld) != '\\0'",
                      (int32_t) UNICODE_VALUE (mString [0]), '\0') ;
      MF_AssertThere (mLength == 0, "mLength (%ld) != 0", mLength, 0) ;
    }else{
      MF_AssertThere (mLength <= mCapacity, "mLength (%ld) > mCapacity (%ld)", mLength, mCapacity) ;
      MF_AssertThere (UNICODE_VALUE (mString [mLength]) == '\0',
                      "mString [mLength] == %ld != '\\0'",
                      (int32_t) UNICODE_VALUE (mString [mLength]), '\0') ;
      if (mEncodedCString != nullptr) {
        macroValidPointer (mEncodedCString) ;
        for (uint32_t i=0 ; i<=mLength ; i++) {
          MF_AssertThere (UNICODE_VALUE (mString [i]) == (uint32_t) mEncodedCString [i],
                          "mString [i] (%ld) != mEncodedCString [i] (%ld)",
                          UNICODE_VALUE (mString [i]), (uint32_t) mEncodedCString [i]) ;
        }
      }
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

void cEmbeddedString::reallocEmbeddedString (const uint32_t inCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkEmbeddedString (HERE) ;
  #endif
  if (inCapacity > mCapacity) {
    const uint32_t newCapacity = stringGoodSize (mCapacity, inCapacity) ;
    macroMyReallocPODArray (mString, utf32, newCapacity) ;
    mCapacity = newCapacity ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkEmbeddedString (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Constructors & destructor
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//   C O N S T R U C T O R S
//
//----------------------------------------------------------------------------------------------------------------------

C_String::C_String (void) :
mEmbeddedString (nullptr) {
}

//----------------------------------------------------------------------------------------------------------------------

C_String::C_String (const char * inCstring) :
mEmbeddedString (nullptr) {
  if (inCstring != nullptr) {
    genericCharArrayOutput (inCstring, (int32_t) (strlen (inCstring) & UINT32_MAX)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

C_String::C_String (const utf32 * inUTF32String) :
mEmbeddedString (nullptr) {
  if (inUTF32String != nullptr) {
    genericUnicodeArrayOutput (inUTF32String, utf32_strlen (inUTF32String)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

C_String::C_String (const C_String & inSource) : // Copy constructor
AC_OutputStream (inSource),
mEmbeddedString (nullptr) {
  macroAssignSharedObject (mEmbeddedString, inSource.mEmbeddedString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::newWithStdIn (void) {
  const size_t BUFFER_SIZE = 1000 ;
  char buffer [BUFFER_SIZE] ;
  const char * s = fgets (buffer, BUFFER_SIZE, stdin) ;
  return (s == nullptr) ? "" : s ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   D E S T R U C T O R
//
//----------------------------------------------------------------------------------------------------------------------

C_String::~C_String (void) {
  macroDetachSharedObject (mEmbeddedString) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::spaces (const int32_t inSpaceCount) {
  C_String result ;
  for (int32_t i=0 ; i<inSpaceCount ; i++) {
    result << " " ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_String::capacity (void) const {
  return (mEmbeddedString == nullptr) ? 0 : mEmbeddedString->mCapacity ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   A S S I G N M E N T    O P E R A T O R S
//
//----------------------------------------------------------------------------------------------------------------------

C_String & C_String::operator = (const C_String & inSource) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
    inSource.checkString (HERE) ;
  #endif
  macroAssignSharedObject (mEmbeddedString, inSource.mEmbeddedString) ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::releaseString (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroDetachSharedObject (mEmbeddedString) ;
  mEmbeddedString = nullptr ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_String::hash (void) const {
  uint32_t h = 0 ;
  if (mEmbeddedString != nullptr) {
    for (uint32_t i=0 ; i<mEmbeddedString->mLength ; i++) {
      h <<= 3 ;
      h ^= UNICODE_VALUE (mEmbeddedString->mString [i]) ;
    }
  }
  return h ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void C_String::checkString (LOCATION_ARGS) const {
    if (mEmbeddedString != nullptr) {
      macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
      mEmbeddedString->checkEmbeddedString (THERE) ;
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//   G E T    M E T H O D S
//
//----------------------------------------------------------------------------------------------------------------------

utf32 C_String::operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (THERE) ;
  #endif
  macroValidSharedObjectThere (mEmbeddedString, cEmbeddedString) ;
  MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  MF_AssertThere ((uint32_t) inIndex < mEmbeddedString->mLength,
                 "inIndex (%ld) >= string length (%ld)",
                 inIndex, mEmbeddedString->mLength) ;
  return mEmbeddedString->mString [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_String::readCharOrNul (const int32_t inIndex COMMA_LOCATION_ARGS) const {
  MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  return ((mEmbeddedString == nullptr) || ((uint32_t) inIndex >= mEmbeddedString->mLength))
    ? TO_UNICODE ('\0')
    : mEmbeddedString->mString [inIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   lastCharacter
//
//----------------------------------------------------------------------------------------------------------------------

utf32 C_String::lastCharacter (LOCATION_ARGS) const {
  const uint32_t stringLength = mEmbeddedString->mLength ;
  MF_AssertThere (stringLength > 0, "length == 0", 0, 0) ;
  return (stringLength == 0) ? TO_UNICODE ('\0') : mEmbeddedString->mString [stringLength - 1] ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::containsCharacter (const utf32 inCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (uint32_t i=0 ; (i<mEmbeddedString->mLength) && ! found ; i++) {
      found = UNICODE_VALUE (mEmbeddedString->mString [i]) == UNICODE_VALUE (inCharacter) ;
    }
  }
  return found ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::containsCharacterInRange (const utf32 inFirstCharacter,
                                         const utf32 inLastCharacter) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  bool found = false ;
  if (nullptr != mEmbeddedString) {
    for (uint32_t i=0 ; (i<mEmbeddedString->mLength) && ! found ; i++) {
      found =
        (UNICODE_VALUE (mEmbeddedString->mString [i]) >= UNICODE_VALUE (inFirstCharacter))
      &&
        (UNICODE_VALUE (mEmbeddedString->mString [i]) <= UNICODE_VALUE (inLastCharacter))
      ;
    }
  }
  return found ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::length (void) const {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  return (mEmbeddedString == nullptr) ? 0 : (int32_t) mEmbeddedString->mLength ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * C_String::cString (UNUSED_LOCATION_ARGS) const {
  const char * result = "" ;
  if (nullptr != mEmbeddedString) {
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    if (nullptr == mEmbeddedString->mEncodedCString) {
      uint32_t allocatedSize = mEmbeddedString->mLength + 1 ;
      macroMyReallocPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
      uint32_t idx = 0 ;
      for (uint32_t i=0 ; i<mEmbeddedString->mLength ; i++) {
        char buffer [5] ;
        const int32_t n = UTF8StringFromUTF32Character (mEmbeddedString->mString [i], buffer) ;
        for (int32_t j=0 ; j<n ; j++) {
          if (allocatedSize == idx) {
            allocatedSize *= 2 ;
            macroMyReallocPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
          }
          mEmbeddedString->mEncodedCString [idx] = buffer [j] ;
          idx ++ ;
        }
      }
    //---
      if (allocatedSize == idx) {
        allocatedSize *= 2 ;
        macroMyReallocPODArray (mEmbeddedString->mEncodedCString, char, allocatedSize) ;
      }
      mEmbeddedString->mEncodedCString [idx] = '\0' ;
    }
    result = mEmbeddedString->mEncodedCString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

const utf32 * C_String::utf32String (UNUSED_LOCATION_ARGS) const {
  const utf32 * result = kEmptyUTF32String ;
  if (nullptr != mEmbeddedString) {
    result = mEmbeddedString->mString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Methods that change string
#endif

//----------------------------------------------------------------------------------------------------------------------

void C_String::insulateEmbeddedString (const uint32_t inNewCapacity) const {
  if (mEmbeddedString == nullptr) {
    macroMyNew (mEmbeddedString, cEmbeddedString (inNewCapacity COMMA_HERE)) ;
  }else{
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
      mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
    }else{
      cEmbeddedString * p = nullptr ;
      macroMyNew (p, cEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
      macroAssignSharedObject (mEmbeddedString, p) ;
      macroDetachSharedObject (p) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  MF_Assert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
  macroUniqueSharedObject (mEmbeddedString) ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::setLengthToZero (void) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    if (mEmbeddedString->isUniquelyReferenced ()) {
      macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
      mEmbeddedString->mLength = 0 ;
      mEmbeddedString->mString [0] = TO_UNICODE ('\0') ;
    }else{
      macroDetachSharedObject (mEmbeddedString) ;
      mEmbeddedString = nullptr ;
    }
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::insulate (void) const {
  insulateEmbeddedString ((uint32_t) length ()) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S E T   F R O M    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::setFromString (const C_String & inString) {
  if (this != & inString) {
    macroAssignSharedObject (mEmbeddedString, inString.mEmbeddedString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S E T    C A P A C I T Y
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::setCapacity (const uint32_t inNewCapacity) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (mEmbeddedString != nullptr) {
    macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
    if ((mEmbeddedString->mLength < inNewCapacity) && (mEmbeddedString->mCapacity < inNewCapacity)) {
      if (mEmbeddedString->isUniquelyReferenced ()) {
        macroMyDeletePODArray (mEmbeddedString->mEncodedCString) ;
        mEmbeddedString->reallocEmbeddedString (inNewCapacity) ;
      }else{
        cEmbeddedString * p = nullptr ;
        macroMyNew (p, cEmbeddedString (mEmbeddedString, inNewCapacity COMMA_HERE)) ;
        macroAssignSharedObject (mEmbeddedString, p)  ;
        macroDetachSharedObject (p) ;
      }
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
    }
  }else if (inNewCapacity > 0) {
    macroMyNew (mEmbeddedString, cEmbeddedString (inNewCapacity COMMA_HERE)) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
  }
  MF_Assert (capacity () >= inNewCapacity, "capacity (%lld) < inNewCapacity (%lld)", capacity (), inNewCapacity) ;
  if (mEmbeddedString != nullptr) {
    macroValidSharedObject (mEmbeddedString, cEmbeddedString) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::performActualUnicodeArrayOutput (const utf32 * inUTF32CharArray,
                                                const int32_t inArrayCount) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (inArrayCount > 0) {
    const int32_t kNewLength = length () + inArrayCount ;
    insulateEmbeddedString ((uint32_t) (kNewLength + 1)) ;
    MF_Assert (mEmbeddedString->isUniquelyReferenced (), "mEmbeddedString->isUniquelyReferenced () is false", 0, 0) ;
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      mEmbeddedString->mString [mEmbeddedString->mLength + (uint32_t) i] = inUTF32CharArray [i] ;
    }
    mEmbeddedString->mLength = (uint32_t) kNewLength ;
    mEmbeddedString->mString [kNewLength] = TO_UNICODE ('\0') ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    MF_Assert (capacity () > (uint32_t) kNewLength, "capacity (%lld) <= kNewLength (%lld)", capacity (), kNewLength) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::performActualCharArrayOutput (const char * inCharArray,
                                             const int32_t inArrayCount) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  if (inArrayCount != 0) {
    insulateEmbeddedString ((uint32_t) (length () + inArrayCount + 1)) ;
    int32_t newLength = (int32_t) mEmbeddedString->mLength ;
    int32_t idx = 0 ;
    bool ok = true ;
    while ((idx < inArrayCount) && ok) {
      if ((inCharArray [idx] & 0x80) == 0) { // ASCII
        mEmbeddedString->mString [newLength] = TO_UNICODE ((uint32_t) inCharArray [idx]) ;
        idx ++ ;
        newLength ++ ;
      }else{
        const utf32 unicodeChar = utf32CharacterForPointer ((const uint8_t *) inCharArray, idx, inArrayCount, ok) ;
        mEmbeddedString->mString [newLength] = unicodeChar ;
        newLength ++ ;
      }
      mEmbeddedString->mLength = (uint32_t) newLength ;
      mEmbeddedString->mString [newLength] = TO_UNICODE ('\0') ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    MF_Assert (capacity () > (uint32_t) newLength, "capacity (%lld) <= kNewLength (%lld)", capacity (), newLength) ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//   setCharacterAtIndex
//
//----------------------------------------------------------------------------------------------------------------------


void C_String::setUnicodeCharacterAtIndex (const utf32 inCharacter,
                                           const int32_t inIndex
                                           COMMA_LOCATION_ARGS) {
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroValidPointerThere (mEmbeddedString) ;
  MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  if (nullptr != mEmbeddedString) {
    MF_AssertThere ((uint32_t) inIndex < mEmbeddedString->mLength,
                    "inIndex (%ld) >= string length (%ld)",
                    inIndex, mEmbeddedString->mLength) ;
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    mEmbeddedString->mString [inIndex] = inCharacter ;
    macroUniqueSharedObject (mEmbeddedString) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S U P P R E S S    C H A R A C T E R S
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::suppress (const int32_t inLocation,
                         const int32_t inLength
                         COMMA_LOCATION_ARGS) {
  if (inLength > 0) {
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      checkString (HERE) ;
    #endif
    macroValidPointerThere (mEmbeddedString) ;
    MF_AssertThere (inLocation >= 0, "inLocation (%ld) < 0", inLocation, 0) ;
    MF_AssertThere ((uint32_t) inLocation <= mEmbeddedString->mLength,
                   "inLocation (%ld) > mLength (%ld)",
                    inLocation, mEmbeddedString->mLength) ;
    MF_AssertThere ((uint32_t) inLength <= mEmbeddedString->mLength,
                   "inLength (%ld) > string length (%ld)",
                    inLength, mEmbeddedString->mLength) ;
    const int32_t bytesToMove = 1 + ((int32_t) mEmbeddedString->mLength) - inLength - inLocation ;
    if ((inLocation >= 0) && (bytesToMove > 0)) {
      for (int32_t i=0 ; i<bytesToMove ; i++) {
        mEmbeddedString->mString [inLocation + i] = mEmbeddedString->mString [inLocation + i + inLength] ;
      }
      MF_Assert (mEmbeddedString->mLength >= (uint32_t) inLength,
                 "mLength (%lld) < inLength (%lld)",
                 mEmbeddedString->mLength, inLength) ;
      mEmbeddedString->mLength -= (uint32_t) inLength ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        checkString (HERE) ;
      #endif
      macroUniqueSharedObject (mEmbeddedString) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//   I N S E R T    C H A R A C T E R
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::insertCharacterAtIndex (const utf32 inChar,
                                       const int32_t inIndex
                                       COMMA_LOCATION_ARGS) {
  const uint32_t kNewLength = ((uint32_t) length ()) + 1 ;
  insulateEmbeddedString (kNewLength) ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroValidPointerThere (mEmbeddedString) ;
  MF_AssertThere (inIndex >= 0, "inIndex (%ld) < 0", inIndex, 0) ;
  MF_AssertThere ((uint32_t) inIndex <= mEmbeddedString->mLength,
                 "inIndex (%ld) > mLength (%ld)",
                  inIndex, mEmbeddedString->mLength) ;
  const int32_t bytesToMove = 1 + ((int32_t) mEmbeddedString->mLength) - inIndex ;
  for (int32_t i=bytesToMove ; i>0 ; i--) {
    mEmbeddedString->mString [inIndex + i] = mEmbeddedString->mString [inIndex + i - 1] ;
  }
  mEmbeddedString->mString [inIndex] = inChar ;
  mEmbeddedString->mLength += 1 ;
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkString (HERE) ;
  #endif
  macroUniqueSharedObject (mEmbeddedString) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark =============
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//   G E T    L I N E S    A R R A Y
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::linesArray (TC_UniqueArray <C_String> & outStringArray) const {
  const int32_t currentStringLength = length () ;
  if (currentStringLength > 0) {
    int32_t index = outStringArray.count () ;
    outStringArray.appendObject (C_String ()) ;
    typedef enum {kAppendToCurrentLine, kGotCarriageReturn, kGotLineFeed} enumState ;
    enumState state = kAppendToCurrentLine ;
    for (int32_t i=0 ; i<currentStringLength ; i++) {
      const utf32 c = mEmbeddedString->mString [i] ;
      switch (state) {
      case kAppendToCurrentLine :
        switch (UNICODE_VALUE (c)) {
        case 0x000B : // VT: Vertical Tab
        case 0x000C : // FF: Form Feed
        case 0x0085 : // NEL: Next Line
        case 0x2028 : // LS: Line Separator
        case 0x2029 : // PS: Paragraph Separator
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          break ;
        case '\n' : // LF
          state = kGotLineFeed ;
          break ;
        case '\r' : // CR
          state = kGotCarriageReturn ;
          break ;
        default: // Other character
          outStringArray (index COMMA_HERE).appendUnicodeCharacter (c COMMA_HERE) ;
        }
        break ;
      case kGotCarriageReturn :
        switch (UNICODE_VALUE (c)) {
        case '\n' : // LF
          state = kGotLineFeed ;
          break ;
        case '\r' : // CR
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          break ;
        default: // Other character
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          outStringArray (index COMMA_HERE).appendUnicodeCharacter (c COMMA_HERE) ;
          state = kAppendToCurrentLine ;
        }
        break ;
      case kGotLineFeed :
        switch (UNICODE_VALUE (c)) {
        case '\n' : // LF
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          break ;
        case '\r' : // CR
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          state = kGotCarriageReturn ;
          break ;
        default: // Other character
          outStringArray.appendObject (C_String ()) ;
          index ++ ;
          outStringArray (index COMMA_HERE).appendUnicodeCharacter (c COMMA_HERE) ;
          state = kAppendToCurrentLine ;
        }
        break ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

LineColumnContents C_String::lineAndColumnFromIndex (const int32_t inIndex) const {
  LineColumnContents result ;
  const int32_t receiverLength = length () ;
  if (inIndex < receiverLength) {
    const utf32 * ptr = utf32String (HERE) ;
    int32_t lineNumber = 0 ;
    int32_t startOfLineIndex = 0 ;
    int32_t idx = 0 ;
    bool parseLine = true ;
    while ((idx < receiverLength) && parseLine) {
      while ((idx < receiverLength) && parseLine) {
        parseLine = UNICODE_VALUE (ptr [idx]) != '\n' ;
        idx += parseLine ;
      }
      if (idx < inIndex) {
        parseLine = true ;
        idx ++ ; // Pass '\n'
        startOfLineIndex = idx ;
        lineNumber ++ ;
      }
    }
  //---
    const int32_t columnNumber = inIndex - startOfLineIndex ;
    const C_String lineContents = subString (startOfLineIndex, idx - startOfLineIndex) ;
    result = LineColumnContents (lineNumber, columnNumber, lineContents) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::indexFromLineAndColumn (const int32_t inLineNumber,
                                          const int32_t inColumnNumber) const {
  int32_t idx = 0 ;
  int32_t line = 1 ;
  while (line < inLineNumber) {
    while ((idx < length ()) && (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) != '\n')) {
      idx += 1 ;
    }
    line += 1 ;
  }
  return idx + inColumnNumber ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   C O N T A I N S   S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

bool C_String::containsString (const C_String & inSearchedString) const {
  const utf32 * source = utf32String (HERE) ;
  bool contains = source != nullptr ;
  if (contains) {
    const utf32 * searchedString = inSearchedString.utf32String (HERE) ;
    contains = searchedString == nullptr ;
    if (! contains) {
      contains = ::utf32_strstr (source, searchedString) != nullptr ;
    }
  }
  return contains ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   componentsSeparatedByString
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::componentsSeparatedByString (const C_String & inSeparatorString,
                                            TC_UniqueArray <C_String> & outResult) const {
  outResult.removeAllKeepingCapacity () ;
  const utf32 * sourcePtr = utf32String (HERE) ;
  if (sourcePtr == nullptr) {
    outResult.appendObject (C_String ()) ;
  }else{
    const int32_t splitStringLength = inSeparatorString.length () ;
    const utf32 * separator = inSeparatorString.utf32String (HERE) ;
    if (splitStringLength > 0) {
      const utf32 * p = ::utf32_strstr (sourcePtr, separator) ;
      while (p != nullptr) {
        C_String s ;
        s.genericUnicodeArrayOutput (sourcePtr, (int32_t) ((p - sourcePtr) & INT32_MAX)) ;
        outResult.appendObject (s) ;
        sourcePtr = p + splitStringLength ;
        p = ::utf32_strstr (sourcePtr, separator) ;
      }
    }
    outResult.appendObject (C_String (sourcePtr)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//   componentsJoinedByString
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::componentsJoinedByString (const TC_UniqueArray <C_String> & inComponentArray,
                                             const C_String & inSeparator) {
  C_String result ;
  if (inComponentArray.count () > 0) {
    result << (inComponentArray (0 COMMA_HERE)) ;
    for (int32_t i=1 ; i<inComponentArray.count () ; i++) {
      result << (inSeparator) ;
      result << (inComponentArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   stringByDeletingTailFromString
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByDeletingTailFromString (const C_String & inSearchedString) const {
  C_String result = * this ;
  const int32_t searchedStringLength = inSearchedString.length () ;
  if (searchedStringLength > 0) {
    const utf32 * sourcePtr = utf32String (HERE) ;
    const utf32 * p = ::utf32_strstr (sourcePtr,
                                      inSearchedString.utf32String (HERE)) ;
    if (p != nullptr) {
      result.setLengthToZero () ;
      result.genericUnicodeArrayOutput (sourcePtr, (int32_t) ((p - sourcePtr) & INT32_MAX)) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   endsWithString
//
//----------------------------------------------------------------------------------------------------------------------

bool C_String::endsWithString (const C_String & inString) const {
  const int32_t offset = length () - inString.length () ;
  bool result = offset >= 0 ;
  for (int32_t i=0 ; (i<inString.length ()) && result ; i++) {
    result = this->operator () (i + offset COMMA_HERE) == inString (i COMMA_HERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S U B S T I T U T E    C H A R A C T E R    B Y    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

//--- Substitute 'inCharacter' by 'inString' ; if the character occurs twice, suppress one

C_String C_String::stringByReplacingCharacterByString (const utf32 inCharacter,
                                                       const C_String & inString) const {
  const int32_t stringLength = length () ;
  C_String resultingString ;
  bool previousCharIsSubstituteChar = false ;
  for (int32_t i=0 ; i<stringLength ; i++) {
    const utf32 c = ((*this).operator () (i COMMA_HERE)) ;
    if (previousCharIsSubstituteChar) {
      if (UNICODE_VALUE (c) == UNICODE_VALUE (inCharacter)) {
        resultingString.appendUnicodeCharacter (inCharacter COMMA_HERE) ;
      }else{
        resultingString << (inString) ;
        resultingString.appendUnicodeCharacter (c COMMA_HERE) ;
      }
      previousCharIsSubstituteChar = false ;
    }else if (UNICODE_VALUE (c) == UNICODE_VALUE (inCharacter)) {
      previousCharIsSubstituteChar = true ;
    }else{
      resultingString.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
  if (previousCharIsSubstituteChar) {
    resultingString << (inString) ;
  }
//--- Return
  return resultingString ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S U B S T I T U T E    S T R I N G    B Y    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByReplacingStringByString (const C_String inSearchedString,
                                                    const C_String inReplacementString,
                                                    uint32_t & outReplacementCount,
                                                    bool & outOk) const {
  C_String result ;
  outReplacementCount = 0 ;
  outOk = inSearchedString.length () != 0 ;
  if (outOk) {
    const utf32 * sourceString = utf32String (HERE) ;
    const int32_t sourceLength = length () ;
    const utf32 * searchedString = inSearchedString.utf32String (HERE) ;
    const int32_t searchedStringLength = inSearchedString.length () ;
    int32_t index = 0 ;
    while (index <= (sourceLength - searchedStringLength)) {
      const bool found = utf32_strncmp (& sourceString [index], searchedString, searchedStringLength) == 0 ;
      if (found) {
        result << (inReplacementString) ;
        index += searchedStringLength ;
        outReplacementCount ++ ;
      }else{
        result.appendUnicodeCharacter (sourceString [index] COMMA_HERE) ;
        index ++ ;
      }
    }
    result.appendUTF32String (& sourceString [index]) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByReplacingStringByString (const C_String inSearchedString,
                                                    const C_String inReplacementString) const {
  uint32_t unusedReplacementCount = 0 ;
  bool unusedOk = true ;
  return stringByReplacingStringByString (inSearchedString, inReplacementString, unusedReplacementCount, unusedOk) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   G E T    L A S T   O C C U R R E N C E   O F   A   C H A R
//
//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::lastOccurrenceIndexOfChar (const utf32 inChar) const {
  int32_t result = length () ;
  const utf32 * ptr = utf32String (HERE) ;
  bool notFound = true ;
  while ((result > 0) && notFound) {
    result -- ;
    notFound = UNICODE_VALUE (ptr [result]) != UNICODE_VALUE (inChar) ;
  }
  if (notFound) {
    result = -1 ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::subString (const int32_t inStartIndex,
                              const int32_t inLength) const {
  C_String s ;
  if (inLength > 0) {
    int32_t last = inStartIndex + inLength ;
    const int32_t receiver_length = length () ;
    if (last > receiver_length) {
      last = receiver_length ;
    }
    const utf32 * ptr = utf32String (HERE) ;
    for (int32_t i=inStartIndex ; i<last ; i++) {
      s.appendUnicodeCharacter (ptr [i] COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByCapitalizingFirstCharacter (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  if (receiver_length > 0) {
    s.appendUnicodeCharacter (unicodeToUpper (ptr [0]) COMMA_HERE) ;
    for (int32_t i=1 ; i<receiver_length ; i++) {
      s.appendUnicodeCharacter (ptr [i] COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::lowercaseString (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    s.appendUnicodeCharacter (unicodeToLower (ptr [i]) COMMA_HERE) ;
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByTrimmingSeparators (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
//--- Trim left
  int32_t idx = 0 ;
  while ((idx < receiver_length) && ((UNICODE_VALUE (ptr [idx]) == ' ') || (UNICODE_VALUE (ptr [idx]) == '\n'))) {
    idx ++ ;
  }
//--- Trim and replace
  bool isCurrentlyTrimming = false ;
  while (idx < receiver_length) {
    const utf32 c = ptr [idx] ;
    if ((UNICODE_VALUE (c) == ' ') || (UNICODE_VALUE (c) == '\n')) {
      isCurrentlyTrimming = true ;
    }else{
      if (isCurrentlyTrimming) {
        s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
        isCurrentlyTrimming = false ;
      }
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }
    idx ++ ;
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::uppercaseString (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    s.appendUnicodeCharacter (unicodeToUpper (ptr [i]) COMMA_HERE) ;
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::reversedString (void) const {
  C_String s = *this ;
  s.reverseStringInPlace () ;
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::reverseStringInPlace (void) {
  if (nullptr != mEmbeddedString) {
    const int32_t receiver_length = length () ;
    macroUniqueSharedObject (mEmbeddedString) ;
    insulateEmbeddedString (mEmbeddedString->mCapacity) ;
    for (int32_t i=0 ; i<(receiver_length/2) ; i++) {
      const utf32 temp = mEmbeddedString->mString [i] ;
      mEmbeddedString->mString [i] = mEmbeddedString->mString [receiver_length - i - 1] ;
      mEmbeddedString->mString [receiver_length - i - 1] = temp ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::isUnsignedInteger (void) const {
  bool ok = length () > 0 ;
  for (int32_t i=0 ; (i < length ()) && ok ; i++) {
    const uint32_t c = UNICODE_VALUE (this->operator () (i COMMA_HERE)) ;
    ok = (c >= '0') && (c <= '9') ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_String::unsignedIntegerValue (void) const {
  uint32_t result = 0 ;
  bool ok = true ;
  for (int32_t i=0 ; (i < length ()) && ok ; i++) {
    const uint32_t c = UNICODE_VALUE (this->operator () (i COMMA_HERE)) ;
    ok = (c >= '0') && (c <= '9') ;
    if (ok) {
      result *= 10 ;
      result += c - '0' ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_String::currentColumn (void) const {
  uint32_t result = 0 ;
  bool found = false ;
  const int32_t receiver_length = length () ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=receiver_length-1 ; (i>=0) && ! found ; i--) {
    found = UNICODE_VALUE (ptr [i]) == '\n' ;
    if (! found) {
      result ++ ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::appendSpacesUntilColumn (const uint32_t inColumn) {
  for (uint32_t i=currentColumn () ; i<inColumn ; i++) {
    appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringWithRepeatedCharacter (const utf32 inRepeatedCharacter,
                                                const uint32_t inCount) {
  C_String result ;
  for (uint32_t i=0 ; i<inCount ; i++) {
    result.appendUnicodeCharacter (inRepeatedCharacter COMMA_HERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::convertToUInt32 (uint32_t & outResult,
                                bool & outOk) const {
  outResult = 0 ;
  outOk = length () > 0 ;
  int32_t idx = 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint32_t r = outResult ;
    outResult = outResult * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') && (r <= outResult) ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::convertToUInt64 (uint64_t & outResult,
                                bool & outOk) const {
  outResult = 0 ;
  outOk = length () > 0 ;
  int32_t idx = 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint64_t r = outResult ;
    outResult = outResult * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = (UNICODE_VALUE (c) >= '0') && (UNICODE_VALUE (c) <= '9') && (r <= outResult) ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::convertToSInt32 (int32_t & outResult,
                                bool & outOk) const {
  bool isPositive = true ;
  int32_t idx = 0 ;
  if (length () > 0) {
    const utf32 c = (*this) (0 COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      isPositive = false ;
      idx = 1 ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx = 1 ;
    }
  }
  uint32_t decimalUnsignedValue = 0 ;
  outOk = length () > 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint32_t r = decimalUnsignedValue ;
    decimalUnsignedValue = decimalUnsignedValue * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = r < decimalUnsignedValue ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
  if (outOk) {
    if (isPositive) {
      outOk = decimalUnsignedValue <= (uint32_t) INT32_MAX ;
      if (outOk) {
        outResult = (int32_t) decimalUnsignedValue ;
      }
    }else{
      outOk = decimalUnsignedValue <= ((uint32_t) INT32_MAX) + 1 ;
      if (outOk) {
        outResult = - (int32_t) decimalUnsignedValue ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::convertToSInt64 (int64_t & outResult,
                                bool & outOk) const {
  bool isPositive = true ;
  int32_t idx = 0 ;
  if (length () > 0) {
    const utf32 c = (*this) (0 COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      isPositive = false ;
      idx = 1 ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx = 1 ;
    }
  }
  uint64_t decimalUnsignedValue = 0 ;
  outOk = length () > 0 ;
  while ((idx < length ()) && outOk) {
    const utf32 c = (*this) (idx COMMA_HERE) ;
    idx ++ ;
    const uint64_t r = decimalUnsignedValue ;
    decimalUnsignedValue = decimalUnsignedValue * 10 + (UNICODE_VALUE (c) - '0') ;
    outOk = r < decimalUnsignedValue ;
  }
  if (outOk) {
    outOk = idx == length () ;
  }
  if (outOk) {
    if (isPositive) {
      outOk = decimalUnsignedValue <= (uint64_t) INT64_MAX ;
      if (outOk) {
        outResult = (int64_t) decimalUnsignedValue ;
      }
    }else{
      outOk = decimalUnsignedValue <= ((uint64_t) INT64_MAX) + 1 ;
      if (outOk) {
        outResult = - (int64_t) decimalUnsignedValue ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_String::convertToDouble (double & outDoubleValue,
                                bool & outOk) const {
  outDoubleValue = 0.0 ;
  int32_t idx = 0 ;
//--- Sign
  bool positive = true ;
  if (idx < length ()) {
    const utf32 c = this->operator () (idx COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '-') {
      positive = false ;
      idx ++ ;
    }else if (UNICODE_VALUE (c) == '+') {
      idx ++ ;
    }
  }
//--- Mantissa
  while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
    outDoubleValue *= 10.0 ;
    outDoubleValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
    idx ++ ;
  }
//--- Fractional part
  double divisor = 1.0 ;
  if ((idx < length ()) && (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) == '.')) { // Dot
    idx ++ ;
    while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
      divisor *= 10.0 ;
      outDoubleValue *= 10.0 ;
      outDoubleValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
      idx ++ ;
    }
  }
  outDoubleValue /= divisor ;
//--- Exponent ?
  if (idx < length ()) {
    switch (UNICODE_VALUE (this->operator () (idx COMMA_HERE))) {
    case 'E' : case 'e' : case 'd' : case 'D' : {
      idx ++ ;
    //--- Exponent sign
      bool exponentIsPositive = true ;
      if (idx < length ()) {
        const utf32 c = this->operator () (idx COMMA_HERE) ;
        if (UNICODE_VALUE (c) == '-') {
          exponentIsPositive = false ;
          idx ++ ;
        }else if (UNICODE_VALUE (c) == '+') {
          idx ++ ;
        }
      }
      double exponentValue = 0.0 ;
      while ((idx < length ()) && isdigit ((int) UNICODE_VALUE (this->operator () (idx COMMA_HERE)))) {
        exponentValue *= 10.0 ;
        exponentValue += (double) (UNICODE_VALUE (this->operator () (idx COMMA_HERE)) - '0') ;
        idx ++ ;
      }
      outDoubleValue *= ::pow (10.0, exponentIsPositive ? exponentValue : - exponentValue) ;
    }
    break ;
    default :
    break ;
    }
  }
  if (!positive) {
    outDoubleValue = - outDoubleValue ;
  }
//--- Reached end of string ?
  outOk = idx == length () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::identifierRepresentation (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalpha ((int) UNICODE_VALUE (c))) {
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }else{
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
      s.appendUnsignedHex (UNICODE_VALUE (c)) ;
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::nameRepresentation (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalnum ((int) UNICODE_VALUE (c))) {
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }else{
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
      s.appendUnsignedHex (UNICODE_VALUE (c)) ;
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::fileNameRepresentation (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    const int nc = (int) UNICODE_VALUE (c) ;
    if (isdigit (nc) || islower (nc)) {
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }else{
      s.appendUnicodeCharacter (TO_UNICODE ('-') COMMA_HERE) ;
      s.appendUnsignedHex (UNICODE_VALUE (c)) ;
      s.appendUnicodeCharacter (TO_UNICODE ('-') COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::assemblerRepresentation (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (isalnum ((int) UNICODE_VALUE (c)) || (UNICODE_VALUE (c) == '.')  || (UNICODE_VALUE (c) == '-') || (UNICODE_VALUE (c) == '$')) {
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }else{
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
      s.appendUnsignedHex (UNICODE_VALUE (c)) ;
      s.appendUnicodeCharacter (TO_UNICODE ('_') COMMA_HERE) ;
    }
  }
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::utf8RepresentationEnclosedWithin (const utf32 inCharacter, const bool inEscapeQuestionMark) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  s.appendUnicodeCharacter  (inCharacter COMMA_HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (UNICODE_VALUE (c) == '\\') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) == '\n') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('n' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) == '\r') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('r' COMMA_HERE) ;
    }else if (inEscapeQuestionMark && (UNICODE_VALUE (c) == '?')) { // Trigraph protection !!!
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('?' COMMA_HERE) ;
    }else if (c == inCharacter) {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter (inCharacter COMMA_HERE) ;
    }else{
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
  s.appendUnicodeCharacter  (inCharacter COMMA_HERE) ;
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

static C_String hex4 (const uint32_t inValue) {
  static const uint8_t digit [16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'} ;
  C_String result = "" ;
  result.appendUnicodeCharacter (TO_UNICODE (digit [(inValue >> 12) & 15]) COMMA_HERE) ;
  result.appendUnicodeCharacter (TO_UNICODE (digit [(inValue >>  8) & 15]) COMMA_HERE) ;
  result.appendUnicodeCharacter (TO_UNICODE (digit [(inValue >>  4) & 15]) COMMA_HERE) ;
  result.appendUnicodeCharacter (TO_UNICODE (digit [(inValue >>  0) & 15]) COMMA_HERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static C_String hex8 (const uint32_t inValue) {
  C_String result = "" ;
  result << hex4 (inValue >> 16) ;
  result << hex4 (inValue >>  0) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::utf8RepresentationWithUnicodeEscaping (void) const {
  C_String s ;
  const int32_t receiver_length = length () ;
  s.setCapacity ((uint32_t) receiver_length) ;
  const utf32 * ptr = utf32String (HERE) ;
  s.appendUnicodeCharacter  ('\"' COMMA_HERE) ;
  for (int32_t i=0 ; i<receiver_length ; i++) {
    const utf32 c = ptr [i] ;
    if (UNICODE_VALUE (c) == '\\') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
    }else if (c == '\"') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('\"' COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) < ' ') {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('u' COMMA_HERE) ;
      s << hex4 (UNICODE_VALUE (c)) ;
    }else if (UNICODE_VALUE (c) < '~') {
      s.appendUnicodeCharacter (c COMMA_HERE) ;
    }else if (UNICODE_VALUE (c) < 0x800) {
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('u' COMMA_HERE) ;
      s << hex4 (UNICODE_VALUE (c)) ;
    }else{
      s.appendUnicodeCharacter ('\\' COMMA_HERE) ;
      s.appendUnicodeCharacter ('U' COMMA_HERE) ;
      s << hex8 (UNICODE_VALUE (c)) ;
    }
  }
  s.appendUnicodeCharacter  ('\"' COMMA_HERE) ;
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::decodedStringFromRepresentation (bool & outOk) const {
  TC_UniqueArray <C_String> components ;
  componentsSeparatedByString ("_", components) ;
  C_String result ;
  outOk = true ;
  for (int32_t i=0 ; i<components.count () ; i++) {
    if ((i & 1) == 0) {
      result << components (i COMMA_HERE) ;
    }else{
      uint32_t codePoint = 0 ;
      for (int32_t j=0 ; j<components (i COMMA_HERE).length () ; j++) {
        codePoint *= 16 ;
        const uint32_t c = UNICODE_VALUE (components (i COMMA_HERE) (j COMMA_HERE)) ;
        if ((c >= '0') && (c <= '9')) {
          codePoint += c - '0' ;
        }else if ((c >= 'a') && (c <= 'f')) {
          codePoint += c + 10 - 'a' ;
        }else if ((c >= 'A') && (c <= 'F')) {
          codePoint += c + 10 - 'A' ;
        }else{
          outOk = false ;
        }
      }
      result.appendUnicodeCharacter (codePoint COMMA_HERE) ;
    }
  }
  return outOk ? result : "" ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::HTMLRepresentation (void) const {
  C_String result ;
  for (int32_t i=0 ; i<length () ; i++) {
    const utf32 c = this->operator () (i COMMA_HERE) ;
    if (UNICODE_VALUE (c) == '&') {
      result << "&amp;" ;
    }else if (UNICODE_VALUE (c) == '"') {
      result << "&quot;" ;
    }else if (UNICODE_VALUE (c) == '<') {
      result << "&lt;" ;
    }else if (UNICODE_VALUE (c) == '>') {
      result << "&gt;" ;
    }else{
      result.appendUnicodeCharacter (c COMMA_HERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T R I N G    C O M P A R E
//
//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::compare (const char * const inCstring) const {
  int32_t result = 0 ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  if (inCstring == nullptr) {
    result = 1 ;
  }else if (myStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = ::utf32_char_strcmp (myStringPtr, inCstring) ; // Never call strcmp with nullptr pointer(s) !
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::compare (const C_String & inString) const {
  int32_t result = 0 ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  const utf32 * otherStringPtr = inString.utf32String (HERE) ;
  if (myStringPtr == nullptr) {
    result = 1 ;
  }else if (otherStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = ::utf32_strcmp (myStringPtr, otherStringPtr) ; // Never call strcmp with nullptr pointer(s) !
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_String::compareStringByLength (const C_String & inString) const {
  int32_t result ;
  const utf32 * myStringPtr = utf32String (HERE) ;
  const utf32 * otherStringPtr = inString.utf32String (HERE) ;
  if (otherStringPtr == myStringPtr) {
    result = 0 ;
  }else if (otherStringPtr == nullptr) {
    result = 1 ;
  }else if (otherStringPtr == nullptr) {
    result = -1 ;
  }else{
    result = length () - inString.length () ;
    if (result == 0) {
      result = ::utf32_strcmp (myStringPtr, otherStringPtr) ; // Never call strcmp with nullptr pointer(s) !
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::operator == (const C_String & inString) const {
  return compareStringByLength (inString) == 0 ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::operator != (const C_String & inString) const {
  return compareStringByLength (inString) != 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   +    O P E R A T O R
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::operator + (const C_String & inOperand) const {
  C_String s = *this ;
  s << inOperand ;
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::operator + (const char * inOperand) const {
  C_String s = *this ;
  s.appendCString (inOperand) ;
  return s ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   pathExtension
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::pathExtension (void) const {
  const utf32 * source = utf32String (HERE) ;
  C_String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '.'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '.' ;
  }
  if (found) {
    if (lastOccurrenceIndex < (receiver_length - 1)) {
      result.genericUnicodeArrayOutput (& source [lastOccurrenceIndex + 1], receiver_length - 1 - lastOccurrenceIndex) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   stringByDeletingPathExtension
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::
stringByDeletingPathExtension (void) const {
  const utf32 * source = utf32String (HERE) ;
  C_String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '.'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '.' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (source, lastOccurrenceIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   stringByDeletingLastPathComponent
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::
stringByDeletingLastPathComponent (void) const {
  const utf32 * source = utf32String (HERE) ;
  C_String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '/'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '/' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (source, lastOccurrenceIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   stringByAppendingPathComponent
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::
stringByAppendingPathComponent (const C_String & inPathComponent) const {
  C_String result = *this ;
  if (result.length () == 0) {
    result = inPathComponent ;
  }else if (UNICODE_VALUE (result.lastCharacter (HERE)) != '/') {
    result.appendUnicodeCharacter (TO_UNICODE ('/') COMMA_HERE) ;
    result.appendString (inPathComponent) ;
  }else{
    result.appendString (inPathComponent) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   lastPathComponent
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::
lastPathComponent (void) const {
  const utf32 * source = utf32String (HERE) ;
  C_String result ;
  int32_t receiver_length = length ();
//--- Suppress training '/'
  while ((receiver_length > 1) && (UNICODE_VALUE (source [receiver_length - 1]) == '/')) {
    receiver_length -- ;
  }
//--- Search last '/'
  bool found = false ;
  int32_t lastOccurrenceIndex = receiver_length ;
  while ((lastOccurrenceIndex > 0) && ! found) {
    lastOccurrenceIndex -- ;
    found = UNICODE_VALUE (source [lastOccurrenceIndex]) == '/' ;
  }
  if (found) {
    result.genericUnicodeArrayOutput (& source [lastOccurrenceIndex + 1], receiver_length - lastOccurrenceIndex - 1) ;
  }else{
    result.genericUnicodeArrayOutput (source, receiver_length) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::lastPathComponentWithoutExtension (void) const {
  const C_String fileNameWithExtension = lastPathComponent () ;
  return fileNameWithExtension.stringByDeletingPathExtension () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   M D 5
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::md5 (void) const {
  C_String result ;
  uint8_t digest [16] ;
  MD5_CTX context ;
  MD5_Init (&context) ;
  MD5_Update(&context, (uint8_t *) cString (HERE), (uint32_t) length ()) ;
  MD5_Final (digest, &context);
  char s [40] ;
  for (uint32_t i=0 ; i<16 ; i++) {
    snprintf (s, 40, "%02X", digest [i]) ;
    result << s ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S U B    S T R I N G    F R O M    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::subStringFromIndex (const int32_t inStartIndex) const  {
  C_String result ;
  if (inStartIndex < length ()) {
    result = subString (inStartIndex, length () - inStartIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   R I G H T    S U B    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::rightSubString (const int32_t inLength) const  {
  C_String result ;
  if (length () <= inLength) {
    result = *this ;
  }else{
    result = subString (length () - inLength, inLength) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   L E F T    S U B    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

C_String C_String::leftSubString (const int32_t inLength) const  {
  C_String result ;
  if (length () <= inLength) {
    result = *this ;
  }else{
    result = subString (0, inLength) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   A S S I G N M E N T    O P E R A T O R S
//
//----------------------------------------------------------------------------------------------------------------------

C_String & C_String::operator = (const char * inSource) {
  setLengthToZero () ;
  if (inSource != nullptr) {
    genericCharArrayOutput (inSource, (int32_t) (strlen (inSource) & UINT32_MAX)) ;
  }
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S E T   F R O M    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

void C_String::setFromCstring (const char * inCstring) {
  setLengthToZero () ;
  *this << inCstring ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   X M L    E S C A P E D    S T R I N G
//
//----------------------------------------------------------------------------------------------------------------------

//--- Returns a string where ", ', <, > and & have been replaced by &quot;, &apos;, &lt;, &gt; and &amp;
C_String C_String::XMLEscapedString (void) const {
  C_String result ;
  for (int32_t i=0 ; i<length () ; i++) {
    const utf32 c = this->operator () (i COMMA_HERE) ;
    switch (UNICODE_VALUE (c)) {
    case '"'  : result << "&quot;" ; break ;
    case '\'' : result << "&apos;" ; break ;
    case '<'  : result << "&lt;"   ; break ;
    case '>'  : result << "&gt;"   ; break ;
    case '&'  : result << "&amp;"  ; break ;
    case '\n' : result << "&#10;" ; break ;
    default   : result.appendUnicodeCharacter (c COMMA_HERE) ; break;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_String::stringByStandardizingPath (void) const {
  #ifdef COMPILE_FOR_WINDOWS
    C_String path = stringByReplacingCharacterByString (TO_UNICODE ('\\'), "/") ;
  #else
    C_String path = * this ;
  #endif
  if (path.length () == 0) {
    path << "." ;
  }else{
  //#define TRACE_stringByStandardizingPath
  //--- Decompose path
    TC_UniqueArray <C_String> componentArray ;
    path.componentsSeparatedByString ("/", componentArray) ;
    #ifdef TRACE_stringByStandardizingPath
      printf ("----- Decomposition of '%s':\n", path.cString (HERE)) ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove empty components (but the first one)
    int32_t componentIndex = 1 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE).length () == 0) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing empty components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove '.' components
    componentIndex = 0 ;
    while (componentIndex < componentArray.count ()) {
      if (componentArray (componentIndex COMMA_HERE) == ".") {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing '.' components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Remove '..' components
    componentIndex = 1 ;
    while (componentIndex < componentArray.count ()) {
      if ((componentArray (componentIndex COMMA_HERE) == "..") && (componentArray (componentIndex-1 COMMA_HERE) != "..")) {
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
        componentIndex -- ;
        componentArray.removeObjectAtIndex (componentIndex COMMA_HERE) ;
        if (componentIndex == 0) {
          componentIndex = 1 ;
        }
      }else{
        componentIndex ++ ;
      }
    }
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- After removing '..' components:\n") ;
      for (int32_t i=0 ; i<componentArray.count () ; i++) {
        printf ("  '%s'\n", componentArray (i COMMA_HERE).cString (HERE)) ;
      }
    #endif
  //--- Recompose path
    path = componentsJoinedByString (componentArray, "/") ;
    #ifdef TRACE_stringByStandardizingPath
      printf ("-- Recomposed path: '%s'\n", path.cString (HERE)) ;
    #endif
  }
//---
  return path ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_String::parseUTF8 (const C_Data & inDataString,
                          const int32_t inOffset,
                          C_String & outString) {
  bool ok = true ;
  int32_t idx = inOffset ;
  bool foundCR = false ;
  while ((idx < inDataString.count ()) && ok) {
    const uint8_t c = inDataString (idx COMMA_HERE) ;
    if (c == 0x00) { // NUL
      idx = inDataString.count () ; // For exiting loop
    }else if (c == 0x0A) { // LF
      if (! foundCR) {
        outString.appendUnicodeCharacter (TO_UNICODE ('\n') COMMA_HERE) ;
      }
      foundCR = false ;
      idx ++ ;
    }else if (c == 0x0D) { // CR
      outString.appendUnicodeCharacter (TO_UNICODE ('\n') COMMA_HERE) ;
      foundCR = true ;
      idx ++ ;
    }else if ((c & 0x80) == 0) { // ASCII Character
      outString.appendUnicodeCharacter (TO_UNICODE (c) COMMA_HERE) ;
      foundCR = false ;
      idx ++ ;
    }else{
      const utf32 uc = utf32CharacterForPointer (inDataString.unsafeDataPointer (), idx, inDataString.count (), ok) ;
      switch (UNICODE_VALUE (uc)) {
      case 0x000B : // VT: Vertical Tab
      case 0x000C : // FF: Form Feed
      case 0x0085 : // NEL: Next Line
      case 0x2028 : // LS: Line Separator
      case 0x2029 : // PS: Paragraph Separator
        outString.appendUnicodeCharacter ('\n' COMMA_HERE) ;
        break ;
      default :
        outString.appendUnicodeCharacter (uc COMMA_HERE) ;
        foundCR = false ;
        break ;
      }
    }
  }
  if (foundCR) {
    outString.appendUnicodeCharacter (TO_UNICODE ('\n') COMMA_HERE) ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark C_TextReadException
#endif

//----------------------------------------------------------------------------------------------------------------------
//
//  Exception generated by readTextFile method when a read error occurs
//
//----------------------------------------------------------------------------------------------------------------------

C_TextReadException::
C_TextReadException (const char * inFileName) {
  snprintf (mErrorMessage, kTextReadExceptionStringMaxLength, "cannot open file '%s' for reading", inFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * C_TextReadException::what (void) const throw () {
  return mErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Symbolic links
#endif

//----------------------------------------------------------------------------------------------------------------------

static inline uint32_t minimum (const uint32_t inA, const uint32_t inB) { return inA < inB ? inA : inB ; }

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_String::LevenshteinDistanceFromString (const C_String & inOperand) const {
  const int32_t myLength = length () ;
  const int32_t operandLength = inOperand.length () ;
  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of s and the first j characters of t;
  // note that d has (m+1)x(n+1) values
  TC_UniqueArray2 <uint32_t> distance (myLength + 1, operandLength + 1) ;

  for (int32_t i=0 ; i<=myLength ; i++) {
    distance.setObjectAtIndexes ((uint32_t) i, i, 0 COMMA_HERE) ;
  }

  for (int32_t j=0 ; j<=operandLength ; j++) {
    distance.setObjectAtIndexes ((uint32_t) j, 0, j COMMA_HERE) ;
  }

  for (int32_t j=1 ; j<=operandLength ; j++) {
    for (int32_t i=1 ; i<=myLength ; i++) {
      if (UNICODE_VALUE (this->operator () (i-1 COMMA_HERE)) == UNICODE_VALUE (inOperand (j-1 COMMA_HERE))) {
        distance (i, j COMMA_HERE) = distance (i-1, j-1 COMMA_HERE) ;       // no operation required
      }else{
        distance (i, j COMMA_HERE) = minimum (minimum (
          distance (i-1, j COMMA_HERE) + 1,  // a deletion
          distance (i, j-1 COMMA_HERE) + 1),  // an insertion
          distance (i-1, j-1 COMMA_HERE) + 1 // a substitution
        ) ;
      }
    }
  }
  return distance (myLength, operandLength COMMA_HERE) ;
}

/* int LevenshteinDistance(char s[1..m], char t[1..n])
{
  // for all i and j, d[i,j] will hold the Levenshtein distance between
  // the first i characters of s and the first j characters of t;
  // note that d has (m+1)x(n+1) values
  declare int d[0..m, 0..n]

  for i from 0 to m
    d[i, 0] := i // the distance of any first string to an empty second string
  for j from 0 to n
    d[0, j] := j // the distance of any second string to an empty first string

  for j from 1 to n
  {
    for i from 1 to m
    {
      if s[i] = t[j] then
        d[i, j] := d[i-1, j-1]       // no operation required
      else
        d[i, j] := minimum
                   (
                     d[i-1, j] + 1,  // a deletion
                     d[i, j-1] + 1,  // an insertion
                     d[i-1, j-1] + 1 // a substitution
                   )
    }
  }

  return d[m,n]
} */

//----------------------------------------------------------------------------------------------------------------------
