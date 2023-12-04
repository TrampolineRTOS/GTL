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

#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "utilities/M_SourceLocation.h"
#include "generic-arraies/TC_UniqueArray.h"
#include "utilities/M_machine.h"
#include "streams/C_ConsoleOut.h"
#include "utilities/C_Data.h"
#include "utilities/TF_Swap.h"
#include "time/C_DateTime.h"

//----------------------------------------------------------------------------------------------------------------------

#include <exception>
#include <stdio.h> 
#include <dirent.h> 

//----------------------------------------------------------------------------------------------------------------------

#ifndef COMPILE_FOR_WINDOWS
  #error COMPILE_FOR_WINDOWS is undefined
#endif

//----------------------------------------------------------------------------------------------------------------------

#if COMPILE_FOR_WINDOWS == 0
  #include <sys/types.h>
  #include <sys/stat.h>
#endif

//----------------------------------------------------------------------------------------------------------------------

typedef enum {
  kUTF_8_FileEncoding,
  kUTF_16BE_FileEncoding,
  kUTF_16LE_FileEncoding,
  kUTF_32BE_FileEncoding,
  kUTF_32LE_FileEncoding,
  kISO_8859_1_FileEncoding,
  kISO_8859_10_FileEncoding,
  kISO_8859_11_FileEncoding,
  kISO_8859_13_FileEncoding,
  kISO_8859_14_FileEncoding,
  kISO_8859_15_FileEncoding,
  kISO_8859_16_FileEncoding,
  kISO_8859_2_FileEncoding,
  kISO_8859_3_FileEncoding,
  kISO_8859_4_FileEncoding,
  kISO_8859_5_FileEncoding,
  kISO_8859_6_FileEncoding,
  kISO_8859_7_FileEncoding,
  kISO_8859_8_FileEncoding,
  kISO_8859_9_FileEncoding,
  kCP1252_FileEncoding,
  kCP437_DOS_FileEncoding,
  kMacRoman_FileEncoding
} PMTextFileEncoding ;

//----------------------------------------------------------------------------------------------------------------------
//
//      Fully dynamic character string : C_String                                                
//
//----------------------------------------------------------------------------------------------------------------------

class C_String : public AC_OutputStream {
//--- Constructors
  public: C_String (void) ; // Empty string
  public: C_String (const char * chaineC) ; // From a C string
  public: C_String (const utf32 * inUTF32String) ;
  public: static C_String spaces (const int32_t inSpaceCount) ;
  
//--- Virtual destructor
  public: virtual ~C_String (void) ;

//--- Handling copy
  public: C_String (const C_String & inSource) ;
  public: C_String & operator = (const C_String & inString) ;

//--- Get string from stdin
  public: static C_String newWithStdIn (void) ;

//--- Copy from a C string
  public: C_String & operator = (const char * inSource) ;

//--- Set capacity (does nothing if length >= inCapacity)
  public: void setCapacity (const uint32_t inCapacity) ;
  
//--- Suppress 'inLength' characters from 'inLocation' index
  public: void suppress (const int32_t inLocation, const int32_t inLength COMMA_LOCATION_ARGS) ;

//--- Insert 'inChar' character at 'inIndex' index
  public: void insertCharacterAtIndex (const utf32 inChar, const int32_t inIndex COMMA_LOCATION_ARGS) ;

//--- Init from a string
  public: void setFromCstring (const char * inCstring) ;
  public: void setFromString (const C_String & inString) ;

//--- Insulate
  public: void insulate (void) const ;

//--- hash code
  public: uint32_t hash (void) const ;

//--- Set length to 0 ; do not release memory
  public: void setLengthToZero (void) ;

//--- Release memory
  public: void releaseString (void) ;

//--- Get dynamic array allocated size
  public: uint32_t capacity (void) const ;

//--- Get current column index (starting from 0)
  public: uint32_t currentColumn (void) const ;
  
//--- Append space character until given column
  public: void appendSpacesUntilColumn (const uint32_t inColumn) ;

//--- Get a character
  public: utf32 operator () (const int32_t inIndex COMMA_LOCATION_ARGS) const ;
  public: utf32 readCharOrNul (const int32_t inIndex COMMA_LOCATION_ARGS) const ;

//--- Set a character
  public: void setUnicodeCharacterAtIndex (const utf32 inCharacter, const int32_t inIndex COMMA_LOCATION_ARGS) ;

//--- Contains a character
  public: bool containsCharacter (const utf32 inCharacter) const ;
  public: bool containsCharacterInRange (const utf32 inFirstCharacter, const utf32 inLastCharacter) const ;

//--- Get last character
  public: utf32 lastCharacter (LOCATION_ARGS) const ;

//--- Get string length
  public: int32_t length (void) const ;

//--- Get a representation that contains only letters, digits or '_', so that it is a valid C identifier
  public: C_String identifierRepresentation (void) const ; // Preserves ASCII letters
  public: C_String nameRepresentation (void) const ; // Preserves ASCII letters, digits and '_'
  public: C_String fileNameRepresentation (void) const ; // Preserves ASCII lowercase letters, digits and '_'
  public: C_String assemblerRepresentation (void) const ; // Preserves ASCII letters, digits, '_', '.' and '$'
  public: C_String utf8RepresentationWithUnicodeEscaping (void) const ; // \uXXXX, \UXXXXXXXX
  public: C_String decodedStringFromRepresentation (bool & outOk) const ; // Reverses the above representations

//--- Get a representation enclosing by a given character
//      - escaped by a back slash
//      - back slash is also escaped by back slash
  public: C_String utf8RepresentationEnclosedWithin (const utf32 inCharacter, const bool inEscapeQuestionMark) const ;

//--- Get an HTML representation (&, <, > and " are escaped using HTML escape sequence)
  public: C_String HTMLRepresentation (void) const ;

//--- Get MD5 value
  public: C_String md5 (void) const ;

//--- Get a string pointer
  public: const char * cString (LOCATION_ARGS) const ;

//--- Get a UTF32 string pointer
  public: const utf32 * utf32String (LOCATION_ARGS) const ;

//--- Compare with an other string 
  public: int32_t compare (const char * const inCstring) const ;
  public: int32_t compare (const C_String & inString) const ;
  public: int32_t compareStringByLength (const C_String & inString) const ;
  public: bool operator == (const C_String & inString) const ;
  public: bool operator != (const C_String & inString) const ;

//--- Distance from an other string
  public: uint32_t LevenshteinDistanceFromString (const C_String & inOtherString) const ;

//--- Get lines array
  public: void linesArray (TC_UniqueArray <C_String> & outStringArray) const ;

//--- Get line from index
  public: class LineColumnContents lineAndColumnFromIndex (const int32_t inIndex) const ;

//--- Get index from line number and column number
  public: int32_t indexFromLineAndColumn (const int32_t inLineNumber,
                                           const int32_t inColumnNumber) const ;

//--- Subsitute 'inCharacter' by 'inString' ; if the character occurs twice, suppress one
  public: C_String stringByReplacingCharacterByString (const utf32 inCharacter,
                                                        const C_String & inString) const ;

//--- Substitute 'inSearchedString' by 'inReplacementString'
  public: C_String stringByReplacingStringByString (const C_String inSearchedString,
                                                     const C_String inReplacementString,
                                                     uint32_t & outReplacementCount,
                                                     bool & outOk) const ;

  public: C_String stringByReplacingStringByString (const C_String inSearchedString,
                                                     const C_String inReplacementString) const ;

//--- Get character last occurrence (returns -1 if not found)
  public: int32_t lastOccurrenceIndexOfChar (const utf32 inChar) const ;

//--- Trim white spaces ('\n' or ' '):
//    - at the beginning of the string,
//    - within the string (replace a sequence of white spaces with a single space),
//    - at end at the end of string.
  public: C_String stringByTrimmingSeparators (void) const ;

//--- Get a sub string
  public: C_String subString (const int32_t inStartIndex,
                              const int32_t inLength) const ;

//--- Get a sub string
  public: C_String leftSubString (const int32_t inLength) const ;
  public: C_String rightSubString (const int32_t inLength) const ;
  public: C_String subStringFromIndex (const int32_t inIndex) const ;

//--- String concatenation
  public: C_String operator + (const C_String & inOperand) const ;
  public: C_String operator + (const char * inOperand) const ;

//--- Returns a string where ", ', <, > and & have been replaced by &quot;, &apos;, &lt;, &gt; and &amp;
  public: C_String XMLEscapedString (void) const ;

//--- Returns an array containing substrings from the receiver that have been divided by separator
  public: void componentsSeparatedByString (const C_String & inSeparator,
                                             TC_UniqueArray <C_String> & outResult) const ;

//--- Recompose a string from components
  public: static C_String componentsJoinedByString (const TC_UniqueArray <C_String> & inComponentArray,
                                                     const C_String & inSeparator) ;

//--- Interprets the receiver as a path, returning the receiver's extension
  public: C_String pathExtension (void) const ;

//--- Returns a new string made by appending inPathComponent to the receiver, preceded if necessary by a path separator.
  public: C_String stringByAppendingPathComponent (const C_String & inPathComponent) const ;

//--- Returns a string made by deleting the last path component (if any, and only the last)
//    from the receiver.
  public: C_String stringByDeletingLastPathComponent (void) const ;

//--- Returns a string made by deleting the extension (if any, and only the last)
//    from the receiver.
  public: C_String stringByDeletingPathExtension (void) const ;

//--- Returns a string made by deleting from the receiver all characters from inSearchedString
  public: C_String stringByDeletingTailFromString (const C_String & inSearchedString) const ;

//--- Returns the last path component of the receiver.
  public: C_String lastPathComponent (void) const ;
  public: C_String lastPathComponentWithoutExtension (void) const ;

//--- Contains an other string ?
  public: bool containsString (const C_String & inSearchedString) const ;

//--- Return string, with first letter in upper case
  public: C_String stringByCapitalizingFirstCharacter (void) const ;

//--- Return string, with all letters in upper case
  public: C_String uppercaseString (void) const ;

//--- Return string, with all letters in lower case
  public: C_String lowercaseString (void) const ;

//--- Check if the receiver ends with inString
  public: bool endsWithString (const C_String & inString) const ;

//--- Return reversed string
  public: C_String reversedString (void) const ;
  public: void reverseStringInPlace (void) ;

//--- Return unsigned integer value
  public: bool isUnsignedInteger (void) const ;
  public: uint32_t unsignedIntegerValue (void) const ;

//--- Get current column index (starting from 0)
  public: static C_String stringWithRepeatedCharacter (const utf32 inRepeatedCharacter, const uint32_t inCount) ;

//--- Standardizing Path
//    - first, convert Windows Path to Unix Path (on windows only)
//    - Reduce empty components and references to the current directory (that is, the sequences "//" and "/./") to single path separators
  public: C_String stringByStandardizingPath (void) const ;

//--- Convert string to double
  public: void convertToDouble (double & outDoubleValue,
                                 bool & outOk) const ;

  public: void convertToUInt32 (uint32_t & outResult,
                                 bool & outOk) const ;

  public: void convertToSInt32 (int32_t & outResult,
                                 bool & outOk) const ;

  public: void convertToUInt64 (uint64_t & outResult,
                                 bool & outOk) const ;

  public: void convertToSInt64 (int64_t & outResult,
                                 bool & outOk) const ;

//---------------- Virtual output stream methods --------------
  protected: virtual void performActualCharArrayOutput (const char * inCharArray,
                                                         const int32_t inArrayCount) ;

  protected: virtual void performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                            const int32_t inArrayCount) ;

//--- Private (internal) methods
  private: void insulateEmbeddedString (const uint32_t inNewCapacity) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    private: void checkString (LOCATION_ARGS) const ;
  #endif

  public: static bool parseUTF8 (const C_Data & inDataString,
                                  const int32_t inOffset,
                                  C_String & outString) ;

//---------------- Private attributes -------------
  private: mutable class cEmbeddedString * mEmbeddedString ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//  Exception generated by readTextFile method when a read error occurs                          
//
//----------------------------------------------------------------------------------------------------------------------

const size_t kTextReadExceptionStringMaxLength = 1000 ;

class C_TextReadException : public::std::exception {
  public: C_TextReadException (const char * inFileName) ;

  private: char mErrorMessage [kTextReadExceptionStringMaxLength + 1] ;

  public: virtual const char * what (void) const throw () ;
} ;

//----------------------------------------------------------------------------------------------------------------------

class LineColumnContents final {
  private: int32_t mLineNumber ;
  private: int32_t mColumnNumber ;
  private: C_String mLineContents ;

  public: LineColumnContents (void) :
  mLineNumber (0),
  mColumnNumber (0),
  mLineContents () {
  }

  public: LineColumnContents (const int32_t inLineNumber,
                              const int32_t inColumnNumber,
                              const C_String inLineContents) :
  mLineNumber (inLineNumber),
  mColumnNumber (inColumnNumber),
  mLineContents (inLineContents) {
  }

  public: int32_t lineNumber (void) const { return mLineNumber ; }
  public: int32_t columnNumber (void) const { return mColumnNumber ; }
  public: C_String lineContents (void) const { return mLineContents ; }

} ;

//----------------------------------------------------------------------------------------------------------------------
