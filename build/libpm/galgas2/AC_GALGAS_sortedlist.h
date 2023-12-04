//----------------------------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_sortedlist : base class for GALGAS sorted list
//
//  This file is part of libpm library
//
//  Copyright (C) 2005, ..., 2010 Pierre Molinaro.
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

#include "galgas2/AC_GALGAS_root.h"
#include "galgas2/typeComparisonResult.h"

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_uint ;
class C_Compiler ;
class cSharedSortedListRoot ;
class C_String ;
class C_galgas_type_descriptor ;
class capSortedListElement ;
class cSortedListNode ;
class capCollectionElementArray ;

//----------------------------------------------------------------------------------------------------------------------

class AC_GALGAS_sortedlist : public AC_GALGAS_root {
//--------------------------------- Private data member
  private: cSharedSortedListRoot * mSharedRoot ;

//--------------------------------- Native constructor
  public: AC_GALGAS_sortedlist (void) ;

//--------------------------------- Virtual destructor
  public: virtual ~ AC_GALGAS_sortedlist (void) ;

//--------------------------------- Handle copy
  public: AC_GALGAS_sortedlist (const AC_GALGAS_sortedlist &) ;
  public: AC_GALGAS_sortedlist & operator = (const AC_GALGAS_sortedlist &) ;

//--------------------------------- Is Valid
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override { return nullptr != mSharedRoot ; }

//--- count
  public: VIRTUAL_IN_DEBUG uint32_t count (void) const ;

//--------------------------------- Create a new sorted list
  protected: VIRTUAL_IN_DEBUG void createNewEmptySortedList (LOCATION_ARGS) ;

//--------------------------------- Drop
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Implementation of reader 'description'
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const override ;

//--- Enumeration handling
  protected: void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;

//--- Adding an object
  protected: void appendObject (capSortedListElement & inAttributeList) ;

//--------------------------------- Append a list
  protected: void appendSortedList (const AC_GALGAS_sortedlist & inList) ;

//--------------------------------- Method Implementation
  protected: void smallestObjectAttributeList (capSortedListElement & outAttributeArray,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  protected: void greatestObjectAttributeList (capSortedListElement & outAttributeArray,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

//--------------------------------- Insulate
  private: void insulate (LOCATION_ARGS) ;

//--------------------------------- Modifier Implementation
  protected: void removeSmallestObject (capSortedListElement & outAttributeArray,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

  protected: void removeGreatestObject (capSortedListElement & outAttributeArray,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Compare
  public: typeComparisonResult objectCompare (const AC_GALGAS_sortedlist & inOperand) const ;

//--------------------------------- Readers
  public: VIRTUAL_IN_DEBUG GALGAS_uint getter_count (LOCATION_ARGS) const ;

//--------------------------------- introspection
  public: virtual const C_galgas_type_descriptor * staticTypeDescriptor (void) const override = 0;

} ;

//----------------------------------------------------------------------------------------------------------------------
