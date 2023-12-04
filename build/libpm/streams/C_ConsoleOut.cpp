//----------------------------------------------------------------------------------------------------------------------
//
//  'C_ConsoleOut' : a class for console output                                                  
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2002, ..., 2023 Pierre Molinaro.
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

#include "streams/C_ConsoleOut.h"
#include "strings/unicode_character_cpp.h"

//----------------------------------------------------------------------------------------------------------------------

C_ConsoleOut::C_ConsoleOut (void) {
}

//----------------------------------------------------------------------------------------------------------------------
//
//                  Flush output                                                                 
//
//----------------------------------------------------------------------------------------------------------------------

void C_ConsoleOut::flush (void) {
  ::fflush (stdout) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                  Write a character string on the console                                      
//
//----------------------------------------------------------------------------------------------------------------------

void C_ConsoleOut::performActualCharArrayOutput (const char * inCharArray,
                                                 const int32_t inArrayCount) {
  if (inArrayCount > 0) {
    printf ("%.*s", (int) inArrayCount, inCharArray) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void C_ConsoleOut::performActualUnicodeArrayOutput (const utf32 * inCharArray,
                                                    const int32_t inArrayCount) {
  for (int32_t i=0 ; i<inArrayCount ; i++) {
    char buffer [5] ;
    UTF8StringFromUTF32Character (inCharArray [i], buffer) ;
    printf ("%s", buffer) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//  C O N S O L E    O U T    G L O B A L   V A R I A B L E                                      
//
//----------------------------------------------------------------------------------------------------------------------

C_ConsoleOut co ;

//----------------------------------------------------------------------------------------------------------------------
