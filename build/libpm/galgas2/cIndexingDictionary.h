//----------------------------------------------------------------------------------------------------------------------
//
//  'cIndexingDictionary': dictionary for indexing soures                                        
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
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

#include "utilities/M_machine.h"

//----------------------------------------------------------------------------------------------------------------------

class C_String ;
class cIndexEntryNode ;

//----------------------------------------------------------------------------------------------------------------------
//
//                 cIndexingDictionary                                                           
//
//----------------------------------------------------------------------------------------------------------------------

class cIndexingDictionary final {

//--- Constructor
  public: cIndexingDictionary (void) ;

//--- Destructor
  public: ~ cIndexingDictionary (void) ;

//--- No copy
  private: cIndexingDictionary (const cIndexingDictionary &) ;
  private: cIndexingDictionary & operator = (const cIndexingDictionary &) ;

//--- Add indexed entry
  public: void addIndexedKey (const uint32_t inIndexingKind,
                               const C_String & inIndexedKey,
                               const C_String & inSourceFilePath,
                               const uint32_t inTokenLineInSource,
                               const uint32_t inTokenLocationInSource,
                               const uint32_t inTokenLengthInSource) ;

//--- Generate Index file (in a plist format)
  public: void generateIndexFile (const C_String & inOutputIndexFilePath) const ;

//--- Internal private method
  private: cIndexEntryNode * findOrAddEntry (cIndexEntryNode * & ioRootPtr,
                                              const C_String & inKey,
                                              bool & ioExtension) ;

//--- Private attributes
  private: cIndexEntryNode * mEntryRoot ;
} ;

//----------------------------------------------------------------------------------------------------------------------
