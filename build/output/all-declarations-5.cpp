#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_srOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2090)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_srOp (defineExtensionGetter_gtlString_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_neqOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2098)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2097)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2098))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2095)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2101)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2101)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_neqOp (defineExtensionGetter_gtlString_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_eqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2110)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2109)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2110))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2107)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2113)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2113)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_eqOp (defineExtensionGetter_gtlString_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_gtOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2122)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2121)), GALGAS_bool (kIsStrictSup, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2122))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2119)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2125)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2125)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_gtOp (defineExtensionGetter_gtlString_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_geOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2134)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2133)), GALGAS_bool (kIsSupOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2134))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2131)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2137)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2137)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_geOp (defineExtensionGetter_gtlString_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_ltOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2146)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2145)), GALGAS_bool (kIsStrictInf, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2146))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2143)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2149)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2149)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_ltOp (defineExtensionGetter_gtlString_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_leOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlString temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2158)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2157)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2158))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2161)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2161)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_leOp (defineExtensionGetter_gtlString_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlString_embeddedType (const cPtr_gtlData * /* inObject */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_string) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                     extensionGetter_gtlString_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_embeddedType (defineExtensionGetter_gtlString_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlString addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlString_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2172))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlString_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                   extensionMethod_gtlString_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlString_addMyValue (defineExtensionMethod_gtlString_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlString performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlString_performGetter (const cPtr_gtlData * inObject,
                                                               const GALGAS_lstring constinArgument_methodName,
                                                               const GALGAS_gtlDataList constinArgument_arguments,
                                                               const GALGAS_gtlContext constinArgument_context,
                                                               const GALGAS_library constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2185)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)) ;
      }
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2188)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2188)), object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2187)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2190)).objectCompare (GALGAS_string ("charAtIndex"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2191)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2191)) ;
        }
        GALGAS_gtlInt temp_2 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)).ptr ())) {
            temp_2 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)).ptr () ;
          }else{
            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)) ;
          }
        }
        GALGAS_uint var_index_67129 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2192)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)) ;
        result_result = GALGAS_gtlChar::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2194)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2194)), object->mProperty_value.getter_characterAtIndex (var_index_67129, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2194))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2193)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2196)).objectCompare (GALGAS_string ("indexOfChar"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2197)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2197)) ;
          }
          GALGAS_gtlChar temp_4 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2198)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2198)).ptr ())) {
              temp_4 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2198)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2198)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2198)) ;
            }
          }
          GALGAS_char var_lookedUpChar_67428 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2198)) ;
          GALGAS_uint var_index_67493 = GALGAS_uint ((uint32_t) 0U) ;
          GALGAS_uint var_length_67514 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
          GALGAS_bool var_found_67547 = GALGAS_bool (false) ;
          if (var_length_67514.isValid ()) {
            uint32_t variant_67564 = var_length_67514.uintValue () ;
            bool loop_67564 = true ;
            while (loop_67564) {
              GALGAS_bool test_5 = var_found_67547.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2203)) ;
              if (kBoolTrue == test_5.boolEnum ()) {
                test_5 = GALGAS_bool (kIsStrictInf, var_index_67493.objectCompare (var_length_67514)) ;
              }
              loop_67564 = test_5.isValid () ;
              if (loop_67564) {
                loop_67564 = test_5.boolValue () ;
              }
              if (loop_67564 && (0 == variant_67564)) {
                loop_67564 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2202)) ;
              }
              if (loop_67564) {
                variant_67564 -- ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_characterAtIndex (var_index_67493, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2204)).objectCompare (var_lookedUpChar_67428)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_found_67547 = GALGAS_bool (true) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_index_67493.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)) ;
                }
              }
            }
          }
          GALGAS_bigint temp_7 ;
          const enumGalgasBool test_8 = var_found_67547.boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = var_index_67493.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2213)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2213)) ;
          }
          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2211)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2212)), temp_7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2210)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2215)).objectCompare (GALGAS_string ("indexOfCharInRange"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)) ;
            }
            GALGAS_gtlChar temp_10 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)).ptr ())) {
                temp_10 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)).ptr () ;
              }else{
                inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)) ;
              }
            }
            GALGAS_char var_minChar_68017 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2217)) ;
            GALGAS_gtlChar temp_11 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr ())) {
                temp_11 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr () ;
              }else{
                inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)) ;
              }
            }
            GALGAS_char var_maxChar_68084 = temp_11.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2218)) ;
            GALGAS_uint var_index_68149 = GALGAS_uint ((uint32_t) 0U) ;
            GALGAS_uint var_length_68170 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2220)) ;
            GALGAS_bool var_found_68203 = GALGAS_bool (false) ;
            if (var_length_68170.isValid ()) {
              uint32_t variant_68220 = var_length_68170.uintValue () ;
              bool loop_68220 = true ;
              while (loop_68220) {
                GALGAS_bool test_12 = var_found_68203.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2223)) ;
                if (kBoolTrue == test_12.boolEnum ()) {
                  test_12 = GALGAS_bool (kIsStrictInf, var_index_68149.objectCompare (var_length_68170)) ;
                }
                loop_68220 = test_12.isValid () ;
                if (loop_68220) {
                  loop_68220 = test_12.boolValue () ;
                }
                if (loop_68220 && (0 == variant_68220)) {
                  loop_68220 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2222)) ;
                }
                if (loop_68220) {
                  variant_68220 -- ;
                  GALGAS_char var_currentChar_68294 = object->mProperty_value.getter_characterAtIndex (var_index_68149, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2224)) ;
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    GALGAS_bool test_14 = GALGAS_bool (kIsSupOrEqual, var_currentChar_68294.objectCompare (var_minChar_68017)) ;
                    if (kBoolTrue == test_14.boolEnum ()) {
                      test_14 = GALGAS_bool (kIsInfOrEqual, var_currentChar_68294.objectCompare (var_maxChar_68084)) ;
                    }
                    test_13 = test_14.boolEnum () ;
                    if (kBoolTrue == test_13) {
                      var_found_68203 = GALGAS_bool (true) ;
                    }
                  }
                  if (kBoolFalse == test_13) {
                    var_index_68149.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2228)) ;
                  }
                }
              }
            }
            GALGAS_bigint temp_15 ;
            const enumGalgasBool test_16 = var_found_68203.boolEnum () ;
            if (kBoolTrue == test_16) {
              temp_15 = var_index_68149.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2234)) ;
            }else if (kBoolFalse == test_16) {
              temp_15 = GALGAS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2234)) ;
            }
            result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2232)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2233)), temp_15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)) ;
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2236)).objectCompare (GALGAS_string ("containsChar"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2237)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2237)) ;
              }
              GALGAS_gtlChar temp_18 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)).ptr ())) {
                  temp_18 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)) ;
                }
              }
              GALGAS_char var_lookedUpChar_68724 = temp_18.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2238)) ;
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2240)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2241)), object->mProperty_value.getter_containsCharacter (var_lookedUpChar_68724 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2239)) ;
            }
          }
          if (kBoolFalse == test_17) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2244)).objectCompare (GALGAS_string ("containsCharInRange"))).boolEnum () ;
              if (kBoolTrue == test_19) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2245)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2245)) ;
                }
                GALGAS_gtlChar temp_20 ;
                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2246)).isValid ()) {
                  if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2246)).ptr ())) {
                    temp_20 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2246)).ptr () ;
                  }else{
                    inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2246)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2246)) ;
                  }
                }
                GALGAS_char var_minChar_69047 = temp_20.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2246)) ;
                GALGAS_gtlChar temp_21 ;
                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).isValid ()) {
                  if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr ())) {
                    temp_21 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr () ;
                  }else{
                    inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
                  }
                }
                GALGAS_char var_maxChar_69114 = temp_21.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2249)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2250)), object->mProperty_value.getter_containsCharacterInRange (var_minChar_69047, var_maxChar_69114 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2251))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2248)) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                test_22 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2253)).objectCompare (GALGAS_string ("HTMLRepresentation"))).boolEnum () ;
                if (kBoolTrue == test_22) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)) ;
                  }
                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2256)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2256)), object->mProperty_value.getter_HTMLRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2256))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2255)) ;
                }
              }
              if (kBoolFalse == test_22) {
                enumGalgasBool test_23 = kBoolTrue ;
                if (kBoolTrue == test_23) {
                  test_23 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2258)).objectCompare (GALGAS_string ("identifierRepresentation"))).boolEnum () ;
                  if (kBoolTrue == test_23) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2259)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2259)) ;
                    }
                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2261)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2261)), object->mProperty_value.getter_identifierRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2261))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2260)) ;
                  }
                }
                if (kBoolFalse == test_23) {
                  enumGalgasBool test_24 = kBoolTrue ;
                  if (kBoolTrue == test_24) {
                    test_24 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2263)).objectCompare (GALGAS_string ("fileExists"))).boolEnum () ;
                    if (kBoolTrue == test_24) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2264)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2264)) ;
                      }
                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2266)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2266)), object->mProperty_value.getter_fileExists (SOURCE_FILE ("gtl_data_types.galgas", 2266))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2265)) ;
                    }
                  }
                  if (kBoolFalse == test_24) {
                    enumGalgasBool test_25 = kBoolTrue ;
                    if (kBoolTrue == test_25) {
                      test_25 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2268)).objectCompare (GALGAS_string ("lowercaseString"))).boolEnum () ;
                      if (kBoolTrue == test_25) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2269)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2269)) ;
                        }
                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2271)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2271)), object->mProperty_value.getter_lowercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2271))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2270)) ;
                      }
                    }
                    if (kBoolFalse == test_25) {
                      enumGalgasBool test_26 = kBoolTrue ;
                      if (kBoolTrue == test_26) {
                        test_26 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2273)).objectCompare (GALGAS_string ("length"))).boolEnum () ;
                        if (kBoolTrue == test_26) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)) ;
                          }
                          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2276)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2276)), object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2276)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2276))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                        }
                      }
                      if (kBoolFalse == test_26) {
                        enumGalgasBool test_27 = kBoolTrue ;
                        if (kBoolTrue == test_27) {
                          GALGAS_bool test_28 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2278)).objectCompare (GALGAS_string ("capitalized"))) ;
                          if (kBoolTrue != test_28.boolEnum ()) {
                            test_28 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2279)))) ;
                          }
                          test_27 = test_28.boolEnum () ;
                          if (kBoolTrue == test_27) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)) ;
                            }
                            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2282)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2282)), object->mProperty_value.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("gtl_data_types.galgas", 2282))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                          }
                        }
                        if (kBoolFalse == test_27) {
                          enumGalgasBool test_29 = kBoolTrue ;
                          if (kBoolTrue == test_29) {
                            test_29 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2284)).objectCompare (GALGAS_string ("uppercaseString"))).boolEnum () ;
                            if (kBoolTrue == test_29) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2285)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2285)) ;
                              }
                              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2287)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)), object->mProperty_value.getter_uppercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2287))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)) ;
                            }
                          }
                          if (kBoolFalse == test_29) {
                            enumGalgasBool test_30 = kBoolTrue ;
                            if (kBoolTrue == test_30) {
                              test_30 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2289)).objectCompare (GALGAS_string ("unsigned"))).boolEnum () ;
                              if (kBoolTrue == test_30) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)) ;
                                }
                                result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2292)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2292)), object->mProperty_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2292)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2292))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2291)) ;
                              }
                            }
                            if (kBoolFalse == test_30) {
                              enumGalgasBool test_31 = kBoolTrue ;
                              if (kBoolTrue == test_31) {
                                test_31 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2294)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                                if (kBoolTrue == test_31) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2295)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2295)) ;
                                  }
                                  GALGAS_gtlString temp_32 ;
                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2296)).isValid ()) {
                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2296)).ptr ())) {
                                      temp_32 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2296)).ptr () ;
                                    }else{
                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2296)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2296)) ;
                                    }
                                  }
                                  GALGAS_string var_subString_71263 = temp_32.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2296)) ;
                                  GALGAS_uint var_subStringLength_71340 = var_subString_71263.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2297)) ;
                                  GALGAS_uint var_start_71377 = GALGAS_uint ((uint32_t) 0U) ;
                                  GALGAS_uint var_stop_71396 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2299)).substract_operation (var_subStringLength_71340, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                  GALGAS_bool var_exists_71448 = GALGAS_bool (false) ;
                                  if (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2301)).isValid ()) {
                                    uint32_t variant_71466 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2301)).uintValue () ;
                                    bool loop_71466 = true ;
                                    while (loop_71466) {
                                      GALGAS_bool test_33 = var_exists_71448.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2302)) ;
                                      if (kBoolTrue == test_33.boolEnum ()) {
                                        test_33 = GALGAS_bool (kIsInfOrEqual, var_start_71377.objectCompare (var_stop_71396)) ;
                                      }
                                      loop_71466 = test_33.isValid () ;
                                      if (loop_71466) {
                                        loop_71466 = test_33.boolValue () ;
                                      }
                                      if (loop_71466 && (0 == variant_71466)) {
                                        loop_71466 = false ;
                                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2301)) ;
                                      }
                                      if (loop_71466) {
                                        variant_71466 -- ;
                                        enumGalgasBool test_34 = kBoolTrue ;
                                        if (kBoolTrue == test_34) {
                                          test_34 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_subString (var_start_71377, var_subStringLength_71340 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303)).objectCompare (var_subString_71263)).boolEnum () ;
                                          if (kBoolTrue == test_34) {
                                            var_exists_71448 = GALGAS_bool (true) ;
                                          }
                                        }
                                        var_start_71377.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2306)) ;
                                      }
                                    }
                                  }
                                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2309)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2309)), var_exists_71448  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2308)) ;
                                }
                              }
                              if (kBoolFalse == test_31) {
                                enumGalgasBool test_35 = kBoolTrue ;
                                if (kBoolTrue == test_35) {
                                  test_35 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2311)).objectCompare (GALGAS_string ("leftSubString"))).boolEnum () ;
                                  if (kBoolTrue == test_35) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2312)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2312)) ;
                                    }
                                    GALGAS_gtlInt temp_36 ;
                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)).isValid ()) {
                                      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)).ptr ())) {
                                        temp_36 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)).ptr () ;
                                      }else{
                                        inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)) ;
                                      }
                                    }
                                    GALGAS_uint var_index_71874 = temp_36.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2313)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)) ;
                                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2315)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)), object->mProperty_value.getter_leftSubString (var_index_71874 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)) ;
                                  }
                                }
                                if (kBoolFalse == test_35) {
                                  enumGalgasBool test_37 = kBoolTrue ;
                                  if (kBoolTrue == test_37) {
                                    test_37 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2317)).objectCompare (GALGAS_string ("rightSubString"))).boolEnum () ;
                                    if (kBoolTrue == test_37) {
                                      {
                                      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2318)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2318)) ;
                                      }
                                      GALGAS_gtlInt temp_38 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).ptr ())) {
                                          temp_38 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)) ;
                                        }
                                      }
                                      GALGAS_uint var_index_72167 = temp_38.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2319)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)) ;
                                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2321)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2321)), object->mProperty_value.getter_rightSubString (var_index_72167 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2321))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2320)) ;
                                    }
                                  }
                                  if (kBoolFalse == test_37) {
                                    enumGalgasBool test_39 = kBoolTrue ;
                                    if (kBoolTrue == test_39) {
                                      test_39 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2323)).objectCompare (GALGAS_string ("subString"))).boolEnum () ;
                                      if (kBoolTrue == test_39) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)) ;
                                        }
                                        GALGAS_gtlInt temp_40 ;
                                        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)).isValid ()) {
                                          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)).ptr ())) {
                                            temp_40 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)).ptr () ;
                                          }else{
                                            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)) ;
                                          }
                                        }
                                        GALGAS_uint var_start_72460 = temp_40.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2325)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)) ;
                                        GALGAS_gtlInt temp_41 ;
                                        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).isValid ()) {
                                          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr ())) {
                                            temp_41 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr () ;
                                          }else{
                                            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                          }
                                        }
                                        GALGAS_uint var_length_72532 = temp_41.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2326)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2328)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2328)), object->mProperty_value.getter_subString (var_start_72460, var_length_72532 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2328))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2327)) ;
                                      }
                                    }
                                    if (kBoolFalse == test_39) {
                                      enumGalgasBool test_42 = kBoolTrue ;
                                      if (kBoolTrue == test_42) {
                                        test_42 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2330)).objectCompare (GALGAS_string ("reversedString"))).boolEnum () ;
                                        if (kBoolTrue == test_42) {
                                          {
                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2331)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2331)) ;
                                          }
                                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2333)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2333)), object->mProperty_value.getter_reversedString (SOURCE_FILE ("gtl_data_types.galgas", 2333))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2332)) ;
                                        }
                                      }
                                      if (kBoolFalse == test_42) {
                                        enumGalgasBool test_43 = kBoolTrue ;
                                        if (kBoolTrue == test_43) {
                                          test_43 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2335)).objectCompare (GALGAS_string ("componentsSeparatedByString"))).boolEnum () ;
                                          if (kBoolTrue == test_43) {
                                            {
                                            routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2336)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2336)) ;
                                            }
                                            GALGAS_gtlString temp_44 ;
                                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2337)).isValid ()) {
                                              if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2337)).ptr ())) {
                                                temp_44 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2337)).ptr () ;
                                              }else{
                                                inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2337)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2337)) ;
                                              }
                                            }
                                            GALGAS_string var_separator_73066 = temp_44.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2337)) ;
                                            GALGAS_stringlist var_stringlist_73144 = object->mProperty_value.getter_componentsSeparatedByString (var_separator_73066 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)) ;
                                            GALGAS_list var_components_73214 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2339)) ;
                                            cEnumerator_stringlist enumerator_73255 (var_stringlist_73144, kENUMERATION_UP) ;
                                            while (enumerator_73255.hasCurrentObject ()) {
                                              var_components_73214.addAssign_operation (GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2342)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2342)), enumerator_73255.current_mValue (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2341))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2341)) ;
                                              enumerator_73255.gotoNextObject () ;
                                            }
                                            result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2346)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2346)), var_components_73214  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2345)) ;
                                          }
                                        }
                                        if (kBoolFalse == test_43) {
                                          enumGalgasBool test_45 = kBoolTrue ;
                                          if (kBoolTrue == test_45) {
                                            test_45 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2348)).objectCompare (GALGAS_string ("interpretEscape"))).boolEnum () ;
                                            if (kBoolTrue == test_45) {
                                              TC_Array <C_FixItDescription> fixItArray46 ;
                                              inCompiler->emitSemanticWarning (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2349)), GALGAS_string ("deprecated method"), fixItArray46  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2349)) ;
                                              const GALGAS_gtlString temp_47 = object ;
                                              result_result = temp_47 ;
                                            }
                                          }
                                          if (kBoolFalse == test_45) {
                                            enumGalgasBool test_48 = kBoolTrue ;
                                            if (kBoolTrue == test_48) {
                                              test_48 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2351)).objectCompare (GALGAS_string ("columnPrefixedBy"))).boolEnum () ;
                                              if (kBoolTrue == test_48) {
                                                {
                                                routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)) ;
                                                }
                                                GALGAS_gtlString temp_49 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)).ptr ())) {
                                                    temp_49 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)) ;
                                                  }
                                                }
                                                GALGAS_string var_prefix_73707 = temp_49.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2353)) ;
                                                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2355)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2356)), var_prefix_73707.add_operation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357)).getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\n").add_operation (var_prefix_73707, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2354)) ;
                                              }
                                            }
                                            if (kBoolFalse == test_48) {
                                              enumGalgasBool test_50 = kBoolTrue ;
                                              if (kBoolTrue == test_50) {
                                                test_50 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2359)).objectCompare (GALGAS_string ("wrap"))).boolEnum () ;
                                                if (kBoolTrue == test_50) {
                                                  {
                                                  routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)) ;
                                                  }
                                                  GALGAS_gtlInt temp_51 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)).ptr ())) {
                                                      temp_51 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)) ;
                                                    }
                                                  }
                                                  GALGAS_uint var_width_74044 = temp_51.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2361)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)) ;
                                                  GALGAS_gtlInt temp_52 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr ())) {
                                                      temp_52 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)) ;
                                                    }
                                                  }
                                                  GALGAS_uint var_shift_74115 = temp_52.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2362)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)) ;
                                                  GALGAS_string var_stringShift_74194 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_shift_74115  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2363)) ;
                                                  GALGAS_stringlist var_paragraphs_74271 = object->mProperty_value.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2364)) ;
                                                  GALGAS_stringlist var_resultParagraphs_74352 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2365)) ;
                                                  cEnumerator_stringlist enumerator_74401 (var_paragraphs_74271, kENUMERATION_UP) ;
                                                  while (enumerator_74401.hasCurrentObject ()) {
                                                    GALGAS_stringlist var_words_74428 = enumerator_74401.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string (" ") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2367)) ;
                                                    GALGAS_uint var_lineWidth_74497 = GALGAS_uint ((uint32_t) 0U) ;
                                                    GALGAS_string var_line_74520 = GALGAS_string::makeEmptyString () ;
                                                    cEnumerator_stringlist enumerator_74551 (var_words_74428, kENUMERATION_UP) ;
                                                    while (enumerator_74551.hasCurrentObject ()) {
                                                      enumGalgasBool test_53 = kBoolTrue ;
                                                      if (kBoolTrue == test_53) {
                                                        test_53 = GALGAS_bool (kIsNotEqual, enumerator_74551.current_mValue (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                                        if (kBoolTrue == test_53) {
                                                          enumGalgasBool test_54 = kBoolTrue ;
                                                          if (kBoolTrue == test_54) {
                                                            test_54 = GALGAS_bool (kIsStrictSup, var_lineWidth_74497.add_operation (enumerator_74551.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2372)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2372)).objectCompare (var_width_74044)).boolEnum () ;
                                                            if (kBoolTrue == test_54) {
                                                              var_line_74520.plusAssign_operation(GALGAS_string ("\n").add_operation (var_stringShift_74194, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2373)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2373)) ;
                                                              var_lineWidth_74497 = var_shift_74115 ;
                                                            }
                                                          }
                                                          var_lineWidth_74497.plusAssign_operation(enumerator_74551.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2376)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2376)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2376)) ;
                                                          var_line_74520.plusAssign_operation(enumerator_74551.current_mValue (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2377)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2377)) ;
                                                        }
                                                      }
                                                      enumerator_74551.gotoNextObject () ;
                                                    }
                                                    var_resultParagraphs_74352.addAssign_operation (var_line_74520  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2380)) ;
                                                    enumerator_74401.gotoNextObject () ;
                                                  }
                                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2383)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2384)), GALGAS_string::constructor_componentsJoinedByString (var_resultParagraphs_74352, GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2382)) ;
                                                }
                                              }
                                              if (kBoolFalse == test_50) {
                                                enumGalgasBool test_55 = kBoolTrue ;
                                                if (kBoolTrue == test_55) {
                                                  test_55 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2387)).objectCompare (GALGAS_string ("replaceString"))).boolEnum () ;
                                                  if (kBoolTrue == test_55) {
                                                    {
                                                    routine_argumentsCheck (constinArgument_methodName, function_stringStringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2388)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2388)) ;
                                                    }
                                                    GALGAS_gtlString temp_56 ;
                                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389)).isValid ()) {
                                                      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389)).ptr ())) {
                                                        temp_56 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389)).ptr () ;
                                                      }else{
                                                        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389)) ;
                                                      }
                                                    }
                                                    GALGAS_string var_find_75148 = temp_56.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2389)) ;
                                                    GALGAS_gtlString temp_57 ;
                                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).isValid ()) {
                                                      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr ())) {
                                                        temp_57 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr () ;
                                                      }else{
                                                        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)) ;
                                                      }
                                                    }
                                                    GALGAS_string var_rep_75215 = temp_57.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2390)) ;
                                                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2392)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2393)), object->mProperty_value.getter_stringByReplacingStringByString (var_find_75148, var_rep_75215, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2394))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2391)) ;
                                                  }
                                                }
                                                if (kBoolFalse == test_55) {
                                                  enumGalgasBool test_58 = kBoolTrue ;
                                                  if (kBoolTrue == test_58) {
                                                    test_58 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2396)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                                                    if (kBoolTrue == test_58) {
                                                      {
                                                      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)) ;
                                                      }
                                                      GALGAS_gtlString temp_59 ;
                                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)).isValid ()) {
                                                        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)).ptr ())) {
                                                          temp_59 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)).ptr () ;
                                                        }else{
                                                          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)) ;
                                                        }
                                                      }
                                                      GALGAS_string var_subString_75550 = callExtensionGetter_string ((const cPtr_gtlString *) temp_59.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)) ;
                                                      GALGAS_uint var_subLength_75622 = var_subString_75550.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2399)) ;
                                                      GALGAS_uint var_start_75659 = GALGAS_uint ((uint32_t) 0U) ;
                                                      GALGAS_uint var_stop_75678 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2401)).substract_operation (var_subLength_75622, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2401)) ;
                                                      GALGAS_bool var_exists_75724 = GALGAS_bool (false) ;
                                                      if (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2403)).isValid ()) {
                                                        uint32_t variant_75741 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2403)).uintValue () ;
                                                        bool loop_75741 = true ;
                                                        while (loop_75741) {
                                                          loop_75741 = GALGAS_bool (kIsInfOrEqual, var_start_75659.objectCompare (var_stop_75678)).operator_and (var_exists_75724.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2404)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)).isValid () ;
                                                          if (loop_75741) {
                                                            loop_75741 = GALGAS_bool (kIsInfOrEqual, var_start_75659.objectCompare (var_stop_75678)).operator_and (var_exists_75724.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2404)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)).boolValue () ;
                                                          }
                                                          if (loop_75741 && (0 == variant_75741)) {
                                                            loop_75741 = false ;
                                                            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2403)) ;
                                                          }
                                                          if (loop_75741) {
                                                            variant_75741 -- ;
                                                            enumGalgasBool test_60 = kBoolTrue ;
                                                            if (kBoolTrue == test_60) {
                                                              test_60 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_subString (var_start_75659, var_subLength_75622 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2405)).objectCompare (var_subString_75550)).boolEnum () ;
                                                              if (kBoolTrue == test_60) {
                                                                var_exists_75724 = GALGAS_bool (true) ;
                                                              }
                                                            }
                                                            var_start_75659.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2408)) ;
                                                          }
                                                        }
                                                      }
                                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2411)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2412)), var_exists_75724  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2410)) ;
                                                    }
                                                  }
                                                  if (kBoolFalse == test_58) {
                                                    enumGalgasBool test_61 = kBoolTrue ;
                                                    if (kBoolTrue == test_61) {
                                                      test_61 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2415)).objectCompare (GALGAS_string ("envVarExists"))).boolEnum () ;
                                                      if (kBoolTrue == test_61) {
                                                        {
                                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2416)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2416)) ;
                                                        }
                                                        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2418)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2419)), object->mProperty_value.getter_doesEnvironmentVariableExist (SOURCE_FILE ("gtl_data_types.galgas", 2420))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2417)) ;
                                                      }
                                                    }
                                                    if (kBoolFalse == test_61) {
                                                      enumGalgasBool test_62 = kBoolTrue ;
                                                      if (kBoolTrue == test_62) {
                                                        test_62 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2422)).objectCompare (GALGAS_string ("envVar"))).boolEnum () ;
                                                        if (kBoolTrue == test_62) {
                                                          {
                                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2423)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2423)) ;
                                                          }
                                                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2425)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2426)), GALGAS_string::constructor_stringWithEnvironmentVariableOrEmpty (object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2427))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2424)) ;
                                                        }
                                                      }
                                                      if (kBoolFalse == test_62) {
                                                        enumGalgasBool test_63 = kBoolTrue ;
                                                        if (kBoolTrue == test_63) {
                                                          test_63 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2429)))).boolEnum () ;
                                                          if (kBoolTrue == test_63) {
                                                            {
                                                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)) ;
                                                            }
                                                            const GALGAS_gtlString temp_64 = object ;
                                                            result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2432)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2432)), temp_64.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2432))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2431)) ;
                                                          }
                                                        }
                                                        if (kBoolFalse == test_63) {
                                                          enumGalgasBool test_65 = kBoolTrue ;
                                                          if (kBoolTrue == test_65) {
                                                            test_65 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2434)))).boolEnum () ;
                                                            if (kBoolTrue == test_65) {
                                                              {
                                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2435)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2435)) ;
                                                              }
                                                              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2437)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2436)) ;
                                                            }
                                                          }
                                                          if (kBoolFalse == test_65) {
                                                            enumGalgasBool test_66 = kBoolTrue ;
                                                            if (kBoolTrue == test_66) {
                                                              test_66 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2439)))).boolEnum () ;
                                                              if (kBoolTrue == test_66) {
                                                                {
                                                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2440)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2440)) ;
                                                                }
                                                                result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2442)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2442)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2442))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2441)) ;
                                                              }
                                                            }
                                                            if (kBoolFalse == test_66) {
                                                              enumGalgasBool test_67 = kBoolTrue ;
                                                              if (kBoolTrue == test_67) {
                                                                test_67 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2444)).boolEnum () ;
                                                                if (kBoolTrue == test_67) {
                                                                  const GALGAS_gtlString temp_68 = object ;
                                                                  result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2445)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2446)), constinArgument_context, constinArgument_lib, temp_68, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2445)) ;
                                                                }
                                                              }
                                                              if (kBoolFalse == test_67) {
                                                                TC_Array <C_FixItDescription> fixItArray69 ;
                                                                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2453)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2453)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)), fixItArray69  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2453)) ;
                                                                result_result.drop () ; // Release error dropped variable
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlString_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionGetter_gtlString_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlString_performGetter (defineExtensionGetter_gtlString_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlString performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlString_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_gtlContext constinArgument_context,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlString * object = (cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2467)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2468)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2468)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2469)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2469)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2469)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2469)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2469)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_77867 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_77867.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2470)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2470)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2471)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2472)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2473)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2473)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2474)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("setCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2475)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_charIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2476)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2476)) ;
          }
          GALGAS_gtlChar temp_4 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2477)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2477)).ptr ())) {
              temp_4 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2477)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2477)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2477)) ;
            }
          }
          GALGAS_char var_charToSet_78223 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2477)) ;
          GALGAS_gtlInt temp_5 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr ())) {
              temp_5 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr () ;
            }else{
              inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)) ;
            }
          }
          GALGAS_uint var_index_78288 = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2478)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)) ;
          {
          object->mProperty_value.setter_setCharacterAtIndex (var_charToSet_78223, var_index_78288, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2479)) ;
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2480)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("insertCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2481)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_charIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2482)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2482)) ;
            }
            GALGAS_gtlChar temp_7 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2483)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2483)).ptr ())) {
                temp_7 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2483)).ptr () ;
              }else{
                inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2483)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2483)) ;
              }
            }
            GALGAS_char var_charToInsert_78551 = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2483)) ;
            GALGAS_gtlInt temp_8 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr ())) {
                temp_8 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr () ;
              }else{
                inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)) ;
              }
            }
            GALGAS_uint var_index_78616 = temp_8.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2484)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)) ;
            {
            object->mProperty_value.setter_insertCharacterAtIndex (var_charToInsert_78551, var_index_78616, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2485)) ;
            }
            object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2486)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("removeCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2487)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2488)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2488)) ;
              }
              GALGAS_gtlInt temp_10 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)).ptr ())) {
                  temp_10 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)).ptr () ;
                }else{
                  inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)) ;
                }
              }
              GALGAS_uint var_index_78873 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2489)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)) ;
              {
              GALGAS_char joker_78966 ; // Joker input parameter
              object->mProperty_value.setter_removeCharacterAtIndex (joker_78966, var_index_78873, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2490)) ;
              }
              object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2491)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2492)).boolEnum () ;
              if (kBoolTrue == test_11) {
                const GALGAS_gtlString temp_12 = object ;
                GALGAS_gtlData var_copy_79070 = temp_12 ;
                callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2494)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2495)), constinArgument_context, constinArgument_lib, var_copy_79070, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2494)) ;
                GALGAS_gtlString temp_13 ;
                if (var_copy_79070.isValid ()) {
                  if (NULL != dynamic_cast <const cPtr_gtlString *> (var_copy_79070.ptr ())) {
                    temp_13 = (cPtr_gtlString *) var_copy_79070.ptr () ;
                  }else{
                    inCompiler->castError ("gtlString", var_copy_79070.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2501)) ;
                  }
                }
                object->mProperty_value = temp_13.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2501)) ;
                object->mProperty_where = var_copy_79070.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2502)) ;
                object->mProperty_meta = var_copy_79070.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2503)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2505)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2505)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)), fixItArray14  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)) ;
            }
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlString_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionSetter_gtlString_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlString_performSetter (defineExtensionSetter_gtlString_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlBool_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2518)).add_operation (GALGAS_string ("boolean: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2518)).add_operation (object->mProperty_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2519)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2519)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2519)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_desc (defineExtensionGetter_gtlBool_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlBool_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = object->mProperty_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2522)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_string (defineExtensionGetter_gtlBool_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlBool_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value.getter_cString (SOURCE_FILE ("gtl_data_types.galgas", 2525)), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2525)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_lstring (defineExtensionGetter_gtlBool_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlBool_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_bool (defineExtensionGetter_gtlBool_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlBool_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  GALGAS_bigint temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_value.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2533)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2533)) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                            extensionGetter_gtlBool_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_int (defineExtensionGetter_gtlBool_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlBool_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  GALGAS_double temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_value.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_double (1) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_double (0) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_float (defineExtensionGetter_gtlBool_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2541)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_plusOp (defineExtensionGetter_gtlBool_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2545)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_minusOp (defineExtensionGetter_gtlBool_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2549)), object->mProperty_value.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2549))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2549)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_notOp (defineExtensionGetter_gtlBool_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2553)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_addOp (defineExtensionGetter_gtlBool_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2557)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_subOp (defineExtensionGetter_gtlBool_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2561)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_mulOp (defineExtensionGetter_gtlBool_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2565)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_divOp (defineExtensionGetter_gtlBool_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2569)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_modOp (defineExtensionGetter_gtlBool_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2577)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2576)), object->mProperty_value.operator_and (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2577)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2577))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2574)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2580)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2580)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_andOp (defineExtensionGetter_gtlBool_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2589)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2588)), object->mProperty_value.operator_or (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2589)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2589))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2586)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2592)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2592)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_orOp (defineExtensionGetter_gtlBool_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2601)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2600)), object->mProperty_value.operator_xor (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2601)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2601))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2598)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2604)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2604)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_xorOp (defineExtensionGetter_gtlBool_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2609)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_slOp (defineExtensionGetter_gtlBool_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("bool forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2613)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_srOp (defineExtensionGetter_gtlBool_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2621)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2620)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2621))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2618)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2624)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2624)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_neqOp (defineExtensionGetter_gtlBool_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2633)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2632)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2633))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2630)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2636)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2636)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_eqOp (defineExtensionGetter_gtlBool_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2645)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2644)), GALGAS_bool (kIsStrictSup, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2645))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2642)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2648)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2648)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_gtOp (defineExtensionGetter_gtlBool_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2657)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2656)), GALGAS_bool (kIsSupOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2657))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2654)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2660)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2660)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_geOp (defineExtensionGetter_gtlBool_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2669)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2668)), GALGAS_bool (kIsStrictInf, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2669))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2666)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2672)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2672)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_ltOp (defineExtensionGetter_gtlBool_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlBool temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlBool *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlBool", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2681)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2680)), GALGAS_bool (kIsInfOrEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2681))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2678)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2684)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2684)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_leOp (defineExtensionGetter_gtlBool_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlBool_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_bool) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                     extensionGetter_gtlBool_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_embeddedType (defineExtensionGetter_gtlBool_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlBool addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlBool_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2695))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2695)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlBool_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                   extensionMethod_gtlBool_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlBool_addMyValue (defineExtensionMethod_gtlBool_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlBool performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlBool_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2708)).objectCompare (GALGAS_string ("trueOrFalse"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2709)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2709)) ;
      }
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = object->mProperty_value.boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("true") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string ("false") ;
      }
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2711)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2712)), temp_1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2710)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2715)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2716)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2716)) ;
        }
        const GALGAS_gtlBool temp_4 = object ;
        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2718)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2719)), callExtensionGetter_string ((const cPtr_gtlBool *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2720))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2717)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2722)).objectCompare (GALGAS_string ("yesOrNo"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2723)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2723)) ;
          }
          GALGAS_string temp_6 ;
          const enumGalgasBool test_7 = object->mProperty_value.boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = GALGAS_string ("yes") ;
          }else if (kBoolFalse == test_7) {
            temp_6 = GALGAS_string ("no") ;
          }
          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2725)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2726)), temp_6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2724)) ;
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2729)).objectCompare (GALGAS_string ("TRUEOrFALSE"))).boolEnum () ;
          if (kBoolTrue == test_8) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2730)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2730)) ;
            }
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = object->mProperty_value.boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = GALGAS_string ("TRUE") ;
            }else if (kBoolFalse == test_10) {
              temp_9 = GALGAS_string ("FALSE") ;
            }
            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2732)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2733)), temp_9  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2731)) ;
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2736)).objectCompare (GALGAS_string ("YESOrNO"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2737)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2737)) ;
              }
              GALGAS_string temp_12 ;
              const enumGalgasBool test_13 = object->mProperty_value.boolEnum () ;
              if (kBoolTrue == test_13) {
                temp_12 = GALGAS_string ("YES") ;
              }else if (kBoolFalse == test_13) {
                temp_12 = GALGAS_string ("NO") ;
              }
              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2739)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2740)), temp_12  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2738)) ;
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              GALGAS_bool test_15 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2743)).objectCompare (GALGAS_string ("int"))) ;
              if (kBoolTrue != test_15.boolEnum ()) {
                test_15 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2743)).objectCompare (GALGAS_string ("unsigned"))) ;
              }
              test_14 = test_15.boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2744)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2744)) ;
                }
                GALGAS_bigint temp_16 ;
                const enumGalgasBool test_17 = object->mProperty_value.boolEnum () ;
                if (kBoolTrue == test_17) {
                  temp_16 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2748)) ;
                }else if (kBoolFalse == test_17) {
                  temp_16 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2748)) ;
                }
                result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2746)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2747)), temp_16  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2745)) ;
              }
            }
            if (kBoolFalse == test_14) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2750)))).boolEnum () ;
                if (kBoolTrue == test_18) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2751)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2751)) ;
                  }
                  const GALGAS_gtlBool temp_19 = object ;
                  result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2753)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2753)), temp_19.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2753))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2752)) ;
                }
              }
              if (kBoolFalse == test_18) {
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2755)))).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2756)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2756)) ;
                    }
                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2758)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2758)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2757)) ;
                  }
                }
                if (kBoolFalse == test_20) {
                  enumGalgasBool test_21 = kBoolTrue ;
                  if (kBoolTrue == test_21) {
                    test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2760)))).boolEnum () ;
                    if (kBoolTrue == test_21) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2761)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2761)) ;
                      }
                      result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2763)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2763)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2763))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2762)) ;
                    }
                  }
                  if (kBoolFalse == test_21) {
                    enumGalgasBool test_22 = kBoolTrue ;
                    if (kBoolTrue == test_22) {
                      test_22 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2765)).boolEnum () ;
                      if (kBoolTrue == test_22) {
                        const GALGAS_gtlBool temp_23 = object ;
                        result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2766)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2767)), constinArgument_context, constinArgument_lib, temp_23, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2766)) ;
                      }
                    }
                    if (kBoolFalse == test_22) {
                      TC_Array <C_FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2774)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2774)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2774)).add_operation (GALGAS_string ("' for boolean target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2774)), fixItArray24  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2774)) ;
                      result_result.drop () ; // Release error dropped variable
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlBool_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionGetter_gtlBool_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlBool_performGetter (defineExtensionGetter_gtlBool_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlBool performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlBool_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlBool * object = (cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2788)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2789)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2789)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2790)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2790)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2790)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2790)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2790)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_87307 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_87307.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2791)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2791)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2792)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2793)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2794)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2794)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2795)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2796)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_gtlBool temp_4 = object ;
          GALGAS_gtlData var_copy_87603 = temp_4 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2798)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2799)), constinArgument_context, constinArgument_lib, var_copy_87603, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2798)) ;
          GALGAS_gtlBool temp_5 ;
          if (var_copy_87603.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_copy_87603.ptr ())) {
              temp_5 = (cPtr_gtlBool *) var_copy_87603.ptr () ;
            }else{
              inCompiler->castError ("gtlBool", var_copy_87603.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2805)) ;
            }
          }
          object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2805)) ;
          object->mProperty_where = var_copy_87603.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2806)) ;
          object->mProperty_meta = var_copy_87603.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2807)) ;
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2809)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2809)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)).add_operation (GALGAS_string ("' for boolean target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlBool_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionSetter_gtlBool_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlBool_performSetter (defineExtensionSetter_gtlBool_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlSet_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2833)).add_operation (GALGAS_string ("set: @!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2833)) ;
  cEnumerator_lstringset enumerator_88812 (object->mProperty_value, kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_88812.hasCurrentObject () && bool_0) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837)) ;
    while (enumerator_88812.hasCurrentObject () && bool_0) {
      result_result.plusAssign_operation(enumerator_88812.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2839)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2839)) ;
      enumerator_88812.gotoNextObject () ;
      if (enumerator_88812.hasCurrentObject () && bool_0) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2841)) ;
      }
    }
    result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2843)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)).add_operation (GALGAS_string ("!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_desc (defineExtensionGetter_gtlSet_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlSet_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a set to a string"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2849)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_string (defineExtensionGetter_gtlSet_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlSet_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a set to a lstring"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2853)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_lstring (defineExtensionGetter_gtlSet_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlSet_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a set to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2857)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_bool (defineExtensionGetter_gtlSet_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlSet_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a set to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2861)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                            extensionGetter_gtlSet_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_int (defineExtensionGetter_gtlSet_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlSet_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a set to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2865)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_float (defineExtensionGetter_gtlSet_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2869)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_plusOp (defineExtensionGetter_gtlSet_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2873)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_minusOp (defineExtensionGetter_gtlSet_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2877)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_notOp (defineExtensionGetter_gtlSet_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  GALGAS_lstringset var_set_89977 = object->mProperty_value ;
  GALGAS_lstring var_element_90004 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2882)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_set_89977.getter_hasKey (var_element_90004.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2883)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2883)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_set_89977.setter_del (var_element_90004, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2884)) ;
      }
    }
  }
  {
  var_set_89977.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2886)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2886)) ;
  }
  result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2887)), var_set_89977  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2887)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_addOp (defineExtensionGetter_gtlSet_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstringset var_resultSet_90301 = object->mProperty_value ;
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2893)) ;
        }
      }
      cEnumerator_lstringset enumerator_90352 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2893)), kENUMERATION_UP) ;
      while (enumerator_90352.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_resultSet_90301.getter_hasKey (enumerator_90352.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2894)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2894)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_resultSet_90301.setter_del (enumerator_90352.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2895)) ;
            }
          }
        }
        enumerator_90352.gotoNextObject () ;
      }
      result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2899)), var_resultSet_90301  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2898)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2902)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2902)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_subOp (defineExtensionGetter_gtlSet_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2907)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_mulOp (defineExtensionGetter_gtlSet_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2911)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_divOp (defineExtensionGetter_gtlSet_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2915)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_modOp (defineExtensionGetter_gtlSet_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstringset var_resultSet_91068 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 2920)) ;
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2921)) ;
        }
      }
      cEnumerator_lstringset enumerator_91127 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2921)), kENUMERATION_UP) ;
      while (enumerator_91127.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = object->mProperty_value.getter_hasKey (enumerator_91127.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2922)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2922)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_resultSet_91068.setter_put (enumerator_91127.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2923)) ;
            }
          }
        }
        enumerator_91127.gotoNextObject () ;
      }
      result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2927)), var_resultSet_91068  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2926)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2930)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2930)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_andOp (defineExtensionGetter_gtlSet_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2936)) ;
        }
      }
      GALGAS_lstringset var_resultSet_91480 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2936)) ;
      cEnumerator_lstringset enumerator_91534 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_91534.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_resultSet_91480.getter_hasKey (enumerator_91534.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2938)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2938)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2938)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_resultSet_91480.setter_put (enumerator_91534.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2939)) ;
            }
          }
        }
        enumerator_91534.gotoNextObject () ;
      }
      result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2943)), var_resultSet_91480  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2942)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2946)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2946)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_orOp (defineExtensionGetter_gtlSet_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2951)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_xorOp (defineExtensionGetter_gtlSet_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2955)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_slOp (defineExtensionGetter_gtlSet_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("set forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2959)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_srOp (defineExtensionGetter_gtlSet_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2965)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2965)), GALGAS_bool (kIsNotEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2965))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2964)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2968)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2968)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_neqOp (defineExtensionGetter_gtlSet_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2975)) ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2975)), GALGAS_bool (kIsEqual, object->mProperty_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2975))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2974)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2978)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2978)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_eqOp (defineExtensionGetter_gtlSet_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_gtlSet temp_2 ;
        if (constinArgument_right.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
            temp_2 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
          }else{
            inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2984)) ;
          }
        }
        test_1 = GALGAS_bool (kIsEqual, temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2984)).objectCompare (object->mProperty_value)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2985)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2985)) ;
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_bool var_included_92882 = GALGAS_bool (true) ;
        GALGAS_gtlSet temp_3 ;
        if (constinArgument_right.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
            temp_3 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
          }else{
            inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2988)) ;
          }
        }
        cEnumerator_lstringset enumerator_92933 (temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2988)), kENUMERATION_UP) ;
        bool bool_4 = var_included_92882.isValidAndTrue () ;
        if (enumerator_92933.hasCurrentObject () && bool_4) {
          while (enumerator_92933.hasCurrentObject () && bool_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = object->mProperty_value.getter_hasKey (enumerator_92933.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2989)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2989)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2989)).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_included_92882 = GALGAS_bool (false) ;
              }
            }
            enumerator_92933.gotoNextObject () ;
            if (enumerator_92933.hasCurrentObject ()) {
              bool_4 = var_included_92882.isValidAndTrue () ;
            }
          }
        }
        result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2991)), var_included_92882  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2991)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2994)), GALGAS_string ("set expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2994)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_gtOp (defineExtensionGetter_gtlSet_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_included_93272 = GALGAS_bool (true) ;
      GALGAS_gtlSet temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3001)) ;
        }
      }
      cEnumerator_lstringset enumerator_93321 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3001)), kENUMERATION_UP) ;
      bool bool_2 = var_included_93272.isValidAndTrue () ;
      if (enumerator_93321.hasCurrentObject () && bool_2) {
        while (enumerator_93321.hasCurrentObject () && bool_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = object->mProperty_value.getter_hasKey (enumerator_93321.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3002)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3002)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3002)).boolEnum () ;
            if (kBoolTrue == test_3) {
              var_included_93272 = GALGAS_bool (false) ;
            }
          }
          enumerator_93321.gotoNextObject () ;
          if (enumerator_93321.hasCurrentObject ()) {
            bool_2 = var_included_93272.isValidAndTrue () ;
          }
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3004)), var_included_93272  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3004)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3006)), GALGAS_string ("set expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3006)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_geOp (defineExtensionGetter_gtlSet_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        GALGAS_gtlSet temp_2 ;
        if (constinArgument_right.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
            temp_2 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
          }else{
            inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3012)) ;
          }
        }
        test_1 = GALGAS_bool (kIsEqual, temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3012)).objectCompare (object->mProperty_value)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3013)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3013)) ;
        }
      }
      if (kBoolFalse == test_1) {
        GALGAS_bool var_included_93765 = GALGAS_bool (true) ;
        cEnumerator_lstringset enumerator_93797 (object->mProperty_value, kENUMERATION_UP) ;
        bool bool_3 = var_included_93765.isValidAndTrue () ;
        if (enumerator_93797.hasCurrentObject () && bool_3) {
          while (enumerator_93797.hasCurrentObject () && bool_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              GALGAS_gtlSet temp_5 ;
              if (constinArgument_right.isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
                  temp_5 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
                }else{
                  inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3017)) ;
                }
              }
              test_4 = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3017)).getter_hasKey (enumerator_93797.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3017)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3017)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3017)).boolEnum () ;
              if (kBoolTrue == test_4) {
                var_included_93765 = GALGAS_bool (false) ;
              }
            }
            enumerator_93797.gotoNextObject () ;
            if (enumerator_93797.hasCurrentObject ()) {
              bool_3 = var_included_93765.isValidAndTrue () ;
            }
          }
        }
        result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)), var_included_93765  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3022)), GALGAS_string ("set expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3022)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_ltOp (defineExtensionGetter_gtlSet_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_included_94155 = GALGAS_bool (true) ;
      cEnumerator_lstringset enumerator_94185 (object->mProperty_value, kENUMERATION_UP) ;
      bool bool_1 = var_included_94155.isValidAndTrue () ;
      if (enumerator_94185.hasCurrentObject () && bool_1) {
        while (enumerator_94185.hasCurrentObject () && bool_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            GALGAS_gtlSet temp_3 ;
            if (constinArgument_right.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
                temp_3 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
              }else{
                inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3030)) ;
              }
            }
            test_2 = temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3030)).getter_hasKey (enumerator_94185.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3030)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3030)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3030)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_included_94155 = GALGAS_bool (false) ;
            }
          }
          enumerator_94185.gotoNextObject () ;
          if (enumerator_94185.hasCurrentObject ()) {
            bool_1 = var_included_94155.isValidAndTrue () ;
          }
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3032)), var_included_94155  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3032)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3034)), GALGAS_string ("set expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3034)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_leOp (defineExtensionGetter_gtlSet_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlSet_embeddedType (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3040)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                     extensionGetter_gtlSet_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_embeddedType (defineExtensionGetter_gtlSet_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlSet addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlSet_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3045))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3045)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlSet_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                   extensionMethod_gtlSet_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlSet_addMyValue (defineExtensionMethod_gtlSet_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlSet performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlSet_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring constinArgument_methodName,
                                                            const GALGAS_gtlDataList constinArgument_arguments,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3058)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)) ;
      }
      result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3061)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3062)), object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3063)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3063))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3060)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3065)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3066)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3066)) ;
        }
        result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3068)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3068)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3068))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3067)) ;
        cEnumerator_lstringset enumerator_95455 (object->mProperty_value, kENUMERATION_UP) ;
        while (enumerator_95455.hasCurrentObject ()) {
          {
          result_result.insulate (HERE) ;
          cPtr_gtlData * ptr_95474 = (cPtr_gtlData *) result_result.ptr () ;
          callExtensionSetter_appendItem ((cPtr_gtlData *) ptr_95474, GALGAS_gtlString::constructor_new (enumerator_95455.current_lkey (HERE).getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3071)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)), enumerator_95455.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3071))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)) ;
          }
          enumerator_95455.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("contains").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3073)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3074)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3074)) ;
          }
          GALGAS_string var_key_95668 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3075)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3075)) ;
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3077)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3077)), object->mProperty_value.getter_hasKey (var_key_95668 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3077))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3076)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("elementNamed").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3079)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3080)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3080)) ;
            }
            GALGAS_string var_key_95932 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3081)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3081)) ;
            GALGAS_location var_loc_95988 = object->mProperty_value.getter_locationForKey (var_key_95932, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3082)) ;
            result_result = GALGAS_gtlString::constructor_new (var_loc_95988, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3084)), var_key_95932  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3083)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3086)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3087)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3087)) ;
              }
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3089)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3089)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3088)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3091)))).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3092)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3092)) ;
                }
                result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3094)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3094)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3094))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3093)) ;
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3096)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  const GALGAS_gtlSet temp_7 = object ;
                  result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3097)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3098)), constinArgument_context, constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3097)) ;
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3105)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3105)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3105)).add_operation (GALGAS_string ("' for set target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3105)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3105)) ;
                result_result.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlSet_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionGetter_gtlSet_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlSet_performGetter (defineExtensionGetter_gtlSet_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlSet performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlSet_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_gtlContext constinArgument_context,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlSet * object = (cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3119)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3120)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3120)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3121)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3121)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3121)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3121)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3121)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_97226 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_97226.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3122)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3122)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3123)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3124)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3125)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3125)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3126)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("add").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3127)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3128)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3128)) ;
          }
          GALGAS_lstring var_key_97568 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3129)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3129)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = object->mProperty_value.getter_hasKey (var_key_97568.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3130)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3130)).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              object->mProperty_value.setter_del (var_key_97568, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3131)) ;
              }
            }
          }
          {
          object->mProperty_value.setter_put (var_key_97568, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3133)) ;
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3134)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("remove").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3135)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3136)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3136)) ;
            }
            GALGAS_lstring var_key_97834 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3137)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3137)) ;
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = object->mProperty_value.getter_hasKey (var_key_97834.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3138)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3138)).boolEnum () ;
              if (kBoolTrue == test_6) {
                {
                object->mProperty_value.setter_del (var_key_97834, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3139)) ;
                }
              }
            }
            object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3141)) ;
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3142)).boolEnum () ;
            if (kBoolTrue == test_7) {
              const GALGAS_gtlSet temp_8 = object ;
              GALGAS_gtlData var_copy_98030 = temp_8 ;
              callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3144)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3145)), constinArgument_context, constinArgument_lib, var_copy_98030, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3144)) ;
              GALGAS_gtlSet temp_9 ;
              if (var_copy_98030.isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlSet *> (var_copy_98030.ptr ())) {
                  temp_9 = (cPtr_gtlSet *) var_copy_98030.ptr () ;
                }else{
                  inCompiler->castError ("gtlSet", var_copy_98030.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3151)) ;
                }
              }
              object->mProperty_value = temp_9.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3151)) ;
              object->mProperty_where = var_copy_98030.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3152)) ;
              object->mProperty_meta = var_copy_98030.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3153)) ;
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3155)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3155)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)).add_operation (GALGAS_string ("' for set target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)), fixItArray10  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)) ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlSet_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionSetter_gtlSet_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlSet_performSetter (defineExtensionSetter_gtlSet_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlStruct_desc (const cPtr_gtlData * inObject,
                                                     const GALGAS_uint constinArgument_tab,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)).add_operation (GALGAS_string ("struct: @{\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)) ;
  cEnumerator_gtlVarMap enumerator_98779 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_98779.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)).add_operation (enumerator_98779.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3172)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3172)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_98779.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3173)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3173)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3172)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)) ;
    enumerator_98779.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_desc (defineExtensionGetter_gtlStruct_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlStruct_string (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3179)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_string (defineExtensionGetter_gtlStruct_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlStruct_lstring (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3183)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_lstring (defineExtensionGetter_gtlStruct_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlStruct_bool (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a struct to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3187)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_bool (defineExtensionGetter_gtlStruct_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlStruct_int (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a struct to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3191)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                            extensionGetter_gtlStruct_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_int (defineExtensionGetter_gtlStruct_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlStruct_float (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a struct to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3195)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_float (defineExtensionGetter_gtlStruct_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_plusOp (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3199)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_plusOp (defineExtensionGetter_gtlStruct_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_minusOp (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3203)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_minusOp (defineExtensionGetter_gtlStruct_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_notOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3207)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_notOp (defineExtensionGetter_gtlStruct_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_addOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3211)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_addOp (defineExtensionGetter_gtlStruct_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_subOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3215)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_subOp (defineExtensionGetter_gtlStruct_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_mulOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3219)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_mulOp (defineExtensionGetter_gtlStruct_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_divOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3223)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_divOp (defineExtensionGetter_gtlStruct_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_modOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3227)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_modOp (defineExtensionGetter_gtlStruct_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_andOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3231)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_andOp (defineExtensionGetter_gtlStruct_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_orOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3235)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_orOp (defineExtensionGetter_gtlStruct_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_xorOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3239)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_xorOp (defineExtensionGetter_gtlStruct_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_slOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3243)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_slOp (defineExtensionGetter_gtlStruct_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_srOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3247)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_srOp (defineExtensionGetter_gtlStruct_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_neqOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlStruct temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3252)) ;
        }
      }
      GALGAS_gtlVarMap var_rValue_101251 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3252)) ;
      GALGAS_bool var_equal_101297 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3254)).objectCompare (var_rValue_101251.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3254)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_101297 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_101297 = GALGAS_bool (true) ;
        cEnumerator_gtlVarMap enumerator_101422 (object->mProperty_value, kENUMERATION_UP) ;
        while (enumerator_101422.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_rValue_101251.getter_hasKey (enumerator_101422.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3259)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3259)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_gtlData var_rData_101507 ;
              var_rValue_101251.method_get (enumerator_101422.current_lkey (HERE), var_rData_101507, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3260)) ;
              var_equal_101297 = var_equal_101297.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_101422.current_value (HERE).ptr (), var_rData_101507, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)) ;
            }
          }
          if (kBoolFalse == test_3) {
            var_equal_101297 = GALGAS_bool (false) ;
          }
          enumerator_101422.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3267)), var_equal_101297.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3267))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3267)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3269)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3269)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_neqOp (defineExtensionGetter_gtlStruct_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_eqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlStruct temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3275)) ;
        }
      }
      GALGAS_gtlVarMap var_rValue_101883 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3275)) ;
      GALGAS_bool var_equal_101929 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3277)).objectCompare (var_rValue_101883.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3277)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_101929 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_101929 = GALGAS_bool (true) ;
        cEnumerator_gtlVarMap enumerator_102054 (object->mProperty_value, kENUMERATION_UP) ;
        while (enumerator_102054.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_rValue_101883.getter_hasKey (enumerator_102054.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3282)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3282)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_gtlData var_rData_102139 ;
              var_rValue_101883.method_get (enumerator_102054.current_lkey (HERE), var_rData_102139, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3283)) ;
              var_equal_101929 = var_equal_101929.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_102054.current_value (HERE).ptr (), var_rData_102139, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)) ;
            }
          }
          if (kBoolFalse == test_3) {
            var_equal_101929 = GALGAS_bool (false) ;
          }
          enumerator_102054.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3290)), var_equal_101929  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3290)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3292)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3292)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_eqOp (defineExtensionGetter_gtlStruct_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_gtOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3297)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_gtOp (defineExtensionGetter_gtlStruct_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_geOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3300)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_geOp (defineExtensionGetter_gtlStruct_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_ltOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3303)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_ltOp (defineExtensionGetter_gtlStruct_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_leOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3306)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_leOp (defineExtensionGetter_gtlStruct_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlStruct_embeddedType (const cPtr_gtlData * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("struct forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3311)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                     extensionGetter_gtlStruct_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_embeddedType (defineExtensionGetter_gtlStruct_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlStruct addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlStruct_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3316))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3316)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlStruct_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                   extensionMethod_gtlStruct_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlStruct_addMyValue (defineExtensionMethod_gtlStruct_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_performGetter (const cPtr_gtlData * inObject,
                                                               const GALGAS_lstring constinArgument_methodName,
                                                               const GALGAS_gtlDataList constinArgument_arguments,
                                                               const GALGAS_gtlContext constinArgument_context,
                                                               const GALGAS_library constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("map").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3329)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3330)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3330)) ;
      }
      result_result = GALGAS_gtlMap::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3332)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3333)), object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3331)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3336)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3337)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3337)) ;
        }
        const GALGAS_gtlStruct temp_2 = object ;
        result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3339)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3339)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3339))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3338)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3341)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3342)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3342)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3344)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3344)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3343)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3346)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3347)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3347)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3349)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3349)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3349))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3348)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3351)).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_gtlStruct temp_6 = object ;
              result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3352)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3353)), constinArgument_context, constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3352)) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3360)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3360)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)).add_operation (GALGAS_string ("' for struct target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)), fixItArray7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3360)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_performGetter (defineExtensionGetter_gtlStruct_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlStruct performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlStruct_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_gtlContext constinArgument_context,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3374)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3375)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3375)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3376)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_105068 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_105068.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3377)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3377)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3378)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3379)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3380)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3380)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3381)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3382)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_gtlStruct temp_4 = object ;
          GALGAS_gtlData var_copy_105366 = temp_4 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3384)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3385)), constinArgument_context, constinArgument_lib, var_copy_105366, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3384)) ;
          GALGAS_gtlStruct temp_5 ;
          if (var_copy_105366.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlStruct *> (var_copy_105366.ptr ())) {
              temp_5 = (cPtr_gtlStruct *) var_copy_105366.ptr () ;
            }else{
              inCompiler->castError ("gtlStruct", var_copy_105366.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3391)) ;
            }
          }
          object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3391)) ;
          object->mProperty_where = var_copy_105366.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3392)) ;
          object->mProperty_meta = var_copy_105366.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3393)) ;
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3395)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3395)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)).add_operation (GALGAS_string ("' for struct target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlStruct_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionSetter_gtlStruct_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlStruct_performSetter (defineExtensionSetter_gtlStruct_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlStruct structField'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlStruct_structField (const cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   GALGAS_gtlData & outArgument_result,
                                                   GALGAS_bool & outArgument_found,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3407)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3407)).boolEnum () ;
    if (kBoolTrue == test_0) {
      object->mProperty_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3408)) ;
      outArgument_found = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3411)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3411))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3411)) ;
    outArgument_found = GALGAS_bool (false) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlStruct_structField (void) {
  enterExtensionMethod_structField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionMethod_gtlStruct_structField) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlStruct_structField (defineExtensionMethod_gtlStruct_structField, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct resultField'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlStruct_resultField (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_name,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3420)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3420)).boolEnum () ;
    if (kBoolTrue == test_0) {
      object->mProperty_value.method_get (constinArgument_name, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3421)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3423)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3423))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3423)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_resultField (void) {
  enterExtensionGetter_resultField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_resultField) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_resultField (defineExtensionGetter_gtlStruct_resultField, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlStruct hasStructField'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlStruct_hasStructField (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_name,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3434)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3434)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlStruct_hasStructField (void) {
  enterExtensionGetter_hasStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionGetter_gtlStruct_hasStructField) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlStruct_hasStructField (defineExtensionGetter_gtlStruct_hasStructField, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlStruct setStructField'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlStruct_setStructField (cPtr_gtlData * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      const GALGAS_gtlData constinArgument_data,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  extensionSetter_replaceOrCreate (object->mProperty_value, constinArgument_name, constinArgument_data, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3444)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlStruct_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionSetter_gtlStruct_setStructField) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlStruct_setStructField (defineExtensionSetter_gtlStruct_setStructField, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlStruct setStructFieldAtLevel'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlStruct_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_name,
                                                             const GALGAS_gtlData constinArgument_data,
                                                             const GALGAS_uint constinArgument_level,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  extensionSetter_replaceOrCreateAtLevel (object->mProperty_value, constinArgument_name, constinArgument_data, constinArgument_level, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3455)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlStruct_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                              extensionSetter_gtlStruct_setStructFieldAtLevel) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlStruct_setStructFieldAtLevel (defineExtensionSetter_gtlStruct_setStructFieldAtLevel, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlStruct deleteStructField'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlStruct_deleteStructField (cPtr_gtlData * inObject,
                                                         const GALGAS_lstring constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  GALGAS_gtlData joker_107675 ; // Joker input parameter
  object->mProperty_value.setter_del (constinArgument_name, joker_107675, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3464)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlStruct_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                          extensionSetter_gtlStruct_deleteStructField) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlStruct_deleteStructField (defineExtensionSetter_gtlStruct_deleteStructField, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlList_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3476)).add_operation (GALGAS_string ("list: @(\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3476)) ;
  cEnumerator_list enumerator_108089 (object->mProperty_value, kENUMERATION_UP) ;
  GALGAS_uint index_108077 ((uint32_t) 0) ;
  while (enumerator_108089.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)).add_operation (index_108077.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3480)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3480)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_108089.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3481)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3481)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3480)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)) ;
    enumerator_108089.gotoNextObject () ;
    index_108077.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3478)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_desc (defineExtensionGetter_gtlList_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlList_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3487)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_string (defineExtensionGetter_gtlList_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlList_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3491)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_lstring (defineExtensionGetter_gtlList_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlList_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a list to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3495)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_bool (defineExtensionGetter_gtlList_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlList_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a list to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3499)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                            extensionGetter_gtlList_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_int (defineExtensionGetter_gtlList_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlList_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a list to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3503)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_float (defineExtensionGetter_gtlList_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3507)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_plusOp (defineExtensionGetter_gtlList_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3511)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_minusOp (defineExtensionGetter_gtlList_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3515)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_notOp (defineExtensionGetter_gtlList_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_list var_res_109208 = object->mProperty_value ;
  var_res_109208.addAssign_operation (constinArgument_right  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3520)) ;
  result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3521)), var_res_109208  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3521)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_addOp (defineExtensionGetter_gtlList_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3525)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_subOp (defineExtensionGetter_gtlList_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3529)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_mulOp (defineExtensionGetter_gtlList_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3533)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_divOp (defineExtensionGetter_gtlList_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3537)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_modOp (defineExtensionGetter_gtlList_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3541)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_andOp (defineExtensionGetter_gtlList_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlList temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3549)) ;
        }
      }
      result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3548)), object->mProperty_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3549)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3549))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3546)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3552)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3552)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_orOp (defineExtensionGetter_gtlList_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3557)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_xorOp (defineExtensionGetter_gtlList_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3561)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_slOp (defineExtensionGetter_gtlList_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3565)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_srOp (defineExtensionGetter_gtlList_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlList temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3570)) ;
        }
      }
      GALGAS_list var_rValue_110685 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3570)) ;
      GALGAS_bool var_equal_110729 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3572)).objectCompare (var_rValue_110685.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3572)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_110729 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_110729 = GALGAS_bool (true) ;
        cEnumerator_list enumerator_110849 (object->mProperty_value, kENUMERATION_UP) ;
        cEnumerator_list enumerator_110868 (var_rValue_110685, kENUMERATION_UP) ;
        while (enumerator_110849.hasCurrentObject () && enumerator_110868.hasCurrentObject ()) {
          var_equal_110729 = var_equal_110729.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_110849.current_value (HERE).ptr (), enumerator_110868.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)) ;
          enumerator_110849.gotoNextObject () ;
          enumerator_110868.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3580)), var_equal_110729.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3580))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3580)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3582)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3582)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_neqOp (defineExtensionGetter_gtlList_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlList temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3588)) ;
        }
      }
      GALGAS_list var_rValue_111182 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3588)) ;
      GALGAS_bool var_equal_111226 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3590)).objectCompare (var_rValue_111182.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3590)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_111226 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_111226 = GALGAS_bool (true) ;
        cEnumerator_list enumerator_111346 (object->mProperty_value, kENUMERATION_UP) ;
        cEnumerator_list enumerator_111365 (var_rValue_111182, kENUMERATION_UP) ;
        while (enumerator_111346.hasCurrentObject () && enumerator_111365.hasCurrentObject ()) {
          var_equal_111226 = var_equal_111226.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_111346.current_value (HERE).ptr (), enumerator_111365.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)) ;
          enumerator_111346.gotoNextObject () ;
          enumerator_111365.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3598)), var_equal_111226  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3598)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3600)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3600)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_eqOp (defineExtensionGetter_gtlList_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a list does not support the > operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3605)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_gtOp (defineExtensionGetter_gtlList_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a list does not support the >= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3609)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_geOp (defineExtensionGetter_gtlList_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a list does not support the < operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3613)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_ltOp (defineExtensionGetter_gtlList_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a list does not support the <= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3617)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_leOp (defineExtensionGetter_gtlList_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlList_embeddedType (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("list forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3622)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                     extensionGetter_gtlList_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_embeddedType (defineExtensionGetter_gtlList_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlList addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlList_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3627))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3627)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlList_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionMethod_gtlList_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlList_addMyValue (defineExtensionMethod_gtlList_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlList_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3640)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)) ;
      }
      result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3643)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3644)), object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3645)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3645))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3642)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("first").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3647)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3648)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3648)) ;
        }
        object->mProperty_value.method_first (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3649)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("last").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3650)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3651)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3651)) ;
          }
          object->mProperty_value.method_last (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3652)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("elementAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3653)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3654)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3654)) ;
            }
            GALGAS_uint var_index_113374 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)) ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsStrictInf, var_index_113374.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3656)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                result_result = object->mProperty_value.getter_valueAtIndex (var_index_113374, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3657)) ;
              }
            }
            if (kBoolFalse == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3659)), GALGAS_string ("index out of bounds"), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3659)) ;
              result_result.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("subListTo").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3661)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3662)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3662)) ;
              }
              GALGAS_uint var_index_113686 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)) ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsStrictInf, var_index_113686.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3664)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3666)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3667)), object->mProperty_value.getter_subListToIndex (var_index_113686, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3665)) ;
                }
              }
              if (kBoolFalse == test_7) {
                const GALGAS_gtlList temp_8 = object ;
                result_result = temp_8 ;
              }
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("subListFrom").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3673)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3674)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3674)) ;
                }
                GALGAS_uint var_index_114040 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)) ;
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsStrictInf, var_index_114040.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3676)))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3678)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3679)), object->mProperty_value.getter_subListFromIndex (var_index_114040, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3680))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3677)) ;
                  }
                }
                if (kBoolFalse == test_10) {
                  result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3684)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3685)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3686))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3683)) ;
                }
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("subList").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3689)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3690)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3690)) ;
                  }
                  GALGAS_uint var_start_114482 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)) ;
                  GALGAS_uint var_length_114535 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)) ;
                  enumGalgasBool test_12 = kBoolTrue ;
                  if (kBoolTrue == test_12) {
                    test_12 = GALGAS_bool (kIsStrictInf, var_start_114482.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3693)))).boolEnum () ;
                    if (kBoolTrue == test_12) {
                      enumGalgasBool test_13 = kBoolTrue ;
                      if (kBoolTrue == test_13) {
                        test_13 = GALGAS_bool (kIsStrictSup, var_start_114482.add_operation (var_length_114535, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3694)).objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3694)))).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          var_length_114535 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3695)).substract_operation (var_start_114482, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3695)) ;
                        }
                      }
                      result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3698)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3699)), object->mProperty_value.getter_subListWithRange (GALGAS_range::constructor_new (var_start_114482, var_length_114535  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3700)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3700))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3697)) ;
                    }
                  }
                  if (kBoolFalse == test_12) {
                    result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3704)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3705)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3706))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3703)) ;
                  }
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = GALGAS_bool (kIsEqual, GALGAS_string ("mapBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3709)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3710)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3710)) ;
                    }
                    GALGAS_lstring var_key_115094 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3711)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3711)) ;
                    GALGAS_gtlVarMap var_resultMap_115158 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3712)) ;
                    const GALGAS_gtlList temp_15 = object ;
                    cEnumerator_list enumerator_115201 (temp_15.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3713)), kENUMERATION_UP) ;
                    GALGAS_uint index_115178 ((uint32_t) 0) ;
                    while (enumerator_115201.hasCurrentObject ()) {
                      if (enumerator_115201.current_value (HERE).isValid ()) {
                        if (enumerator_115201.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
                          GALGAS_gtlStruct cast_115264_itemStruct ((cPtr_gtlStruct *) enumerator_115201.current_value (HERE).ptr ()) ;
                          enumGalgasBool test_16 = kBoolTrue ;
                          if (kBoolTrue == test_16) {
                            test_16 = cast_115264_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3716)).getter_hasKey (var_key_115094.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3716)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3716)).boolEnum () ;
                            if (kBoolTrue == test_16) {
                              GALGAS_gtlData var_keyValue_115381 ;
                              cast_115264_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3717)).method_get (var_key_115094, var_keyValue_115381, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3717)) ;
                              {
                              var_resultMap_115158.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_115381.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3719)), enumerator_115201.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3718)) ;
                              }
                            }
                          }
                          if (kBoolFalse == test_16) {
                            TC_Array <C_FixItDescription> fixItArray17 ;
                            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3723)), GALGAS_string ("item at index ").add_operation (index_115178.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3723)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)).add_operation (var_key_115094.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3724)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3724)), fixItArray17  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)) ;
                          }
                        }else if (enumerator_115201.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
                          GALGAS_gtlMap cast_115630_itemMap ((cPtr_gtlMap *) enumerator_115201.current_value (HERE).ptr ()) ;
                          enumGalgasBool test_18 = kBoolTrue ;
                          if (kBoolTrue == test_18) {
                            test_18 = cast_115630_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3727)).getter_hasKey (var_key_115094.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3727)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3727)).boolEnum () ;
                            if (kBoolTrue == test_18) {
                              GALGAS_gtlData var_keyValue_115741 ;
                              cast_115630_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3728)).method_get (var_key_115094, var_keyValue_115741, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3728)) ;
                              {
                              var_resultMap_115158.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_115741.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3730)), enumerator_115201.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3729)) ;
                              }
                            }
                          }
                          if (kBoolFalse == test_18) {
                            TC_Array <C_FixItDescription> fixItArray19 ;
                            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3734)), GALGAS_string ("item at index ").add_operation (index_115178.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3734)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)).add_operation (var_key_115094.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3735)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3735)), fixItArray19  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)) ;
                          }
                        }else{
                          TC_Array <C_FixItDescription> fixItArray20 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3738)), GALGAS_string ("list of struct expected"), fixItArray20  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3738)) ;
                        }
                      }
                      enumerator_115201.gotoNextObject () ;
                      index_115178.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3713)) ;
                    }
                    result_result = GALGAS_gtlMap::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3741)), var_resultMap_115158  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3741)) ;
                  }
                }
                if (kBoolFalse == test_14) {
                  enumGalgasBool test_21 = kBoolTrue ;
                  if (kBoolTrue == test_21) {
                    test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("set").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3742)))).boolEnum () ;
                    if (kBoolTrue == test_21) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3743)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3743)) ;
                      }
                      GALGAS_lstringset var_resultSet_116240 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3744)) ;
                      cEnumerator_list enumerator_116276 (object->mProperty_value, kENUMERATION_UP) ;
                      while (enumerator_116276.hasCurrentObject ()) {
                        GALGAS_lstring var_itemKey_116302 = callExtensionGetter_lstring ((const cPtr_gtlData *) enumerator_116276.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3746)) ;
                        enumGalgasBool test_22 = kBoolTrue ;
                        if (kBoolTrue == test_22) {
                          test_22 = var_resultSet_116240.getter_hasKey (var_itemKey_116302.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3747)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3747)).boolEnum () ;
                          if (kBoolTrue == test_22) {
                            {
                            var_resultSet_116240.setter_del (var_itemKey_116302, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3748)) ;
                            }
                          }
                        }
                        {
                        var_resultSet_116240.setter_put (var_itemKey_116302, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3750)) ;
                        }
                        enumerator_116276.gotoNextObject () ;
                      }
                      result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3753)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3753)), var_resultSet_116240  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3752)) ;
                    }
                  }
                  if (kBoolFalse == test_21) {
                    enumGalgasBool test_23 = kBoolTrue ;
                    if (kBoolTrue == test_23) {
                      test_23 = GALGAS_bool (kIsEqual, GALGAS_string ("setBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3755)))).boolEnum () ;
                      if (kBoolTrue == test_23) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)) ;
                        }
                        GALGAS_lstring var_key_116657 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)) ;
                        GALGAS_lstringset var_resultSet_116722 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3758)) ;
                        cEnumerator_list enumerator_116758 (object->mProperty_value, kENUMERATION_UP) ;
                        while (enumerator_116758.hasCurrentObject ()) {
                          GALGAS_gtlData var_field_116806 ;
                          GALGAS_bool joker_116808 ; // Joker input parameter
                          callExtensionMethod_structField ((const cPtr_gtlData *) enumerator_116758.current_value (HERE).ptr (), var_key_116657, var_field_116806, joker_116808, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3760)) ;
                          GALGAS_lstring var_resKey_116832 = callExtensionGetter_lstring ((const cPtr_gtlData *) var_field_116806.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3761)) ;
                          enumGalgasBool test_24 = kBoolTrue ;
                          if (kBoolTrue == test_24) {
                            test_24 = var_resultSet_116722.getter_hasKey (var_resKey_116832.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3762)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3762)).boolEnum () ;
                            if (kBoolTrue == test_24) {
                              {
                              var_resultSet_116722.setter_del (var_resKey_116832, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3763)) ;
                              }
                            }
                          }
                          {
                          var_resultSet_116722.setter_put (var_resKey_116832, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3765)) ;
                          }
                          enumerator_116758.gotoNextObject () ;
                        }
                        result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3768)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3768)), var_resultSet_116722  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3767)) ;
                      }
                    }
                    if (kBoolFalse == test_23) {
                      enumGalgasBool test_25 = kBoolTrue ;
                      if (kBoolTrue == test_25) {
                        test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("componentsJoinedByString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3770)))).boolEnum () ;
                        if (kBoolTrue == test_25) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3771)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3771)) ;
                          }
                          GALGAS_string var_joiner_117187 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3772)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3772)) ;
                          GALGAS_string var_stringResult_117250 = GALGAS_string::makeEmptyString () ;
                          cEnumerator_list enumerator_117279 (object->mProperty_value, kENUMERATION_UP) ;
                          while (enumerator_117279.hasCurrentObject ()) {
                            var_stringResult_117250 = var_stringResult_117250.add_operation (callExtensionGetter_string ((const cPtr_gtlData *) enumerator_117279.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3776)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3776)) ;
                            if (enumerator_117279.hasNextObject ()) {
                              var_stringResult_117250 = var_stringResult_117250.add_operation (var_joiner_117187, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3778)) ;
                            }
                            enumerator_117279.gotoNextObject () ;
                          }
                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3781)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3781)), var_stringResult_117250  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3780)) ;
                        }
                      }
                      if (kBoolFalse == test_25) {
                        enumGalgasBool test_26 = kBoolTrue ;
                        if (kBoolTrue == test_26) {
                          test_26 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3783)))).boolEnum () ;
                          if (kBoolTrue == test_26) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3784)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3784)) ;
                            }
                            const GALGAS_gtlList temp_27 = object ;
                            result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3786)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3786)), temp_27.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3786))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3785)) ;
                          }
                        }
                        if (kBoolFalse == test_26) {
                          enumGalgasBool test_28 = kBoolTrue ;
                          if (kBoolTrue == test_28) {
                            test_28 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3788)))).boolEnum () ;
                            if (kBoolTrue == test_28) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3789)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3789)) ;
                              }
                              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3791)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3791)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3790)) ;
                            }
                          }
                          if (kBoolFalse == test_28) {
                            enumGalgasBool test_29 = kBoolTrue ;
                            if (kBoolTrue == test_29) {
                              test_29 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3793)))).boolEnum () ;
                              if (kBoolTrue == test_29) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3794)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3794)) ;
                                }
                                result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3796)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3796)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3796))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3795)) ;
                              }
                            }
                            if (kBoolFalse == test_29) {
                              enumGalgasBool test_30 = kBoolTrue ;
                              if (kBoolTrue == test_30) {
                                test_30 = GALGAS_bool (kIsEqual, GALGAS_string ("where").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3798)))).boolEnum () ;
                                if (kBoolTrue == test_30) {
                                  enumGalgasBool test_31 = kBoolTrue ;
                                  if (kBoolTrue == test_31) {
                                    test_31 = GALGAS_bool (kIsStrictInf, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3799)).objectCompare (GALGAS_uint ((uint32_t) 1U))).operator_or (GALGAS_bool (kIsStrictSup, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3799)).objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3799)).boolEnum () ;
                                    if (kBoolTrue == test_31) {
                                      TC_Array <C_FixItDescription> fixItArray32 ;
                                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3800)), GALGAS_string ("where expects 1 ou 2 arguments. ").add_operation (constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3801)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3800)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3800)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3801)), fixItArray32  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3800)) ;
                                      result_result.drop () ; // Release error dropped variable
                                    }
                                  }
                                  if (kBoolFalse == test_31) {
                                    enumGalgasBool test_33 = kBoolTrue ;
                                    if (kBoolTrue == test_33) {
                                      test_33 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3803)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3803)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlExpr))).boolEnum () ;
                                      if (kBoolTrue == test_33) {
                                        TC_Array <C_FixItDescription> fixItArray34 ;
                                        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3804)), GALGAS_string ("expression expected for argument 1"), fixItArray34  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3804)) ;
                                        result_result.drop () ; // Release error dropped variable
                                      }
                                    }
                                    if (kBoolFalse == test_33) {
                                      GALGAS_gtlStruct var_vars_118472 ;
                                      enumGalgasBool test_35 = kBoolTrue ;
                                      if (kBoolTrue == test_35) {
                                        test_35 = GALGAS_bool (kIsEqual, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3807)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
                                        if (kBoolTrue == test_35) {
                                          enumGalgasBool test_36 = kBoolTrue ;
                                          if (kBoolTrue == test_36) {
                                            test_36 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3808)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3808)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
                                            if (kBoolTrue == test_36) {
                                              TC_Array <C_FixItDescription> fixItArray37 ;
                                              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3809)), GALGAS_string ("struct expected for argument 1"), fixItArray37  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3809)) ;
                                              var_vars_118472.drop () ; // Release error dropped variable
                                            }
                                          }
                                          if (kBoolFalse == test_36) {
                                            GALGAS_gtlStruct temp_38 ;
                                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).isValid ()) {
                                              if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr ())) {
                                                temp_38 = (cPtr_gtlStruct *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr () ;
                                              }else{
                                                inCompiler->castError ("gtlStruct", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)) ;
                                              }
                                            }
                                            var_vars_118472 = temp_38 ;
                                          }
                                        }
                                      }
                                      if (kBoolFalse == test_35) {
                                        var_vars_118472 = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3814)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3814))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3814)) ;
                                      }
                                      GALGAS_gtlExpr temp_39 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr ())) {
                                          temp_39 = (cPtr_gtlExpr *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlExpr", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)) ;
                                        }
                                      }
                                      GALGAS_gtlExpression var_expr_118859 = temp_39.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3816)) ;
                                      GALGAS_list var_resultList_118933 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3817)) ;
                                      cEnumerator_list enumerator_118974 (object->mProperty_value, kENUMERATION_UP) ;
                                      while (enumerator_118974.hasCurrentObject ()) {
                                        {
                                        var_vars_118472.insulate (HERE) ;
                                        cPtr_gtlStruct * ptr_119003 = (cPtr_gtlStruct *) var_vars_118472.ptr () ;
                                        callExtensionSetter_setStructField ((cPtr_gtlStruct *) ptr_119003, GALGAS_lstring::constructor_new (GALGAS_string ("__item__"), enumerator_118974.current_value (HERE).getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3820))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3820)), enumerator_118974.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3820)) ;
                                        }
                                        GALGAS_gtlData var_evalResult_119097 = callExtensionGetter_eval ((const cPtr_gtlExpression *) var_expr_118859.ptr (), constinArgument_context, var_vars_118472, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3821)) ;
                                        enumGalgasBool test_40 = kBoolTrue ;
                                        if (kBoolTrue == test_40) {
                                          test_40 = callExtensionGetter_bool ((const cPtr_gtlData *) var_evalResult_119097.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3822)).boolEnum () ;
                                          if (kBoolTrue == test_40) {
                                            var_resultList_118933.addAssign_operation (enumerator_118974.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3823)) ;
                                          }
                                        }
                                        enumerator_118974.gotoNextObject () ;
                                      }
                                      result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3827)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3828)), var_resultList_118933  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3826)) ;
                                    }
                                  }
                                }
                              }
                              if (kBoolFalse == test_30) {
                                enumGalgasBool test_41 = kBoolTrue ;
                                if (kBoolTrue == test_41) {
                                  test_41 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3833)).boolEnum () ;
                                  if (kBoolTrue == test_41) {
                                    const GALGAS_gtlList temp_42 = object ;
                                    result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3834)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3835)), constinArgument_context, constinArgument_lib, temp_42, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3834)) ;
                                  }
                                }
                                if (kBoolFalse == test_41) {
                                  TC_Array <C_FixItDescription> fixItArray43 ;
                                  inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3842)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3842)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3842)).add_operation (GALGAS_string ("' for list target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3842)), fixItArray43  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3842)) ;
                                  result_result.drop () ; // Release error dropped variable
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionGetter_gtlList_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_performGetter (defineExtensionGetter_gtlList_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlList performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlList_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3856)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3857)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3857)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3858)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3858)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3858)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3858)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3858)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_120147 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_120147.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3859)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3859)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3860)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3861)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3862)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3862)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3863)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("insert").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3864)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_intAnyArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3865)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3865)) ;
          }
          GALGAS_uint var_insertIndex_120498 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)) ;
          GALGAS_gtlData var_node_120551 = constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3867)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsStrictInf, var_insertIndex_120498.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3868)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              {
              object->mProperty_value.setter_insertAtIndex (var_node_120551, var_insertIndex_120498, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3869)) ;
              }
            }
          }
          if (kBoolFalse == test_4) {
            object->mProperty_value.addAssign_operation (var_node_120551  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3871)) ;
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3873)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3874)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_gtlList temp_6 = object ;
            GALGAS_gtlData var_copy_120801 = temp_6 ;
            callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3876)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3877)), constinArgument_context, constinArgument_lib, var_copy_120801, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3876)) ;
            GALGAS_gtlList temp_7 ;
            if (var_copy_120801.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlList *> (var_copy_120801.ptr ())) {
                temp_7 = (cPtr_gtlList *) var_copy_120801.ptr () ;
              }else{
                inCompiler->castError ("gtlList", var_copy_120801.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3883)) ;
              }
            }
            object->mProperty_value = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3883)) ;
            object->mProperty_where = var_copy_120801.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3884)) ;
            object->mProperty_meta = var_copy_120801.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3885)) ;
          }
        }
        if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3887)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3887)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)).add_operation (GALGAS_string ("' for list target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlList_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionSetter_gtlList_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlList_performSetter (defineExtensionSetter_gtlList_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlList setItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlList_setItemAtIndex (cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_data,
                                                    const GALGAS_gtlInt constinArgument_index,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  {
  object->mProperty_value.setter_setValueAtIndex (constinArgument_data, constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3895)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3895)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3895)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlList_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionSetter_gtlList_setItemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlList_setItemAtIndex (defineExtensionSetter_gtlList_setItemAtIndex, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlList deleteItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlList_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_uint var_indexUint_121358 = constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3901)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3901)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictInf, var_indexUint_121358.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3902)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_indexUint_121358.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          object->mProperty_value = object->mProperty_value.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3904)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_indexUint_121358.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3905)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3905)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            object->mProperty_value = object->mProperty_value.getter_subListToIndex (var_indexUint_121358.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3906)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3906)) ;
          }
        }
        if (kBoolFalse == test_2) {
          object->mProperty_value = object->mProperty_value.getter_subListToIndex (var_indexUint_121358.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)).add_operation (object->mProperty_value.getter_subListFromIndex (var_indexUint_121358.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3909)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3909)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlList_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                          extensionSetter_gtlList_deleteItemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlList_deleteItemAtIndex (defineExtensionSetter_gtlList_deleteItemAtIndex, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlList itemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlList_itemAtIndex (const cPtr_gtlData * inObject,
                                                 GALGAS_gtlData & outArgument_data,
                                                 const GALGAS_gtlInt constinArgument_index,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  outArgument_data = object->mProperty_value.getter_valueAtIndex (constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3918)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3918)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3918)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlList_itemAtIndex (void) {
  enterExtensionMethod_itemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                    extensionMethod_gtlList_itemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlList_itemAtIndex (defineExtensionMethod_gtlList_itemAtIndex, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlList hasItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlList_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                           const GALGAS_gtlInt constinArgument_index,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_bool (kIsStrictSup, object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3925)).objectCompare (constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3925)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3925)))) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlList_hasItemAtIndex (void) {
  enterExtensionGetter_hasItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionGetter_gtlList_hasItemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlList_hasItemAtIndex (defineExtensionGetter_gtlList_hasItemAtIndex, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlList appendItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlList_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  object->mProperty_value.addAssign_operation (constinArgument_item  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3931)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlList_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionSetter_gtlList_appendItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlList_appendItem (defineExtensionSetter_gtlList_appendItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMap_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3943)).add_operation (GALGAS_string ("map: @[\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3943)) ;
  cEnumerator_gtlVarMap enumerator_122477 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_122477.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)).add_operation (enumerator_122477.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3947)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)).add_operation (GALGAS_string ("\" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_122477.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3948)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3948)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)) ;
    enumerator_122477.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_desc (defineExtensionGetter_gtlMap_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlMap_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3954)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_string (defineExtensionGetter_gtlMap_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlMap_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3958)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_lstring (defineExtensionGetter_gtlMap_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlMap_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a map to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3962)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_bool (defineExtensionGetter_gtlMap_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlMap_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a map to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3966)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                            extensionGetter_gtlMap_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_int (defineExtensionGetter_gtlMap_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlMap_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a map to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3970)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_float (defineExtensionGetter_gtlMap_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3974)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_plusOp (defineExtensionGetter_gtlMap_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3978)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_minusOp (defineExtensionGetter_gtlMap_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3982)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_notOp (defineExtensionGetter_gtlMap_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3986)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_addOp (defineExtensionGetter_gtlMap_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3990)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_subOp (defineExtensionGetter_gtlMap_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3994)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_mulOp (defineExtensionGetter_gtlMap_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3998)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_divOp (defineExtensionGetter_gtlMap_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4002)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_modOp (defineExtensionGetter_gtlMap_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4006)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_andOp (defineExtensionGetter_gtlMap_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4010)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_orOp (defineExtensionGetter_gtlMap_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4014)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_xorOp (defineExtensionGetter_gtlMap_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4018)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_slOp (defineExtensionGetter_gtlMap_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4022)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_srOp (defineExtensionGetter_gtlMap_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlMap temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4027)) ;
        }
      }
      GALGAS_gtlVarMap var_rValue_124846 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4027)) ;
      GALGAS_bool var_equal_124889 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4029)).objectCompare (var_rValue_124846.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4029)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_124889 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_124889 = GALGAS_bool (true) ;
        cEnumerator_gtlVarMap enumerator_125014 (object->mProperty_value, kENUMERATION_UP) ;
        while (enumerator_125014.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_rValue_124846.getter_hasKey (enumerator_125014.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4034)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4034)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_gtlData var_rData_125099 ;
              var_rValue_124846.method_get (enumerator_125014.current_lkey (HERE), var_rData_125099, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4035)) ;
              var_equal_124889 = var_equal_124889.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_125014.current_value (HERE).ptr (), var_rData_125099, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)) ;
            }
          }
          if (kBoolFalse == test_3) {
            var_equal_124889 = GALGAS_bool (false) ;
          }
          enumerator_125014.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4042)), var_equal_124889.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 4042))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4042)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4044)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4044)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_neqOp (defineExtensionGetter_gtlMap_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlMap temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4050)) ;
        }
      }
      GALGAS_gtlVarMap var_rValue_125469 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4050)) ;
      GALGAS_bool var_equal_125512 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4052)).objectCompare (var_rValue_125469.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4052)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_equal_125512 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_2) {
        var_equal_125512 = GALGAS_bool (true) ;
        cEnumerator_gtlVarMap enumerator_125637 (object->mProperty_value, kENUMERATION_UP) ;
        while (enumerator_125637.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_rValue_125469.getter_hasKey (enumerator_125637.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4057)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4057)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_gtlData var_rData_125722 ;
              var_rValue_125469.method_get (enumerator_125637.current_lkey (HERE), var_rData_125722, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4058)) ;
              var_equal_125512 = var_equal_125512.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_125637.current_value (HERE).ptr (), var_rData_125722, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)) ;
            }
          }
          if (kBoolFalse == test_3) {
            var_equal_125512 = GALGAS_bool (false) ;
          }
          enumerator_125637.gotoNextObject () ;
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4065)), var_equal_125512  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4065)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4067)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4067)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_eqOp (defineExtensionGetter_gtlMap_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a map does not support the > operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4072)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_gtOp (defineExtensionGetter_gtlMap_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a map does not support the >= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4076)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_geOp (defineExtensionGetter_gtlMap_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a map does not support the < operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4080)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_ltOp (defineExtensionGetter_gtlMap_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData /* constinArgument_right */,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("a map does not support the <= operator"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4084)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_leOp (defineExtensionGetter_gtlMap_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlMap_embeddedType (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("map forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4089)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                     extensionGetter_gtlMap_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_embeddedType (defineExtensionGetter_gtlMap_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlMap addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlMap_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 4094))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4094)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlMap_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionMethod_gtlMap_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlMap_addMyValue (defineExtensionMethod_gtlMap_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlMap_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring constinArgument_methodName,
                                                            const GALGAS_gtlDataList constinArgument_arguments,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4107)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4108)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4108)) ;
      }
      result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4110)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4111)), object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4112)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 4112))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4109)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4114)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4115)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4115)) ;
        }
        const GALGAS_gtlMap temp_2 = object ;
        result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4117)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4117)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4117))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4116)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4119)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4120)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4120)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4122)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4122)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4121)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4124)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4125)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4125)) ;
            }
            GALGAS_list var_resultList_127891 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 4126)) ;
            const GALGAS_gtlMap temp_5 = object ;
            cEnumerator_gtlVarMap enumerator_127939 (temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4127)), kENUMERATION_UP) ;
            while (enumerator_127939.hasCurrentObject ()) {
              var_resultList_127891.addAssign_operation (enumerator_127939.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4128)) ;
              enumerator_127939.gotoNextObject () ;
            }
            result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4130)), var_resultList_127891  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4130)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("where").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4131)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsStrictInf, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4132)).objectCompare (GALGAS_uint ((uint32_t) 1U))).operator_or (GALGAS_bool (kIsStrictSup, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4132)).objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4132)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4133)), GALGAS_string ("where expects 1 ou 2 arguments. ").add_operation (constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4134)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4133)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4133)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4134)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4133)) ;
                  result_result.drop () ; // Release error dropped variable
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4136)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4136)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlExpr))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    TC_Array <C_FixItDescription> fixItArray10 ;
                    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4137)), GALGAS_string ("expression expected for argument 1"), fixItArray10  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4137)) ;
                    result_result.drop () ; // Release error dropped variable
                  }
                }
                if (kBoolFalse == test_9) {
                  GALGAS_gtlStruct var_vars_128461 ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (kIsEqual, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4140)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4141)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4141)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          TC_Array <C_FixItDescription> fixItArray13 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4142)), GALGAS_string ("struct expected for argument 1"), fixItArray13  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4142)) ;
                          var_vars_128461.drop () ; // Release error dropped variable
                        }
                      }
                      if (kBoolFalse == test_12) {
                        GALGAS_gtlStruct temp_14 ;
                        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).isValid ()) {
                          if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr ())) {
                            temp_14 = (cPtr_gtlStruct *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr () ;
                          }else{
                            inCompiler->castError ("gtlStruct", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)) ;
                          }
                        }
                        var_vars_128461 = temp_14 ;
                      }
                    }
                  }
                  if (kBoolFalse == test_11) {
                    var_vars_128461 = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4147)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 4147))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4147)) ;
                  }
                  GALGAS_gtlExpr temp_15 ;
                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).isValid ()) {
                    if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr ())) {
                      temp_15 = (cPtr_gtlExpr *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr () ;
                    }else{
                      inCompiler->castError ("gtlExpr", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)) ;
                    }
                  }
                  GALGAS_gtlExpression var_expr_128848 = temp_15.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4149)) ;
                  GALGAS_gtlVarMap var_resultMap_128926 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 4150)) ;
                  cEnumerator_gtlVarMap enumerator_128970 (object->mProperty_value, kENUMERATION_UP) ;
                  while (enumerator_128970.hasCurrentObject ()) {
                    {
                    var_vars_128461.insulate (HERE) ;
                    cPtr_gtlStruct * ptr_128999 = (cPtr_gtlStruct *) var_vars_128461.ptr () ;
                    callExtensionSetter_setStructField ((cPtr_gtlStruct *) ptr_128999, GALGAS_lstring::constructor_new (GALGAS_string ("__item__"), enumerator_128970.current_value (HERE).getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4153))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4153)), enumerator_128970.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4153)) ;
                    }
                    GALGAS_gtlData var_evalResult_129093 = callExtensionGetter_eval ((const cPtr_gtlExpression *) var_expr_128848.ptr (), constinArgument_context, var_vars_128461, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4154)) ;
                    enumGalgasBool test_16 = kBoolTrue ;
                    if (kBoolTrue == test_16) {
                      test_16 = callExtensionGetter_bool ((const cPtr_gtlData *) var_evalResult_129093.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4155)).boolEnum () ;
                      if (kBoolTrue == test_16) {
                        {
                        var_resultMap_128926.setter_put (enumerator_128970.current_lkey (HERE), enumerator_128970.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4156)) ;
                        }
                      }
                    }
                    enumerator_128970.gotoNextObject () ;
                  }
                  result_result = GALGAS_gtlMap::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4160)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4161)), var_resultMap_128926  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4159)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_6) {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4166)))).boolEnum () ;
              if (kBoolTrue == test_17) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4167)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4167)) ;
                }
                result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4169)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4169)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4169))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4168)) ;
              }
            }
            if (kBoolFalse == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4171)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  const GALGAS_gtlMap temp_19 = object ;
                  result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4172)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4173)), constinArgument_context, constinArgument_lib, temp_19, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4172)) ;
                }
              }
              if (kBoolFalse == test_18) {
                TC_Array <C_FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4180)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4180)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4180)).add_operation (GALGAS_string ("' for map target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4180)), fixItArray20  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4180)) ;
                result_result.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionGetter_gtlMap_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_performGetter (defineExtensionGetter_gtlMap_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlMap performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlMap_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_gtlContext constinArgument_context,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4194)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4195)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4195)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4196)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4196)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4196)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4196)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4196)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_130313 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_130313.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4197)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4197)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4198)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4199)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4200)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4200)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4201)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4202)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_gtlMap temp_4 = object ;
          GALGAS_gtlData var_copy_130608 = temp_4 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4204)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4205)), constinArgument_context, constinArgument_lib, var_copy_130608, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4204)) ;
          GALGAS_gtlMap temp_5 ;
          if (var_copy_130608.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlMap *> (var_copy_130608.ptr ())) {
              temp_5 = (cPtr_gtlMap *) var_copy_130608.ptr () ;
            }else{
              inCompiler->castError ("gtlMap", var_copy_130608.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4211)) ;
            }
          }
          object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4211)) ;
          object->mProperty_where = var_copy_130608.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4212)) ;
          object->mProperty_meta = var_copy_130608.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 4213)) ;
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4215)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4215)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)).add_operation (GALGAS_string ("' for map target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlMap_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlMap_performSetter (defineExtensionSetter_gtlMap_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlMap setMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlMap_setMapItem (cPtr_gtlData * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlData constinArgument_data,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  {
  extensionSetter_replaceOrCreate (object->mProperty_value, constinArgument_name, constinArgument_data, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4226)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlMap_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionSetter_gtlMap_setMapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlMap_setMapItem (defineExtensionSetter_gtlMap_setMapItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlMap deleteMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlMap_deleteMapItem (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_name,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  {
  GALGAS_gtlData joker_131325 ; // Joker input parameter
  object->mProperty_value.setter_del (constinArgument_name, joker_131325, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4232)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlMap_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_deleteMapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlMap_deleteMapItem (defineExtensionSetter_gtlMap_deleteMapItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlMap mapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlMap_mapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring constinArgument_name,
                                            GALGAS_gtlData & outArgument_result,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4239)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4239)).boolEnum () ;
    if (kBoolTrue == test_0) {
      object->mProperty_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4240)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4242)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4242))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4242)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlMap_mapItem (void) {
  enterExtensionMethod_mapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionMethod_gtlMap_mapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlMap_mapItem (defineExtensionMethod_gtlMap_mapItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlMap hasMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlMap_hasMapItem (const cPtr_gtlData * inObject,
                                                      const GALGAS_lstring constinArgument_name,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4250)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4250)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlMap_hasMapItem (void) {
  enterExtensionGetter_hasMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionGetter_gtlMap_hasMapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlMap_hasMapItem (defineExtensionGetter_gtlMap_hasMapItem, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr desc'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlExpr_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4262)).add_operation (GALGAS_string ("expression: @\? "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4262)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mProperty_value.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4263)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4263)).add_operation (GALGAS_string (" \?\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4263)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_desc) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_desc (defineExtensionGetter_gtlExpr_desc, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr string'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlExpr_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("expression forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4267)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                               extensionGetter_gtlExpr_string) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_string (defineExtensionGetter_gtlExpr_string, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr lstring'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlExpr_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("expression forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4271)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                extensionGetter_gtlExpr_lstring) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_lstring (defineExtensionGetter_gtlExpr_lstring, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr bool'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlExpr_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an expression to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4275)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_bool) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_bool (defineExtensionGetter_gtlExpr_bool, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr int'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bigint extensionGetter_gtlExpr_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an expression to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4279)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                            extensionGetter_gtlExpr_int) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_int (defineExtensionGetter_gtlExpr_int, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr float'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_double extensionGetter_gtlExpr_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast an expression to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4283)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_float) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_float (defineExtensionGetter_gtlExpr_float, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const GALGAS_gtlExpr temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                               extensionGetter_gtlExpr_plusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_plusOp (defineExtensionGetter_gtlExpr_plusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4293)), GALGAS_gtlMinusExpression::constructor_new (object->mProperty_where, object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4294))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4291)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                extensionGetter_gtlExpr_minusOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_minusOp (defineExtensionGetter_gtlExpr_minusOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr notOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4301)), GALGAS_gtlNotExpression::constructor_new (object->mProperty_where, object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4302))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4299)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_notOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_notOp (defineExtensionGetter_gtlExpr_notOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr addOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4311)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4310)), GALGAS_gtlAddExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4311))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4311))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4308)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4314)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4314)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_addOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_addOp (defineExtensionGetter_gtlExpr_addOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr subOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4323)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4322)), GALGAS_gtlSubstractExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4323))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4323))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4320)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4326)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4326)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_subOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_subOp (defineExtensionGetter_gtlExpr_subOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4335)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4334)), GALGAS_gtlMultiplyExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4335))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4335))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4332)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4338)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4338)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_mulOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_mulOp (defineExtensionGetter_gtlExpr_mulOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr divOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4347)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4346)), GALGAS_gtlDivideExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4347))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4347))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4344)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4350)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4350)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_divOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_divOp (defineExtensionGetter_gtlExpr_divOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr modOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4359)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4358)), GALGAS_gtlModulusExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4359))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4359))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4356)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4362)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4362)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_modOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_modOp (defineExtensionGetter_gtlExpr_modOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr andOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4371)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4370)), GALGAS_gtlAndExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4371))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4371))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4368)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4374)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4374)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_andOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_andOp (defineExtensionGetter_gtlExpr_andOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr orOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4383)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4382)), GALGAS_gtlOrExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4383))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4383))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4380)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4386)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4386)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_orOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_orOp (defineExtensionGetter_gtlExpr_orOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4395)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4394)), GALGAS_gtlXorExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4395))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4395))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4392)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4398)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4398)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_xorOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_xorOp (defineExtensionGetter_gtlExpr_xorOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr slOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4407)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4406)), GALGAS_gtlShiftLeftExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4407))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4407))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4404)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4410)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4410)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_slOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_slOp (defineExtensionGetter_gtlExpr_slOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr srOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4419)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4418)), GALGAS_gtlShiftRightExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4419))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4419))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4416)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4422)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4422)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_srOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_srOp (defineExtensionGetter_gtlExpr_srOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4431)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4430)), GALGAS_gtlNotEqualExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4431))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4431))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4428)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4434)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4434)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_neqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_neqOp (defineExtensionGetter_gtlExpr_neqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4443)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4442)), GALGAS_gtlEqualExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4443))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4443))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4440)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4446)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4446)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_eqOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_eqOp (defineExtensionGetter_gtlExpr_eqOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4455)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4454)), GALGAS_gtlGreaterThanExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4455))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4455))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4452)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4458)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4458)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_gtOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_gtOp (defineExtensionGetter_gtlExpr_gtOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr geOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4467)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4466)), GALGAS_gtlGreaterOrEqualExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4467))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4467))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4464)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4470)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4470)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_geOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_geOp (defineExtensionGetter_gtlExpr_geOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4479)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4478)), GALGAS_gtlLowerThanExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4479))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4479))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4476)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4482)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4482)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_ltOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_ltOp (defineExtensionGetter_gtlExpr_ltOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr leOp'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlExpr temp_1 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_right.ptr ())) {
          temp_1 = (cPtr_gtlExpr *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlExpr", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4491)) ;
        }
      }
      result_result = GALGAS_gtlExpr::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4490)), GALGAS_gtlLowerOrEqualExpression::constructor_new (object->mProperty_where, object->mProperty_value, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4491))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4491))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4488)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4494)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4494)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_leOp) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_leOp (defineExtensionGetter_gtlExpr_leOp, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_type extensionGetter_gtlExpr_embeddedType (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("expression forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4500)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                     extensionGetter_gtlExpr_embeddedType) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_embeddedType (defineExtensionGetter_gtlExpr_embeddedType, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlExpr addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlExpr_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 4505))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4505)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlExpr_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                   extensionMethod_gtlExpr_addMyValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlExpr_addMyValue (defineExtensionMethod_gtlExpr_addMyValue, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@gtlExpr performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_gtlData extensionGetter_gtlExpr_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_methodName,
                                                             const GALGAS_gtlDataList constinArgument_arguments,
                                                             const GALGAS_gtlContext constinArgument_context,
                                                             const GALGAS_library constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4518)).objectCompare (GALGAS_string ("eval"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_structArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4519)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4519)) ;
      }
      GALGAS_gtlData var_vars_138972 = constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4520)) ;
      result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_value.ptr (), constinArgument_context, var_vars_138972, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4521)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4522)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4523)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4523)) ;
        }
        const GALGAS_gtlExpr temp_2 = object ;
        result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4525)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4525)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4525))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4524)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4527)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4528)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4528)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4530)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4530)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4529)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4532)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4533)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4533)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4535)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4535)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4535))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4534)) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4537)).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_gtlExpr temp_6 = object ;
              result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4538)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4539)), constinArgument_context, constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4538)) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4546)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4546)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4546)).add_operation (GALGAS_string ("' for expression target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4546)), fixItArray7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4546)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlExpr_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                      extensionGetter_gtlExpr_performGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpr_performGetter (defineExtensionGetter_gtlExpr_performGetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension setter '@gtlExpr performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlExpr_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlExpr * object = (cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4560)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4561)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4561)) ;
      }
      GALGAS_gtlString temp_1 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4562)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4562)).ptr ())) {
          temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4562)).ptr () ;
        }else{
          inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4562)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4562)) ;
        }
      }
      GALGAS_gtlString var_descriptionToSet_140416 = temp_1 ;
      {
      object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_140416.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4563)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4563)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4564)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4565)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4566)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4566)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4567)) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4568)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_gtlExpr temp_4 = object ;
          GALGAS_gtlData var_copy_140718 = temp_4 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4570)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4571)), constinArgument_context, constinArgument_lib, var_copy_140718, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4570)) ;
          GALGAS_gtlExpr temp_5 ;
          if (var_copy_140718.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlExpr *> (var_copy_140718.ptr ())) {
              temp_5 = (cPtr_gtlExpr *) var_copy_140718.ptr () ;
            }else{
              inCompiler->castError ("gtlExpr", var_copy_140718.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4577)) ;
            }
          }
          object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4577)) ;
          object->mProperty_where = var_copy_140718.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4578)) ;
          object->mProperty_meta = var_copy_140718.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 4579)) ;
        }
      }
      if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4581)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4581)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)).add_operation (GALGAS_string ("' for expression target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlExpr_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                      extensionSetter_gtlExpr_performSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlExpr_performSetter (defineExtensionSetter_gtlExpr_performSetter, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'trueFalse'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_trueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inBool.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("true") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("false") ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_trueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_trueFalse (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_trueFalse (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_trueFalse ("trueFalse",
                                                           functionWithGenericHeader_trueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_trueFalse) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'TrueFalse'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_TrueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inBool.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("True") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("False") ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_TrueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_TrueFalse (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_TrueFalse (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_TrueFalse ("TrueFalse",
                                                           functionWithGenericHeader_TrueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TrueFalse) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'yesNo'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_yesNo (const GALGAS_bool & constinArgument_inBool,
                              C_Compiler * /* inCompiler */
                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inBool.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("YES") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("NO") ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_yesNo [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_yesNo (C_Compiler * inCompiler,
                                                      const cObjectArray & inEffectiveParameterArray,
                                                      const GALGAS_location & /* inErrorLocation */
                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_yesNo (operand0,
                         inCompiler
                         COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_yesNo ("yesNo",
                                                       functionWithGenericHeader_yesNo,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       1,
                                                       functionArgs_yesNo) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'TRUEFALSE'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_TRUEFALSE (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inBool.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("TRUE") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("FALSE") ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_TRUEFALSE [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_TRUEFALSE (C_Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GALGAS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_bool operand0 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_TRUEFALSE (operand0,
                             inCompiler
                             COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_TRUEFALSE ("TRUEFALSE",
                                                           functionWithGenericHeader_TRUEFALSE,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TRUEFALSE) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'listOfSize'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_list function_listOfSize (GALGAS_bigint inArgument_inSize,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_list result_result ; // Returned variable
  result_result = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_functions.galgas", 84)) ;
  if (inArgument_inSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 85)).isValid ()) {
    uint32_t variant_2589 = inArgument_inSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 85)).uintValue () ;
    bool loop_2589 = true ;
    while (loop_2589) {
      loop_2589 = GALGAS_bool (kIsStrictSup, inArgument_inSize.objectCompare (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 86)))).isValid () ;
      if (loop_2589) {
        loop_2589 = GALGAS_bool (kIsStrictSup, inArgument_inSize.objectCompare (GALGAS_uint ((uint32_t) 0U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 86)))).boolValue () ;
      }
      if (loop_2589 && (0 == variant_2589)) {
        loop_2589 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_functions.galgas", 85)) ;
      }
      if (loop_2589) {
        variant_2589 -- ;
        result_result.addAssign_operation (GALGAS_gtlUnconstructed::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 87))  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87))  COMMA_SOURCE_FILE ("gtl_functions.galgas", 87)) ;
        inArgument_inSize.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 88)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_listOfSize [2] = {
  & kTypeDescriptor_GALGAS_bigint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_listOfSize (C_Compiler * inCompiler,
                                                           const cObjectArray & inEffectiveParameterArray,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_bigint operand0 = GALGAS_bigint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_listOfSize (operand0,
                              inCompiler
                              COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_listOfSize ("listOfSize",
                                                            functionWithGenericHeader_listOfSize,
                                                            & kTypeDescriptor_GALGAS_list,
                                                            1,
                                                            functionArgs_listOfSize) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'version'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_version (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_version [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_version (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_version (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_version ("version",
                                                         functionWithGenericHeader_version,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_version) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'majorVersion'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_majorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3236 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 105)) ;
  GALGAS_stringlist var_versionComponents_3304 = var_version_3236.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 106)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3304.getter_length (SOURCE_FILE ("gtl_functions.galgas", 107)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = var_versionComponents_3304.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 109)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 111)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_majorVersion [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_majorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_majorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_majorVersion ("majorVersion",
                                                              functionWithGenericHeader_majorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_majorVersion) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'minorVersion'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_minorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3764 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 120)) ;
  GALGAS_stringlist var_versionComponents_3832 = var_version_3764.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 121)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3832.getter_length (SOURCE_FILE ("gtl_functions.galgas", 122)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = var_versionComponents_3832.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 124)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 126)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_minorVersion [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_minorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_minorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_minorVersion ("minorVersion",
                                                              functionWithGenericHeader_minorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_minorVersion) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'revision'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_revision (C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_4283 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 135)) ;
  GALGAS_stringlist var_versionComponents_4351 = var_version_4283.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 136)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_4351.getter_length (SOURCE_FILE ("gtl_functions.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = var_versionComponents_4351.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 139)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 141)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_revision [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_revision (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_revision (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_revision ("revision",
                                                          functionWithGenericHeader_revision,
                                                          & kTypeDescriptor_GALGAS_bigint,
                                                          0,
                                                          functionArgs_revision) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'currentDir'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_currentDir (C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("gtl_functions.galgas", 150)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_currentDir [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_currentDir (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_currentDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_currentDir ("currentDir",
                                                            functionWithGenericHeader_currentDir,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_currentDir) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'homeDir'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_homeDir (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("gtl_functions.galgas", 158)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_homeDir [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_homeDir (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_homeDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_homeDir ("homeDir",
                                                         functionWithGenericHeader_homeDir,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_homeDir) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'currentDateTime'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_currentDateTime (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDateTime (SOURCE_FILE ("gtl_functions.galgas", 166)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_currentDateTime [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_currentDateTime (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_currentDateTime (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_currentDateTime ("currentDateTime",
                                                                 functionWithGenericHeader_currentDateTime,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_currentDateTime) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max8bitsUnsignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_38_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 255U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 174)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_38_bitsUnsignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_38_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_max_38_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_38_bitsUnsignedInt ("max8bitsUnsignedInt",
                                                                        functionWithGenericHeader_max_38_bitsUnsignedInt,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_max_38_bitsUnsignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max8bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_38_bitsSignedInt (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 127U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 182)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_38_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_max_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_38_bitsSignedInt ("max8bitsSignedInt",
                                                                      functionWithGenericHeader_max_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_max_38_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'min8bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_min_38_bitsSignedInt (C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 190)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 190)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_min_38_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_min_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_min_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_min_38_bitsSignedInt ("min8bitsSignedInt",
                                                                      functionWithGenericHeader_min_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_min_38_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max16bitsUnsignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_31__36_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 65535U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 198)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsUnsignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_31__36_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsUnsignedInt ("max16bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_31__36_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_31__36_bitsUnsignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max16bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_31__36_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 32767U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 206)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsSignedInt ("max16bitsSignedInt",
                                                                          functionWithGenericHeader_max_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_31__36_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'min16bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_min_31__36_bitsSignedInt (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 32768L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 214)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 214)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_min_31__36_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_min_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_min_31__36_bitsSignedInt ("min16bitsSignedInt",
                                                                          functionWithGenericHeader_min_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_31__36_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max32bitsUnsignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_33__32_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 222)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 222)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsUnsignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_33__32_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsUnsignedInt ("max32bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_33__32_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_33__32_bitsUnsignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max32bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 230)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 230)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsSignedInt ("max32bitsSignedInt",
                                                                          functionWithGenericHeader_max_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_33__32_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'min32bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_min_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 238)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 238)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_min_33__32_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_min_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_min_33__32_bitsSignedInt ("min32bitsSignedInt",
                                                                          functionWithGenericHeader_min_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_33__32_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max64bitsUnsignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_36__34_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 246)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 246)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsUnsignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_36__34_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsUnsignedInt ("max64bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_36__34_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_36__34_bitsUnsignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'max64bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_max_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 254)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 254)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_max_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsSignedInt ("max64bitsSignedInt",
                                                                          functionWithGenericHeader_max_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_36__34_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'min64bitsSignedInt'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_min_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 262)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 262)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_min_36__34_bitsSignedInt [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_min_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_min_36__34_bitsSignedInt ("min64bitsSignedInt",
                                                                          functionWithGenericHeader_min_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_36__34_bitsSignedInt) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'pi'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_double function_pi (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  result_result = GALGAS_double::constructor_pi (SOURCE_FILE ("gtl_functions.galgas", 270)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pi [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pi (C_Compiler * inCompiler,
                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                   const GALGAS_location & /* inErrorLocation */
                                                   COMMA_LOCATION_ARGS) {
  return function_pi (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pi ("pi",
                                                    functionWithGenericHeader_pi,
                                                    & kTypeDescriptor_GALGAS_double,
                                                    0,
                                                    functionArgs_pi) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'random'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint function_random (const GALGAS_bigint & constinArgument_min,
                               const GALGAS_bigint & constinArgument_max,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_min.getter_fitsInUInt (SOURCE_FILE ("gtl_functions.galgas", 281)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_max.getter_fitsInUInt (SOURCE_FILE ("gtl_functions.galgas", 282)).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsInfOrEqual, constinArgument_min.objectCompare (constinArgument_max)).boolEnum () ;
            if (kBoolTrue == test_2) {
              result_result = GALGAS_uint::constructor_random (SOURCE_FILE ("gtl_functions.galgas", 284)).modulo_operation (constinArgument_max.substract_operation (constinArgument_min, inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).add_operation (constinArgument_min.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 284)) ;
            }
          }
          if (kBoolFalse == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 286)), GALGAS_string ("rand: min should be lower or equal"), fixItArray3  COMMA_SOURCE_FILE ("gtl_functions.galgas", 286)) ;
            result_result.drop () ; // Release error dropped variable
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 287)), GALGAS_string ("rand: than max"), fixItArray4  COMMA_SOURCE_FILE ("gtl_functions.galgas", 287)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 290)), GALGAS_string ("rand: max argument should be an unsigned 32 bits integer"), fixItArray5  COMMA_SOURCE_FILE ("gtl_functions.galgas", 290)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 293)), GALGAS_string ("rand: min argument should be an unsigned 32 bits integer"), fixItArray6  COMMA_SOURCE_FILE ("gtl_functions.galgas", 293)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_random [3] = {
  & kTypeDescriptor_GALGAS_bigint,
  & kTypeDescriptor_GALGAS_bigint,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_random (C_Compiler * inCompiler,
                                                       const cObjectArray & inEffectiveParameterArray,
                                                       const GALGAS_location & /* inErrorLocation */
                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_bigint operand0 = GALGAS_bigint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_bigint operand1 = GALGAS_bigint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_random (operand0,
                          operand1,
                          inCompiler
                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_random ("random",
                                                        functionWithGenericHeader_random,
                                                        & kTypeDescriptor_GALGAS_bigint,
                                                        2,
                                                        functionArgs_random) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetUnconstructedInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetUnconstructedInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetUnconstructedInstruction * object = (const cPtr_gtlLetUnconstructedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetUnconstructedInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, GALGAS_gtlUnconstructed::constructor_new (callExtensionGetter_location ((const cPtr_gtlVarItem *) object->mProperty_lValue.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 126)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 126)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 126))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetUnconstructedInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction.mSlotID,
                                extensionMethod_gtlLetUnconstructedInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetUnconstructedInstruction_execute (defineExtensionMethod_gtlLetUnconstructedInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                       GALGAS_gtlContext & ioArgument_context,
                                                       GALGAS_gtlData & ioArgument_vars,
                                                       GALGAS_library & ioArgument_lib,
                                                       GALGAS_string & /* ioArgument_outputString */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetInstruction * object = (const cPtr_gtlLetInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 149)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetInstruction.mSlotID,
                                extensionMethod_gtlLetInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetInstruction_execute (defineExtensionMethod_gtlLetInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetAddInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetAddInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & ioArgument_context,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAddInstruction * object = (const cPtr_gtlLetAddInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAddInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_addOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 167)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetAddInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAddInstruction.mSlotID,
                                extensionMethod_gtlLetAddInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetAddInstruction_execute (defineExtensionMethod_gtlLetAddInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetSubstractInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetSubstractInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetSubstractInstruction * object = (const cPtr_gtlLetSubstractInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetSubstractInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_subOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 187)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 183)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetSubstractInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetSubstractInstruction.mSlotID,
                                extensionMethod_gtlLetSubstractInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetSubstractInstruction_execute (defineExtensionMethod_gtlLetSubstractInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetMultiplyInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetMultiplyInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & ioArgument_context,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & /* ioArgument_outputString */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetMultiplyInstruction * object = (const cPtr_gtlLetMultiplyInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetMultiplyInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_mulOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 207)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 203)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetMultiplyInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetMultiplyInstruction.mSlotID,
                                extensionMethod_gtlLetMultiplyInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetMultiplyInstruction_execute (defineExtensionMethod_gtlLetMultiplyInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetDivideInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetDivideInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & ioArgument_context,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetDivideInstruction * object = (const cPtr_gtlLetDivideInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetDivideInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 227)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 223)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetDivideInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetDivideInstruction.mSlotID,
                                extensionMethod_gtlLetDivideInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetDivideInstruction_execute (defineExtensionMethod_gtlLetDivideInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetModuloInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetModuloInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & ioArgument_context,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetModuloInstruction * object = (const cPtr_gtlLetModuloInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetModuloInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 247)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 243)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetModuloInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetModuloInstruction.mSlotID,
                                extensionMethod_gtlLetModuloInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetModuloInstruction_execute (defineExtensionMethod_gtlLetModuloInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetShiftLeftInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetShiftLeftInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftLeftInstruction * object = (const cPtr_gtlLetShiftLeftInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftLeftInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_slOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 267)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 263)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetShiftLeftInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftLeftInstruction.mSlotID,
                                extensionMethod_gtlLetShiftLeftInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetShiftLeftInstruction_execute (defineExtensionMethod_gtlLetShiftLeftInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetShiftRightInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetShiftRightInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & ioArgument_context,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & /* ioArgument_outputString */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftRightInstruction * object = (const cPtr_gtlLetShiftRightInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftRightInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_srOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 287)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 283)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetShiftRightInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftRightInstruction.mSlotID,
                                extensionMethod_gtlLetShiftRightInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetShiftRightInstruction_execute (defineExtensionMethod_gtlLetShiftRightInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetAndInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetAndInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & ioArgument_context,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAndInstruction * object = (const cPtr_gtlLetAndInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAndInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_andOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 307)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 303)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetAndInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAndInstruction.mSlotID,
                                extensionMethod_gtlLetAndInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetAndInstruction_execute (defineExtensionMethod_gtlLetAndInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetOrInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetOrInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & ioArgument_context,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetOrInstruction * object = (const cPtr_gtlLetOrInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetOrInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_orOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 327)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 323)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetOrInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetOrInstruction.mSlotID,
                                extensionMethod_gtlLetOrInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetOrInstruction_execute (defineExtensionMethod_gtlLetOrInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLetXorInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLetXorInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & ioArgument_context,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetXorInstruction * object = (const cPtr_gtlLetXorInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetXorInstruction) ;
  extensionMethod_set (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, callExtensionGetter_xorOp ((const cPtr_gtlData *) extensionGetter_get (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 347)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 343)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLetXorInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetXorInstruction.mSlotID,
                                extensionMethod_gtlLetXorInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLetXorInstruction_execute (defineExtensionMethod_gtlLetXorInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlUnletInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlUnletInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & ioArgument_context,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlUnletInstruction * object = (const cPtr_gtlUnletInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnletInstruction) ;
  extensionMethod_delete (object->mProperty_lValue, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 363)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlUnletInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlUnletInstruction.mSlotID,
                                extensionMethod_gtlUnletInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlUnletInstruction_execute (defineExtensionMethod_gtlUnletInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTemplateStringInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTemplateStringInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & /* ioArgument_vars */,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & ioArgument_outputString,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateStringInstruction * object = (const cPtr_gtlTemplateStringInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateStringInstruction) ;
  ioArgument_outputString.plusAssign_operation(object->mProperty_value, inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 383)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTemplateStringInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateStringInstruction.mSlotID,
                                extensionMethod_gtlTemplateStringInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTemplateStringInstruction_execute (defineExtensionMethod_gtlTemplateStringInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlEmitInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlEmitInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                        GALGAS_gtlContext & ioArgument_context,
                                                        GALGAS_gtlData & ioArgument_vars,
                                                        GALGAS_library & ioArgument_lib,
                                                        GALGAS_string & ioArgument_outputString,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEmitInstruction * object = (const cPtr_gtlEmitInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmitInstruction) ;
  ioArgument_outputString.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_rValue.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 399)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 399)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 399)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlEmitInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlEmitInstruction.mSlotID,
                                extensionMethod_gtlEmitInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlEmitInstruction_execute (defineExtensionMethod_gtlEmitInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlWriteToInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlWriteToInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                           GALGAS_gtlContext & ioArgument_context,
                                                           GALGAS_gtlData & ioArgument_vars,
                                                           GALGAS_library & ioArgument_lib,
                                                           GALGAS_string & /* ioArgument_outputString */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWriteToInstruction * object = (const cPtr_gtlWriteToInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWriteToInstruction) ;
  GALGAS_uint var_currentErrorCount_12223 = GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 418)) ;
  GALGAS_string var_fullFileName_12265 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_fileNameExpression.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 419)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 419)) ;
  GALGAS_gtlString var_fileName_12344 = GALGAS_gtlString::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 422)), var_fullFileName_12265.getter_lastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 423))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 420)) ;
  GALGAS_gtlString var_filePath_12447 = GALGAS_gtlString::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 427)), var_fullFileName_12265.getter_nativePathWithUnixPath (SOURCE_FILE ("gtl_instructions.galgas", 428))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 425)) ;
  GALGAS_string var_result_12552 = GALGAS_string::makeEmptyString () ;
  GALGAS_gtlData var_varsCopy_12577 = ioArgument_vars ;
  {
  var_varsCopy_12577.insulate (HERE) ;
  cPtr_gtlData * ptr_12679 = (cPtr_gtlData *) var_varsCopy_12577.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_12679, GALGAS_lstring::constructor_new (GALGAS_string ("FILENAME"), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 435)), var_fileName_12344, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 434)) ;
  }
  {
  var_varsCopy_12577.insulate (HERE) ;
  cPtr_gtlData * ptr_12778 = (cPtr_gtlData *) var_varsCopy_12577.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_12778, GALGAS_lstring::constructor_new (GALGAS_string ("FILEPATH"), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 440)), var_filePath_12447, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 439)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_currentErrorCount_12223.objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 445)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      extensionMethod_execute (object->mProperty_instructions, ioArgument_context, var_varsCopy_12577, ioArgument_lib, var_result_12552, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 446)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_currentErrorCount_12223.objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 447)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = object->mProperty_isExecutable.boolEnum () ;
            if (kBoolTrue == test_2) {
              GALGAS_string var_directory_13084 = var_fullFileName_12265.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 449)) ;
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GALGAS_bool (kIsNotEqual, var_directory_13084.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_directory_13084.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 450)) ;
                }
              }
              var_result_12552.method_writeToExecutableFile (var_fullFileName_12265, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 451)) ;
            }
          }
          if (kBoolFalse == test_2) {
            var_result_12552.method_makeDirectoryAndWriteToFile (var_fullFileName_12265, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 453)) ;
          }
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlWriteToInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWriteToInstruction.mSlotID,
                                extensionMethod_gtlWriteToInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlWriteToInstruction_execute (defineExtensionMethod_gtlWriteToInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlTemplateInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlTemplateInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                            GALGAS_gtlContext & ioArgument_context,
                                                            GALGAS_gtlData & ioArgument_vars,
                                                            GALGAS_library & ioArgument_lib,
                                                            GALGAS_string & ioArgument_outputString,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateInstruction * object = (const cPtr_gtlTemplateInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateInstruction) ;
  GALGAS_gtlContext var_newContext_13974 = ioArgument_context ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mProperty_prefix.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 479)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_newContext_13974.setter_setPrefix (object->mProperty_prefix COMMA_SOURCE_FILE ("gtl_instructions.galgas", 480)) ;
      }
    }
  }
  GALGAS_gtlString temp_1 ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_fileName.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)).isValid ()) {
    if (NULL != dynamic_cast <const cPtr_gtlString *> (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_fileName.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)).ptr ())) {
      temp_1 = (cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_fileName.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)).ptr () ;
    }else{
      inCompiler->castError ("gtlString", callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_fileName.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)) ;
    }
  }
  GALGAS_lstring var_templateFileName_14080 = callExtensionGetter_fullTemplateFileName ((const cPtr_gtlContext *) var_newContext_13974.ptr (), ioArgument_context, ioArgument_vars, callExtensionGetter_lstring ((const cPtr_gtlString *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 483)) ;
  GALGAS_gtlData var_localVars_14231 ;
  {
  var_newContext_13974.setter_setInputVars (GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 490)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 490)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = object->mProperty_isGlobal.operator_not (SOURCE_FILE ("gtl_instructions.galgas", 491)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_localVars_14231 = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 493)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_instructions.galgas", 493))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 493)) ;
      cEnumerator_gtlExpressionList enumerator_14453 (object->mProperty_arguments, kENUMERATION_UP) ;
      while (enumerator_14453.hasCurrentObject ()) {
        GALGAS_gtlData var_evaluedArg_14482 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_14453.current_expression (HERE).ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 495)) ;
        {
        var_newContext_13974.insulate (HERE) ;
        cPtr_gtlContext * ptr_14550 = (cPtr_gtlContext *) var_newContext_13974.ptr () ;
        callExtensionSetter_addInputVariable ((cPtr_gtlContext *) ptr_14550, var_evaluedArg_14482, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 496)) ;
        }
        enumerator_14453.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_localVars_14231 = ioArgument_vars ;
  }
  GALGAS_bool var_found_14732 ;
  GALGAS_gtlTemplate var_result_14757 ;
  {
  ioArgument_lib.insulate (HERE) ;
  cPtr_library * ptr_14634 = (cPtr_library *) ioArgument_lib.ptr () ;
  callExtensionSetter_getTemplate ((cPtr_library *) ptr_14634, var_newContext_13974, var_templateFileName_14080, object->mProperty_ifExists, ioArgument_lib, var_found_14732, var_result_14757, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 502)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_14732.boolEnum () ;
    if (kBoolTrue == test_3) {
      callExtensionMethod_execute ((const cPtr_gtlTemplate *) var_result_14757.ptr (), var_newContext_13974, var_localVars_14231, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 512)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = object->mProperty_ifExists.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_gtlData var_localMap_14899 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 515)) ;
        extensionMethod_execute (object->mProperty_instructionsIfNotFound, ioArgument_context, var_localMap_14899, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 516)) ;
        ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_14899.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 517)) ;
      }
    }
  }
  {
  ioArgument_context.setter_setDebuggerContext (var_newContext_13974.getter_debuggerContext (SOURCE_FILE ("gtl_instructions.galgas", 521)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 521)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlTemplateInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateInstruction.mSlotID,
                                extensionMethod_gtlTemplateInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlTemplateInstruction_execute (defineExtensionMethod_gtlTemplateInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlGetColumnInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlGetColumnInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & ioArgument_context,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & ioArgument_outputString,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlGetColumnInstruction * object = (const cPtr_gtlGetColumnInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetColumnInstruction) ;
  GALGAS_string var_value_15666 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_searchEndOfLine_15695 = GALGAS_bool (true) ;
  GALGAS_uint var_index_15716 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 540)) ;
  if (ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 541)).isValid ()) {
    uint32_t variant_15747 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 541)).uintValue () ;
    bool loop_15747 = true ;
    while (loop_15747) {
      loop_15747 = GALGAS_bool (kIsStrictSup, var_index_15716.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_15695 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 541)).isValid () ;
      if (loop_15747) {
        loop_15747 = GALGAS_bool (kIsStrictSup, var_index_15716.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_15695 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 541)).boolValue () ;
      }
      if (loop_15747 && (0 == variant_15747)) {
        loop_15747 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 541)) ;
      }
      if (loop_15747) {
        variant_15747 -- ;
        var_searchEndOfLine_15695 = GALGAS_bool (kIsNotEqual, ioArgument_outputString.getter_characterAtIndex (var_index_15716.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 542)).objectCompare (GALGAS_char (TO_UNICODE (10)))) ;
        var_index_15716.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 543)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = var_searchEndOfLine_15695.boolEnum () ;
          if (kBoolTrue == test_0) {
            var_value_15666.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 545)) ;
          }
        }
      }
    }
  }
  extensionMethod_set (object->mProperty_destVariable, ioArgument_context, ioArgument_vars, ioArgument_lib, GALGAS_gtlString::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 552)), var_value_15666  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 548)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlGetColumnInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlGetColumnInstruction.mSlotID,
                                extensionMethod_gtlGetColumnInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlGetColumnInstruction_execute (defineExtensionMethod_gtlGetColumnInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlIfStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlIfStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & ioArgument_context,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & ioArgument_outputString,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlIfStatementInstruction * object = (const cPtr_gtlIfStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlIfStatementInstruction) ;
  GALGAS_gtlData var_localMap_16677 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 576)) ;
  GALGAS_bool var_noConditionMatching_16729 = GALGAS_bool (true) ;
  cEnumerator_gtlThenElsifStatementList enumerator_16762 (object->mProperty_thenElsifList, kENUMERATION_UP) ;
  bool bool_0 = var_noConditionMatching_16729.isValidAndTrue () ;
  if (enumerator_16762.hasCurrentObject () && bool_0) {
    while (enumerator_16762.hasCurrentObject () && bool_0) {
      GALGAS_gtlData var_dataCondition_16818 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_16762.current_condition (HERE).ptr (), ioArgument_context, var_localMap_16677, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 580)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (var_dataCondition_16818.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlBool temp_2 ;
          if (var_dataCondition_16818.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_dataCondition_16818.ptr ())) {
              temp_2 = (cPtr_gtlBool *) var_dataCondition_16818.ptr () ;
            }else{
              inCompiler->castError ("gtlBool", var_dataCondition_16818.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 582)) ;
            }
          }
          GALGAS_bool var_boolCondition_16928 = temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 582)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_boolCondition_16928.boolEnum () ;
            if (kBoolTrue == test_3) {
              extensionMethod_execute (enumerator_16762.current_instructionList (HERE), ioArgument_context, var_localMap_16677, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 584)) ;
              var_noConditionMatching_16729 = GALGAS_bool (false) ;
            }
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_dataCondition_16818.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 588)), GALGAS_string ("bool expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 588)) ;
      }
      enumerator_16762.gotoNextObject () ;
      if (enumerator_16762.hasCurrentObject ()) {
        bool_0 = var_noConditionMatching_16729.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_noConditionMatching_16729.boolEnum () ;
    if (kBoolTrue == test_5) {
      extensionMethod_execute (object->mProperty_elseList, ioArgument_context, var_localMap_16677, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 592)) ;
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_16677.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 595)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlIfStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlIfStatementInstruction.mSlotID,
                                extensionMethod_gtlIfStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlIfStatementInstruction_execute (defineExtensionMethod_gtlIfStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlForeachStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlForeachStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & ioArgument_outputString,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = (const cPtr_gtlForeachStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_gtlData var_localMap_20502 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 706)) ;
  GALGAS_gtlData var_iterableData_20547 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_iterable.ptr (), ioArgument_context, var_localMap_20502, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 707)) ;
  if (var_iterableData_20547.isValid ()) {
    if (var_iterableData_20547.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_20640_iterableMap ((cPtr_gtlMap *) var_iterableData_20547.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_0 = object ;
      callExtensionMethod_iterateOnMap ((const cPtr_gtlForeachStatementInstruction *) temp_0.ptr (), ioArgument_context, var_localMap_20502, ioArgument_lib, ioArgument_outputString, cast_20640_iterableMap, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 710)) ;
    }else if (var_iterableData_20547.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_20752_iterableList ((cPtr_gtlList *) var_iterableData_20547.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_1 = object ;
      callExtensionMethod_iterateOnList ((const cPtr_gtlForeachStatementInstruction *) temp_1.ptr (), ioArgument_context, var_localMap_20502, ioArgument_lib, ioArgument_outputString, cast_20752_iterableList, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 712)) ;
    }else if (var_iterableData_20547.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet) {
      GALGAS_gtlSet cast_20865_iterableSet ((cPtr_gtlSet *) var_iterableData_20547.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_2 = object ;
      callExtensionMethod_iterateOnSet ((const cPtr_gtlForeachStatementInstruction *) temp_2.ptr (), ioArgument_context, var_localMap_20502, ioArgument_lib, ioArgument_outputString, cast_20865_iterableSet, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 714)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_iterable.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 716)), GALGAS_string ("Map, list or set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 716)) ;
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_20502.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 718)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlForeachStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                extensionMethod_gtlForeachStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_execute (defineExtensionMethod_gtlForeachStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlForStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlForStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForStatementInstruction * object = (const cPtr_gtlForStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForStatementInstruction) ;
  GALGAS_lstring var_indexName_21609 = GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), object->mProperty_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 737)) ;
  GALGAS_gtlData var_localMap_21653 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 738)) ;
  cEnumerator_gtlExpressionList enumerator_21695 (object->mProperty_iterable, kENUMERATION_UP) ;
  GALGAS_uint index_21680 ((uint32_t) 0) ;
  while (enumerator_21695.hasCurrentObject ()) {
    GALGAS_gtlData var_value_21727 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_21695.current_expression (HERE).ptr (), ioArgument_context, var_localMap_21653, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 741)) ;
    {
    var_localMap_21653.insulate (HERE) ;
    cPtr_gtlData * ptr_21787 = (cPtr_gtlData *) var_localMap_21653.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_21787, object->mProperty_identifier, var_value_21727, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 742)) ;
    }
    {
    var_localMap_21653.insulate (HERE) ;
    cPtr_gtlData * ptr_21838 = (cPtr_gtlData *) var_localMap_21653.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_21838, var_indexName_21609, GALGAS_gtlInt::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 745)), index_21680.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 745))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 743)) ;
    }
    extensionMethod_execute (object->mProperty_doList, ioArgument_context, var_localMap_21653, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 747)) ;
    if (enumerator_21695.hasNextObject ()) {
      extensionMethod_execute (object->mProperty_betweenList, ioArgument_context, var_localMap_21653, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)) ;
    }
    enumerator_21695.gotoNextObject () ;
    index_21680.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 739)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_21653.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 751)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlForStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForStatementInstruction.mSlotID,
                                extensionMethod_gtlForStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlForStatementInstruction_execute (defineExtensionMethod_gtlForStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlLoopStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlLoopStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & ioArgument_context,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & ioArgument_outputString,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoopStatementInstruction * object = (const cPtr_gtlLoopStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoopStatementInstruction) ;
  GALGAS_gtlData var_localMap_22823 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 775)) ;
  GALGAS_gtlData var_startData_22865 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_start.ptr (), ioArgument_context, var_localMap_22823, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 776)) ;
  GALGAS_gtlData var_stopData_22924 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_stop.ptr (), ioArgument_context, var_localMap_22823, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 777)) ;
  GALGAS_gtlData var_stepData_22984 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_step.ptr (), ioArgument_context, var_localMap_22823, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 778)) ;
  GALGAS_bigint var_startVal_23043 ;
  GALGAS_bigint var_stopVal_23061 ;
  GALGAS_bigint var_stepVal_23079 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (var_startData_22865.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlInt temp_1 ;
      if (var_startData_22865.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_startData_22865.ptr ())) {
          temp_1 = (cPtr_gtlInt *) var_startData_22865.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", var_startData_22865.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 783)) ;
        }
      }
      var_startVal_23043 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 783)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_start.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 785)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 785)) ;
    var_startVal_23043.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (var_stopData_22924.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_gtlInt temp_4 ;
      if (var_stopData_22924.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stopData_22924.ptr ())) {
          temp_4 = (cPtr_gtlInt *) var_stopData_22924.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", var_stopData_22924.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 788)) ;
        }
      }
      var_stopVal_23061 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 788)) ;
    }
  }
  if (kBoolFalse == test_3) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_stop.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 790)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 790)) ;
    var_stopVal_23061.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (var_stepData_22984.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_gtlInt temp_7 ;
      if (var_stepData_22984.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stepData_22984.ptr ())) {
          temp_7 = (cPtr_gtlInt *) var_stepData_22984.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", var_stepData_22984.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 793)) ;
        }
      }
      var_stepVal_23079 = temp_7.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 793)).multiply_operation (object->mProperty_upDown.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 793)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 793)) ;
    }
  }
  if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_step.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 795)), GALGAS_string ("int expected"), fixItArray8  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 795)) ;
    var_stepVal_23079.drop () ; // Release error dropped variable
  }
  GALGAS_bigint var_direction_23541 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 797)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsStrictInf, var_stepVal_23079.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 798)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_direction_23541 = GALGAS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 798)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsSupOrEqual, var_stopVal_23061.substract_operation (var_startVal_23043, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 799)).multiply_operation (var_direction_23541, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 799)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 799)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      extensionMethod_execute (object->mProperty_beforeList, ioArgument_context, var_localMap_22823, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 800)) ;
      GALGAS_uint var_count_23725 = var_stopVal_23061.substract_operation (var_startVal_23043, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)).multiply_operation (var_direction_23541, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL).getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 801)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 801)) ;
      if (var_count_23725.isValid ()) {
        uint32_t variant_23782 = var_count_23725.uintValue () ;
        bool loop_23782 = true ;
        while (loop_23782) {
            {
            var_localMap_22823.insulate (HERE) ;
            cPtr_gtlData * ptr_23808 = (cPtr_gtlData *) var_localMap_22823.ptr () ;
            callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_23808, object->mProperty_identifier, GALGAS_gtlInt::constructor_new (object->mProperty_identifier.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 805)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 805)), var_startVal_23043  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 805)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 803)) ;
            }
            extensionMethod_execute (object->mProperty_doList, ioArgument_context, var_localMap_22823, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 807)) ;
            var_startVal_23043 = var_startVal_23043.add_operation (var_stepVal_23079, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 808)) ;
          loop_23782 = GALGAS_bool (kIsSupOrEqual, var_stopVal_23061.substract_operation (var_startVal_23043, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)).multiply_operation (var_direction_23541, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)))).isValid () ;
          if (loop_23782) {
            loop_23782 = GALGAS_bool (kIsSupOrEqual, var_stopVal_23061.substract_operation (var_startVal_23043, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)).multiply_operation (var_direction_23541, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)))).boolValue () ;
          }
          if (loop_23782 && (0 == variant_23782)) {
            loop_23782 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 802)) ;
          }
          if (loop_23782) {
            variant_23782 -- ;
            extensionMethod_execute (object->mProperty_betweenList, ioArgument_context, var_localMap_22823, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 810)) ;
          }
        }
      }
      extensionMethod_execute (object->mProperty_afterList, ioArgument_context, var_localMap_22823, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 812)) ;
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_22823.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 814)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlLoopStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLoopStatementInstruction.mSlotID,
                                extensionMethod_gtlLoopStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlLoopStatementInstruction_execute (defineExtensionMethod_gtlLoopStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlRepeatStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlRepeatStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                   GALGAS_gtlContext & ioArgument_context,
                                                                   GALGAS_gtlData & ioArgument_vars,
                                                                   GALGAS_library & ioArgument_lib,
                                                                   GALGAS_string & ioArgument_outputString,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlRepeatStatementInstruction * object = (const cPtr_gtlRepeatStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlRepeatStatementInstruction) ;
  GALGAS_gtlData var_localMap_24821 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 833)) ;
  GALGAS_bool var_boolCondition_24864 = GALGAS_bool (false) ;
  GALGAS_gtlData var_limitData_24893 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_limit.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 835)) ;
  GALGAS_uint var_limitVal_24945 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (var_limitData_24893.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_gtlInt temp_1 ;
      if (var_limitData_24893.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_limitData_24893.ptr ())) {
          temp_1 = (cPtr_gtlInt *) var_limitData_24893.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", var_limitData_24893.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 839)) ;
        }
      }
      var_limitVal_24945 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 839)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 839)) ;
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_limit.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 841)), GALGAS_string ("int exprected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 841)) ;
    var_limitVal_24945.drop () ; // Release error dropped variable
  }
  if (var_limitVal_24945.isValid ()) {
    uint32_t variant_25101 = var_limitVal_24945.uintValue () ;
    bool loop_25101 = true ;
    while (loop_25101) {
        extensionMethod_execute (object->mProperty_continueList, ioArgument_context, var_localMap_24821, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 845)) ;
        GALGAS_gtlData var_conditionData_25208 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_condition.ptr (), ioArgument_context, var_localMap_24821, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 846)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_conditionData_25208.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 847)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_gtlBool temp_4 ;
            if (var_conditionData_25208.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_conditionData_25208.ptr ())) {
                temp_4 = (cPtr_gtlBool *) var_conditionData_25208.ptr () ;
              }else{
                inCompiler->castError ("gtlBool", var_conditionData_25208.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 848)) ;
              }
            }
            var_boolCondition_24864 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 848)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_conditionData_25208.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 850)), GALGAS_string ("bool expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 850)) ;
        }
      loop_25101 = var_boolCondition_24864.isValid () ;
      if (loop_25101) {
        loop_25101 = var_boolCondition_24864.boolValue () ;
      }
      if (loop_25101 && (0 == variant_25101)) {
        loop_25101 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 844)) ;
      }
      if (loop_25101) {
        variant_25101 -- ;
        extensionMethod_execute (object->mProperty_doList, ioArgument_context, var_localMap_24821, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 853)) ;
      }
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_24821.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 855)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlRepeatStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction.mSlotID,
                                extensionMethod_gtlRepeatStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlRepeatStatementInstruction_execute (defineExtensionMethod_gtlRepeatStatementInstruction_execute, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gtlErrorStatementInstruction execute'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlErrorStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlErrorStatementInstruction * object = (const cPtr_gtlErrorStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlErrorStatementInstruction) ;
  GALGAS_location var_errorLocation_26089 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_hereInstead.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_errorLocation_26089 = object->mProperty_where ;
    }
  }
  if (kBoolFalse == test_0) {
    var_errorLocation_26089 = extensionGetter_get (object->mProperty_identifier, ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 877)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 877)) ;
  }
  GALGAS_gtlData var_errorMessageData_26244 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_errorMessage.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 879)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_errorMessageData_26244.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 880)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_gtlString temp_2 ;
      if (var_errorMessageData_26244.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlString *> (var_errorMessageData_26244.ptr ())) {
          temp_2 = (cPtr_gtlString *) var_errorMessageData_26244.ptr () ;
        }else{
          inCompiler->castError ("gtlString", var_errorMessageData_26244.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 881)) ;
        }
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_errorLocation_26089, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 881)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 881)) ;
      {
      ioArgument_context.setter_setPropagateError (GALGAS_bool (false) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 882)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mProperty_errorMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 884)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 884)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlErrorStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlErrorStatementInstruction.mSlotID,
                                extensionMethod_gtlErrorStatementInstruction_execute) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlErrorStatementInstruction_execute (defineExtensionMethod_gtlErrorStatementInstruction_execute, NULL) ;

