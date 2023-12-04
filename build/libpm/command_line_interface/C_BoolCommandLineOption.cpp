//----------------------------------------------------------------------------------------------------------------------
//
//  Generic Boolean Command Line Interface Option
//
//  This file is part of libpm library
//
//  Copyright (C) 2009, ..., 2009 Pierre Molinaro.
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

#include "command_line_interface/C_BoolCommandLineOption.h"
#include "strings/C_String.h"

//----------------------------------------------------------------------------------------------------------------------

#include <string.h>

//----------------------------------------------------------------------------------------------------------------------

static C_BoolCommandLineOption * gFirstBoolCommand ;
static C_BoolCommandLineOption * gLastBoolCommand ;

//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption::C_BoolCommandLineOption (const char * inDomainName,
                                                  const char * inIdentifier,
                                                  const char inChar,
                                                  const char * inString,
                                                  const char * inComment,
                                                  const bool inVisibleInGalgas) :
C_CommandLineOption (inDomainName, inIdentifier, inChar, inString, inComment),
mNext (nullptr),
mValue (false),
mVisibleInGalgas (inVisibleInGalgas) {
  if (nullptr == gFirstBoolCommand) {
    gFirstBoolCommand = this ;
  }else{
    gLastBoolCommand->mNext = this ;
  }
  gLastBoolCommand = this ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::setBoolOptionForCommandChar (const char inCommandChar,
                                                           bool & outFound) {
  outFound = false ;
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  while ((p != nullptr) && ! outFound) {
    if (p->mCommandChar == inCommandChar) {
      outFound = true ;
      p->mValue = true ;
    }
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::setBoolOptionForCommandString (const char * inCommandString,
                                                             bool & outFound,
                                                             bool & outCocoaOutput) {
  outFound = strcmp (inCommandString, "cocoa") == 0 ;
  if (outFound) {
    outCocoaOutput = true ;
  }
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  while ((p != nullptr) && ! outFound) {
    if (strcmp (p->mCommandString, inCommandString) == 0) {
      outFound = true ;
      p->mValue = true ;
    }
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::printUsageOfBoolOptions (void) {
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    const char c = p->mCommandChar ;
    if (c != '\0') {
      printf (" [-%c]", c) ;
    }
    const char * s = p->mCommandString ;
    if (s [0] != 0) {
      printf (" [--%s]", s) ;
    }
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::printBoolOptions (void) {
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    if (p->mCommandChar != '\0') {
      co.setForeColor (kBlueForeColor) ;
      co.setTextAttribute (kBoldTextAttribute) ;
      co << "-" << cStringWithCharacter (p->mCommandChar) ;
      co.setTextAttribute (kAllAttributesOff) ;
      co << "\n" ;
    }
    if (p->mCommandString [0] != '\0') {
      co.setForeColor (kBlueForeColor) ;
      co.setTextAttribute (kBoldTextAttribute) ;
      co << "--" << p->mCommandString ;
      co.setTextAttribute (kAllAttributesOff) ;
      co << "\n" ;
    }
    co << "    " << p->mComment << "\n" ;
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::getBoolOptionNameList (TC_UniqueArray <C_String> & outArray) {
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  while (p != nullptr) {
    if (p->mVisibleInGalgas) {
      outArray.appendObject (p->mDomainName) ;
      outArray.appendObject (p->mIdentifier) ;
    }
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_BoolCommandLineOption::getBoolOptionInvocationLetter (const C_String & inDomainName,
                                                              const C_String & inIdentifier) {
  utf32 result = TO_UNICODE (0) ;
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = TO_UNICODE ((uint32_t) p->mCommandChar) ;
    p = p->mNext ;
}
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_BoolCommandLineOption::getBoolOptionInvocationString (const C_String & inDomainName,
                                                                 const C_String & inIdentifier) {
  C_String result ;
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mCommandString ;
    p = p->mNext ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_BoolCommandLineOption::getBoolOptionCommentString (const C_String & inDomainName,
                                                              const C_String & inIdentifier) {
  C_String result ;
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mComment ;
    p = p->mNext ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool C_BoolCommandLineOption::getBoolOptionValue (const C_String & inDomainName,
                                                  const C_String & inIdentifier) {
  bool result = false ;
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    result = p->mValue ;
    p = p->mNext ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void C_BoolCommandLineOption::setBoolOptionValue (const C_String & inDomainName,
                                                  const C_String & inIdentifier,
                                                  const bool inValue) {
  C_BoolCommandLineOption * p = gFirstBoolCommand ;
  bool found = false ;
  while ((p != nullptr) && not found) {
    found = (inDomainName == p->mDomainName) && (inIdentifier == p->mIdentifier) && p->mVisibleInGalgas ;
    if (found) {
      p->mValue = inValue ;
    }
    p = p->mNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
