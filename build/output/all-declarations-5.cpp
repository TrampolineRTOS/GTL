#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlFloat performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlFloat_performSetter (cPtr_gtlData * inObject,
                                                    const GALGAS_lstring constinArgument_methodName,
                                                    const GALGAS_gtlDataList constinArgument_arguments,
                                                    const GALGAS_gtlContext constinArgument_context,
                                                    const GALGAS_library constinArgument_lib,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlFloat * object = (cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1979)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1980)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1980)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1981)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1981)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1981)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1981)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1981)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_61256 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_61256.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1982)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1982)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1983)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1984)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1985)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1985)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1986)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1987)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlFloat temp_4 = object ;
        GALGAS_gtlData var_copy_61553 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1989)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1990)), constinArgument_context, constinArgument_lib, var_copy_61553, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1989)) ;
        GALGAS_gtlFloat temp_5 ;
        if (var_copy_61553.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlFloat *> (var_copy_61553.ptr ())) {
            temp_5 = (cPtr_gtlFloat *) var_copy_61553.ptr () ;
          }else{
            inCompiler->castError ("gtlFloat", var_copy_61553.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1996)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1996)) ;
        object->mProperty_where = var_copy_61553.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1997)) ;
        object->mProperty_meta = var_copy_61553.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1998)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2000)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2000)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2000)).add_operation (GALGAS_string ("' for float target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2000)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2000)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlFloat_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                      extensionSetter_gtlFloat_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlFloat_performSetter (defineExtensionSetter_gtlFloat_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString desc'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlString_desc (const cPtr_gtlData * inObject,
                                                     const GALGAS_uint constinArgument_tab,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2013)).add_operation (GALGAS_string ("string: \""), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2013)).add_operation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2014)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2014)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_desc (defineExtensionGetter_gtlString_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString string'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlString_string (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = object->mProperty_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                               extensionGetter_gtlString_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_string (defineExtensionGetter_gtlString_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlString lstring'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlString_lstring (const cPtr_gtlData * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = GALGAS_lstring::constructor_new (object->mProperty_value, object->mProperty_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2019)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                extensionGetter_gtlString_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_lstring (defineExtensionGetter_gtlString_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString bool'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlString_bool (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("cannot cast a string to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2022)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_bool (defineExtensionGetter_gtlString_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString int'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlString_int (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = object->mProperty_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2026)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2026)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                            extensionGetter_gtlString_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_int (defineExtensionGetter_gtlString_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString float'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlString_float (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = object->mProperty_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2030)).getter_double (SOURCE_FILE ("gtl_data_types.galgas", 2030)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_float (defineExtensionGetter_gtlString_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString plusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_plusOp (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2034)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                               extensionGetter_gtlString_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_plusOp (defineExtensionGetter_gtlString_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlString minusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_minusOp (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2038)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                extensionGetter_gtlString_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_minusOp (defineExtensionGetter_gtlString_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString notOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_notOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2042)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_notOp (defineExtensionGetter_gtlString_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString addOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_addOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlString temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2050)) ;
      }
    }
    result_result = GALGAS_gtlString::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2049)), object->mProperty_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2050)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2050))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2047)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2053)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2053)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_addOp (defineExtensionGetter_gtlString_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString subOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_subOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2058)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_subOp (defineExtensionGetter_gtlString_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString mulOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_mulOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2062)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_mulOp (defineExtensionGetter_gtlString_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString divOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_divOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2066)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_divOp (defineExtensionGetter_gtlString_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString modOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_modOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2070)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_modOp (defineExtensionGetter_gtlString_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString andOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_andOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2074)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_andOp (defineExtensionGetter_gtlString_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString orOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_orOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2078)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_orOp (defineExtensionGetter_gtlString_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString xorOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_xorOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2082)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_xorOp (defineExtensionGetter_gtlString_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString slOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_slOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mProperty_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2086)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_slOp (defineExtensionGetter_gtlString_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString srOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_srOp (defineExtensionGetter_gtlString_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlString neqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_neqOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2101)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2101)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                              extensionGetter_gtlString_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_neqOp (defineExtensionGetter_gtlString_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString eqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_eqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2113)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2113)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_eqOp (defineExtensionGetter_gtlString_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString gtOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_gtOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2125)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2125)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_gtOp (defineExtensionGetter_gtlString_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString geOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_geOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2137)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2137)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_geOp (defineExtensionGetter_gtlString_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString ltOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_ltOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2149)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2149)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_ltOp (defineExtensionGetter_gtlString_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlString leOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlString_leOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2161)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2161)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                             extensionGetter_gtlString_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_leOp (defineExtensionGetter_gtlString_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlString embeddedType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlString_embeddedType (const cPtr_gtlData * /* inObject */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_string) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                     extensionGetter_gtlString_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_embeddedType (defineExtensionGetter_gtlString_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlString addMyValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlString_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2172))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2172)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlString_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                   extensionMethod_gtlString_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlString_addMyValue (defineExtensionMethod_gtlString_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlString performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2185)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)) ;
    }
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2188)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2188)), object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2187)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2190)).objectCompare (GALGAS_string ("charAtIndex"))).boolEnum () ;
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
      GALGAS_uint var_index_67159 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2192)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2192)) ;
      result_result = GALGAS_gtlChar::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2194)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2194)), object->mProperty_value.getter_characterAtIndex (var_index_67159, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2194))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2193)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2196)).objectCompare (GALGAS_string ("indexOfChar"))).boolEnum () ;
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
        GALGAS_char var_lookedUpChar_67458 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2198)) ;
        GALGAS_uint var_index_67523 = GALGAS_uint ((uint32_t) 0U) ;
        GALGAS_uint var_length_67544 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
        GALGAS_bool var_found_67577 = GALGAS_bool (false) ;
        if (var_length_67544.isValid ()) {
          uint32_t variant_67594 = var_length_67544.uintValue () ;
          bool loop_67594 = true ;
          while (loop_67594) {
            GALGAS_bool test_5 = var_found_67577.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2203)) ;
            if (kBoolTrue == test_5.boolEnum ()) {
              test_5 = GALGAS_bool (kIsStrictInf, var_index_67523.objectCompare (var_length_67544)) ;
            }
            loop_67594 = test_5.isValid () ;
            if (loop_67594) {
              loop_67594 = test_5.boolValue () ;
            }
            if (loop_67594 && (0 == variant_67594)) {
              loop_67594 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2202)) ;
            }
            if (loop_67594) {
              variant_67594 -- ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_characterAtIndex (var_index_67523, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2204)).objectCompare (var_lookedUpChar_67458)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_found_67577 = GALGAS_bool (true) ;
              }else if (kBoolFalse == test_6) {
                var_index_67523.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)) ;
              }
            }
          }
        }
        GALGAS_bigint temp_7 ;
        const enumGalgasBool test_8 = var_found_67577.boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = var_index_67523.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2213)) ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2213)) ;
        }
        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2211)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2212)), temp_7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2210)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2215)).objectCompare (GALGAS_string ("indexOfCharInRange"))).boolEnum () ;
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
          GALGAS_char var_minChar_68047 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2217)) ;
          GALGAS_gtlChar temp_11 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr ())) {
              temp_11 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)) ;
            }
          }
          GALGAS_char var_maxChar_68114 = temp_11.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2218)) ;
          GALGAS_uint var_index_68179 = GALGAS_uint ((uint32_t) 0U) ;
          GALGAS_uint var_length_68200 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2220)) ;
          GALGAS_bool var_found_68233 = GALGAS_bool (false) ;
          if (var_length_68200.isValid ()) {
            uint32_t variant_68250 = var_length_68200.uintValue () ;
            bool loop_68250 = true ;
            while (loop_68250) {
              GALGAS_bool test_12 = var_found_68233.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2223)) ;
              if (kBoolTrue == test_12.boolEnum ()) {
                test_12 = GALGAS_bool (kIsStrictInf, var_index_68179.objectCompare (var_length_68200)) ;
              }
              loop_68250 = test_12.isValid () ;
              if (loop_68250) {
                loop_68250 = test_12.boolValue () ;
              }
              if (loop_68250 && (0 == variant_68250)) {
                loop_68250 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2222)) ;
              }
              if (loop_68250) {
                variant_68250 -- ;
                GALGAS_char var_currentChar_68324 = object->mProperty_value.getter_characterAtIndex (var_index_68179, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2224)) ;
                GALGAS_bool test_13 = GALGAS_bool (kIsSupOrEqual, var_currentChar_68324.objectCompare (var_minChar_68047)) ;
                if (kBoolTrue == test_13.boolEnum ()) {
                  test_13 = GALGAS_bool (kIsInfOrEqual, var_currentChar_68324.objectCompare (var_maxChar_68114)) ;
                }
                const enumGalgasBool test_14 = test_13.boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_found_68233 = GALGAS_bool (true) ;
                }else if (kBoolFalse == test_14) {
                  var_index_68179.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2228)) ;
                }
              }
            }
          }
          GALGAS_bigint temp_15 ;
          const enumGalgasBool test_16 = var_found_68233.boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = var_index_68179.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2234)) ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_bigint ("-1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2234)) ;
          }
          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2232)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2233)), temp_15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2236)).objectCompare (GALGAS_string ("containsChar"))).boolEnum () ;
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
            GALGAS_char var_lookedUpChar_68754 = temp_18.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2238)) ;
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2240)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2241)), object->mProperty_value.getter_containsCharacter (var_lookedUpChar_68754 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2239)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2244)).objectCompare (GALGAS_string ("containsCharInRange"))).boolEnum () ;
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
              GALGAS_char var_minChar_69077 = temp_20.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2246)) ;
              GALGAS_gtlChar temp_21 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr ())) {
                  temp_21 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
                }
              }
              GALGAS_char var_maxChar_69144 = temp_21.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2249)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2250)), object->mProperty_value.getter_containsCharacterInRange (var_minChar_69077, var_maxChar_69144 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2251))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2248)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2253)).objectCompare (GALGAS_string ("HTMLRepresentation"))).boolEnum () ;
              if (kBoolTrue == test_22) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)) ;
                }
                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2256)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2256)), object->mProperty_value.getter_HTMLRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2256))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2255)) ;
              }else if (kBoolFalse == test_22) {
                const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2258)).objectCompare (GALGAS_string ("identifierRepresentation"))).boolEnum () ;
                if (kBoolTrue == test_23) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2259)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2259)) ;
                  }
                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2261)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2261)), object->mProperty_value.getter_identifierRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2261))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2260)) ;
                }else if (kBoolFalse == test_23) {
                  const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2263)).objectCompare (GALGAS_string ("fileExists"))).boolEnum () ;
                  if (kBoolTrue == test_24) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2264)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2264)) ;
                    }
                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2266)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2266)), object->mProperty_value.getter_fileExists (SOURCE_FILE ("gtl_data_types.galgas", 2266))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2265)) ;
                  }else if (kBoolFalse == test_24) {
                    const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2268)).objectCompare (GALGAS_string ("lowercaseString"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2269)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2269)) ;
                      }
                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2271)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2271)), object->mProperty_value.getter_lowercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2271))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2270)) ;
                    }else if (kBoolFalse == test_25) {
                      const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2273)).objectCompare (GALGAS_string ("length"))).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)) ;
                        }
                        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2276)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2276)), object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2276)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2276))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                      }else if (kBoolFalse == test_26) {
                        GALGAS_bool test_27 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2278)).objectCompare (GALGAS_string ("capitalized"))) ;
                        if (kBoolTrue != test_27.boolEnum ()) {
                          test_27 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2279)))) ;
                        }
                        const enumGalgasBool test_28 = test_27.boolEnum () ;
                        if (kBoolTrue == test_28) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)) ;
                          }
                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2282)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2282)), object->mProperty_value.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("gtl_data_types.galgas", 2282))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                        }else if (kBoolFalse == test_28) {
                          const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2284)).objectCompare (GALGAS_string ("uppercaseString"))).boolEnum () ;
                          if (kBoolTrue == test_29) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2285)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2285)) ;
                            }
                            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2287)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)), object->mProperty_value.getter_uppercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2287))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)) ;
                          }else if (kBoolFalse == test_29) {
                            const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2289)).objectCompare (GALGAS_string ("unsigned"))).boolEnum () ;
                            if (kBoolTrue == test_30) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)) ;
                              }
                              result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2292)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2292)), object->mProperty_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2292)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2292))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2291)) ;
                            }else if (kBoolFalse == test_30) {
                              const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2294)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
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
                                GALGAS_string var_subString_71293 = temp_32.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2296)) ;
                                GALGAS_uint var_subStringLength_71370 = var_subString_71293.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2297)) ;
                                GALGAS_uint var_start_71407 = GALGAS_uint ((uint32_t) 0U) ;
                                GALGAS_uint var_stop_71426 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2299)).substract_operation (var_subStringLength_71370, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                GALGAS_bool var_exists_71478 = GALGAS_bool (false) ;
                                if (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2301)).isValid ()) {
                                  uint32_t variant_71496 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2301)).uintValue () ;
                                  bool loop_71496 = true ;
                                  while (loop_71496) {
                                    GALGAS_bool test_33 = var_exists_71478.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2302)) ;
                                    if (kBoolTrue == test_33.boolEnum ()) {
                                      test_33 = GALGAS_bool (kIsInfOrEqual, var_start_71407.objectCompare (var_stop_71426)) ;
                                    }
                                    loop_71496 = test_33.isValid () ;
                                    if (loop_71496) {
                                      loop_71496 = test_33.boolValue () ;
                                    }
                                    if (loop_71496 && (0 == variant_71496)) {
                                      loop_71496 = false ;
                                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2301)) ;
                                    }
                                    if (loop_71496) {
                                      variant_71496 -- ;
                                      const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_subString (var_start_71407, var_subStringLength_71370 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303)).objectCompare (var_subString_71293)).boolEnum () ;
                                      if (kBoolTrue == test_34) {
                                        var_exists_71478 = GALGAS_bool (true) ;
                                      }
                                      var_start_71407.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2306)) ;
                                    }
                                  }
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2309)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2309)), var_exists_71478  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2308)) ;
                              }else if (kBoolFalse == test_31) {
                                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2311)).objectCompare (GALGAS_string ("leftSubString"))).boolEnum () ;
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
                                  GALGAS_uint var_index_71904 = temp_36.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2313)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2313)) ;
                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2315)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)), object->mProperty_value.getter_leftSubString (var_index_71904 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)) ;
                                }else if (kBoolFalse == test_35) {
                                  const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2317)).objectCompare (GALGAS_string ("rightSubString"))).boolEnum () ;
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
                                    GALGAS_uint var_index_72197 = temp_38.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2319)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)) ;
                                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2321)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2321)), object->mProperty_value.getter_rightSubString (var_index_72197 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2321))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2320)) ;
                                  }else if (kBoolFalse == test_37) {
                                    const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2323)).objectCompare (GALGAS_string ("subString"))).boolEnum () ;
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
                                      GALGAS_uint var_start_72490 = temp_40.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2325)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)) ;
                                      GALGAS_gtlInt temp_41 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr ())) {
                                          temp_41 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                        }
                                      }
                                      GALGAS_uint var_length_72562 = temp_41.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2326)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2328)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2328)), object->mProperty_value.getter_subString (var_start_72490, var_length_72562 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2328))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2327)) ;
                                    }else if (kBoolFalse == test_39) {
                                      const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2330)).objectCompare (GALGAS_string ("reversedString"))).boolEnum () ;
                                      if (kBoolTrue == test_42) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2331)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2331)) ;
                                        }
                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2333)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2333)), object->mProperty_value.getter_reversedString (SOURCE_FILE ("gtl_data_types.galgas", 2333))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2332)) ;
                                      }else if (kBoolFalse == test_42) {
                                        const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2335)).objectCompare (GALGAS_string ("componentsSeparatedByString"))).boolEnum () ;
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
                                          GALGAS_string var_separator_73096 = temp_44.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2337)) ;
                                          GALGAS_stringlist var_stringlist_73174 = object->mProperty_value.getter_componentsSeparatedByString (var_separator_73096 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)) ;
                                          GALGAS_list var_components_73244 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2339)) ;
                                          cEnumerator_stringlist enumerator_73285 (var_stringlist_73174, kENUMERATION_UP) ;
                                          while (enumerator_73285.hasCurrentObject ()) {
                                            var_components_73244.addAssign_operation (GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2342)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2342)), enumerator_73285.current_mValue (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2341))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2341)) ;
                                            enumerator_73285.gotoNextObject () ;
                                          }
                                          result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2346)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2346)), var_components_73244  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2345)) ;
                                        }else if (kBoolFalse == test_43) {
                                          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2348)).objectCompare (GALGAS_string ("interpretEscape"))).boolEnum () ;
                                          if (kBoolTrue == test_45) {
                                            TC_Array <C_FixItDescription> fixItArray46 ;
                                            inCompiler->emitSemanticWarning (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2349)), GALGAS_string ("deprecated method"), fixItArray46  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2349)) ;
                                            const GALGAS_gtlString temp_47 = object ;
                                            result_result = temp_47 ;
                                          }else if (kBoolFalse == test_45) {
                                            const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2351)).objectCompare (GALGAS_string ("columnPrefixedBy"))).boolEnum () ;
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
                                              GALGAS_string var_prefix_73737 = temp_49.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2353)) ;
                                              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2355)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2356)), var_prefix_73737.add_operation (object->mProperty_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357)).getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\n").add_operation (var_prefix_73737, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2357))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2354)) ;
                                            }else if (kBoolFalse == test_48) {
                                              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2359)).objectCompare (GALGAS_string ("wrap"))).boolEnum () ;
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
                                                GALGAS_uint var_width_74074 = temp_51.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2361)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2361)) ;
                                                GALGAS_gtlInt temp_52 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr ())) {
                                                    temp_52 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)) ;
                                                  }
                                                }
                                                GALGAS_uint var_shift_74145 = temp_52.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2362)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2362)) ;
                                                GALGAS_string var_stringShift_74224 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_shift_74145  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2363)) ;
                                                GALGAS_stringlist var_paragraphs_74301 = object->mProperty_value.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2364)) ;
                                                GALGAS_stringlist var_resultParagraphs_74382 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2365)) ;
                                                cEnumerator_stringlist enumerator_74431 (var_paragraphs_74301, kENUMERATION_UP) ;
                                                while (enumerator_74431.hasCurrentObject ()) {
                                                  GALGAS_stringlist var_words_74458 = enumerator_74431.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string (" ") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2367)) ;
                                                  GALGAS_uint var_lineWidth_74527 = GALGAS_uint ((uint32_t) 0U) ;
                                                  GALGAS_string var_line_74550 = GALGAS_string::makeEmptyString () ;
                                                  cEnumerator_stringlist enumerator_74581 (var_words_74458, kENUMERATION_UP) ;
                                                  while (enumerator_74581.hasCurrentObject ()) {
                                                    const enumGalgasBool test_53 = GALGAS_bool (kIsNotEqual, enumerator_74581.current_mValue (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                                    if (kBoolTrue == test_53) {
                                                      const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, var_lineWidth_74527.add_operation (enumerator_74581.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2372)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2372)).objectCompare (var_width_74074)).boolEnum () ;
                                                      if (kBoolTrue == test_54) {
                                                        var_line_74550.plusAssign_operation(GALGAS_string ("\n").add_operation (var_stringShift_74224, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2373)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2373)) ;
                                                        var_lineWidth_74527 = var_shift_74145 ;
                                                      }
                                                      var_lineWidth_74527.plusAssign_operation(enumerator_74581.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2376)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2376)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2376)) ;
                                                      var_line_74550.plusAssign_operation(enumerator_74581.current_mValue (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2377)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2377)) ;
                                                    }
                                                    enumerator_74581.gotoNextObject () ;
                                                  }
                                                  var_resultParagraphs_74382.addAssign_operation (var_line_74550  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2380)) ;
                                                  enumerator_74431.gotoNextObject () ;
                                                }
                                                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2383)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2384)), GALGAS_string::constructor_componentsJoinedByString (var_resultParagraphs_74382, GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2382)) ;
                                              }else if (kBoolFalse == test_50) {
                                                const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2387)).objectCompare (GALGAS_string ("replaceString"))).boolEnum () ;
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
                                                  GALGAS_string var_find_75178 = temp_56.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2389)) ;
                                                  GALGAS_gtlString temp_57 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr ())) {
                                                      temp_57 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2390)) ;
                                                    }
                                                  }
                                                  GALGAS_string var_rep_75245 = temp_57.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2390)) ;
                                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2392)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2393)), object->mProperty_value.getter_stringByReplacingStringByString (var_find_75178, var_rep_75245, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2394))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2391)) ;
                                                }else if (kBoolFalse == test_55) {
                                                  const enumGalgasBool test_58 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2396)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
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
                                                    GALGAS_string var_subString_75580 = callExtensionGetter_string ((const cPtr_gtlString *) temp_59.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)) ;
                                                    GALGAS_uint var_subLength_75652 = var_subString_75580.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2399)) ;
                                                    GALGAS_uint var_start_75689 = GALGAS_uint ((uint32_t) 0U) ;
                                                    GALGAS_uint var_stop_75708 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2401)).substract_operation (var_subLength_75652, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2401)) ;
                                                    GALGAS_bool var_exists_75754 = GALGAS_bool (false) ;
                                                    if (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2403)).isValid ()) {
                                                      uint32_t variant_75771 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2403)).uintValue () ;
                                                      bool loop_75771 = true ;
                                                      while (loop_75771) {
                                                        loop_75771 = GALGAS_bool (kIsInfOrEqual, var_start_75689.objectCompare (var_stop_75708)).operator_and (var_exists_75754.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2404)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)).isValid () ;
                                                        if (loop_75771) {
                                                          loop_75771 = GALGAS_bool (kIsInfOrEqual, var_start_75689.objectCompare (var_stop_75708)).operator_and (var_exists_75754.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2404)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)).boolValue () ;
                                                        }
                                                        if (loop_75771 && (0 == variant_75771)) {
                                                          loop_75771 = false ;
                                                          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2403)) ;
                                                        }
                                                        if (loop_75771) {
                                                          variant_75771 -- ;
                                                          const enumGalgasBool test_60 = GALGAS_bool (kIsEqual, object->mProperty_value.getter_subString (var_start_75689, var_subLength_75652 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2405)).objectCompare (var_subString_75580)).boolEnum () ;
                                                          if (kBoolTrue == test_60) {
                                                            var_exists_75754 = GALGAS_bool (true) ;
                                                          }
                                                          var_start_75689.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2408)) ;
                                                        }
                                                      }
                                                    }
                                                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2411)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2412)), var_exists_75754  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2410)) ;
                                                  }else if (kBoolFalse == test_58) {
                                                    const enumGalgasBool test_61 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2415)).objectCompare (GALGAS_string ("envVarExists"))).boolEnum () ;
                                                    if (kBoolTrue == test_61) {
                                                      {
                                                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2416)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2416)) ;
                                                      }
                                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2418)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2419)), object->mProperty_value.getter_doesEnvironmentVariableExist (SOURCE_FILE ("gtl_data_types.galgas", 2420))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2417)) ;
                                                    }else if (kBoolFalse == test_61) {
                                                      const enumGalgasBool test_62 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2422)).objectCompare (GALGAS_string ("envVar"))).boolEnum () ;
                                                      if (kBoolTrue == test_62) {
                                                        {
                                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2423)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2423)) ;
                                                        }
                                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2425)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2426)), GALGAS_string::constructor_stringWithEnvironmentVariableOrEmpty (object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2427))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2424)) ;
                                                      }else if (kBoolFalse == test_62) {
                                                        const enumGalgasBool test_63 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2429)))).boolEnum () ;
                                                        if (kBoolTrue == test_63) {
                                                          {
                                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2430)) ;
                                                          }
                                                          const GALGAS_gtlString temp_64 = object ;
                                                          result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2432)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2432)), temp_64.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2432))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2431)) ;
                                                        }else if (kBoolFalse == test_63) {
                                                          const enumGalgasBool test_65 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2434)))).boolEnum () ;
                                                          if (kBoolTrue == test_65) {
                                                            {
                                                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2435)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2435)) ;
                                                            }
                                                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2437)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2437)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2436)) ;
                                                          }else if (kBoolFalse == test_65) {
                                                            const enumGalgasBool test_66 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2439)))).boolEnum () ;
                                                            if (kBoolTrue == test_66) {
                                                              {
                                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2440)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2440)) ;
                                                              }
                                                              result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2442)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2442)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2442))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2441)) ;
                                                            }else if (kBoolFalse == test_66) {
                                                              const enumGalgasBool test_67 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2444)).boolEnum () ;
                                                              if (kBoolTrue == test_67) {
                                                                const GALGAS_gtlString temp_68 = object ;
                                                                result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2445)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2446)), constinArgument_context, constinArgument_lib, temp_68, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2445)) ;
                                                              }else if (kBoolFalse == test_67) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionGetter_gtlString_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_performGetter (defineExtensionGetter_gtlString_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlString performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlString_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_gtlContext constinArgument_context,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlString * object = (cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2467)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_77897 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_77897.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2470)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2470)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2471)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2472)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2473)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2473)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2474)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("setCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2475)))).boolEnum () ;
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
        GALGAS_char var_charToSet_78253 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2477)) ;
        GALGAS_gtlInt temp_5 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr ())) {
            temp_5 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr () ;
          }else{
            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)) ;
          }
        }
        GALGAS_uint var_index_78318 = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2478)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2478)) ;
        {
        object->mProperty_value.setter_setCharacterAtIndex (var_charToSet_78253, var_index_78318, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2479)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2480)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("insertCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2481)))).boolEnum () ;
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
          GALGAS_char var_charToInsert_78581 = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2483)) ;
          GALGAS_gtlInt temp_8 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr ())) {
              temp_8 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr () ;
            }else{
              inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)) ;
            }
          }
          GALGAS_uint var_index_78646 = temp_8.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2484)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2484)) ;
          {
          object->mProperty_value.setter_insertCharacterAtIndex (var_charToInsert_78581, var_index_78646, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2485)) ;
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2486)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("removeCharAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2487)))).boolEnum () ;
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
            GALGAS_uint var_index_78903 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2489)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2489)) ;
            {
            GALGAS_char joker_78996 ; // Joker input parameter
            object->mProperty_value.setter_removeCharacterAtIndex (joker_78996, var_index_78903, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2490)) ;
            }
            object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2491)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_11 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2492)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_gtlString temp_12 = object ;
              GALGAS_gtlData var_copy_79100 = temp_12 ;
              callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2494)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2495)), constinArgument_context, constinArgument_lib, var_copy_79100, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2494)) ;
              GALGAS_gtlString temp_13 ;
              if (var_copy_79100.isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlString *> (var_copy_79100.ptr ())) {
                  temp_13 = (cPtr_gtlString *) var_copy_79100.ptr () ;
                }else{
                  inCompiler->castError ("gtlString", var_copy_79100.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2501)) ;
                }
              }
              object->mProperty_value = temp_13.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2501)) ;
              object->mProperty_where = var_copy_79100.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2502)) ;
              object->mProperty_meta = var_copy_79100.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2503)) ;
            }else if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2505)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2505)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)), fixItArray14  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2505)) ;
            }
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlString_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                      extensionSetter_gtlString_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlString_performSetter (defineExtensionSetter_gtlString_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_desc (defineExtensionGetter_gtlBool_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_string (defineExtensionGetter_gtlBool_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlBool lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_lstring (defineExtensionGetter_gtlBool_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_bool (defineExtensionGetter_gtlBool_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                            extensionGetter_gtlBool_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_int (defineExtensionGetter_gtlBool_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_float (defineExtensionGetter_gtlBool_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                               extensionGetter_gtlBool_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_plusOp (defineExtensionGetter_gtlBool_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlBool minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                extensionGetter_gtlBool_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_minusOp (defineExtensionGetter_gtlBool_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_notOp (defineExtensionGetter_gtlBool_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_addOp (defineExtensionGetter_gtlBool_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_subOp (defineExtensionGetter_gtlBool_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_mulOp (defineExtensionGetter_gtlBool_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_divOp (defineExtensionGetter_gtlBool_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_modOp (defineExtensionGetter_gtlBool_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2580)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2580)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_andOp (defineExtensionGetter_gtlBool_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2592)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2592)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_orOp (defineExtensionGetter_gtlBool_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2604)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2604)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_xorOp (defineExtensionGetter_gtlBool_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_slOp (defineExtensionGetter_gtlBool_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_srOp (defineExtensionGetter_gtlBool_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlBool neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2624)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2624)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                              extensionGetter_gtlBool_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_neqOp (defineExtensionGetter_gtlBool_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2636)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2636)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_eqOp (defineExtensionGetter_gtlBool_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2648)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2648)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_gtOp (defineExtensionGetter_gtlBool_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2660)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2660)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_geOp (defineExtensionGetter_gtlBool_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2672)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2672)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_ltOp (defineExtensionGetter_gtlBool_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlBool leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlBool_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2684)), GALGAS_string ("bool expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2684)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                             extensionGetter_gtlBool_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_leOp (defineExtensionGetter_gtlBool_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlBool embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlBool_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_bool) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                     extensionGetter_gtlBool_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_embeddedType (defineExtensionGetter_gtlBool_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlBool addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlBool_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2695))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2695)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlBool_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                   extensionMethod_gtlBool_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlBool_addMyValue (defineExtensionMethod_gtlBool_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlBool performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2708)).objectCompare (GALGAS_string ("trueOrFalse"))).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2715)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2716)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2716)) ;
      }
      const GALGAS_gtlBool temp_4 = object ;
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2718)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2719)), callExtensionGetter_string ((const cPtr_gtlBool *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2720))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2717)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2722)).objectCompare (GALGAS_string ("yesOrNo"))).boolEnum () ;
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
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2729)).objectCompare (GALGAS_string ("TRUEOrFALSE"))).boolEnum () ;
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
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2736)).objectCompare (GALGAS_string ("YESOrNO"))).boolEnum () ;
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
          }else if (kBoolFalse == test_11) {
            GALGAS_bool test_14 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2743)).objectCompare (GALGAS_string ("int"))) ;
            if (kBoolTrue != test_14.boolEnum ()) {
              test_14 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2743)).objectCompare (GALGAS_string ("unsigned"))) ;
            }
            const enumGalgasBool test_15 = test_14.boolEnum () ;
            if (kBoolTrue == test_15) {
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
            }else if (kBoolFalse == test_15) {
              const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2750)))).boolEnum () ;
              if (kBoolTrue == test_18) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2751)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2751)) ;
                }
                const GALGAS_gtlBool temp_19 = object ;
                result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2753)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2753)), temp_19.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2753))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2752)) ;
              }else if (kBoolFalse == test_18) {
                const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2755)))).boolEnum () ;
                if (kBoolTrue == test_20) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2756)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2756)) ;
                  }
                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2758)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2758)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2757)) ;
                }else if (kBoolFalse == test_20) {
                  const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2760)))).boolEnum () ;
                  if (kBoolTrue == test_21) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2761)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2761)) ;
                    }
                    result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2763)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2763)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2763))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2762)) ;
                  }else if (kBoolFalse == test_21) {
                    const enumGalgasBool test_22 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2765)).boolEnum () ;
                    if (kBoolTrue == test_22) {
                      const GALGAS_gtlBool temp_23 = object ;
                      result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2766)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2767)), constinArgument_context, constinArgument_lib, temp_23, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2766)) ;
                    }else if (kBoolFalse == test_22) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionGetter_gtlBool_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_performGetter (defineExtensionGetter_gtlBool_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlBool performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlBool_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlBool * object = (cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2788)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_87337 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_87337.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2791)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2791)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2792)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2793)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2794)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2794)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2795)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2796)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlBool temp_4 = object ;
        GALGAS_gtlData var_copy_87633 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("bool"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2798)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2799)), constinArgument_context, constinArgument_lib, var_copy_87633, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2798)) ;
        GALGAS_gtlBool temp_5 ;
        if (var_copy_87633.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_copy_87633.ptr ())) {
            temp_5 = (cPtr_gtlBool *) var_copy_87633.ptr () ;
          }else{
            inCompiler->castError ("gtlBool", var_copy_87633.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2805)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2805)) ;
        object->mProperty_where = var_copy_87633.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2806)) ;
        object->mProperty_meta = var_copy_87633.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 2807)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2809)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2809)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)).add_operation (GALGAS_string ("' for boolean target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2809)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlBool_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                      extensionSetter_gtlBool_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlBool_performSetter (defineExtensionSetter_gtlBool_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlSet_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2833)).add_operation (GALGAS_string ("set: @!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2833)) ;
  cEnumerator_lstringset enumerator_88858 (object->mProperty_value, kENUMERATION_UP) ;
  const bool bool_0 = true ;
  if (enumerator_88858.hasCurrentObject () && bool_0) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2837)) ;
    while (enumerator_88858.hasCurrentObject () && bool_0) {
      result_result.plusAssign_operation(enumerator_88858.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2839)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2839)) ;
      enumerator_88858.gotoNextObject () ;
      if (enumerator_88858.hasCurrentObject () && bool_0) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2841)) ;
      }
    }
    result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2843)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)).add_operation (GALGAS_string ("!\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2845)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_desc (defineExtensionGetter_gtlSet_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_string (defineExtensionGetter_gtlSet_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_lstring (defineExtensionGetter_gtlSet_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_bool (defineExtensionGetter_gtlSet_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlSet int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                            extensionGetter_gtlSet_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_int (defineExtensionGetter_gtlSet_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_float (defineExtensionGetter_gtlSet_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                               extensionGetter_gtlSet_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_plusOp (defineExtensionGetter_gtlSet_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlSet minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                extensionGetter_gtlSet_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_minusOp (defineExtensionGetter_gtlSet_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_notOp (defineExtensionGetter_gtlSet_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  GALGAS_lstringset var_set_90023 = object->mProperty_value ;
  GALGAS_lstring var_element_90050 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2882)) ;
  const enumGalgasBool test_0 = var_set_90023.getter_hasKey (var_element_90050.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2883)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2883)).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    var_set_90023.setter_del (var_element_90050, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2884)) ;
    }
  }
  {
  var_set_90023.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2886)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2886)) ;
  }
  result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2887)), var_set_90023  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2887)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_addOp (defineExtensionGetter_gtlSet_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstringset var_resultSet_90347 = object->mProperty_value ;
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2893)) ;
      }
    }
    cEnumerator_lstringset enumerator_90398 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2893)), kENUMERATION_UP) ;
    while (enumerator_90398.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_resultSet_90347.getter_hasKey (enumerator_90398.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2894)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2894)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_resultSet_90347.setter_del (enumerator_90398.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2895)) ;
        }
      }
      enumerator_90398.gotoNextObject () ;
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2899)), var_resultSet_90347  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2898)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2902)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2902)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_subOp (defineExtensionGetter_gtlSet_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_mulOp (defineExtensionGetter_gtlSet_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_divOp (defineExtensionGetter_gtlSet_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_modOp (defineExtensionGetter_gtlSet_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstringset var_resultSet_91114 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 2920)) ;
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2921)) ;
      }
    }
    cEnumerator_lstringset enumerator_91173 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2921)), kENUMERATION_UP) ;
    while (enumerator_91173.hasCurrentObject ()) {
      const enumGalgasBool test_2 = object->mProperty_value.getter_hasKey (enumerator_91173.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2922)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2922)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_resultSet_91114.setter_put (enumerator_91173.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2923)) ;
        }
      }
      enumerator_91173.gotoNextObject () ;
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2927)), var_resultSet_91114  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2926)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2930)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2930)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_andOp (defineExtensionGetter_gtlSet_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2936)) ;
      }
    }
    GALGAS_lstringset var_resultSet_91526 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2936)) ;
    cEnumerator_lstringset enumerator_91580 (object->mProperty_value, kENUMERATION_UP) ;
    while (enumerator_91580.hasCurrentObject ()) {
      const enumGalgasBool test_2 = var_resultSet_91526.getter_hasKey (enumerator_91580.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2938)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2938)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2938)).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_resultSet_91526.setter_put (enumerator_91580.current_lkey (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2939)) ;
        }
      }
      enumerator_91580.gotoNextObject () ;
    }
    result_result = GALGAS_gtlSet::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2943)), var_resultSet_91526  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2942)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2946)), GALGAS_string ("set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2946)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_orOp (defineExtensionGetter_gtlSet_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_xorOp (defineExtensionGetter_gtlSet_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_slOp (defineExtensionGetter_gtlSet_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_srOp (defineExtensionGetter_gtlSet_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2968)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2968)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                              extensionGetter_gtlSet_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_neqOp (defineExtensionGetter_gtlSet_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2978)), GALGAS_string ("set expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2978)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_eqOp (defineExtensionGetter_gtlSet_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2984)) ;
      }
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2984)).objectCompare (object->mProperty_value)).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2985)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2985)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_included_92928 = GALGAS_bool (true) ;
      GALGAS_gtlSet temp_3 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
          temp_3 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2988)) ;
        }
      }
      cEnumerator_lstringset enumerator_92979 (temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2988)), kENUMERATION_UP) ;
      bool bool_4 = var_included_92928.isValidAndTrue () ;
      if (enumerator_92979.hasCurrentObject () && bool_4) {
        while (enumerator_92979.hasCurrentObject () && bool_4) {
          const enumGalgasBool test_5 = object->mProperty_value.getter_hasKey (enumerator_92979.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2989)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2989)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2989)).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_included_92928 = GALGAS_bool (false) ;
          }
          enumerator_92979.gotoNextObject () ;
          if (enumerator_92979.hasCurrentObject ()) {
            bool_4 = var_included_92928.isValidAndTrue () ;
          }
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2991)), var_included_92928  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2991)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2994)), GALGAS_string ("set expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2994)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_gtOp (defineExtensionGetter_gtlSet_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_included_93318 = GALGAS_bool (true) ;
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3001)) ;
      }
    }
    cEnumerator_lstringset enumerator_93367 (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3001)), kENUMERATION_UP) ;
    bool bool_2 = var_included_93318.isValidAndTrue () ;
    if (enumerator_93367.hasCurrentObject () && bool_2) {
      while (enumerator_93367.hasCurrentObject () && bool_2) {
        const enumGalgasBool test_3 = object->mProperty_value.getter_hasKey (enumerator_93367.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3002)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3002)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3002)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_included_93318 = GALGAS_bool (false) ;
        }
        enumerator_93367.gotoNextObject () ;
        if (enumerator_93367.hasCurrentObject ()) {
          bool_2 = var_included_93318.isValidAndTrue () ;
        }
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3004)), var_included_93318  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3004)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3006)), GALGAS_string ("set expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3006)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_geOp (defineExtensionGetter_gtlSet_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlSet temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3012)) ;
      }
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3012)).objectCompare (object->mProperty_value)).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3013)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3013)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_bool var_included_93811 = GALGAS_bool (true) ;
      cEnumerator_lstringset enumerator_93843 (object->mProperty_value, kENUMERATION_UP) ;
      bool bool_3 = var_included_93811.isValidAndTrue () ;
      if (enumerator_93843.hasCurrentObject () && bool_3) {
        while (enumerator_93843.hasCurrentObject () && bool_3) {
          GALGAS_gtlSet temp_4 ;
          if (constinArgument_right.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
              temp_4 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
            }else{
              inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3017)) ;
            }
          }
          const enumGalgasBool test_5 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3017)).getter_hasKey (enumerator_93843.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3017)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3017)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3017)).boolEnum () ;
          if (kBoolTrue == test_5) {
            var_included_93811 = GALGAS_bool (false) ;
          }
          enumerator_93843.gotoNextObject () ;
          if (enumerator_93843.hasCurrentObject ()) {
            bool_3 = var_included_93811.isValidAndTrue () ;
          }
        }
      }
      result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)), var_included_93811  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3019)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3022)), GALGAS_string ("set expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3022)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_ltOp (defineExtensionGetter_gtlSet_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlSet leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSet_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_included_94201 = GALGAS_bool (true) ;
    cEnumerator_lstringset enumerator_94231 (object->mProperty_value, kENUMERATION_UP) ;
    bool bool_1 = var_included_94201.isValidAndTrue () ;
    if (enumerator_94231.hasCurrentObject () && bool_1) {
      while (enumerator_94231.hasCurrentObject () && bool_1) {
        GALGAS_gtlSet temp_2 ;
        if (constinArgument_right.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlSet *> (constinArgument_right.ptr ())) {
            temp_2 = (cPtr_gtlSet *) constinArgument_right.ptr () ;
          }else{
            inCompiler->castError ("gtlSet", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3030)) ;
          }
        }
        const enumGalgasBool test_3 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3030)).getter_hasKey (enumerator_94231.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3030)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3030)).operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3030)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_included_94201 = GALGAS_bool (false) ;
        }
        enumerator_94231.gotoNextObject () ;
        if (enumerator_94231.hasCurrentObject ()) {
          bool_1 = var_included_94201.isValidAndTrue () ;
        }
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3032)), var_included_94201  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3032)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3034)), GALGAS_string ("set expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3034)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                             extensionGetter_gtlSet_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_leOp (defineExtensionGetter_gtlSet_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlSet embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                     extensionGetter_gtlSet_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_embeddedType (defineExtensionGetter_gtlSet_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlSet addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSet_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3045))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3045)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSet_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                   extensionMethod_gtlSet_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSet_addMyValue (defineExtensionMethod_gtlSet_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlSet performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3058)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3059)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3061)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3062)), object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3063)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3063))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3060)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3065)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3066)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3066)) ;
      }
      result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3068)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3068)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3068))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3067)) ;
      cEnumerator_lstringset enumerator_95501 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_95501.hasCurrentObject ()) {
        {
        result_result.insulate (HERE) ;
        cPtr_gtlData * ptr_95520 = (cPtr_gtlData *) result_result.ptr () ;
        callExtensionSetter_appendItem ((cPtr_gtlData *) ptr_95520, GALGAS_gtlString::constructor_new (enumerator_95501.current_lkey (HERE).getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3071)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)), enumerator_95501.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3071))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3071)) ;
        }
        enumerator_95501.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("contains").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3073)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3074)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3074)) ;
        }
        GALGAS_string var_key_95714 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3075)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3075)) ;
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3077)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3077)), object->mProperty_value.getter_hasKey (var_key_95714 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3077))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3076)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("elementNamed").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3079)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3080)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3080)) ;
          }
          GALGAS_string var_key_95978 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3081)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3081)) ;
          GALGAS_location var_loc_96034 = object->mProperty_value.getter_locationForKey (var_key_95978, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3082)) ;
          result_result = GALGAS_gtlString::constructor_new (var_loc_96034, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3084)), var_key_95978  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3083)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3086)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3087)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3087)) ;
            }
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3089)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3089)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3088)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3091)))).boolEnum () ;
            if (kBoolTrue == test_5) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3092)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3092)) ;
              }
              result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3094)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3094)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3094))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3093)) ;
            }else if (kBoolFalse == test_5) {
              const enumGalgasBool test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3096)).boolEnum () ;
              if (kBoolTrue == test_6) {
                const GALGAS_gtlSet temp_7 = object ;
                result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3097)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3098)), constinArgument_context, constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3097)) ;
              }else if (kBoolFalse == test_6) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionGetter_gtlSet_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_performGetter (defineExtensionGetter_gtlSet_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlSet performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlSet_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_gtlContext constinArgument_context,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlSet * object = (cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3119)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_97272 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_97272.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3122)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3122)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3123)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3124)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3125)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3125)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3126)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("add").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3127)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3128)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3128)) ;
        }
        GALGAS_lstring var_key_97614 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3129)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3129)) ;
        const enumGalgasBool test_4 = object->mProperty_value.getter_hasKey (var_key_97614.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3130)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3130)).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          object->mProperty_value.setter_del (var_key_97614, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3131)) ;
          }
        }
        {
        object->mProperty_value.setter_put (var_key_97614, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3133)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3134)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("remove").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3135)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3136)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3136)) ;
          }
          GALGAS_lstring var_key_97880 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3137)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3137)) ;
          const enumGalgasBool test_6 = object->mProperty_value.getter_hasKey (var_key_97880.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3138)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3138)).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            object->mProperty_value.setter_del (var_key_97880, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3139)) ;
            }
          }
          object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3141)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3142)).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_gtlSet temp_8 = object ;
            GALGAS_gtlData var_copy_98076 = temp_8 ;
            callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("set"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3144)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3145)), constinArgument_context, constinArgument_lib, var_copy_98076, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3144)) ;
            GALGAS_gtlSet temp_9 ;
            if (var_copy_98076.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlSet *> (var_copy_98076.ptr ())) {
                temp_9 = (cPtr_gtlSet *) var_copy_98076.ptr () ;
              }else{
                inCompiler->castError ("gtlSet", var_copy_98076.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3151)) ;
              }
            }
            object->mProperty_value = temp_9.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3151)) ;
            object->mProperty_where = var_copy_98076.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3152)) ;
            object->mProperty_meta = var_copy_98076.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3153)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3155)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3155)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)).add_operation (GALGAS_string ("' for set target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)), fixItArray10  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3155)) ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlSet_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                      extensionSetter_gtlSet_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlSet_performSetter (defineExtensionSetter_gtlSet_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct desc'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlStruct_desc (const cPtr_gtlData * inObject,
                                                     const GALGAS_uint constinArgument_tab,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)).add_operation (GALGAS_string ("struct: @{\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3168)) ;
  cEnumerator_gtlVarMap enumerator_98832 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_98832.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)).add_operation (enumerator_98832.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3172)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3172)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_98832.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3173)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3173)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3172)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3171)) ;
    enumerator_98832.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3175)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_desc (defineExtensionGetter_gtlStruct_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct string'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_string (defineExtensionGetter_gtlStruct_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlStruct lstring'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_lstring (defineExtensionGetter_gtlStruct_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct bool'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_bool (defineExtensionGetter_gtlStruct_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct int'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                            extensionGetter_gtlStruct_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_int (defineExtensionGetter_gtlStruct_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct float'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_float (defineExtensionGetter_gtlStruct_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct plusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                               extensionGetter_gtlStruct_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_plusOp (defineExtensionGetter_gtlStruct_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlStruct minusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                extensionGetter_gtlStruct_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_minusOp (defineExtensionGetter_gtlStruct_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct notOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_notOp (defineExtensionGetter_gtlStruct_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct addOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_addOp (defineExtensionGetter_gtlStruct_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct subOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_subOp (defineExtensionGetter_gtlStruct_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct mulOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_mulOp (defineExtensionGetter_gtlStruct_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct divOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_divOp (defineExtensionGetter_gtlStruct_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct modOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_modOp (defineExtensionGetter_gtlStruct_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct andOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_andOp (defineExtensionGetter_gtlStruct_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct orOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_orOp (defineExtensionGetter_gtlStruct_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct xorOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_xorOp (defineExtensionGetter_gtlStruct_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct slOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_slOp (defineExtensionGetter_gtlStruct_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct srOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_srOp (defineExtensionGetter_gtlStruct_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlStruct neqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_neqOp (const cPtr_gtlData * inObject,
                                                       const GALGAS_gtlData constinArgument_right,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlStruct temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3252)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_101304 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3252)) ;
    GALGAS_bool var_equal_101350 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3254)).objectCompare (var_rValue_101304.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3254)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_101350 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_101350 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_101475 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_101475.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_101304.getter_hasKey (enumerator_101475.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3259)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3259)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_101560 ;
          var_rValue_101304.method_get (enumerator_101475.current_lkey (HERE), var_rData_101560, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3260)) ;
          var_equal_101350 = var_equal_101350.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_101475.current_value (HERE).ptr (), var_rData_101560, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3261)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_101350 = GALGAS_bool (false) ;
        }
        enumerator_101475.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3267)), var_equal_101350.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3267))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3267)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3269)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3269)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                              extensionGetter_gtlStruct_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_neqOp (defineExtensionGetter_gtlStruct_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct eqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_eqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlStruct temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlStruct *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlStruct", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3275)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_101936 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3275)) ;
    GALGAS_bool var_equal_101982 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3277)).objectCompare (var_rValue_101936.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 3277)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_101982 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_101982 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_102107 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_102107.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_101936.getter_hasKey (enumerator_102107.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3282)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3282)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_102192 ;
          var_rValue_101936.method_get (enumerator_102107.current_lkey (HERE), var_rData_102192, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3283)) ;
          var_equal_101982 = var_equal_101982.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_102107.current_value (HERE).ptr (), var_rData_102192, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3284)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_101982 = GALGAS_bool (false) ;
        }
        enumerator_102107.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3290)), var_equal_101982  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3290)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3292)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3292)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_eqOp (defineExtensionGetter_gtlStruct_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct gtOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_gtOp (defineExtensionGetter_gtlStruct_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct geOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_geOp (defineExtensionGetter_gtlStruct_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct ltOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_ltOp (defineExtensionGetter_gtlStruct_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlStruct leOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                             extensionGetter_gtlStruct_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_leOp (defineExtensionGetter_gtlStruct_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct embeddedType'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                     extensionGetter_gtlStruct_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_embeddedType (defineExtensionGetter_gtlStruct_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlStruct addMyValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlStruct_addMyValue (const cPtr_gtlData * inObject,
                                                  GALGAS_objectlist & ioArgument_objectList,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3316))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlStruct_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                   extensionMethod_gtlStruct_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlStruct_addMyValue (defineExtensionMethod_gtlStruct_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("map").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3329)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3330)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3330)) ;
    }
    result_result = GALGAS_gtlMap::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3332)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3333)), object->mProperty_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3331)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3336)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3337)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3337)) ;
      }
      const GALGAS_gtlStruct temp_2 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3339)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3339)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3339))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3338)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3341)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3342)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3342)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3344)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3344)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3343)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3346)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3347)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3347)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3349)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3349)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3349))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3348)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3351)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_gtlStruct temp_6 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3352)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3353)), constinArgument_context, constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3352)) ;
          }else if (kBoolFalse == test_5) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_performGetter (defineExtensionGetter_gtlStruct_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlStruct performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_performSetter (cPtr_gtlData * inObject,
                                                     const GALGAS_lstring constinArgument_methodName,
                                                     const GALGAS_gtlDataList constinArgument_arguments,
                                                     const GALGAS_gtlContext constinArgument_context,
                                                     const GALGAS_library constinArgument_lib,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3374)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_105121 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_105121.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3377)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3377)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3378)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3379)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3380)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3380)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3381)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3382)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlStruct temp_4 = object ;
        GALGAS_gtlData var_copy_105419 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("struct"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3384)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3385)), constinArgument_context, constinArgument_lib, var_copy_105419, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3384)) ;
        GALGAS_gtlStruct temp_5 ;
        if (var_copy_105419.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlStruct *> (var_copy_105419.ptr ())) {
            temp_5 = (cPtr_gtlStruct *) var_copy_105419.ptr () ;
          }else{
            inCompiler->castError ("gtlStruct", var_copy_105419.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3391)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3391)) ;
        object->mProperty_where = var_copy_105419.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3392)) ;
        object->mProperty_meta = var_copy_105419.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3393)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3395)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3395)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)).add_operation (GALGAS_string ("' for struct target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3395)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionSetter_gtlStruct_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_performSetter (defineExtensionSetter_gtlStruct_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension method '@gtlStruct structField'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlStruct_structField (const cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   GALGAS_gtlData & outArgument_result,
                                                   GALGAS_bool & outArgument_found,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3407)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3407)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mProperty_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3408)) ;
    outArgument_found = GALGAS_bool (true) ;
  }else if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3411)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3411))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3411)) ;
    outArgument_found = GALGAS_bool (false) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlStruct_structField (void) {
  enterExtensionMethod_structField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionMethod_gtlStruct_structField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlStruct_structField (defineExtensionMethod_gtlStruct_structField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct resultField'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlStruct_resultField (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring constinArgument_name,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  const enumGalgasBool test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3420)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3420)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mProperty_value.method_get (constinArgument_name, result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3421)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3423)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3423))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3423)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_resultField (void) {
  enterExtensionGetter_resultField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_resultField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_resultField (defineExtensionGetter_gtlStruct_resultField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct hasStructField'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_hasStructField (void) {
  enterExtensionGetter_hasStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionGetter_gtlStruct_hasStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_hasStructField (defineExtensionGetter_gtlStruct_hasStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension setter '@gtlStruct setStructField'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                       extensionSetter_gtlStruct_setStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_setStructField (defineExtensionSetter_gtlStruct_setStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension setter '@gtlStruct setStructFieldAtLevel'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                              extensionSetter_gtlStruct_setStructFieldAtLevel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_setStructFieldAtLevel (defineExtensionSetter_gtlStruct_setStructFieldAtLevel, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension setter '@gtlStruct deleteStructField'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlStruct_deleteStructField (cPtr_gtlData * inObject,
                                                         const GALGAS_lstring constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlStruct * object = (cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  {
  GALGAS_gtlData joker_107728 ; // Joker input parameter
  object->mProperty_value.setter_del (constinArgument_name, joker_107728, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3464)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlStruct_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                          extensionSetter_gtlStruct_deleteStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlStruct_deleteStructField (defineExtensionSetter_gtlStruct_deleteStructField, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlList_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3476)).add_operation (GALGAS_string ("list: @(\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3476)) ;
  cEnumerator_list enumerator_108142 (object->mProperty_value, kENUMERATION_UP) ;
  GALGAS_uint index_108130 ((uint32_t) 0) ;
  while (enumerator_108142.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)).add_operation (index_108130.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3480)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)).add_operation (GALGAS_string (" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3480)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_108142.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3481)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3481)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3480)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3479)) ;
    enumerator_108142.gotoNextObject () ;
    index_108130.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3478)) ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3483)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_desc (defineExtensionGetter_gtlList_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_string (defineExtensionGetter_gtlList_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlList lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_lstring (defineExtensionGetter_gtlList_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_bool (defineExtensionGetter_gtlList_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                            extensionGetter_gtlList_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_int (defineExtensionGetter_gtlList_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_float (defineExtensionGetter_gtlList_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                               extensionGetter_gtlList_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_plusOp (defineExtensionGetter_gtlList_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlList minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                extensionGetter_gtlList_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_minusOp (defineExtensionGetter_gtlList_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_notOp (defineExtensionGetter_gtlList_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_list var_res_109261 = object->mProperty_value ;
  var_res_109261.addAssign_operation (constinArgument_right  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3520)) ;
  result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3521)), var_res_109261  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3521)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_addOp (defineExtensionGetter_gtlList_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_subOp (defineExtensionGetter_gtlList_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_mulOp (defineExtensionGetter_gtlList_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_divOp (defineExtensionGetter_gtlList_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_modOp (defineExtensionGetter_gtlList_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_andOp (defineExtensionGetter_gtlList_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3552)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3552)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_orOp (defineExtensionGetter_gtlList_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_xorOp (defineExtensionGetter_gtlList_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_slOp (defineExtensionGetter_gtlList_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_srOp (defineExtensionGetter_gtlList_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlList neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlList temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3570)) ;
      }
    }
    GALGAS_list var_rValue_110739 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3570)) ;
    GALGAS_bool var_equal_110783 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3572)).objectCompare (var_rValue_110739.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3572)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_110783 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_110783 = GALGAS_bool (true) ;
      cEnumerator_list enumerator_110903 (object->mProperty_value, kENUMERATION_UP) ;
      cEnumerator_list enumerator_110922 (var_rValue_110739, kENUMERATION_UP) ;
      while (enumerator_110903.hasCurrentObject () && enumerator_110922.hasCurrentObject ()) {
        var_equal_110783 = var_equal_110783.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_110903.current_value (HERE).ptr (), enumerator_110922.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3577)) ;
        enumerator_110903.gotoNextObject () ;
        enumerator_110922.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3580)), var_equal_110783.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 3580))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3580)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3582)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3582)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                              extensionGetter_gtlList_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_neqOp (defineExtensionGetter_gtlList_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlList_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlList temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlList *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlList *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlList", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3588)) ;
      }
    }
    GALGAS_list var_rValue_111236 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3588)) ;
    GALGAS_bool var_equal_111280 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3590)).objectCompare (var_rValue_111236.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3590)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_111280 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_111280 = GALGAS_bool (true) ;
      cEnumerator_list enumerator_111400 (object->mProperty_value, kENUMERATION_UP) ;
      cEnumerator_list enumerator_111419 (var_rValue_111236, kENUMERATION_UP) ;
      while (enumerator_111400.hasCurrentObject () && enumerator_111419.hasCurrentObject ()) {
        var_equal_111280 = var_equal_111280.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_111400.current_value (HERE).ptr (), enumerator_111419.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3595)) ;
        enumerator_111400.gotoNextObject () ;
        enumerator_111419.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3598)), var_equal_111280  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3598)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3600)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3600)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_eqOp (defineExtensionGetter_gtlList_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_gtOp (defineExtensionGetter_gtlList_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_geOp (defineExtensionGetter_gtlList_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_ltOp (defineExtensionGetter_gtlList_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlList leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                             extensionGetter_gtlList_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_leOp (defineExtensionGetter_gtlList_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlList embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                     extensionGetter_gtlList_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_embeddedType (defineExtensionGetter_gtlList_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlList addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlList_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 3627))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3627)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlList_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionMethod_gtlList_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlList_addMyValue (defineExtensionMethod_gtlList_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlList performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3640)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3641)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3643)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3644)), object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3645)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 3645))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3642)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("first").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3647)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3648)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3648)) ;
      }
      object->mProperty_value.method_first (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3649)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("last").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3650)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3651)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3651)) ;
        }
        object->mProperty_value.method_last (result_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3652)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("elementAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3653)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3654)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3654)) ;
          }
          GALGAS_uint var_index_113428 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3655)) ;
          const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_index_113428.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3656)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            result_result = object->mProperty_value.getter_valueAtIndex (var_index_113428, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3657)) ;
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3659)), GALGAS_string ("index out of bounds"), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3659)) ;
            result_result.drop () ; // Release error dropped variable
          }
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("subListTo").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3661)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3662)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3662)) ;
            }
            GALGAS_uint var_index_113740 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3663)) ;
            const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, var_index_113740.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3664)))).boolEnum () ;
            if (kBoolTrue == test_7) {
              result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3666)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3667)), object->mProperty_value.getter_subListToIndex (var_index_113740, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3668))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3665)) ;
            }else if (kBoolFalse == test_7) {
              const GALGAS_gtlList temp_8 = object ;
              result_result = temp_8 ;
            }
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("subListFrom").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3673)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3674)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3674)) ;
              }
              GALGAS_uint var_index_114094 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3675)) ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictInf, var_index_114094.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3676)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3678)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3679)), object->mProperty_value.getter_subListFromIndex (var_index_114094, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3680))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3677)) ;
              }else if (kBoolFalse == test_10) {
                result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3684)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3685)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3686))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3683)) ;
              }
            }else if (kBoolFalse == test_9) {
              const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("subList").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3689)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3690)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3690)) ;
                }
                GALGAS_uint var_start_114536 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3691)) ;
                GALGAS_uint var_length_114589 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3692)) ;
                const enumGalgasBool test_12 = GALGAS_bool (kIsStrictInf, var_start_114536.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3693)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_start_114536.add_operation (var_length_114589, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3694)).objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3694)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    var_length_114589 = object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3695)).substract_operation (var_start_114536, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3695)) ;
                  }
                  result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3698)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3699)), object->mProperty_value.getter_subListWithRange (GALGAS_range::constructor_new (var_start_114536, var_length_114589  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3700)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3700))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3697)) ;
                }else if (kBoolFalse == test_12) {
                  result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3704)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3705)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3706))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3703)) ;
                }
              }else if (kBoolFalse == test_11) {
                const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_string ("mapBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3709)))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_anyArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3710)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3710)) ;
                  }
                  GALGAS_lstring var_key_115148 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3711)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3711)) ;
                  GALGAS_gtlVarMap var_resultMap_115212 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3712)) ;
                  const GALGAS_gtlList temp_15 = object ;
                  cEnumerator_list enumerator_115255 (temp_15.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3713)), kENUMERATION_UP) ;
                  GALGAS_uint index_115232 ((uint32_t) 0) ;
                  while (enumerator_115255.hasCurrentObject ()) {
                    if (enumerator_115255.current_value (HERE).isValid ()) {
                      if (enumerator_115255.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
                        GALGAS_gtlStruct cast_115318_itemStruct ((cPtr_gtlStruct *) enumerator_115255.current_value (HERE).ptr ()) ;
                        const enumGalgasBool test_16 = cast_115318_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3716)).getter_hasKey (var_key_115148.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3716)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3716)).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          GALGAS_gtlData var_keyValue_115435 ;
                          cast_115318_itemStruct.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3717)).method_get (var_key_115148, var_keyValue_115435, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3717)) ;
                          {
                          var_resultMap_115212.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_115435.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3719)), enumerator_115255.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3718)) ;
                          }
                        }else if (kBoolFalse == test_16) {
                          TC_Array <C_FixItDescription> fixItArray17 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3723)), GALGAS_string ("item at index ").add_operation (index_115232.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3723)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)).add_operation (var_key_115148.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3724)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3724)), fixItArray17  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3723)) ;
                        }
                      }else if (enumerator_115255.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
                        GALGAS_gtlMap cast_115684_itemMap ((cPtr_gtlMap *) enumerator_115255.current_value (HERE).ptr ()) ;
                        const enumGalgasBool test_18 = cast_115684_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3727)).getter_hasKey (var_key_115148.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3727)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3727)).boolEnum () ;
                        if (kBoolTrue == test_18) {
                          GALGAS_gtlData var_keyValue_115795 ;
                          cast_115684_itemMap.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3728)).method_get (var_key_115148, var_keyValue_115795, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3728)) ;
                          {
                          var_resultMap_115212.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_115795.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3730)), enumerator_115255.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3729)) ;
                          }
                        }else if (kBoolFalse == test_18) {
                          TC_Array <C_FixItDescription> fixItArray19 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3734)), GALGAS_string ("item at index ").add_operation (index_115232.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3734)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)).add_operation (var_key_115148.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3735)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3735)), fixItArray19  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3734)) ;
                        }
                      }else{
                        TC_Array <C_FixItDescription> fixItArray20 ;
                        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3738)), GALGAS_string ("list of struct expected"), fixItArray20  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3738)) ;
                      }
                    }
                    enumerator_115255.gotoNextObject () ;
                    index_115232.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3713)) ;
                  }
                  result_result = GALGAS_gtlMap::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3741)), var_resultMap_115212  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3741)) ;
                }else if (kBoolFalse == test_14) {
                  const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("set").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3742)))).boolEnum () ;
                  if (kBoolTrue == test_21) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3743)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3743)) ;
                    }
                    GALGAS_lstringset var_resultSet_116294 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3744)) ;
                    cEnumerator_list enumerator_116330 (object->mProperty_value, kENUMERATION_UP) ;
                    while (enumerator_116330.hasCurrentObject ()) {
                      GALGAS_lstring var_itemKey_116356 = callExtensionGetter_lstring ((const cPtr_gtlData *) enumerator_116330.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3746)) ;
                      const enumGalgasBool test_22 = var_resultSet_116294.getter_hasKey (var_itemKey_116356.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3747)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3747)).boolEnum () ;
                      if (kBoolTrue == test_22) {
                        {
                        var_resultSet_116294.setter_del (var_itemKey_116356, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3748)) ;
                        }
                      }
                      {
                      var_resultSet_116294.setter_put (var_itemKey_116356, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3750)) ;
                      }
                      enumerator_116330.gotoNextObject () ;
                    }
                    result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3753)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3753)), var_resultSet_116294  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3752)) ;
                  }else if (kBoolFalse == test_21) {
                    const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_string ("setBy").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3755)))).boolEnum () ;
                    if (kBoolTrue == test_23) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3756)) ;
                      }
                      GALGAS_lstring var_key_116711 = callExtensionGetter_lstring ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3757)) ;
                      GALGAS_lstringset var_resultSet_116776 = GALGAS_lstringset::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3758)) ;
                      cEnumerator_list enumerator_116812 (object->mProperty_value, kENUMERATION_UP) ;
                      while (enumerator_116812.hasCurrentObject ()) {
                        GALGAS_gtlData var_field_116860 ;
                        GALGAS_bool joker_116862 ; // Joker input parameter
                        callExtensionMethod_structField ((const cPtr_gtlData *) enumerator_116812.current_value (HERE).ptr (), var_key_116711, var_field_116860, joker_116862, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3760)) ;
                        GALGAS_lstring var_resKey_116886 = callExtensionGetter_lstring ((const cPtr_gtlData *) var_field_116860.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3761)) ;
                        const enumGalgasBool test_24 = var_resultSet_116776.getter_hasKey (var_resKey_116886.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3762)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3762)).boolEnum () ;
                        if (kBoolTrue == test_24) {
                          {
                          var_resultSet_116776.setter_del (var_resKey_116886, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3763)) ;
                          }
                        }
                        {
                        var_resultSet_116776.setter_put (var_resKey_116886, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3765)) ;
                        }
                        enumerator_116812.gotoNextObject () ;
                      }
                      result_result = GALGAS_gtlSet::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3768)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3768)), var_resultSet_116776  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3767)) ;
                    }else if (kBoolFalse == test_23) {
                      const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("componentsJoinedByString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3770)))).boolEnum () ;
                      if (kBoolTrue == test_25) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3771)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3771)) ;
                        }
                        GALGAS_string var_joiner_117241 = callExtensionGetter_string ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3772)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3772)) ;
                        GALGAS_string var_stringResult_117304 = GALGAS_string::makeEmptyString () ;
                        cEnumerator_list enumerator_117333 (object->mProperty_value, kENUMERATION_UP) ;
                        while (enumerator_117333.hasCurrentObject ()) {
                          var_stringResult_117304 = var_stringResult_117304.add_operation (callExtensionGetter_string ((const cPtr_gtlData *) enumerator_117333.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3776)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3776)) ;
                          if (enumerator_117333.hasNextObject ()) {
                            var_stringResult_117304 = var_stringResult_117304.add_operation (var_joiner_117241, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3778)) ;
                          }
                          enumerator_117333.gotoNextObject () ;
                        }
                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3781)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3781)), var_stringResult_117304  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3780)) ;
                      }else if (kBoolFalse == test_25) {
                        const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3783)))).boolEnum () ;
                        if (kBoolTrue == test_26) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3784)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3784)) ;
                          }
                          const GALGAS_gtlList temp_27 = object ;
                          result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3786)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3786)), temp_27.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3786))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3785)) ;
                        }else if (kBoolFalse == test_26) {
                          const enumGalgasBool test_28 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3788)))).boolEnum () ;
                          if (kBoolTrue == test_28) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3789)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3789)) ;
                            }
                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3791)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3791)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3790)) ;
                          }else if (kBoolFalse == test_28) {
                            const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3793)))).boolEnum () ;
                            if (kBoolTrue == test_29) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3794)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3794)) ;
                              }
                              result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3796)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3796)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3796))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3795)) ;
                            }else if (kBoolFalse == test_29) {
                              const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, GALGAS_string ("where").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3798)))).boolEnum () ;
                              if (kBoolTrue == test_30) {
                                const enumGalgasBool test_31 = GALGAS_bool (kIsStrictInf, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3799)).objectCompare (GALGAS_uint ((uint32_t) 1U))).operator_or (GALGAS_bool (kIsStrictSup, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3799)).objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3799)).boolEnum () ;
                                if (kBoolTrue == test_31) {
                                  TC_Array <C_FixItDescription> fixItArray32 ;
                                  inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3800)), GALGAS_string ("where expects 1 ou 2 arguments. ").add_operation (constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3801)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3800)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3800)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3801)), fixItArray32  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3800)) ;
                                  result_result.drop () ; // Release error dropped variable
                                }else if (kBoolFalse == test_31) {
                                  const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3803)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3803)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlExpr))).boolEnum () ;
                                  if (kBoolTrue == test_33) {
                                    TC_Array <C_FixItDescription> fixItArray34 ;
                                    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3804)), GALGAS_string ("expression expected for argument 1"), fixItArray34  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3804)) ;
                                    result_result.drop () ; // Release error dropped variable
                                  }else if (kBoolFalse == test_33) {
                                    GALGAS_gtlStruct var_vars_118526 ;
                                    const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3807)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
                                    if (kBoolTrue == test_35) {
                                      const enumGalgasBool test_36 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3808)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 3808)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
                                      if (kBoolTrue == test_36) {
                                        TC_Array <C_FixItDescription> fixItArray37 ;
                                        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3809)), GALGAS_string ("struct expected for argument 1"), fixItArray37  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3809)) ;
                                        var_vars_118526.drop () ; // Release error dropped variable
                                      }else if (kBoolFalse == test_36) {
                                        GALGAS_gtlStruct temp_38 ;
                                        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).isValid ()) {
                                          if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr ())) {
                                            temp_38 = (cPtr_gtlStruct *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr () ;
                                          }else{
                                            inCompiler->castError ("gtlStruct", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3811)) ;
                                          }
                                        }
                                        var_vars_118526 = temp_38 ;
                                      }
                                    }else if (kBoolFalse == test_35) {
                                      var_vars_118526 = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3814)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 3814))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3814)) ;
                                    }
                                    GALGAS_gtlExpr temp_39 ;
                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).isValid ()) {
                                      if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr ())) {
                                        temp_39 = (cPtr_gtlExpr *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr () ;
                                      }else{
                                        inCompiler->castError ("gtlExpr", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3816)) ;
                                      }
                                    }
                                    GALGAS_gtlExpression var_expr_118913 = temp_39.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3816)) ;
                                    GALGAS_list var_resultList_118987 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 3817)) ;
                                    cEnumerator_list enumerator_119028 (object->mProperty_value, kENUMERATION_UP) ;
                                    while (enumerator_119028.hasCurrentObject ()) {
                                      {
                                      var_vars_118526.insulate (HERE) ;
                                      cPtr_gtlStruct * ptr_119057 = (cPtr_gtlStruct *) var_vars_118526.ptr () ;
                                      callExtensionSetter_setStructField ((cPtr_gtlStruct *) ptr_119057, GALGAS_lstring::constructor_new (GALGAS_string ("__item__"), enumerator_119028.current_value (HERE).getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3820))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3820)), enumerator_119028.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3820)) ;
                                      }
                                      GALGAS_gtlData var_evalResult_119151 = callExtensionGetter_eval ((const cPtr_gtlExpression *) var_expr_118913.ptr (), constinArgument_context, var_vars_118526, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3821)) ;
                                      const enumGalgasBool test_40 = callExtensionGetter_bool ((const cPtr_gtlData *) var_evalResult_119151.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3822)).boolEnum () ;
                                      if (kBoolTrue == test_40) {
                                        var_resultList_118987.addAssign_operation (enumerator_119028.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3823)) ;
                                      }
                                      enumerator_119028.gotoNextObject () ;
                                    }
                                    result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3827)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3828)), var_resultList_118987  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3826)) ;
                                  }
                                }
                              }else if (kBoolFalse == test_30) {
                                const enumGalgasBool test_41 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3833)).boolEnum () ;
                                if (kBoolTrue == test_41) {
                                  const GALGAS_gtlList temp_42 = object ;
                                  result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3834)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3835)), constinArgument_context, constinArgument_lib, temp_42, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3834)) ;
                                }else if (kBoolFalse == test_41) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionGetter_gtlList_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_performGetter (defineExtensionGetter_gtlList_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlList performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3856)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_120201 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_120201.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3859)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3859)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3860)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3861)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3862)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3862)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3863)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("insert").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3864)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_intAnyArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3865)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3865)) ;
        }
        GALGAS_uint var_insertIndex_120552 = callExtensionGetter_int ((const cPtr_gtlData *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3866)) ;
        GALGAS_gtlData var_node_120605 = constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3867)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictInf, var_insertIndex_120552.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3868)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          object->mProperty_value.setter_insertAtIndex (var_node_120605, var_insertIndex_120552, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3869)) ;
          }
        }else if (kBoolFalse == test_4) {
          object->mProperty_value.addAssign_operation (var_node_120605  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3871)) ;
        }
        object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3873)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_5 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3874)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_gtlList temp_6 = object ;
          GALGAS_gtlData var_copy_120855 = temp_6 ;
          callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("list"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3876)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3877)), constinArgument_context, constinArgument_lib, var_copy_120855, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3876)) ;
          GALGAS_gtlList temp_7 ;
          if (var_copy_120855.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlList *> (var_copy_120855.ptr ())) {
              temp_7 = (cPtr_gtlList *) var_copy_120855.ptr () ;
            }else{
              inCompiler->castError ("gtlList", var_copy_120855.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3883)) ;
            }
          }
          object->mProperty_value = temp_7.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3883)) ;
          object->mProperty_where = var_copy_120855.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 3884)) ;
          object->mProperty_meta = var_copy_120855.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 3885)) ;
        }else if (kBoolFalse == test_5) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 3887)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3887)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)).add_operation (GALGAS_string ("' for list target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3887)) ;
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                      extensionSetter_gtlList_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_performSetter (defineExtensionSetter_gtlList_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlList setItemAtIndex'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionSetter_gtlList_setItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_setItemAtIndex (defineExtensionSetter_gtlList_setItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension setter '@gtlList deleteItemAtIndex'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  GALGAS_uint var_indexUint_121412 = constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3901)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3901)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictInf, var_indexUint_121412.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3902)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_indexUint_121412.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      object->mProperty_value = object->mProperty_value.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3904)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_indexUint_121412.objectCompare (object->mProperty_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 3905)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3905)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        object->mProperty_value = object->mProperty_value.getter_subListToIndex (var_indexUint_121412.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3906)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3906)) ;
      }else if (kBoolFalse == test_2) {
        object->mProperty_value = object->mProperty_value.getter_subListToIndex (var_indexUint_121412.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)).add_operation (object->mProperty_value.getter_subListFromIndex (var_indexUint_121412.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3909)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3909)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3908)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                          extensionSetter_gtlList_deleteItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_deleteItemAtIndex (defineExtensionSetter_gtlList_deleteItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlList itemAtIndex'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlList_itemAtIndex (const cPtr_gtlData * inObject,
                                                 GALGAS_gtlData & outArgument_data,
                                                 const GALGAS_gtlInt constinArgument_index,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  outArgument_data = object->mProperty_value.getter_valueAtIndex (constinArgument_index.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 3918)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3918)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3918)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlList_itemAtIndex (void) {
  enterExtensionMethod_itemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                    extensionMethod_gtlList_itemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlList_itemAtIndex (defineExtensionMethod_gtlList_itemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlList hasItemAtIndex'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_hasItemAtIndex (void) {
  enterExtensionGetter_hasItemAtIndex (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                       extensionGetter_gtlList_hasItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_hasItemAtIndex (defineExtensionGetter_gtlList_hasItemAtIndex, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension setter '@gtlList appendItem'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlList_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlList * object = (cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  object->mProperty_value.addAssign_operation (constinArgument_item  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3931)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlList_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                   extensionSetter_gtlList_appendItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlList_appendItem (defineExtensionSetter_gtlList_appendItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMap_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3943)).add_operation (GALGAS_string ("map: @[\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3943)) ;
  cEnumerator_gtlVarMap enumerator_122539 (object->mProperty_value, kENUMERATION_UP) ;
  while (enumerator_122539.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)).add_operation (enumerator_122539.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 3947)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)).add_operation (GALGAS_string ("\" :>\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_122539.current_value (HERE).ptr (), constinArgument_tab.add_operation (GALGAS_uint ((uint32_t) 8U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3948)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3948)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3947)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3946)) ;
    enumerator_122539.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 3950)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_desc (defineExtensionGetter_gtlMap_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_string (defineExtensionGetter_gtlMap_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_lstring (defineExtensionGetter_gtlMap_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_bool (defineExtensionGetter_gtlMap_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlMap int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                            extensionGetter_gtlMap_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_int (defineExtensionGetter_gtlMap_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_float (defineExtensionGetter_gtlMap_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                               extensionGetter_gtlMap_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_plusOp (defineExtensionGetter_gtlMap_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlMap minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionGetter_gtlMap_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_minusOp (defineExtensionGetter_gtlMap_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_notOp (defineExtensionGetter_gtlMap_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_addOp (defineExtensionGetter_gtlMap_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_subOp (defineExtensionGetter_gtlMap_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_mulOp (defineExtensionGetter_gtlMap_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_divOp (defineExtensionGetter_gtlMap_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_modOp (defineExtensionGetter_gtlMap_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_andOp (defineExtensionGetter_gtlMap_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_orOp (defineExtensionGetter_gtlMap_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_xorOp (defineExtensionGetter_gtlMap_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_slOp (defineExtensionGetter_gtlMap_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_srOp (defineExtensionGetter_gtlMap_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlMap temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4027)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_124908 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4027)) ;
    GALGAS_bool var_equal_124951 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4029)).objectCompare (var_rValue_124908.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4029)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_124951 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_124951 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_125076 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_125076.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_124908.getter_hasKey (enumerator_125076.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4034)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4034)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_125161 ;
          var_rValue_124908.method_get (enumerator_125076.current_lkey (HERE), var_rData_125161, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4035)) ;
          var_equal_124951 = var_equal_124951.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_125076.current_value (HERE).ptr (), var_rData_125161, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4036)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_124951 = GALGAS_bool (false) ;
        }
        enumerator_125076.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4042)), var_equal_124951.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 4042))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4042)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4044)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4044)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                              extensionGetter_gtlMap_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_neqOp (defineExtensionGetter_gtlMap_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMap_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlMap temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlMap *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlMap *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlMap", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4050)) ;
      }
    }
    GALGAS_gtlVarMap var_rValue_125531 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4050)) ;
    GALGAS_bool var_equal_125574 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4052)).objectCompare (var_rValue_125531.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4052)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_equal_125574 = GALGAS_bool (false) ;
    }else if (kBoolFalse == test_2) {
      var_equal_125574 = GALGAS_bool (true) ;
      cEnumerator_gtlVarMap enumerator_125699 (object->mProperty_value, kENUMERATION_UP) ;
      while (enumerator_125699.hasCurrentObject ()) {
        const enumGalgasBool test_3 = var_rValue_125531.getter_hasKey (enumerator_125699.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4057)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4057)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_rData_125784 ;
          var_rValue_125531.method_get (enumerator_125699.current_lkey (HERE), var_rData_125784, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4058)) ;
          var_equal_125574 = var_equal_125574.operator_and (callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_eqOp ((const cPtr_gtlData *) enumerator_125699.current_value (HERE).ptr (), var_rData_125784, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4059)) ;
        }else if (kBoolFalse == test_3) {
          var_equal_125574 = GALGAS_bool (false) ;
        }
        enumerator_125699.gotoNextObject () ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4065)), var_equal_125574  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4065)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4067)), GALGAS_string ("struct expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4067)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_eqOp (defineExtensionGetter_gtlMap_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_gtOp (defineExtensionGetter_gtlMap_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_geOp (defineExtensionGetter_gtlMap_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_ltOp (defineExtensionGetter_gtlMap_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlMap leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                             extensionGetter_gtlMap_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_leOp (defineExtensionGetter_gtlMap_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlMap embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                     extensionGetter_gtlMap_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_embeddedType (defineExtensionGetter_gtlMap_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlMap addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlMap_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 4094))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4094)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlMap_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionMethod_gtlMap_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlMap_addMyValue (defineExtensionMethod_gtlMap_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlMap performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("length").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4107)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4108)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4108)) ;
    }
    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4110)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4111)), object->mProperty_value.getter_count (SOURCE_FILE ("gtl_data_types.galgas", 4112)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 4112))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4109)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4114)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4115)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4115)) ;
      }
      const GALGAS_gtlMap temp_2 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4117)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4117)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4117))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4116)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4119)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4120)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4120)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4122)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4122)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4121)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("list").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4124)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4125)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4125)) ;
          }
          GALGAS_list var_resultList_127953 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 4126)) ;
          const GALGAS_gtlMap temp_5 = object ;
          cEnumerator_gtlVarMap enumerator_128001 (temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4127)), kENUMERATION_UP) ;
          while (enumerator_128001.hasCurrentObject ()) {
            var_resultList_127953.addAssign_operation (enumerator_128001.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4128)) ;
            enumerator_128001.gotoNextObject () ;
          }
          result_result = GALGAS_gtlList::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4130)), var_resultList_127953  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4130)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("where").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4131)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (kIsStrictInf, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4132)).objectCompare (GALGAS_uint ((uint32_t) 1U))).operator_or (GALGAS_bool (kIsStrictSup, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4132)).objectCompare (GALGAS_uint ((uint32_t) 2U))) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4132)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4133)), GALGAS_string ("where expects 1 ou 2 arguments. ").add_operation (constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4134)).getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4133)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4133)).add_operation (GALGAS_string (" arguments provided."), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4134)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4133)) ;
              result_result.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4136)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4136)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlExpr))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4137)), GALGAS_string ("expression expected for argument 1"), fixItArray10  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4137)) ;
                result_result.drop () ; // Release error dropped variable
              }else if (kBoolFalse == test_9) {
                GALGAS_gtlStruct var_vars_128523 ;
                const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, constinArgument_arguments.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 4140)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4141)).getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4141)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4142)), GALGAS_string ("struct expected for argument 1"), fixItArray13  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4142)) ;
                    var_vars_128523.drop () ; // Release error dropped variable
                  }else if (kBoolFalse == test_12) {
                    GALGAS_gtlStruct temp_14 ;
                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).isValid ()) {
                      if (NULL != dynamic_cast <const cPtr_gtlStruct *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr ())) {
                        temp_14 = (cPtr_gtlStruct *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr () ;
                      }else{
                        inCompiler->castError ("gtlStruct", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4144)) ;
                      }
                    }
                    var_vars_128523 = temp_14 ;
                  }
                }else if (kBoolFalse == test_11) {
                  var_vars_128523 = GALGAS_gtlStruct::constructor_new (object->mProperty_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4147)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 4147))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4147)) ;
                }
                GALGAS_gtlExpr temp_15 ;
                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).isValid ()) {
                  if (NULL != dynamic_cast <const cPtr_gtlExpr *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr ())) {
                    temp_15 = (cPtr_gtlExpr *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr () ;
                  }else{
                    inCompiler->castError ("gtlExpr", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4149)) ;
                  }
                }
                GALGAS_gtlExpression var_expr_128910 = temp_15.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4149)) ;
                GALGAS_gtlVarMap var_resultMap_128988 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_data_types.galgas", 4150)) ;
                cEnumerator_gtlVarMap enumerator_129032 (object->mProperty_value, kENUMERATION_UP) ;
                while (enumerator_129032.hasCurrentObject ()) {
                  {
                  var_vars_128523.insulate (HERE) ;
                  cPtr_gtlStruct * ptr_129061 = (cPtr_gtlStruct *) var_vars_128523.ptr () ;
                  callExtensionSetter_setStructField ((cPtr_gtlStruct *) ptr_129061, GALGAS_lstring::constructor_new (GALGAS_string ("__item__"), enumerator_129032.current_value (HERE).getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4153))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4153)), enumerator_129032.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4153)) ;
                  }
                  GALGAS_gtlData var_evalResult_129155 = callExtensionGetter_eval ((const cPtr_gtlExpression *) var_expr_128910.ptr (), constinArgument_context, var_vars_128523, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4154)) ;
                  const enumGalgasBool test_16 = callExtensionGetter_bool ((const cPtr_gtlData *) var_evalResult_129155.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4155)).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    {
                    var_resultMap_128988.setter_put (enumerator_129032.current_lkey (HERE), enumerator_129032.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4156)) ;
                    }
                  }
                  enumerator_129032.gotoNextObject () ;
                }
                result_result = GALGAS_gtlMap::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4160)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4161)), var_resultMap_128988  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4159)) ;
              }
            }
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4166)))).boolEnum () ;
            if (kBoolTrue == test_17) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4167)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4167)) ;
              }
              result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4169)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4169)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4169))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4168)) ;
            }else if (kBoolFalse == test_17) {
              const enumGalgasBool test_18 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4171)).boolEnum () ;
              if (kBoolTrue == test_18) {
                const GALGAS_gtlMap temp_19 = object ;
                result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4172)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4173)), constinArgument_context, constinArgument_lib, temp_19, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4172)) ;
              }else if (kBoolFalse == test_18) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionGetter_gtlMap_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_performGetter (defineExtensionGetter_gtlMap_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlMap performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlMap_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_gtlContext constinArgument_context,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4194)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_130375 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_130375.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4197)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4197)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4198)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4199)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4200)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4200)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4201)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4202)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlMap temp_4 = object ;
        GALGAS_gtlData var_copy_130670 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("map"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4204)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4205)), constinArgument_context, constinArgument_lib, var_copy_130670, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4204)) ;
        GALGAS_gtlMap temp_5 ;
        if (var_copy_130670.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlMap *> (var_copy_130670.ptr ())) {
            temp_5 = (cPtr_gtlMap *) var_copy_130670.ptr () ;
          }else{
            inCompiler->castError ("gtlMap", var_copy_130670.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4211)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4211)) ;
        object->mProperty_where = var_copy_130670.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4212)) ;
        object->mProperty_meta = var_copy_130670.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 4213)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4215)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4215)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)).add_operation (GALGAS_string ("' for map target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4215)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_performSetter (defineExtensionSetter_gtlMap_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension setter '@gtlMap setMapItem'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionSetter_gtlMap_setMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_setMapItem (defineExtensionSetter_gtlMap_setMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlMap deleteMapItem'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlMap_deleteMapItem (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_name,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlMap * object = (cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  {
  GALGAS_gtlData joker_131387 ; // Joker input parameter
  object->mProperty_value.setter_del (constinArgument_name, joker_131387, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlMap_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                      extensionSetter_gtlMap_deleteMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlMap_deleteMapItem (defineExtensionSetter_gtlMap_deleteMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension method '@gtlMap mapItem'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlMap_mapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring constinArgument_name,
                                            GALGAS_gtlData & outArgument_result,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  const enumGalgasBool test_0 = object->mProperty_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4239)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4239)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mProperty_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4240)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4242)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4242))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4242)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlMap_mapItem (void) {
  enterExtensionMethod_mapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                extensionMethod_gtlMap_mapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlMap_mapItem (defineExtensionMethod_gtlMap_mapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension getter '@gtlMap hasMapItem'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_hasMapItem (void) {
  enterExtensionGetter_hasMapItem (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                   extensionGetter_gtlMap_hasMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_hasMapItem (defineExtensionGetter_gtlMap_hasMapItem, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_desc (defineExtensionGetter_gtlExpr_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                               extensionGetter_gtlExpr_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_string (defineExtensionGetter_gtlExpr_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlExpr lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                extensionGetter_gtlExpr_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_lstring (defineExtensionGetter_gtlExpr_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_bool (defineExtensionGetter_gtlExpr_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                            extensionGetter_gtlExpr_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_int (defineExtensionGetter_gtlExpr_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_float (defineExtensionGetter_gtlExpr_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                               extensionGetter_gtlExpr_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_plusOp (defineExtensionGetter_gtlExpr_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlExpr minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                extensionGetter_gtlExpr_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_minusOp (defineExtensionGetter_gtlExpr_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_notOp (defineExtensionGetter_gtlExpr_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4314)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4314)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_addOp (defineExtensionGetter_gtlExpr_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4326)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4326)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_subOp (defineExtensionGetter_gtlExpr_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4338)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4338)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_mulOp (defineExtensionGetter_gtlExpr_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4350)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4350)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_divOp (defineExtensionGetter_gtlExpr_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4362)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4362)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_modOp (defineExtensionGetter_gtlExpr_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4374)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4374)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_andOp (defineExtensionGetter_gtlExpr_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4386)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4386)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_orOp (defineExtensionGetter_gtlExpr_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4398)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4398)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_xorOp (defineExtensionGetter_gtlExpr_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4410)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4410)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_slOp (defineExtensionGetter_gtlExpr_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4422)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4422)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_srOp (defineExtensionGetter_gtlExpr_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlExpr neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4434)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4434)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                              extensionGetter_gtlExpr_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_neqOp (defineExtensionGetter_gtlExpr_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4446)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4446)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_eqOp (defineExtensionGetter_gtlExpr_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4458)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4458)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_gtOp (defineExtensionGetter_gtlExpr_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4470)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4470)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_geOp (defineExtensionGetter_gtlExpr_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4482)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4482)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_ltOp (defineExtensionGetter_gtlExpr_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlExpr leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExpr_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlExpr).boolEnum () ;
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
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4494)), GALGAS_string ("Expression expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4494)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                             extensionGetter_gtlExpr_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_leOp (defineExtensionGetter_gtlExpr_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlExpr embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                     extensionGetter_gtlExpr_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_embeddedType (defineExtensionGetter_gtlExpr_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlExpr addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlExpr_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlExpr * object = (const cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  ioArgument_objectList.addAssign_operation (object->mProperty_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 4505))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4505)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlExpr_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                   extensionMethod_gtlExpr_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlExpr_addMyValue (defineExtensionMethod_gtlExpr_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlExpr performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4518)).objectCompare (GALGAS_string ("eval"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_structArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4519)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4519)) ;
    }
    GALGAS_gtlData var_vars_139042 = constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4520)) ;
    result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mProperty_value.ptr (), constinArgument_context, var_vars_139042, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4521)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4522)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4523)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4523)) ;
      }
      const GALGAS_gtlExpr temp_2 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4525)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4525)), temp_2.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 4525))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4524)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4527)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4528)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4528)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4530)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4530)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4529)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4532)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4533)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4533)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mProperty_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4535)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4535)), object->mProperty_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4535))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4534)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4537)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_gtlExpr temp_6 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4538)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4539)), constinArgument_context, constinArgument_lib, temp_6, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4538)) ;
          }else if (kBoolFalse == test_5) {
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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpr_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                      extensionGetter_gtlExpr_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpr_performGetter (defineExtensionGetter_gtlExpr_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlExpr performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlExpr_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_gtlContext constinArgument_context,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlExpr * object = (cPtr_gtlExpr *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExpr) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4560)))).boolEnum () ;
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
    GALGAS_gtlString var_descriptionToSet_140486 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_140486.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4563)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4563)) ;
    }
    object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4564)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4565)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4566)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4566)) ;
      }
      object->mProperty_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4567)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4568)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlExpr temp_4 = object ;
        GALGAS_gtlData var_copy_140788 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("expression"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4570)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4571)), constinArgument_context, constinArgument_lib, var_copy_140788, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4570)) ;
        GALGAS_gtlExpr temp_5 ;
        if (var_copy_140788.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlExpr *> (var_copy_140788.ptr ())) {
            temp_5 = (cPtr_gtlExpr *) var_copy_140788.ptr () ;
          }else{
            inCompiler->castError ("gtlExpr", var_copy_140788.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4577)) ;
          }
        }
        object->mProperty_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 4577)) ;
        object->mProperty_where = var_copy_140788.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 4578)) ;
        object->mProperty_meta = var_copy_140788.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 4579)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4581)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4581)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)).add_operation (GALGAS_string ("' for expression target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4581)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlExpr_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlExpr.mSlotID,
                                      extensionSetter_gtlExpr_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlExpr_performSetter (defineExtensionSetter_gtlExpr_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'trueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_trueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("true") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("false") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_trueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_trueFalse ("trueFalse",
                                                           functionWithGenericHeader_trueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_trueFalse) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TrueFalse'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_TrueFalse (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("True") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("False") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_TrueFalse [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_TrueFalse ("TrueFalse",
                                                           functionWithGenericHeader_TrueFalse,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TrueFalse) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'yesNo'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_yesNo (const GALGAS_bool & constinArgument_inBool,
                              C_Compiler * /* inCompiler */
                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("YES") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("NO") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_yesNo [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_yesNo ("yesNo",
                                                       functionWithGenericHeader_yesNo,
                                                       & kTypeDescriptor_GALGAS_string,
                                                       1,
                                                       functionArgs_yesNo) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'TRUEFALSE'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_TRUEFALSE (const GALGAS_bool & constinArgument_inBool,
                                  C_Compiler * /* inCompiler */
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inBool.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_string ("TRUE") ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("FALSE") ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_TRUEFALSE [2] = {
  & kTypeDescriptor_GALGAS_bool,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_TRUEFALSE ("TRUEFALSE",
                                                           functionWithGenericHeader_TRUEFALSE,
                                                           & kTypeDescriptor_GALGAS_string,
                                                           1,
                                                           functionArgs_TRUEFALSE) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'listOfSize'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_listOfSize [2] = {
  & kTypeDescriptor_GALGAS_bigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_listOfSize ("listOfSize",
                                                            functionWithGenericHeader_listOfSize,
                                                            & kTypeDescriptor_GALGAS_list,
                                                            1,
                                                            functionArgs_listOfSize) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'version'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_version (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 97)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_version [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_version (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_version (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_version ("version",
                                                         functionWithGenericHeader_version,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_version) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'majorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_majorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3236 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 105)) ;
  GALGAS_stringlist var_versionComponents_3304 = var_version_3236.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 106)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3304.getter_length (SOURCE_FILE ("gtl_functions.galgas", 107)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_3304.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 109)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 109)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 111)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_majorVersion [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_majorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_majorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_majorVersion ("majorVersion",
                                                              functionWithGenericHeader_majorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_majorVersion) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Function 'minorVersion'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_minorVersion (C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_3764 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 120)) ;
  GALGAS_stringlist var_versionComponents_3832 = var_version_3764.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 121)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_3832.getter_length (SOURCE_FILE ("gtl_functions.galgas", 122)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_3832.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 124)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 126)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_minorVersion [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_minorVersion (C_Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_minorVersion (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_minorVersion ("minorVersion",
                                                              functionWithGenericHeader_minorVersion,
                                                              & kTypeDescriptor_GALGAS_bigint,
                                                              0,
                                                              functionArgs_minorVersion) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'revision'                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_revision (C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  GALGAS_string var_version_4283 = GALGAS_application::constructor_projectVersionString (SOURCE_FILE ("gtl_functions.galgas", 135)) ;
  GALGAS_stringlist var_versionComponents_4351 = var_version_4283.getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("gtl_functions.galgas", 136)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_versionComponents_4351.getter_length (SOURCE_FILE ("gtl_functions.galgas", 137)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_versionComponents_4351.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 139)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 139)) ;
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 141)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_revision [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_revision (C_Compiler * inCompiler,
                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                         const GALGAS_location & /* inErrorLocation */
                                                         COMMA_LOCATION_ARGS) {
  return function_revision (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_revision ("revision",
                                                          functionWithGenericHeader_revision,
                                                          & kTypeDescriptor_GALGAS_bigint,
                                                          0,
                                                          functionArgs_revision) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                Function 'currentDir'                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_currentDir (C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDirectory (SOURCE_FILE ("gtl_functions.galgas", 150)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_currentDir [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_currentDir (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_currentDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_currentDir ("currentDir",
                                                            functionWithGenericHeader_currentDir,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_currentDir) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 Function 'homeDir'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_homeDir (C_Compiler * /* inCompiler */
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_homeDirectory (SOURCE_FILE ("gtl_functions.galgas", 158)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_homeDir [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_homeDir (C_Compiler * inCompiler,
                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  return function_homeDir (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_homeDir ("homeDir",
                                                         functionWithGenericHeader_homeDir,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         0,
                                                         functionArgs_homeDir) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Function 'currentDateTime'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_currentDateTime (C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithCurrentDateTime (SOURCE_FILE ("gtl_functions.galgas", 166)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_currentDateTime [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_currentDateTime (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_currentDateTime (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_currentDateTime ("currentDateTime",
                                                                 functionWithGenericHeader_currentDateTime,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_currentDateTime) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max8bitsUnsignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_38_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 255U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 174)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_38_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_38_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_max_38_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_38_bitsUnsignedInt ("max8bitsUnsignedInt",
                                                                        functionWithGenericHeader_max_38_bitsUnsignedInt,
                                                                        & kTypeDescriptor_GALGAS_bigint,
                                                                        0,
                                                                        functionArgs_max_38_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_38_bitsSignedInt (C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 127U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 182)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_38_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_max_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_38_bitsSignedInt ("max8bitsSignedInt",
                                                                      functionWithGenericHeader_max_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_max_38_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min8bitsSignedInt'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_38_bitsSignedInt (C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 128L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 190)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 190)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_38_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_38_bitsSignedInt (C_Compiler * inCompiler,
                                                                     const cObjectArray & /* inEffectiveParameterArray */,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  return function_min_38_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_38_bitsSignedInt ("min8bitsSignedInt",
                                                                      functionWithGenericHeader_min_38_bitsSignedInt,
                                                                      & kTypeDescriptor_GALGAS_bigint,
                                                                      0,
                                                                      functionArgs_min_38_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max16bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_31__36_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 65535U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 198)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_31__36_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsUnsignedInt ("max16bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_31__36_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_31__36_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_31__36_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint ((uint32_t) 32767U).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 206)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_31__36_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_31__36_bitsSignedInt ("max16bitsSignedInt",
                                                                          functionWithGenericHeader_max_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_31__36_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min16bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_31__36_bitsSignedInt (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint ((int32_t) 32768L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 214)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 214)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_31__36_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_31__36_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_31__36_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_31__36_bitsSignedInt ("min16bitsSignedInt",
                                                                          functionWithGenericHeader_min_31__36_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_31__36_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max32bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_33__32_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 222)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 222)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_33__32_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsUnsignedInt ("max32bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_33__32_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_33__32_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 230)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 230)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_33__32_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_33__32_bitsSignedInt ("max32bitsSignedInt",
                                                                          functionWithGenericHeader_max_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_33__32_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min32bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_33__32_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 238)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 238)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_33__32_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_33__32_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_33__32_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_33__32_bitsSignedInt ("min32bitsSignedInt",
                                                                          functionWithGenericHeader_min_33__32_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_33__32_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'max64bitsUnsignedInt'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_36__34_bitsUnsignedInt (C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_uint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 246)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 246)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsUnsignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_36__34_bitsUnsignedInt (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsUnsignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsUnsignedInt ("max64bitsUnsignedInt",
                                                                            functionWithGenericHeader_max_36__34_bitsUnsignedInt,
                                                                            & kTypeDescriptor_GALGAS_bigint,
                                                                            0,
                                                                            functionArgs_max_36__34_bitsUnsignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'max64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_max_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_max (SOURCE_FILE ("gtl_functions.galgas", 254)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 254)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_max_36__34_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_max_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_max_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_max_36__34_bitsSignedInt ("max64bitsSignedInt",
                                                                          functionWithGenericHeader_max_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_max_36__34_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Function 'min64bitsSignedInt'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_min_36__34_bitsSignedInt (C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  result_result = GALGAS_sint_36__34_::constructor_min (SOURCE_FILE ("gtl_functions.galgas", 262)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 262)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_min_36__34_bitsSignedInt [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_min_36__34_bitsSignedInt (C_Compiler * inCompiler,
                                                                         const cObjectArray & /* inEffectiveParameterArray */,
                                                                         const GALGAS_location & /* inErrorLocation */
                                                                         COMMA_LOCATION_ARGS) {
  return function_min_36__34_bitsSignedInt (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_min_36__34_bitsSignedInt ("min64bitsSignedInt",
                                                                          functionWithGenericHeader_min_36__34_bitsSignedInt,
                                                                          & kTypeDescriptor_GALGAS_bigint,
                                                                          0,
                                                                          functionArgs_min_36__34_bitsSignedInt) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    Function 'pi'                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double function_pi (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  result_result = GALGAS_double::constructor_pi (SOURCE_FILE ("gtl_functions.galgas", 270)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_pi [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_pi (C_Compiler * inCompiler,
                                                   const cObjectArray & /* inEffectiveParameterArray */,
                                                   const GALGAS_location & /* inErrorLocation */
                                                   COMMA_LOCATION_ARGS) {
  return function_pi (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_pi ("pi",
                                                    functionWithGenericHeader_pi,
                                                    & kTypeDescriptor_GALGAS_double,
                                                    0,
                                                    functionArgs_pi) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Function 'random'                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint function_random (const GALGAS_bigint & constinArgument_min,
                               const GALGAS_bigint & constinArgument_max,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_min.getter_fitsInUInt (SOURCE_FILE ("gtl_functions.galgas", 281)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = constinArgument_max.getter_fitsInUInt (SOURCE_FILE ("gtl_functions.galgas", 282)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, constinArgument_min.objectCompare (constinArgument_max)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_result = GALGAS_uint::constructor_random (SOURCE_FILE ("gtl_functions.galgas", 284)).modulo_operation (constinArgument_max.substract_operation (constinArgument_min, inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).add_operation (constinArgument_min.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("gtl_functions.galgas", 284)).getter_bigint (SOURCE_FILE ("gtl_functions.galgas", 284)) ;
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 286)), GALGAS_string ("rand: min should be lower or equal"), fixItArray3  COMMA_SOURCE_FILE ("gtl_functions.galgas", 286)) ;
        result_result.drop () ; // Release error dropped variable
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 287)), GALGAS_string ("rand: than max"), fixItArray4  COMMA_SOURCE_FILE ("gtl_functions.galgas", 287)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 290)), GALGAS_string ("rand: max argument should be an unsigned 32 bits integer"), fixItArray5  COMMA_SOURCE_FILE ("gtl_functions.galgas", 290)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_functions.galgas", 293)), GALGAS_string ("rand: min argument should be an unsigned 32 bits integer"), fixItArray6  COMMA_SOURCE_FILE ("gtl_functions.galgas", 293)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_random [3] = {
  & kTypeDescriptor_GALGAS_bigint,
  & kTypeDescriptor_GALGAS_bigint,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_random ("random",
                                                        functionWithGenericHeader_random,
                                                        & kTypeDescriptor_GALGAS_bigint,
                                                        2,
                                                        functionArgs_random) ;

