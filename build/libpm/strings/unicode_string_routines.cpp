//----------------------------------------------------------------------------------------------------------------------
//
//  unicode_string_routines: this file implements uint32_t * string routines,                    
//  that are in direct correspondance with char * C string routines of C                         
//  library.                                                                                     
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2008 Pierre Molinaro.
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

#include "strings/unicode_string_routines.h"

//----------------------------------------------------------------------------------------------------------------------
//--- From GLIBC, version 2.7 http://ftp.gnu.org/gnu/glibc/glibc-2.7.tar.bz2
// glibc/wcsmbs/wcscmp.c

int32_t utf32_strcmp (const utf32 * inString1, const utf32 * inString2) {
  int32_t c1, c2;
  do{
    c1 = (int32_t) UNICODE_VALUE (*inString1) ;
    inString1 ++ ;
    c2 = (int32_t) UNICODE_VALUE (*inString2) ;
    inString2 ++ ;
    if (c1 == 0) return c1 - c2 ;
  }while (c1 == c2) ;
  return c1 - c2 ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t utf32_char_strcmp (const utf32 * inString1, const char * inString2) {
  int32_t c1, c2;
  do{
    c1 = (int32_t) UNICODE_VALUE (*inString1) ;
    inString1 ++ ;
    c2 = (int32_t) (*inString2) ;
    inString2 ++ ;
    if (c1 == 0) return c1 - c2 ;
  }while (c1 == c2) ;
  return c1 - c2 ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t utf32_strncmp (const utf32 * inString1, const utf32 * inString2, const int32_t inLength) {
  if (inLength == 0) return 0 ;
  int32_t c1, c2;
  int32_t remaining = inLength ;
  do{
    c1 = (int32_t) UNICODE_VALUE (*inString1) ;
    inString1 ++ ;
    c2 = (int32_t) UNICODE_VALUE (*inString2) ;
    inString2 ++ ;
    if (c1 == 0) return c1 - c2 ;
    remaining -- ;
  }while ((c1 == c2) && (remaining > 0)) ;
  return c1 - c2 ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t utf32_char_strncmp (const utf32 * inString1,
                           const char * inString2,
                           const int32_t inLength) {
  if (inLength == 0) return 0 ;
  int32_t c1, c2;
  int32_t remaining = inLength ;
  do{
    c1 = (int32_t) UNICODE_VALUE (*inString1) ;
    inString1 ++ ;
    c2 = (int32_t) (*inString2) ;
    inString2 ++ ;
    if (c1 == 0) return c1 - c2 ;
    remaining -- ;
  }while ((c1 == c2) && (remaining > 0)) ;
  return c1 - c2 ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t utf32_strlen (const utf32 * inString) {
  int32_t result = 0 ;
  while (UNICODE_VALUE (* inString) != 0) {
    inString ++ ;
    result ++ ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

const utf32 * utf32_strstr (const utf32 * haystack, const utf32 * needle) {
  const utf32 * s = haystack;
  const utf32 * p = needle;
  do {
    if (! UNICODE_VALUE (*p)) {
      return haystack ;
    }
    if (UNICODE_VALUE (*p) == UNICODE_VALUE (*s)) {
      ++p;
      ++s;
    }else{
      p = needle;
      if (!UNICODE_VALUE (*s)) {
        return nullptr;
      }
      s = ++haystack;
    }
  } while (1);
}

//----------------------------------------------------------------------------------------------------------------------
