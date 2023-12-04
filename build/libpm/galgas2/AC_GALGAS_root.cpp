//----------------------------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_root : root type for all GALGAS types                                              
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

#include "all-predefined-types.h"
#include "galgas2/C_galgas_io.h"

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_root::log (const char * inMessage COMMA_LOCATION_ARGS) const {
  C_String s ;
  s << "LOGGING " << inMessage << ": " ;
  description (s, 0) ;
  s << "\n" ;
  ggs_printMessage (s COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string AC_GALGAS_root::getter_description (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    C_String s ;
    description (s, 0) ;
    result = GALGAS_string (s) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * AC_GALGAS_root::dynamicTypeDescriptor (void) const {
  return staticTypeDescriptor () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_type AC_GALGAS_root::getter_staticType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_type (staticTypeDescriptor ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_type AC_GALGAS_root::getter_dynamicType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_type (dynamicTypeDescriptor ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_object AC_GALGAS_root::getter_object (LOCATION_ARGS) const {
  return GALGAS_object (clonedObject () COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AC_GALGAS_root::checkIsValid (LOCATION_ARGS) const {
    MF_AssertThere (isValid (), "Object not valid", 0, 0) ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void AC_GALGAS_root::printNonNullClassInstanceProperties (const char * /* inPropertyName */) const {
  }
#endif

//----------------------------------------------------------------------------------------------------------------------
