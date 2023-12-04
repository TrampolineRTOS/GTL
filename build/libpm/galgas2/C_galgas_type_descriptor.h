//----------------------------------------------------------------------------------------------------------------------
//
//  GALGAS Type Inspector (for introspection)                                                    
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

#include "generic-arraies/TC_UniqueArray.h"

//----------------------------------------------------------------------------------------------------------------------
//
//  GALGAS type reference (for type introspection)                                               
//
//----------------------------------------------------------------------------------------------------------------------

class C_galgas_type_descriptor final {
//--- Attributes
  private: C_galgas_type_descriptor * mNextType ;
  private: C_galgas_type_descriptor * mPreviousType ;
  private: int32_t mBalance ;
  public: const char * const mGalgasTypeName ; // Without the leading '@'
  public: const int32_t mSlotID ;
  public: const C_galgas_type_descriptor * mSuperclassDescriptor ;

//--- Constructor
  public: C_galgas_type_descriptor (const char * inGalgasTypeName,
                                     const C_galgas_type_descriptor * inSuperClassDescriptor) ;

//--- Get Type list
  public: static void typeListRoot (TC_UniqueArray <C_galgas_type_descriptor *> & outTypeList) ;
  
//--- No copy
  private: C_galgas_type_descriptor (const C_galgas_type_descriptor &) ;
  private: C_galgas_type_descriptor & operator = (const C_galgas_type_descriptor &) ;

//--- Internal methods
  private: static void recursiveInsert (C_galgas_type_descriptor * & ioRoot,
                                         C_galgas_type_descriptor * inDescriptor,
                                         bool & ioExtension) ;

  private: static void rotateLeft (C_galgas_type_descriptor * & ioRootPtr) ;

  private: static void rotateRight (C_galgas_type_descriptor * & ioRootPtr) ;

  public: static void recursiveGetSortedTypeList (C_galgas_type_descriptor * inRoot,
                                                   TC_UniqueArray <C_galgas_type_descriptor *> & ioTypeList) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
