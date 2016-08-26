#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-5.h"


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
  GALGAS_gtlData joker_123847 ; // Joker input parameter
  object->mAttribute_value.setter_del (constinArgument_name, joker_123847, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4002)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4009)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4009)).boolEnum () ;
  if (kBoolTrue == test_0) {
    object->mAttribute_value.method_get (constinArgument_name, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4010)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_result = GALGAS_gtlUnconstructed::constructor_new (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 4012)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4012))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4012)) ;
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
                                                      const GALGAS_lstring & constinArgument_name,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = object->mAttribute_value.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 4020)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 4020)) ;
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
//                        Overriding extension method '@gtlLetUnconstructedInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetUnconstructedInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetUnconstructedInstruction * object = (const cPtr_gtlLetUnconstructedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetUnconstructedInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, GALGAS_gtlUnconstructed::constructor_new (callExtensionGetter_location ((const cPtr_gtlVarItem *) object->mAttribute_lValue.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 105)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 105)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 105))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetUnconstructedInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction.mSlotID,
                                extensionMethod_gtlLetUnconstructedInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetUnconstructedInstruction_execute (defineExtensionMethod_gtlLetUnconstructedInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlLetInstruction execute'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                       GALGAS_gtlContext & /* ioArgument_context */,
                                                       GALGAS_gtlData & ioArgument_vars,
                                                       GALGAS_library & ioArgument_lib,
                                                       GALGAS_string & /* ioArgument_outputString */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetInstruction * object = (const cPtr_gtlLetInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetInstruction.mSlotID,
                                extensionMethod_gtlLetInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetInstruction_execute (defineExtensionMethod_gtlLetInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetAddInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetAddInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAddInstruction * object = (const cPtr_gtlLetAddInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAddInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_addOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 145)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 142)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetAddInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAddInstruction.mSlotID,
                                extensionMethod_gtlLetAddInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetAddInstruction_execute (defineExtensionMethod_gtlLetAddInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetSubstractInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetSubstractInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetSubstractInstruction * object = (const cPtr_gtlLetSubstractInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetSubstractInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_subOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 164)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 161)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetSubstractInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetSubstractInstruction.mSlotID,
                                extensionMethod_gtlLetSubstractInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetSubstractInstruction_execute (defineExtensionMethod_gtlLetSubstractInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetMultiplyInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetMultiplyInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & /* ioArgument_context */,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & /* ioArgument_outputString */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetMultiplyInstruction * object = (const cPtr_gtlLetMultiplyInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetMultiplyInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_mulOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 183)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetMultiplyInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetMultiplyInstruction.mSlotID,
                                extensionMethod_gtlLetMultiplyInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetMultiplyInstruction_execute (defineExtensionMethod_gtlLetMultiplyInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLetDivideInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetDivideInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetDivideInstruction * object = (const cPtr_gtlLetDivideInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetDivideInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 202)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 199)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetDivideInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetDivideInstruction.mSlotID,
                                extensionMethod_gtlLetDivideInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetDivideInstruction_execute (defineExtensionMethod_gtlLetDivideInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLetModuloInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetModuloInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetModuloInstruction * object = (const cPtr_gtlLetModuloInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetModuloInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_divOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 221)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetModuloInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetModuloInstruction.mSlotID,
                                extensionMethod_gtlLetModuloInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetModuloInstruction_execute (defineExtensionMethod_gtlLetModuloInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlLetShiftLeftInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetShiftLeftInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftLeftInstruction * object = (const cPtr_gtlLetShiftLeftInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftLeftInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_slOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 240)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetShiftLeftInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftLeftInstruction.mSlotID,
                                extensionMethod_gtlLetShiftLeftInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetShiftLeftInstruction_execute (defineExtensionMethod_gtlLetShiftLeftInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlLetShiftRightInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetShiftRightInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & /* ioArgument_context */,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & /* ioArgument_outputString */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetShiftRightInstruction * object = (const cPtr_gtlLetShiftRightInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetShiftRightInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_srOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 259)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetShiftRightInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetShiftRightInstruction.mSlotID,
                                extensionMethod_gtlLetShiftRightInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetShiftRightInstruction_execute (defineExtensionMethod_gtlLetShiftRightInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetAndInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetAndInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetAndInstruction * object = (const cPtr_gtlLetAndInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetAndInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_andOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 278)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 275)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetAndInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetAndInstruction.mSlotID,
                                extensionMethod_gtlLetAndInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetAndInstruction_execute (defineExtensionMethod_gtlLetAndInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetOrInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetOrInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & /* ioArgument_context */,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetOrInstruction * object = (const cPtr_gtlLetOrInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetOrInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_orOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 297)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 294)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetOrInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetOrInstruction.mSlotID,
                                extensionMethod_gtlLetOrInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetOrInstruction_execute (defineExtensionMethod_gtlLetOrInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlLetXorInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetXorInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                          GALGAS_gtlContext & /* ioArgument_context */,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & /* ioArgument_outputString */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetXorInstruction * object = (const cPtr_gtlLetXorInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetXorInstruction) ;
  extensionMethod_set (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, callExtensionGetter_xorOp ((const cPtr_gtlData *) extensionGetter_get (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 316)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 313)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetXorInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLetXorInstruction.mSlotID,
                                extensionMethod_gtlLetXorInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetXorInstruction_execute (defineExtensionMethod_gtlLetXorInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlUnletInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlUnletInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                         GALGAS_gtlContext & /* ioArgument_context */,
                                                         GALGAS_gtlData & ioArgument_vars,
                                                         GALGAS_library & ioArgument_lib,
                                                         GALGAS_string & /* ioArgument_outputString */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlUnletInstruction * object = (const cPtr_gtlUnletInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnletInstruction) ;
  extensionMethod_delete (object->mAttribute_lValue, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 332)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlUnletInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlUnletInstruction.mSlotID,
                                extensionMethod_gtlUnletInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlUnletInstruction_execute (defineExtensionMethod_gtlUnletInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlTemplateStringInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateStringInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & /* ioArgument_vars */,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & ioArgument_outputString,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateStringInstruction * object = (const cPtr_gtlTemplateStringInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateStringInstruction) ;
  ioArgument_outputString.plusAssign_operation(object->mAttribute_value, inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 351)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateStringInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateStringInstruction.mSlotID,
                                extensionMethod_gtlTemplateStringInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateStringInstruction_execute (defineExtensionMethod_gtlTemplateStringInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlEmitInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlEmitInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                        GALGAS_gtlContext & /* ioArgument_context */,
                                                        GALGAS_gtlData & ioArgument_vars,
                                                        GALGAS_library & ioArgument_lib,
                                                        GALGAS_string & ioArgument_outputString,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEmitInstruction * object = (const cPtr_gtlEmitInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmitInstruction) ;
  ioArgument_outputString.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 367)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlEmitInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlEmitInstruction.mSlotID,
                                extensionMethod_gtlEmitInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlEmitInstruction_execute (defineExtensionMethod_gtlEmitInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@gtlWriteToInstruction execute'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlWriteToInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                           GALGAS_gtlContext & ioArgument_context,
                                                           GALGAS_gtlData & ioArgument_vars,
                                                           GALGAS_library & ioArgument_lib,
                                                           GALGAS_string & /* ioArgument_outputString */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWriteToInstruction * object = (const cPtr_gtlWriteToInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWriteToInstruction) ;
  GALGAS_string var_fullFileName_11091 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileNameExpression.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 386)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 386)) ;
  GALGAS_gtlString var_fileName_11161 = GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 389)), var_fullFileName_11091.getter_lastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 390))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 387)) ;
  GALGAS_gtlString var_filePath_11264 = GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 394)), var_fullFileName_11091.getter_nativePathWithUnixPath (SOURCE_FILE ("gtl_instructions.galgas", 395))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 392)) ;
  GALGAS_string var_result_11369 = GALGAS_string::makeEmptyString () ;
  GALGAS_gtlData var_varsCopy_11394 = ioArgument_vars ;
  {
  var_varsCopy_11394.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_11496 = (cPtr_gtlData *) var_varsCopy_11394.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_11496, GALGAS_lstring::constructor_new (GALGAS_string ("FILENAME"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 402)), var_fileName_11161, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 401)) ;
  }
  {
  var_varsCopy_11394.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_11595 = (cPtr_gtlData *) var_varsCopy_11394.ptr () ;
  callExtensionSetter_setStructFieldAtLevel ((cPtr_gtlData *) ptr_11595, GALGAS_lstring::constructor_new (GALGAS_string ("FILEPATH"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 407)), var_filePath_11264, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 406)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 411)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionMethod_execute (object->mAttribute_instructions, ioArgument_context, var_varsCopy_11394, ioArgument_lib, var_result_11369, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 412)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_instructions.galgas", 413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = object->mAttribute_isExecutable.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_directory_11866 = var_fullFileName_11091.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_instructions.galgas", 415)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_directory_11866.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_directory_11866.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 416)) ;
        }
        var_result_11369.method_writeToExecutableFile (var_fullFileName_11091, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 417)) ;
      }else if (kBoolFalse == test_2) {
        var_result_11369.method_makeDirectoryAndWriteToFile (var_fullFileName_11091, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 419)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlWriteToInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWriteToInstruction.mSlotID,
                                extensionMethod_gtlWriteToInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlWriteToInstruction_execute (defineExtensionMethod_gtlWriteToInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@gtlTemplateInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                            GALGAS_gtlContext & ioArgument_context,
                                                            GALGAS_gtlData & ioArgument_vars,
                                                            GALGAS_library & ioArgument_lib,
                                                            GALGAS_string & ioArgument_outputString,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateInstruction * object = (const cPtr_gtlTemplateInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateInstruction) ;
  GALGAS_gtlContext var_newContext_12756 = ioArgument_context ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_prefix.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 445)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    var_newContext_12756.setter_setPrefix (object->mAttribute_prefix COMMA_SOURCE_FILE ("gtl_instructions.galgas", 446)) ;
    }
  }
  GALGAS_gtlString temp_1 ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)).isValid ()) {
    if (NULL != dynamic_cast <const cPtr_gtlString *> (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)).ptr ())) {
      temp_1 = (cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)).ptr () ;
    }else{
      inCompiler->castError ("gtlString", callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)) ;
    }
  }
  GALGAS_lstring var_templateFileName_12862 = callExtensionGetter_fullTemplateFileName ((const cPtr_gtlContext *) var_newContext_12756.ptr (), ioArgument_context, ioArgument_vars, callExtensionGetter_lstring ((const cPtr_gtlString *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 449)) ;
  GALGAS_gtlData var_localVars_13004 ;
  {
  var_newContext_12756.setter_setInputVars (GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 456)) COMMA_SOURCE_FILE ("gtl_instructions.galgas", 456)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_isGlobal.operator_not (SOURCE_FILE ("gtl_instructions.galgas", 457)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_localVars_13004 = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 459)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_instructions.galgas", 459))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 459)) ;
    cEnumerator_gtlExpressionList enumerator_13226 (object->mAttribute_arguments, kEnumeration_up) ;
    while (enumerator_13226.hasCurrentObject ()) {
      GALGAS_gtlData var_evaluedArg_13255 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_13226.current_expression (HERE).ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 461)) ;
      {
      var_newContext_12756.insulate (HERE) ;
      cPtr_gtlContext * ptr_13314 = (cPtr_gtlContext *) var_newContext_12756.ptr () ;
      callExtensionSetter_addInputVariable ((cPtr_gtlContext *) ptr_13314, var_evaluedArg_13255, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 462)) ;
      }
      enumerator_13226.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_2) {
    var_localVars_13004 = ioArgument_vars ;
  }
  GALGAS_bool var_found_13496 ;
  GALGAS_gtlTemplate var_result_13521 ;
  {
  ioArgument_lib.insulate (HERE) ;
  cPtr_library * ptr_13398 = (cPtr_library *) ioArgument_lib.ptr () ;
  callExtensionSetter_getTemplate ((cPtr_library *) ptr_13398, var_newContext_12756, var_templateFileName_12862, object->mAttribute_ifExists, ioArgument_lib, var_found_13496, var_result_13521, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 468)) ;
  }
  const enumGalgasBool test_3 = var_found_13496.boolEnum () ;
  if (kBoolTrue == test_3) {
    callExtensionMethod_execute ((const cPtr_gtlTemplate *) var_result_13521.ptr (), var_newContext_12756, var_localVars_13004, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 478)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_ifExists.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_gtlData var_localMap_13663 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 481)) ;
      extensionMethod_execute (object->mAttribute_instructionsIfNotFound, ioArgument_context, var_localMap_13663, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 482)) ;
      ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_13663.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 483)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplateInstruction.mSlotID,
                                extensionMethod_gtlTemplateInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateInstruction_execute (defineExtensionMethod_gtlTemplateInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlGetColumnInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlGetColumnInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & ioArgument_outputString,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlGetColumnInstruction * object = (const cPtr_gtlGetColumnInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetColumnInstruction) ;
  GALGAS_string var_value_14392 = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_searchEndOfLine_14421 = GALGAS_bool (true) ;
  GALGAS_uint var_index_14442 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 504)) ;
  if (ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 505)).isValid ()) {
    uint32_t variant_14473 = ioArgument_outputString.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 505)).uintValue () ;
    bool loop_14473 = true ;
    while (loop_14473) {
      loop_14473 = GALGAS_bool (kIsStrictSup, var_index_14442.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_14421 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 505)).isValid () ;
      if (loop_14473) {
        loop_14473 = GALGAS_bool (kIsStrictSup, var_index_14442.objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_searchEndOfLine_14421 COMMA_SOURCE_FILE ("gtl_instructions.galgas", 505)).boolValue () ;
      }
      if (loop_14473 && (0 == variant_14473)) {
        loop_14473 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 505)) ;
      }
      if (loop_14473) {
        variant_14473 -- ;
        var_searchEndOfLine_14421 = GALGAS_bool (kIsNotEqual, ioArgument_outputString.getter_characterAtIndex (var_index_14442.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 506)).objectCompare (GALGAS_char (TO_UNICODE (10)))) ;
        var_index_14442.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 507)) ;
        const enumGalgasBool test_0 = var_searchEndOfLine_14421.boolEnum () ;
        if (kBoolTrue == test_0) {
          var_value_14392.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 509)) ;
        }
      }
    }
  }
  extensionMethod_set (object->mAttribute_destVariable, ioArgument_vars, ioArgument_lib, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 512)), var_value_14392  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 512)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlGetColumnInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlGetColumnInstruction.mSlotID,
                                extensionMethod_gtlGetColumnInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlGetColumnInstruction_execute (defineExtensionMethod_gtlGetColumnInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlIfStatementInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlIfStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                               GALGAS_gtlContext & ioArgument_context,
                                                               GALGAS_gtlData & ioArgument_vars,
                                                               GALGAS_library & ioArgument_lib,
                                                               GALGAS_string & ioArgument_outputString,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlIfStatementInstruction * object = (const cPtr_gtlIfStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlIfStatementInstruction) ;
  GALGAS_gtlData var_localMap_15375 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 535)) ;
  GALGAS_bool var_noConditionMatching_15427 = GALGAS_bool (true) ;
  cEnumerator_gtlThenElsifStatementList enumerator_15460 (object->mAttribute_thenElsifList, kEnumeration_up) ;
  bool bool_0 = var_noConditionMatching_15427.isValidAndTrue () ;
  if (enumerator_15460.hasCurrentObject () && bool_0) {
    while (enumerator_15460.hasCurrentObject () && bool_0) {
      GALGAS_gtlData var_dataCondition_15516 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_15460.current_condition (HERE).ptr (), var_localMap_15375, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 539)) ;
      const enumGalgasBool test_1 = GALGAS_bool (var_dataCondition_15516.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_gtlBool temp_2 ;
        if (var_dataCondition_15516.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_dataCondition_15516.ptr ())) {
            temp_2 = (cPtr_gtlBool *) var_dataCondition_15516.ptr () ;
          }else{
            inCompiler->castError ("gtlBool", var_dataCondition_15516.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 541)) ;
          }
        }
        GALGAS_bool var_boolCondition_15617 = temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 541)) ;
        const enumGalgasBool test_3 = var_boolCondition_15617.boolEnum () ;
        if (kBoolTrue == test_3) {
          extensionMethod_execute (enumerator_15460.current_instructionList (HERE), ioArgument_context, var_localMap_15375, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 543)) ;
          var_noConditionMatching_15427 = GALGAS_bool (false) ;
        }
      }else if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_dataCondition_15516.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 547)), GALGAS_string ("bool expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 547)) ;
      }
      enumerator_15460.gotoNextObject () ;
      if (enumerator_15460.hasCurrentObject ()) {
        bool_0 = var_noConditionMatching_15427.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_5 = var_noConditionMatching_15427.boolEnum () ;
  if (kBoolTrue == test_5) {
    extensionMethod_execute (object->mAttribute_elseList, ioArgument_context, var_localMap_15375, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 551)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_15375.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 554)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlIfStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlIfStatementInstruction.mSlotID,
                                extensionMethod_gtlIfStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlIfStatementInstruction_execute (defineExtensionMethod_gtlIfStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlForeachStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & ioArgument_context,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & ioArgument_outputString,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = (const cPtr_gtlForeachStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_gtlData var_localMap_19191 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 665)) ;
  GALGAS_gtlData var_iterableData_19236 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_iterable.ptr (), var_localMap_19191, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 666)) ;
  if (var_iterableData_19236.isValid ()) {
    if (var_iterableData_19236.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_19320_iterableMap ((cPtr_gtlMap *) var_iterableData_19236.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_0 = object ;
      callExtensionMethod_iterateOnMap ((const cPtr_gtlForeachStatementInstruction *) temp_0.ptr (), ioArgument_context, var_localMap_19191, ioArgument_lib, ioArgument_outputString, cast_19320_iterableMap, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 669)) ;
    }else if (var_iterableData_19236.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_19432_iterableList ((cPtr_gtlList *) var_iterableData_19236.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_1 = object ;
      callExtensionMethod_iterateOnList ((const cPtr_gtlForeachStatementInstruction *) temp_1.ptr (), ioArgument_context, var_localMap_19191, ioArgument_lib, ioArgument_outputString, cast_19432_iterableList, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 671)) ;
    }else if (var_iterableData_19236.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlSet) {
      GALGAS_gtlSet cast_19545_iterableSet ((cPtr_gtlSet *) var_iterableData_19236.ptr ()) ;
      const GALGAS_gtlForeachStatementInstruction temp_2 = object ;
      callExtensionMethod_iterateOnSet ((const cPtr_gtlForeachStatementInstruction *) temp_2.ptr (), ioArgument_context, var_localMap_19191, ioArgument_lib, ioArgument_outputString, cast_19545_iterableSet, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 673)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_iterable.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 675)), GALGAS_string ("Map, list or set expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 675)) ;
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_19191.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 677)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                extensionMethod_gtlForeachStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_execute (defineExtensionMethod_gtlForeachStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlForStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & ioArgument_context,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForStatementInstruction * object = (const cPtr_gtlForStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlForStatementInstruction) ;
  GALGAS_lstring var_indexName_20289 = GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 696)) ;
  GALGAS_gtlData var_localMap_20333 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 697)) ;
  cEnumerator_gtlExpressionList enumerator_20375 (object->mAttribute_iterable, kEnumeration_up) ;
  GALGAS_uint index_20360 ((uint32_t) 0) ;
  while (enumerator_20375.hasCurrentObject ()) {
    GALGAS_gtlData var_value_20407 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_20375.current_expression (HERE).ptr (), var_localMap_20333, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 700)) ;
    {
    var_localMap_20333.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_20458 = (cPtr_gtlData *) var_localMap_20333.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20458, object->mAttribute_identifier, var_value_20407, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 701)) ;
    }
    {
    var_localMap_20333.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_20509 = (cPtr_gtlData *) var_localMap_20333.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_20509, var_indexName_20289, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 704)), index_20360.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 704))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 702)) ;
    }
    extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_20333, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 706)) ;
    if (enumerator_20375.hasNextObject ()) {
      extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, var_localMap_20333, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 708)) ;
    }
    enumerator_20375.gotoNextObject () ;
    index_20360.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 698)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_20333.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 710)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlForStatementInstruction.mSlotID,
                                extensionMethod_gtlForStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForStatementInstruction_execute (defineExtensionMethod_gtlForStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlLoopStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLoopStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                 GALGAS_gtlContext & ioArgument_context,
                                                                 GALGAS_gtlData & ioArgument_vars,
                                                                 GALGAS_library & ioArgument_lib,
                                                                 GALGAS_string & ioArgument_outputString,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoopStatementInstruction * object = (const cPtr_gtlLoopStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoopStatementInstruction) ;
  GALGAS_gtlData var_localMap_21494 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 734)) ;
  GALGAS_gtlData var_startData_21536 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_start.ptr (), var_localMap_21494, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 735)) ;
  GALGAS_gtlData var_stopData_21586 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_stop.ptr (), var_localMap_21494, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 736)) ;
  GALGAS_gtlData var_stepData_21637 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_step.ptr (), var_localMap_21494, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 737)) ;
  GALGAS_bigint var_startVal_21687 ;
  GALGAS_bigint var_stopVal_21705 ;
  GALGAS_bigint var_stepVal_21723 ;
  const enumGalgasBool test_0 = GALGAS_bool (var_startData_21536.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_startData_21536.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_startData_21536.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_startData_21536.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_startData_21536.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 742)) ;
      }
    }
    var_startVal_21687 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 742)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_start.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 744)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 744)) ;
    var_startVal_21687.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_3 = GALGAS_bool (var_stopData_21586.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_gtlInt temp_4 ;
    if (var_stopData_21586.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stopData_21586.ptr ())) {
        temp_4 = (cPtr_gtlInt *) var_stopData_21586.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_stopData_21586.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 747)) ;
      }
    }
    var_stopVal_21705 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 747)) ;
  }else if (kBoolFalse == test_3) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_stop.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 749)) ;
    var_stopVal_21705.drop () ; // Release error dropped variable
  }
  const enumGalgasBool test_6 = GALGAS_bool (var_stepData_21637.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_gtlInt temp_7 ;
    if (var_stepData_21637.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_stepData_21637.ptr ())) {
        temp_7 = (cPtr_gtlInt *) var_stepData_21637.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_stepData_21637.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)) ;
      }
    }
    var_stepVal_21723 = temp_7.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 752)).multiply_operation (object->mAttribute_upDown.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 752)) ;
  }else if (kBoolFalse == test_6) {
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_step.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 754)), GALGAS_string ("int expected"), fixItArray8  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 754)) ;
    var_stepVal_21723.drop () ; // Release error dropped variable
  }
  GALGAS_bigint var_direction_22185 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 756)) ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsStrictInf, var_stepVal_21723.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 757)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    var_direction_22185 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 757)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 757)) ;
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21705.substract_operation (var_startVal_21687, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 758)).multiply_operation (var_direction_22185, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 758)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 758)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, var_localMap_21494, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 759)) ;
    GALGAS_uint var_count_22369 = var_stopVal_21705.substract_operation (var_startVal_21687, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).multiply_operation (var_direction_22185, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).add_operation (GALGAS_sint_36__34_ ((int64_t) 1LL).getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 760)) ;
    if (var_count_22369.isValid ()) {
      uint32_t variant_22426 = var_count_22369.uintValue () ;
      bool loop_22426 = true ;
      while (loop_22426) {
          {
          var_localMap_21494.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_22452 = (cPtr_gtlData *) var_localMap_21494.ptr () ;
          callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_22452, object->mAttribute_identifier, GALGAS_gtlInt::constructor_new (object->mAttribute_identifier.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 764)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 764)), var_startVal_21687  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 762)) ;
          }
          extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_21494, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 766)) ;
          var_startVal_21687 = var_startVal_21687.add_operation (var_stepVal_21723, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 767)) ;
        loop_22426 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21705.substract_operation (var_startVal_21687, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)).multiply_operation (var_direction_22185, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)))).isValid () ;
        if (loop_22426) {
          loop_22426 = GALGAS_bool (kIsSupOrEqual, var_stopVal_21705.substract_operation (var_startVal_21687, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)).multiply_operation (var_direction_22185, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 768)))).boolValue () ;
        }
        if (loop_22426 && (0 == variant_22426)) {
          loop_22426 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 761)) ;
        }
        if (loop_22426) {
          variant_22426 -- ;
          extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, var_localMap_21494, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 769)) ;
        }
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, var_localMap_21494, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 771)) ;
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_21494.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 773)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLoopStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLoopStatementInstruction.mSlotID,
                                extensionMethod_gtlLoopStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLoopStatementInstruction_execute (defineExtensionMethod_gtlLoopStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlRepeatStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlRepeatStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                   GALGAS_gtlContext & ioArgument_context,
                                                                   GALGAS_gtlData & ioArgument_vars,
                                                                   GALGAS_library & ioArgument_lib,
                                                                   GALGAS_string & ioArgument_outputString,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlRepeatStatementInstruction * object = (const cPtr_gtlRepeatStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlRepeatStatementInstruction) ;
  GALGAS_gtlData var_localMap_23465 = callExtensionGetter_overrideMap ((const cPtr_gtlData *) ioArgument_vars.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 792)) ;
  GALGAS_bool var_boolCondition_23508 = GALGAS_bool (false) ;
  GALGAS_gtlData var_limitData_23537 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_limit.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 794)) ;
  GALGAS_uint var_limitVal_23580 ;
  const enumGalgasBool test_0 = GALGAS_bool (var_limitData_23537.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_limitData_23537.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_limitData_23537.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_limitData_23537.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_limitData_23537.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 798)) ;
      }
    }
    var_limitVal_23580 = temp_1.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 798)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 798)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_limit.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 800)), GALGAS_string ("int exprected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 800)) ;
    var_limitVal_23580.drop () ; // Release error dropped variable
  }
  if (var_limitVal_23580.isValid ()) {
    uint32_t variant_23736 = var_limitVal_23580.uintValue () ;
    bool loop_23736 = true ;
    while (loop_23736) {
        extensionMethod_execute (object->mAttribute_continueList, ioArgument_context, var_localMap_23465, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 804)) ;
        GALGAS_gtlData var_conditionData_23843 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_condition.ptr (), var_localMap_23465, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 805)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_conditionData_23843.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 806)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlBool temp_4 ;
          if (var_conditionData_23843.isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_conditionData_23843.ptr ())) {
              temp_4 = (cPtr_gtlBool *) var_conditionData_23843.ptr () ;
            }else{
              inCompiler->castError ("gtlBool", var_conditionData_23843.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 807)) ;
            }
          }
          var_boolCondition_23508 = temp_4.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 807)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_conditionData_23843.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)), GALGAS_string ("bool expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 809)) ;
        }
      loop_23736 = var_boolCondition_23508.isValid () ;
      if (loop_23736) {
        loop_23736 = var_boolCondition_23508.boolValue () ;
      }
      if (loop_23736 && (0 == variant_23736)) {
        loop_23736 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_instructions.galgas", 803)) ;
      }
      if (loop_23736) {
        variant_23736 -- ;
        extensionMethod_execute (object->mAttribute_doList, ioArgument_context, var_localMap_23465, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 812)) ;
      }
    }
  }
  ioArgument_vars = callExtensionGetter_overriddenMap ((const cPtr_gtlData *) var_localMap_23465.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 814)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlRepeatStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlRepeatStatementInstruction.mSlotID,
                                extensionMethod_gtlRepeatStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlRepeatStatementInstruction_execute (defineExtensionMethod_gtlRepeatStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlErrorStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlErrorStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlErrorStatementInstruction * object = (const cPtr_gtlErrorStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlErrorStatementInstruction) ;
  GALGAS_location var_errorLocation_24731 ;
  const enumGalgasBool test_0 = object->mAttribute_hereInstead.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_errorLocation_24731 = object->mAttribute_where ;
  }else if (kBoolFalse == test_0) {
    var_errorLocation_24731 = extensionGetter_get (object->mAttribute_identifier, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 836)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 836)) ;
  }
  GALGAS_gtlData var_errorMessageData_24877 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_errorMessage.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 838)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_errorMessageData_24877.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 839)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlString temp_2 ;
    if (var_errorMessageData_24877.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (var_errorMessageData_24877.ptr ())) {
        temp_2 = (cPtr_gtlString *) var_errorMessageData_24877.ptr () ;
      }else{
        inCompiler->castError ("gtlString", var_errorMessageData_24877.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 840)) ;
      }
    }
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_errorLocation_24731, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 840)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 840)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_errorMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 842)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 842)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlErrorStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlErrorStatementInstruction.mSlotID,
                                extensionMethod_gtlErrorStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlErrorStatementInstruction_execute (defineExtensionMethod_gtlErrorStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlWarningStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlWarningStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWarningStatementInstruction * object = (const cPtr_gtlWarningStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWarningStatementInstruction) ;
  GALGAS_location var_warningLocation_25664 ;
  const enumGalgasBool test_0 = object->mAttribute_hereInstead.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_warningLocation_25664 = object->mAttribute_where ;
  }else if (kBoolFalse == test_0) {
    var_warningLocation_25664 = extensionGetter_get (object->mAttribute_identifier, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 865)).getter_where (SOURCE_FILE ("gtl_instructions.galgas", 865)) ;
  }
  GALGAS_gtlData var_warningMessageData_25816 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_warningMessage.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 867)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_warningMessageData_25816.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 868)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlString temp_2 ;
    if (var_warningMessageData_25816.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (var_warningMessageData_25816.ptr ())) {
        temp_2 = (cPtr_gtlString *) var_warningMessageData_25816.ptr () ;
      }else{
        inCompiler->castError ("gtlString", var_warningMessageData_25816.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 869)) ;
      }
    }
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticWarning (var_warningLocation_25664, temp_2.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 869)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 869)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_warningMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 871)), GALGAS_string ("string expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 871)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlWarningStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlWarningStatementInstruction.mSlotID,
                                extensionMethod_gtlWarningStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlWarningStatementInstruction_execute (defineExtensionMethod_gtlWarningStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlPrintStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlPrintStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & /* ioArgument_context */,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & ioArgument_lib,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlPrintStatementInstruction * object = (const cPtr_gtlPrintStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPrintStatementInstruction) ;
  GALGAS_string var_messageToPrintString_26586 = callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_messageToPrint.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 890)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 890)) ;
  inCompiler->printMessage (var_messageToPrintString_26586  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 891)) ;
  const enumGalgasBool test_0 = object->mAttribute_carriageReturn.boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 892)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlPrintStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlPrintStatementInstruction.mSlotID,
                                extensionMethod_gtlPrintStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlPrintStatementInstruction_execute (defineExtensionMethod_gtlPrintStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlDisplayStatementInstruction execute'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlDisplayStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                    GALGAS_gtlContext & /* ioArgument_context */,
                                                                    GALGAS_gtlData & ioArgument_vars,
                                                                    GALGAS_library & ioArgument_lib,
                                                                    GALGAS_string & /* ioArgument_outputString */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  GALGAS_gtlData var_variable_27202 = extensionGetter_get (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 908)) ;
  inCompiler->printMessage (extensionGetter_stringPath (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 909)).add_operation (GALGAS_string (" from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 909)).add_operation (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 910)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 910)).add_operation (callExtensionGetter_desc ((const cPtr_gtlData *) var_variable_27202.ptr (), GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 910))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 909)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlDisplayStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                extensionMethod_gtlDisplayStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlDisplayStatementInstruction_execute (defineExtensionMethod_gtlDisplayStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlAbstractSortInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlAbstractSortInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & /* ioArgument_outputString */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlAbstractSortInstruction * object = (const cPtr_gtlAbstractSortInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAbstractSortInstruction) ;
  GALGAS_gtlData var_variable_29125 = extensionGetter_get (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 982)) ;
  if (var_variable_29125.isValid ()) {
    if (var_variable_29125.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_29205_variableList ((cPtr_gtlList *) var_variable_29125.ptr ()) ;
      GALGAS_list var_listToSort_29227 = cast_29205_variableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 985)) ;
      GALGAS_uint var_length_29267 = var_listToSort_29227.getter_length (SOURCE_FILE ("gtl_instructions.galgas", 986)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_length_29267.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const GALGAS_gtlAbstractSortInstruction temp_1 = object ;
        callExtensionMethod_sort ((const cPtr_gtlAbstractSortInstruction *) temp_1.ptr (), var_listToSort_29227, GALGAS_uint ((uint32_t) 0U), var_length_29267.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 988)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 988)) ;
      }
      extensionMethod_set (object->mAttribute_variablePath, ioArgument_vars, ioArgument_lib, GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 993)), var_listToSort_29227  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 993)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 990)) ;
    }else{
      GALGAS_gtlVarItem var_lastComponent_29536 ;
      object->mAttribute_variablePath.method_last (var_lastComponent_29536, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 996)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlVarItem *) var_lastComponent_29536.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 997)), GALGAS_string ("list expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 997)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlAbstractSortInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlAbstractSortInstruction.mSlotID,
                                extensionMethod_gtlAbstractSortInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlAbstractSortInstruction_execute (defineExtensionMethod_gtlAbstractSortInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlSortStatementStructInstruction compare'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_sint extensionGetter_gtlSortStatementStructInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                              const GALGAS_gtlData & constinArgument_s_31_,
                                                                              const GALGAS_gtlData & constinArgument_s_32_,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementStructInstruction * object = (const cPtr_gtlSortStatementStructInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementStructInstruction) ;
  const GALGAS_gtlSortStatementStructInstruction temp_0 = object ;
  result_result = callExtensionGetter_compareElements ((const cPtr_gtlSortStatementStructInstruction *) temp_0.ptr (), constinArgument_s_31_, constinArgument_s_32_, object->mAttribute_sortingKey, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1011)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSortStatementStructInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction.mSlotID,
                                extensionGetter_gtlSortStatementStructInstruction_compare) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSortStatementStructInstruction_compare (defineExtensionGetter_gtlSortStatementStructInstruction_compare, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlSortStatementInstruction compare'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_sint extensionGetter_gtlSortStatementInstruction_compare (const cPtr_gtlAbstractSortInstruction * inObject,
                                                                        const GALGAS_gtlData & constinArgument_s_31_,
                                                                        const GALGAS_gtlData & constinArgument_s_32_,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_result ; // Returned variable
  const cPtr_gtlSortStatementInstruction * object = (const cPtr_gtlSortStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementInstruction) ;
  const enumGalgasBool test_0 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_ltOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1058)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1065)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1059)).multiply_operation (object->mAttribute_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1059)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1059)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = callExtensionGetter_bool ((const cPtr_gtlData *) callExtensionGetter_gtOp ((const cPtr_gtlData *) constinArgument_s_31_.ptr (), constinArgument_s_32_, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1061)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1064)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_sint ((int32_t) 1L).multiply_operation (object->mAttribute_order.getter_sint (SOURCE_FILE ("gtl_instructions.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1062)) ;
    }else if (kBoolFalse == test_1) {
      result_result = GALGAS_sint ((int32_t) 0L) ;
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSortStatementInstruction_compare (void) {
  enterExtensionGetter_compare (kTypeDescriptor_GALGAS_gtlSortStatementInstruction.mSlotID,
                                extensionGetter_gtlSortStatementInstruction_compare) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSortStatementInstruction_compare (defineExtensionGetter_gtlSortStatementInstruction_compare, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlTabStatementInstruction execute'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTabStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                GALGAS_gtlContext & /* ioArgument_context */,
                                                                GALGAS_gtlData & ioArgument_vars,
                                                                GALGAS_library & ioArgument_lib,
                                                                GALGAS_string & ioArgument_outputString,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTabStatementInstruction * object = (const cPtr_gtlTabStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTabStatementInstruction) ;
  GALGAS_gtlData var_tabValueData_31838 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_tabValue.ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1082)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_tabValueData_31838.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (var_tabValueData_31838.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_tabValueData_31838.ptr ())) {
        temp_1 = (cPtr_gtlInt *) var_tabValueData_31838.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", var_tabValueData_31838.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1084)) ;
      }
    }
    GALGAS_gtlInt var_tabValueInt_31928 = temp_1 ;
    GALGAS_uint var_currentColumn_31978 = ioArgument_outputString.getter_currentColumn (SOURCE_FILE ("gtl_instructions.galgas", 1085)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_tabValueInt_31928.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1086)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1086)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_uint var_tabColumn_32070 = var_tabValueInt_31928.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1087)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1087)) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_tabColumn_32070.objectCompare (var_currentColumn_31978)).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_outputString.plusAssign_operation(GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_tabColumn_32070.substract_operation (var_currentColumn_31978, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1091)).substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1091))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1089)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1089)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_tabValueData_31838.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1097)), GALGAS_string ("int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1097)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTabStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTabStatementInstruction.mSlotID,
                                extensionMethod_gtlTabStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTabStatementInstruction_execute (defineExtensionMethod_gtlTabStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlVariablesInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVariablesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & ioArgument_vars,
                                                             GALGAS_library & /* ioArgument_lib */,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVariablesInstruction * object = (const cPtr_gtlVariablesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVariablesInstruction) ;
  GALGAS_string var_delimitor_32790 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1112)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1112)) ;
  GALGAS_string var_varDelim_32868 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1113)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1113)) ;
  GALGAS_string var_separator_32948 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 17U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1114)) ;
  inCompiler->printMessage (var_separator_32948.add_operation (GALGAS_string (" Variables "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1115)).add_operation (var_separator_32948, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1115)).add_operation (GALGAS_string ("= Displayed from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1116)).add_operation (var_separator_32948, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1116)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1117))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1115)) ;
  inCompiler->printMessage (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1118)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1118))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1118)) ;
  inCompiler->printMessage (var_delimitor_32790  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1119)) ;
  if (ioArgument_vars.isValid ()) {
    if (ioArgument_vars.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_33210_variableMap ((cPtr_gtlStruct *) ioArgument_vars.ptr ()) ;
      cEnumerator_gtlVarMap enumerator_33256 (cast_33210_variableMap.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 1122)), kEnumeration_up) ;
      while (enumerator_33256.hasCurrentObject ()) {
        inCompiler->printMessage (var_varDelim_32868  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1123)) ;
        inCompiler->printMessage (enumerator_33256.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1124)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1124))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1124)) ;
        inCompiler->printMessage (var_varDelim_32868  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1125)) ;
        inCompiler->printMessage (callExtensionGetter_desc ((const cPtr_gtlData *) enumerator_33256.current_value (HERE).ptr (), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1126))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1126)) ;
        enumerator_33256.gotoNextObject () ;
      }
    }else{
      const GALGAS_gtlVariablesInstruction temp_0 = object ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlVariablesInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1129)), GALGAS_string ("INTERNAL ERROR. a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1129)) ;
    }
  }
  inCompiler->printMessage (var_delimitor_32790  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVariablesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlVariablesInstruction.mSlotID,
                                extensionMethod_gtlVariablesInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVariablesInstruction_execute (defineExtensionMethod_gtlVariablesInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlLibrariesInstruction execute'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLibrariesInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                             GALGAS_gtlContext & /* ioArgument_context */,
                                                             GALGAS_gtlData & /* ioArgument_vars */,
                                                             GALGAS_library & ioArgument_lib,
                                                             GALGAS_string & /* ioArgument_outputString */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLibrariesInstruction * object = (const cPtr_gtlLibrariesInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLibrariesInstruction) ;
  GALGAS_string var_delimitor_33922 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1145)) ;
  GALGAS_string var_varDelim_34000 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (45)), GALGAS_uint ((uint32_t) 79U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1146)) ;
  GALGAS_string var_separator_34080 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (61)), GALGAS_uint ((uint32_t) 17U)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1147)) ;
  inCompiler->printMessage (var_separator_34080.add_operation (GALGAS_string (" Libraries "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1148)).add_operation (var_separator_34080, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1148)).add_operation (GALGAS_string ("= Displayed from "), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1149)).add_operation (var_separator_34080, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1150))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1148)) ;
  inCompiler->printMessage (object->mAttribute_where.getter_locationString (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1151)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1151))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1151)) ;
  inCompiler->printMessage (var_delimitor_33922  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1152)) ;
  inCompiler->printMessage (GALGAS_string (" Functions \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1153)) ;
  inCompiler->printMessage (var_varDelim_34000  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1154)) ;
  GALGAS_uint var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlFuncMap enumerator_34395 (ioArgument_lib.getter_funcMap (SOURCE_FILE ("gtl_instructions.galgas", 1156)), kEnumeration_up) ;
  const bool bool_0 = true ;
  if (enumerator_34395.hasCurrentObject () && bool_0) {
    while (enumerator_34395.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_lineSize_34359.add_operation (enumerator_34395.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1157)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1157)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1157)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1159)) ;
      }
      inCompiler->printMessage (enumerator_34395.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1161))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1161)) ;
      var_lineSize_34359.plusAssign_operation(enumerator_34395.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1162)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1162)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1162)) ;
      enumerator_34395.gotoNextObject () ;
      if (enumerator_34395.hasCurrentObject () && bool_0) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1164)) ;
        var_lineSize_34359.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1165)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1167)) ;
  }
  inCompiler->printMessage (var_delimitor_33922  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1169)) ;
  inCompiler->printMessage (GALGAS_string (" Getters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1170)) ;
  inCompiler->printMessage (var_varDelim_34000  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1171)) ;
  var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlGetterMap enumerator_34748 (ioArgument_lib.getter_getterMap (SOURCE_FILE ("gtl_instructions.galgas", 1173)), kEnumeration_up) ;
  const bool bool_2 = true ;
  if (enumerator_34748.hasCurrentObject () && bool_2) {
    while (enumerator_34748.hasCurrentObject () && bool_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_lineSize_34359.add_operation (enumerator_34748.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1174)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1174)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1174)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1176)) ;
      }
      inCompiler->printMessage (enumerator_34748.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1178))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1178)) ;
      var_lineSize_34359.plusAssign_operation(enumerator_34748.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1179)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1179)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1179)) ;
      enumerator_34748.gotoNextObject () ;
      if (enumerator_34748.hasCurrentObject () && bool_2) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1181)) ;
        var_lineSize_34359.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1182)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1184)) ;
  }
  inCompiler->printMessage (var_delimitor_33922  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1186)) ;
  inCompiler->printMessage (GALGAS_string (" Setters \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1187)) ;
  inCompiler->printMessage (var_varDelim_34000  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1188)) ;
  var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlSetterMap enumerator_35101 (ioArgument_lib.getter_setterMap (SOURCE_FILE ("gtl_instructions.galgas", 1190)), kEnumeration_up) ;
  const bool bool_4 = true ;
  if (enumerator_35101.hasCurrentObject () && bool_4) {
    while (enumerator_35101.hasCurrentObject () && bool_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_lineSize_34359.add_operation (enumerator_35101.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1191)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1191)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1193)) ;
      }
      inCompiler->printMessage (enumerator_35101.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1195))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1195)) ;
      var_lineSize_34359.plusAssign_operation(enumerator_35101.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1196)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1196)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1196)) ;
      enumerator_35101.gotoNextObject () ;
      if (enumerator_35101.hasCurrentObject () && bool_4) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1198)) ;
        var_lineSize_34359.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1199)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1201)) ;
  }
  inCompiler->printMessage (var_delimitor_33922  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1203)) ;
  inCompiler->printMessage (GALGAS_string (" Templates \n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1204)) ;
  inCompiler->printMessage (var_varDelim_34000  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1205)) ;
  var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlTemplateMap enumerator_35458 (ioArgument_lib.getter_templateMap (SOURCE_FILE ("gtl_instructions.galgas", 1207)), kEnumeration_up) ;
  const bool bool_6 = true ;
  if (enumerator_35458.hasCurrentObject () && bool_6) {
    while (enumerator_35458.hasCurrentObject () && bool_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_lineSize_34359.add_operation (enumerator_35458.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1208)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1208)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1208)).objectCompare (GALGAS_uint ((uint32_t) 75U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_lineSize_34359 = GALGAS_uint ((uint32_t) 0U) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1210)) ;
      }
      inCompiler->printMessage (enumerator_35458.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1212))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1212)) ;
      var_lineSize_34359.plusAssign_operation(enumerator_35458.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 1213)).getter_length (SOURCE_FILE ("gtl_instructions.galgas", 1213)), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1213)) ;
      enumerator_35458.gotoNextObject () ;
      if (enumerator_35458.hasCurrentObject () && bool_6) {
        inCompiler->printMessage (GALGAS_string (", ")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1215)) ;
        var_lineSize_34359.plusAssign_operation(GALGAS_uint ((uint32_t) 2U), inCompiler  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1216)) ;
      }
    }
    inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1218)) ;
  }
  inCompiler->printMessage (var_delimitor_33922  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLibrariesInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlLibrariesInstruction.mSlotID,
                                extensionMethod_gtlLibrariesInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLibrariesInstruction_execute (defineExtensionMethod_gtlLibrariesInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlSetterCallInstruction execute'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSetterCallInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                              GALGAS_gtlContext & /* ioArgument_context */,
                                                              GALGAS_gtlData & ioArgument_vars,
                                                              GALGAS_library & ioArgument_lib,
                                                              GALGAS_string & /* ioArgument_outputString */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetterCallInstruction * object = (const cPtr_gtlSetterCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSetterCallInstruction) ;
  GALGAS_gtlDataList var_dataArguments_36292 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_instructions.galgas", 1238)) ;
  cEnumerator_gtlExpressionList enumerator_36327 (object->mAttribute_arguments, kEnumeration_up) ;
  while (enumerator_36327.hasCurrentObject ()) {
    var_dataArguments_36292.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_36327.current_expression (HERE).ptr (), ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1240))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1240)) ;
    enumerator_36327.gotoNextObject () ;
  }
  GALGAS_gtlData var_targetData_36409 = extensionGetter_get (object->mAttribute_target, ioArgument_vars, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1242)) ;
  {
  var_targetData_36409.insulate (HERE) ; // §ABSTRACT
  cPtr_gtlData * ptr_36451 = (cPtr_gtlData *) var_targetData_36409.ptr () ;
  callExtensionSetter_performSetter ((cPtr_gtlData *) ptr_36451, object->mAttribute_setterName, var_dataArguments_36292, ioArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1243)) ;
  }
  extensionMethod_set (object->mAttribute_target, ioArgument_vars, ioArgument_lib, var_targetData_36409, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSetterCallInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlSetterCallInstruction.mSlotID,
                                extensionMethod_gtlSetterCallInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSetterCallInstruction_execute (defineExtensionMethod_gtlSetterCallInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlInputStatementInstruction execute'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInputStatementInstruction_execute (const cPtr_gtlInstruction * inObject,
                                                                  GALGAS_gtlContext & ioArgument_context,
                                                                  GALGAS_gtlData & ioArgument_vars,
                                                                  GALGAS_library & /* ioArgument_lib */,
                                                                  GALGAS_string & /* ioArgument_outputString */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInputStatementInstruction * object = (const cPtr_gtlInputStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInputStatementInstruction) ;
  cEnumerator_gtlArgumentList enumerator_37051 (object->mAttribute_formalArguments, kEnumeration_up) ;
  while (enumerator_37051.hasCurrentObject ()) {
    GALGAS_gtlData var_arg_37106 ;
    {
    ioArgument_context.insulate (HERE) ;
    cPtr_gtlContext * ptr_37069 = (cPtr_gtlContext *) ioArgument_context.ptr () ;
    callExtensionSetter_popFirstInputArg ((cPtr_gtlContext *) ptr_37069, enumerator_37051.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1261)), var_arg_37106, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1261)) ;
    }
    const enumGalgasBool test_0 = enumerator_37051.current_typed (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_37051.current_type (HERE).objectCompare (var_arg_37106.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1263)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) var_arg_37106.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1264)), GALGAS_string ("mistyped argument, ").add_operation (extensionGetter_typeName (var_arg_37106.getter_dynamicType (SOURCE_FILE ("gtl_instructions.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1264)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1264)), fixItArray2  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1264)) ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_37051.current_name (HERE).getter_location (SOURCE_FILE ("gtl_instructions.galgas", 1265)), extensionGetter_typeName (enumerator_37051.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1265)).add_operation (GALGAS_string (" expected"), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1265)), fixItArray3  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1265)) ;
      }
    }
    {
    ioArgument_vars.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_37333 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_37333, enumerator_37051.current_name (HERE), var_arg_37106, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 1268)) ;
    }
    enumerator_37051.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInputStatementInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlInputStatementInstruction.mSlotID,
                                extensionMethod_gtlInputStatementInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInputStatementInstruction_execute (defineExtensionMethod_gtlInputStatementInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlStepInstruction execute'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlStepInstruction_execute (const cPtr_gtlInstruction * /* inObject */,
                                                        GALGAS_gtlContext & /* ioArgument_context */,
                                                        GALGAS_gtlData & /* ioArgument_vars */,
                                                        GALGAS_library & /* ioArgument_lib */,
                                                        GALGAS_string & /* ioArgument_outputString */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlStepInstruction_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlStepInstruction.mSlotID,
                                extensionMethod_gtlStepInstruction_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlStepInstruction_execute (defineExtensionMethod_gtlStepInstruction_execute, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlStruct overrideMap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlStruct_overrideMap (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_mapOverriden = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 35)), GALGAS_gtlVarMap::constructor_mapWithMapToOverride (object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 36))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 33)) ;
//---
  return result_mapOverriden ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_overrideMap (void) {
  enterExtensionGetter_overrideMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                    extensionGetter_gtlStruct_overrideMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_overrideMap (defineExtensionGetter_gtlStruct_overrideMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlStruct overriddenMap'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlStruct extensionGetter_gtlStruct_overriddenMap (const cPtr_gtlData * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_overriddenMap = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)), object->mAttribute_value.getter_overriddenMap (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 44)) ;
//---
  return result_overriddenMap ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_overriddenMap (void) {
  enterExtensionGetter_overriddenMap (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                      extensionGetter_gtlStruct_overriddenMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_overriddenMap (defineExtensionGetter_gtlStruct_overriddenMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlVarItemField location'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlVarItemField_location (const cPtr_gtlVarItem * inObject,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_loc = object->mAttribute_field.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 150)) ;
//---
  return result_loc ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                 extensionGetter_gtlVarItemField_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_location (defineExtensionGetter_gtlVarItemField_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@gtlVarItemField stringPath'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemField_stringPath (const cPtr_gtlVarItem * inObject,
                                                                 const GALGAS_gtlData & /* constinArgument_vars */,
                                                                 const GALGAS_library & /* constinArgument_lib */,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 158)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                   extensionGetter_gtlVarItemField_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_stringPath (defineExtensionGetter_gtlVarItemField_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlVarItemField setInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemField_setInContext (const cPtr_gtlVarItem * inObject,
                                                          GALGAS_gtlData & ioArgument_context,
                                                          const GALGAS_gtlData constinArgument_vars,
                                                          const GALGAS_library constinArgument_lib,
                                                          const GALGAS_gtlVarPath constinArgument_path,
                                                          const GALGAS_gtlData constinArgument_newData,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 177)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 178)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_context.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_5370 = (cPtr_gtlData *) ioArgument_context.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5370, object->mAttribute_field, constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 179)) ;
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_gtlData var_data_5456 ;
    callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_5456, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 181)) ;
    callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 182)).ptr (), var_data_5456, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 186)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 182)) ;
    {
    ioArgument_context.insulate (HERE) ; // §ABSTRACT
    cPtr_gtlData * ptr_5603 = (cPtr_gtlData *) ioArgument_context.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_5603, object->mAttribute_field, var_data_5456, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 189)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemField_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionMethod_gtlVarItemField_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemField_setInContext (defineExtensionMethod_gtlVarItemField_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlVarItemField getInContext'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemField_getInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlData & constinArgument_context,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    const GALGAS_gtlVarPath & constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  GALGAS_gtlData var_data_6064 ;
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_data_6064, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 203)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 204)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = var_data_6064 ;
  }else if (kBoolFalse == test_0) {
    result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 207)).ptr (), var_data_6064, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 207)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                     extensionGetter_gtlVarItemField_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_getInContext (defineExtensionGetter_gtlVarItemField_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemField existsInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemField_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                    const GALGAS_gtlData & constinArgument_context,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    const GALGAS_gtlVarPath & constinArgument_path,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 226)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_gtlData var_subContext_6783 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_subContext_6783, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 230)) ;
      result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 231)).ptr (), var_subContext_6783, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 231)) ;
    }
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionGetter_gtlVarItemField_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_existsInContext (defineExtensionGetter_gtlVarItemField_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@gtlVarItemField deleteInContext'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemField_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                             GALGAS_gtlData & ioArgument_context,
                                                             const GALGAS_gtlData constinArgument_vars,
                                                             const GALGAS_library constinArgument_lib,
                                                             const GALGAS_gtlVarPath constinArgument_path,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 252)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 253)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_7422 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_deleteStructField ((cPtr_gtlData *) ptr_7422, object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 254)) ;
      }
    }else if (kBoolFalse == test_1) {
      GALGAS_gtlData var_data_7506 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_7506, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 256)) ;
      callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 257)).ptr (), var_data_7506, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 257)) ;
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_7655 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_7655, object->mAttribute_field, var_data_7506, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 263)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemField_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                        extensionMethod_gtlVarItemField_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemField_deleteInContext (defineExtensionMethod_gtlVarItemField_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemCollection stringPath'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                      const GALGAS_gtlData & constinArgument_vars,
                                                                      const GALGAS_library & constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  result_result = object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 278)).add_operation (GALGAS_string ("["), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 278)) ;
  GALGAS_gtlData var_keyValue_8153 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 279)) ;
  if (var_keyValue_8153.isValid ()) {
    if (var_keyValue_8153.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_8224_keyString ((cPtr_gtlString *) var_keyValue_8153.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_8224_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 282)) ;
    }else if (var_keyValue_8153.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_8288_keyInt ((cPtr_gtlInt *) var_keyValue_8153.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_8288_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 284)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 286)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                   extensionGetter_gtlVarItemCollection_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_stringPath (defineExtensionGetter_gtlVarItemCollection_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@gtlVarItemCollection setInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                               GALGAS_gtlData & ioArgument_context,
                                                               const GALGAS_gtlData constinArgument_vars,
                                                               const GALGAS_library constinArgument_lib,
                                                               const GALGAS_gtlVarPath constinArgument_path,
                                                               const GALGAS_gtlData constinArgument_newData,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_8787_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 301)) ;
      GALGAS_gtlData var_data_8873 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 302)) ;
      var_data_8873 = function_wantGtlMap (var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 303)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 304)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        var_data_8873.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_8948 = (cPtr_gtlData *) var_data_8873.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_8948, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 305)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 305)) ;
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_9041 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_8873.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 307)), var_subContext_9041, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 307)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 308)).ptr (), var_subContext_9041, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 312)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 308)) ;
        {
        var_data_8873.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9207 = (cPtr_gtlData *) var_data_8873.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_9207, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_8787_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 315)), var_subContext_9041, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 315)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_9265 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_9265, object->mAttribute_field, var_data_8873, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 317)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_9319_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 299)).ptr ()) ;
      ioArgument_context = function_wantGtlStruct (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 319)) ;
      GALGAS_gtlData var_data_9405 ;
      callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 320)) ;
      var_data_9405 = function_wantGtlList (var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 321)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 322)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_data_9405.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9481 = (cPtr_gtlData *) var_data_9405.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_9481, constinArgument_newData, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 323)) ;
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_9568 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_9405.ptr (), var_subContext_9568, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 325)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 326)).ptr (), var_subContext_9568, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 330)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 326)) ;
        {
        var_data_9405.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_9742 = (cPtr_gtlData *) var_data_9405.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_9742, var_subContext_9568, cast_9319_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 333)) ;
        }
      }
      {
      ioArgument_context.insulate (HERE) ; // §ABSTRACT
      cPtr_gtlData * ptr_9801 = (cPtr_gtlData *) ioArgument_context.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_9801, object->mAttribute_field, var_data_9405, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 335)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 337)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 337)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionMethod_gtlVarItemCollection_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemCollection_setInContext (defineExtensionMethod_gtlVarItemCollection_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@gtlVarItemCollection getInContext'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_context,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         const GALGAS_gtlVarPath & constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  GALGAS_gtlData var_collection_10322 ;
  callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_collection_10322, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 351)) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_10383_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 354)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10322.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_10383_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 355)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 355)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_10528 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_10322.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_10383_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 357)), var_subContext_10528, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 357)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 358)).ptr (), var_subContext_10528, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 358)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_10704_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 352)).ptr ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10322.ptr (), result_result, cast_10704_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 367)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_10843 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_10322.ptr (), var_subContext_10843, cast_10704_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 369)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 370)).ptr (), var_subContext_10843, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 370)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 378)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                     extensionGetter_gtlVarItemCollection_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_getInContext (defineExtensionGetter_gtlVarItemCollection_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlVarItemCollection existsInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_context,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         const GALGAS_gtlVarPath & constinArgument_path,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 393)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlData var_collection_11565 ;
    callExtensionMethod_structField ((const cPtr_gtlData *) constinArgument_context.ptr (), object->mAttribute_field, var_collection_11565, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 394)) ;
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).isValid ()) {
      if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
        GALGAS_gtlString cast_11630_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).ptr ()) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 398)) ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 400)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_gtlData var_subContext_11840 ;
            callExtensionMethod_mapItem ((const cPtr_gtlData *) var_collection_11565.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_11630_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 401)), var_subContext_11840, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 401)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 402)).ptr (), var_subContext_11840, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 402)) ;
          }else if (kBoolFalse == test_2) {
            result_result = GALGAS_bool (false) ;
          }
        }
      }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
        GALGAS_gtlInt cast_12097_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 395)).ptr ()) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 414)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 416)).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_gtlData var_subContext_12302 ;
            callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_collection_11565.ptr (), var_subContext_12302, cast_12097_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 417)) ;
            result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 418)).ptr (), var_subContext_12302, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 418)) ;
          }else if (kBoolFalse == test_4) {
            result_result = GALGAS_bool (false) ;
          }
        }
      }else{
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 429)), GALGAS_string ("string ot int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 429)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
  }else if (kBoolFalse == test_0) {
    result_result = GALGAS_bool (false) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionGetter_gtlVarItemCollection_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_existsInContext (defineExtensionGetter_gtlVarItemCollection_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlVarItemCollection deleteInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_13071_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).ptr ()) ;
      const enumGalgasBool test_0 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 447)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_gtlData var_data_13165 ;
        callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_13165, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 448)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 449)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          const enumGalgasBool test_2 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) var_data_13165.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 450)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            var_data_13165.insulate (HERE) ; // §ABSTRACT
            cPtr_gtlData * ptr_13262 = (cPtr_gtlData *) var_data_13165.ptr () ;
            callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_13262, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 451)) ;
            }
          }
        }else if (kBoolFalse == test_1) {
          GALGAS_gtlData var_subContext_13365 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) var_data_13165.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 454)), var_subContext_13365, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 454)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 455)).ptr (), var_subContext_13365, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 455)) ;
          {
          var_data_13165.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_13531 = (cPtr_gtlData *) var_data_13165.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_13531, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_13071_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 461)), var_subContext_13365, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 461)) ;
          }
        }
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_13593 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_13593, object->mAttribute_field, var_data_13165, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 463)) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_13655_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 445)).ptr ()) ;
      const enumGalgasBool test_3 = callExtensionGetter_hasStructField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 466)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_gtlData var_data_13749 ;
        callExtensionMethod_structField ((const cPtr_gtlData *) ioArgument_context.ptr (), object->mAttribute_field, var_data_13749, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 467)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const enumGalgasBool test_5 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) var_data_13749.ptr (), cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 469)).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_data_13749.insulate (HERE) ; // §ABSTRACT
            cPtr_gtlData * ptr_13847 = (cPtr_gtlData *) var_data_13749.ptr () ;
            callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_13847, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 470)) ;
            }
          }
        }else if (kBoolFalse == test_4) {
          GALGAS_gtlData var_subContext_13944 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) var_data_13749.ptr (), var_subContext_13944, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 473)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)).ptr (), var_subContext_13944, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 474)) ;
          {
          var_data_13749.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_14118 = (cPtr_gtlData *) var_data_13749.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_14118, var_subContext_13944, cast_13655_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 480)) ;
          }
        }
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_14181 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_14181, object->mAttribute_field, var_data_13749, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 482)) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 485)), GALGAS_string ("string ot int expected"), fixItArray6  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 485)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                        extensionMethod_gtlVarItemCollection_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemCollection_deleteInContext (defineExtensionMethod_gtlVarItemCollection_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlVarItemSubCollection location'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlVarItemSubCollection_location (const cPtr_gtlVarItem * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_loc ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_loc = object->mAttribute_subCollectionlocation ;
//---
  return result_loc ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                 extensionGetter_gtlVarItemSubCollection_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_location (defineExtensionGetter_gtlVarItemSubCollection_location, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@gtlVarItemSubCollection stringPath'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemSubCollection_stringPath (const cPtr_gtlVarItem * inObject,
                                                                         const GALGAS_gtlData & constinArgument_vars,
                                                                         const GALGAS_library & constinArgument_lib,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_result = GALGAS_string ("[") ;
  GALGAS_gtlData var_keyValue_14910 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 512)) ;
  if (var_keyValue_14910.isValid ()) {
    if (var_keyValue_14910.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_14981_keyString ((cPtr_gtlString *) var_keyValue_14910.ptr ()) ;
      result_result.plusAssign_operation(GALGAS_string ("\"").add_operation (callExtensionGetter_string ((const cPtr_gtlString *) cast_14981_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 515)) ;
    }else if (var_keyValue_14910.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_15045_keyInt ((cPtr_gtlInt *) var_keyValue_14910.ptr ()) ;
      result_result.plusAssign_operation(callExtensionGetter_string ((const cPtr_gtlInt *) cast_15045_keyInt.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 517)) ;
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 519)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_stringPath (void) {
  enterExtensionGetter_stringPath (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                   extensionGetter_gtlVarItemSubCollection_stringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_stringPath (defineExtensionGetter_gtlVarItemSubCollection_stringPath, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlVarItemSubCollection setInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemSubCollection_setInContext (const cPtr_gtlVarItem * inObject,
                                                                  GALGAS_gtlData & ioArgument_context,
                                                                  const GALGAS_gtlData constinArgument_vars,
                                                                  const GALGAS_library constinArgument_lib,
                                                                  const GALGAS_gtlVarPath constinArgument_path,
                                                                  const GALGAS_gtlData constinArgument_newData,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_15550_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).ptr ()) ;
      ioArgument_context = function_wantGtlMap (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 534)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 535)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_15634 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_15634, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 536)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 536)) ;
        }
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_15730 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 538)), var_subContext_15730, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 538)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 539)).ptr (), var_subContext_15730, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 543)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 539)) ;
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_15899 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_15899, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_15550_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 546)), var_subContext_15730, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 546)) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_15967_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 532)).ptr ()) ;
      ioArgument_context = function_wantGtlList (ioArgument_context, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 549)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 550)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_16052 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_16052, constinArgument_newData, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 551)) ;
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_16142 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_16142, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 553)) ;
        callExtensionMethod_setInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 554)).ptr (), var_subContext_16142, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 558)), constinArgument_newData, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 554)) ;
        {
        ioArgument_context.insulate (HERE) ; // §ABSTRACT
        cPtr_gtlData * ptr_16319 = (cPtr_gtlData *) ioArgument_context.ptr () ;
        callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_16319, var_subContext_16142, cast_15967_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 561)) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 564)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 564)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemSubCollection_setInContext (void) {
  enterExtensionMethod_setInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionMethod_gtlVarItemSubCollection_setInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_setInContext (defineExtensionMethod_gtlVarItemSubCollection_setInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlVarItemSubCollection getInContext'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarItemSubCollection_getInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlData & constinArgument_context,
                                                                            const GALGAS_gtlData & constinArgument_vars,
                                                                            const GALGAS_library & constinArgument_lib,
                                                                            const GALGAS_gtlVarPath & constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_16867_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 580)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16867_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 581)), result_result, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 581)) ;
      }else if (kBoolFalse == test_0) {
        GALGAS_gtlData var_subContext_17006 ;
        callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_16867_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 583)), var_subContext_17006, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 583)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 584)).ptr (), var_subContext_17006, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 584)) ;
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_17182_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 578)).ptr ()) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 592)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), result_result, cast_17182_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 593)) ;
      }else if (kBoolFalse == test_1) {
        GALGAS_gtlData var_subContext_17315 ;
        callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_17315, cast_17182_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 595)) ;
        result_result = callExtensionGetter_getInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 596)).ptr (), var_subContext_17315, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 596)) ;
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 604)), GALGAS_string ("string ot int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 604)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_getInContext (void) {
  enterExtensionGetter_getInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                     extensionGetter_gtlVarItemSubCollection_getInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_getInContext (defineExtensionGetter_gtlVarItemSubCollection_getInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlVarItemSubCollection existsInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlVarItemSubCollection_existsInContext (const cPtr_gtlVarItem * inObject,
                                                                            const GALGAS_gtlData & constinArgument_context,
                                                                            const GALGAS_gtlData & constinArgument_vars,
                                                                            const GALGAS_library & constinArgument_lib,
                                                                            const GALGAS_gtlVarPath & constinArgument_path,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_18007_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).ptr ()) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 620)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_result = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 621)) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 623)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlData var_subContext_18198 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) constinArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_18007_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 624)), var_subContext_18198, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 624)) ;
          result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 625)).ptr (), var_subContext_18198, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 625)) ;
        }else if (kBoolFalse == test_1) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_18433_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 618)).ptr ()) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 636)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_result = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 637)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 639)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_gtlData var_subContext_18619 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) constinArgument_context.ptr (), var_subContext_18619, cast_18433_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 640)) ;
          result_result = callExtensionGetter_existsInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 641)).ptr (), var_subContext_18619, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 641)) ;
        }else if (kBoolFalse == test_3) {
          result_result = GALGAS_bool (false) ;
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 652)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 652)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_existsInContext (void) {
  enterExtensionGetter_existsInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionGetter_gtlVarItemSubCollection_existsInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_existsInContext (defineExtensionGetter_gtlVarItemSubCollection_existsInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@gtlVarItemSubCollection deleteInContext'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlVarItemSubCollection_deleteInContext (const cPtr_gtlVarItem * inObject,
                                                                     GALGAS_gtlData & ioArgument_context,
                                                                     const GALGAS_gtlData constinArgument_vars,
                                                                     const GALGAS_library constinArgument_lib,
                                                                     const GALGAS_gtlVarPath constinArgument_path,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).isValid ()) {
    if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlString) {
      GALGAS_gtlString cast_19336_keyString ((cPtr_gtlString *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).ptr ()) ;
      const enumGalgasBool test_0 = callExtensionGetter_hasMapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 667)).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 668)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19433 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_deleteMapItem ((cPtr_gtlData *) ptr_19433, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 669)) ;
          }
        }else if (kBoolFalse == test_1) {
          GALGAS_gtlData var_subContext_19527 ;
          callExtensionMethod_mapItem ((const cPtr_gtlData *) ioArgument_context.ptr (), callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 671)), var_subContext_19527, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 671)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 672)).ptr (), var_subContext_19527, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 672)) ;
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19696 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setMapItem ((cPtr_gtlData *) ptr_19696, callExtensionGetter_lstring ((const cPtr_gtlString *) cast_19336_keyString.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 678)), var_subContext_19527, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 678)) ;
          }
        }
      }
    }else if (callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt) {
      GALGAS_gtlInt cast_19774_keyInt ((cPtr_gtlInt *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 665)).ptr ()) ;
      const enumGalgasBool test_2 = callExtensionGetter_hasItemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 682)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_path.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 683)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_19872 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_deleteItemAtIndex ((cPtr_gtlData *) ptr_19872, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 684)) ;
          }
        }else if (kBoolFalse == test_3) {
          GALGAS_gtlData var_subContext_19960 ;
          callExtensionMethod_itemAtIndex ((const cPtr_gtlData *) ioArgument_context.ptr (), var_subContext_19960, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 686)) ;
          callExtensionMethod_deleteInContext ((const cPtr_gtlVarItem *) constinArgument_path.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 687)).ptr (), var_subContext_19960, constinArgument_vars, constinArgument_lib, constinArgument_path.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 687)) ;
          {
          ioArgument_context.insulate (HERE) ; // §ABSTRACT
          cPtr_gtlData * ptr_20137 = (cPtr_gtlData *) ioArgument_context.ptr () ;
          callExtensionSetter_setItemAtIndex ((cPtr_gtlData *) ptr_20137, var_subContext_19960, cast_19774_keyInt, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 693)) ;
          }
        }
      }
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 697)), GALGAS_string ("string ot int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 697)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlVarItemSubCollection_deleteInContext (void) {
  enterExtensionMethod_deleteInContext (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                        extensionMethod_gtlVarItemSubCollection_deleteInContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlVarItemSubCollection_deleteInContext (defineExtensionMethod_gtlVarItemSubCollection_deleteInContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlTerminal eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlTerminal_eval (const cPtr_gtlExpression * inObject,
                                                        const GALGAS_gtlData & /* constinArgument_vars */,
                                                        const GALGAS_library & /* constinArgument_lib */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlTerminal * object = (const cPtr_gtlTerminal *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTerminal) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlTerminal_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlTerminal.mSlotID,
                             extensionGetter_gtlTerminal_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlTerminal_eval (defineExtensionGetter_gtlTerminal_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlVarRef eval'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlVarRef_eval (const cPtr_gtlExpression * inObject,
                                                      const GALGAS_gtlData & constinArgument_vars,
                                                      const GALGAS_library & constinArgument_lib,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlVarRef * object = (const cPtr_gtlVarRef *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarRef) ;
  result_result = extensionGetter_get (object->mAttribute_variableName, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 878)) ;
  {
  result_result.setter_setWhere (object->mAttribute_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 879)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarRef_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlVarRef.mSlotID,
                             extensionGetter_gtlVarRef_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarRef_eval (defineExtensionGetter_gtlVarRef_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlParenthesizedExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlParenthesizedExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlData & constinArgument_vars,
                                                                       const GALGAS_library & constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlParenthesizedExpression * object = (const cPtr_gtlParenthesizedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlParenthesizedExpression) ;
  result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 894)) ;
  {
  result_result.setter_setWhere (object->mAttribute_where COMMA_SOURCE_FILE ("gtl_expressions.galgas", 895)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlParenthesizedExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlParenthesizedExpression.mSlotID,
                             extensionGetter_gtlParenthesizedExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlParenthesizedExpression_eval (defineExtensionGetter_gtlParenthesizedExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlMinusExpression eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMinusExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlData & constinArgument_vars,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMinusExpression * object = (const cPtr_gtlMinusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMinusExpression) ;
  result_result = callExtensionGetter_minusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 908)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 908)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMinusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMinusExpression.mSlotID,
                             extensionGetter_gtlMinusExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMinusExpression_eval (defineExtensionGetter_gtlMinusExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlPlusExpression eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlPlusExpression_eval (const cPtr_gtlExpression * inObject,
                                                              const GALGAS_gtlData & constinArgument_vars,
                                                              const GALGAS_library & constinArgument_lib,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlPlusExpression * object = (const cPtr_gtlPlusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPlusExpression) ;
  result_result = callExtensionGetter_plusOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 921)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 921)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlPlusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlPlusExpression.mSlotID,
                             extensionGetter_gtlPlusExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlPlusExpression_eval (defineExtensionGetter_gtlPlusExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlNotExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlNotExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlNotExpression * object = (const cPtr_gtlNotExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotExpression) ;
  result_result = callExtensionGetter_notOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 934)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 934)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlNotExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlNotExpression.mSlotID,
                             extensionGetter_gtlNotExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlNotExpression_eval (defineExtensionGetter_gtlNotExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlAddExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlAddExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlAddExpression * object = (const cPtr_gtlAddExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAddExpression) ;
  result_result = callExtensionGetter_addOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 949)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 949)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlAddExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAddExpression.mSlotID,
                             extensionGetter_gtlAddExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlAddExpression_eval (defineExtensionGetter_gtlAddExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlSubstractExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlSubstractExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlData & constinArgument_vars,
                                                                   const GALGAS_library & constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlSubstractExpression * object = (const cPtr_gtlSubstractExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSubstractExpression) ;
  result_result = callExtensionGetter_subOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 963)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 964)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 963)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSubstractExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlSubstractExpression.mSlotID,
                             extensionGetter_gtlSubstractExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSubstractExpression_eval (defineExtensionGetter_gtlSubstractExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@gtlMultiplyExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMultiplyExpression_eval (const cPtr_gtlExpression * inObject,
                                                                  const GALGAS_gtlData & constinArgument_vars,
                                                                  const GALGAS_library & constinArgument_lib,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMultiplyExpression * object = (const cPtr_gtlMultiplyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMultiplyExpression) ;
  result_result = callExtensionGetter_mulOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 977)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 978)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 977)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMultiplyExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMultiplyExpression.mSlotID,
                             extensionGetter_gtlMultiplyExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMultiplyExpression_eval (defineExtensionGetter_gtlMultiplyExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlDivideExpression eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlDivideExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlData & constinArgument_vars,
                                                                const GALGAS_library & constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlDivideExpression * object = (const cPtr_gtlDivideExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDivideExpression) ;
  result_result = callExtensionGetter_divOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 991)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 991)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlDivideExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlDivideExpression.mSlotID,
                             extensionGetter_gtlDivideExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlDivideExpression_eval (defineExtensionGetter_gtlDivideExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@gtlModulusExpression eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlModulusExpression_eval (const cPtr_gtlExpression * inObject,
                                                                 const GALGAS_gtlData & constinArgument_vars,
                                                                 const GALGAS_library & constinArgument_lib,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlModulusExpression * object = (const cPtr_gtlModulusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlModulusExpression) ;
  result_result = callExtensionGetter_modOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1005)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1006)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1005)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlModulusExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlModulusExpression.mSlotID,
                             extensionGetter_gtlModulusExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlModulusExpression_eval (defineExtensionGetter_gtlModulusExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlAndExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlAndExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlAndExpression * object = (const cPtr_gtlAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAndExpression) ;
  result_result = callExtensionGetter_andOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1019)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1019)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlAndExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlAndExpression.mSlotID,
                             extensionGetter_gtlAndExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlAndExpression_eval (defineExtensionGetter_gtlAndExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlOrExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlOrExpression_eval (const cPtr_gtlExpression * inObject,
                                                            const GALGAS_gtlData & constinArgument_vars,
                                                            const GALGAS_library & constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlOrExpression * object = (const cPtr_gtlOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlOrExpression) ;
  result_result = callExtensionGetter_orOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1033)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1034)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1033)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlOrExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlOrExpression.mSlotID,
                             extensionGetter_gtlOrExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlOrExpression_eval (defineExtensionGetter_gtlOrExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlXorExpression eval'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlXorExpression_eval (const cPtr_gtlExpression * inObject,
                                                             const GALGAS_gtlData & constinArgument_vars,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlXorExpression * object = (const cPtr_gtlXorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlXorExpression) ;
  result_result = callExtensionGetter_xorOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1047)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1047)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlXorExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlXorExpression.mSlotID,
                             extensionGetter_gtlXorExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlXorExpression_eval (defineExtensionGetter_gtlXorExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlShiftLeftExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlShiftLeftExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlData & constinArgument_vars,
                                                                   const GALGAS_library & constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlShiftLeftExpression * object = (const cPtr_gtlShiftLeftExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftLeftExpression) ;
  result_result = callExtensionGetter_slOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1061)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1062)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1061)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlShiftLeftExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlShiftLeftExpression.mSlotID,
                             extensionGetter_gtlShiftLeftExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlShiftLeftExpression_eval (defineExtensionGetter_gtlShiftLeftExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlShiftRightExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlShiftRightExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlShiftRightExpression * object = (const cPtr_gtlShiftRightExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftRightExpression) ;
  result_result = callExtensionGetter_srOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1075)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1076)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1075)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlShiftRightExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlShiftRightExpression.mSlotID,
                             extensionGetter_gtlShiftRightExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlShiftRightExpression_eval (defineExtensionGetter_gtlShiftRightExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension getter '@gtlNotEqualExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlNotEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                  const GALGAS_gtlData & constinArgument_vars,
                                                                  const GALGAS_library & constinArgument_lib,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlNotEqualExpression * object = (const cPtr_gtlNotEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotEqualExpression) ;
  result_result = callExtensionGetter_neqOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1089)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1089)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlNotEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlNotEqualExpression.mSlotID,
                             extensionGetter_gtlNotEqualExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlNotEqualExpression_eval (defineExtensionGetter_gtlNotEqualExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlEqualExpression eval'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                               const GALGAS_gtlData & constinArgument_vars,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEqualExpression * object = (const cPtr_gtlEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEqualExpression) ;
  result_result = callExtensionGetter_eqOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1103)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1103)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlEqualExpression.mSlotID,
                             extensionGetter_gtlEqualExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEqualExpression_eval (defineExtensionGetter_gtlEqualExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlLowerThanExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLowerThanExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlData & constinArgument_vars,
                                                                   const GALGAS_library & constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLowerThanExpression * object = (const cPtr_gtlLowerThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerThanExpression) ;
  result_result = callExtensionGetter_ltOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1117)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1117)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLowerThanExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLowerThanExpression.mSlotID,
                             extensionGetter_gtlLowerThanExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLowerThanExpression_eval (defineExtensionGetter_gtlLowerThanExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlLowerOrEqualExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLowerOrEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                      const GALGAS_gtlData & constinArgument_vars,
                                                                      const GALGAS_library & constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLowerOrEqualExpression * object = (const cPtr_gtlLowerOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerOrEqualExpression) ;
  result_result = callExtensionGetter_leOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1131)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1131)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLowerOrEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression.mSlotID,
                             extensionGetter_gtlLowerOrEqualExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLowerOrEqualExpression_eval (defineExtensionGetter_gtlLowerOrEqualExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlGreaterThanExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlGreaterThanExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlData & constinArgument_vars,
                                                                     const GALGAS_library & constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGreaterThanExpression * object = (const cPtr_gtlGreaterThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterThanExpression) ;
  result_result = callExtensionGetter_gtOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1145)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1146)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1145)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGreaterThanExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGreaterThanExpression.mSlotID,
                             extensionGetter_gtlGreaterThanExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGreaterThanExpression_eval (defineExtensionGetter_gtlGreaterThanExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlGreaterOrEqualExpression eval'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlGreaterOrEqualExpression_eval (const cPtr_gtlExpression * inObject,
                                                                        const GALGAS_gtlData & constinArgument_vars,
                                                                        const GALGAS_library & constinArgument_lib,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGreaterOrEqualExpression * object = (const cPtr_gtlGreaterOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterOrEqualExpression) ;
  result_result = callExtensionGetter_geOp ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1159)).ptr (), callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1159)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGreaterOrEqualExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression.mSlotID,
                             extensionGetter_gtlGreaterOrEqualExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGreaterOrEqualExpression_eval (defineExtensionGetter_gtlGreaterOrEqualExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlGetterCallExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlGetterCallExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGetterCallExpression * object = (const cPtr_gtlGetterCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetterCallExpression) ;
  GALGAS_gtlDataList var_dataArguments_35503 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1177)) ;
  cEnumerator_gtlExpressionList enumerator_35538 (object->mAttribute_arguments, kEnumeration_up) ;
  while (enumerator_35538.hasCurrentObject ()) {
    var_dataArguments_35503.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_35538.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1179))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1179)) ;
    enumerator_35538.gotoNextObject () ;
  }
  GALGAS_gtlData var_targetData_35620 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_target.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1181)) ;
  result_result = callExtensionGetter_performGetter ((const cPtr_gtlData *) var_targetData_35620.ptr (), object->mAttribute_getterName, var_dataArguments_35503, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1182)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetterCallExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlGetterCallExpression.mSlotID,
                             extensionGetter_gtlGetterCallExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetterCallExpression_eval (defineExtensionGetter_gtlGetterCallExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlFunctionCallExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFunctionCallExpression_eval (const cPtr_gtlExpression * inObject,
                                                                      const GALGAS_gtlData & constinArgument_vars,
                                                                      const GALGAS_library & constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFunctionCallExpression * object = (const cPtr_gtlFunctionCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFunctionCallExpression) ;
  const enumGalgasBool test_0 = GALGAS_function::constructor_isFunctionDefined (object->mAttribute_functionName.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1235))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1235)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_objectlist var_arguments_37541 = GALGAS_objectlist::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1237)) ;
    GALGAS_gtlDataList var_dataArguments_37585 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1238)) ;
    cEnumerator_gtlExpressionList enumerator_37631 (object->mAttribute_functionArguments, kEnumeration_up) ;
    while (enumerator_37631.hasCurrentObject ()) {
      GALGAS_gtlData var_arg_37653 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_37631.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1241)) ;
      var_dataArguments_37585.addAssign_operation (var_arg_37653  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1242)) ;
      callExtensionMethod_addMyValue ((const cPtr_gtlData *) var_arg_37653.ptr (), var_arguments_37541, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1243)) ;
      enumerator_37631.gotoNextObject () ;
    }
    GALGAS_function var_function_37783 = GALGAS_function::constructor_functionWithName (object->mAttribute_functionName.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1246))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1246)) ;
    GALGAS_typelist var_formalParameterList_37869 = var_function_37783.getter_formalParameterTypeList (SOURCE_FILE ("gtl_expressions.galgas", 1248)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_37869.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1249)).objectCompare (var_arguments_37541.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1249)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_arguments_37541.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1252)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_formalParameterList_37869.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1254)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mAttribute_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1250)), GALGAS_string ("this function is invoked with ").add_operation (var_arguments_37541.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1251)).getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1250)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1250)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1251)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1251)).add_operation (GALGAS_string (", but requires "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1252)).add_operation (var_formalParameterList_37869.getter_length (SOURCE_FILE ("gtl_expressions.galgas", 1253)).getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1253)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1253)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1253)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1253)), fixItArray6  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1250)) ;
      result_result.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      cEnumerator_typelist enumerator_38336 (var_formalParameterList_37869, kEnumeration_up) ;
      cEnumerator_gtlDataList enumerator_38363 (var_dataArguments_37585, kEnumeration_up) ;
      GALGAS_uint index_38304 ((uint32_t) 0) ;
      while (enumerator_38336.hasCurrentObject () && enumerator_38363.hasCurrentObject ()) {
        {
        routine_checkArgumentError (object->mAttribute_functionName, enumerator_38336.current_mValue (HERE), enumerator_38363.current_data (HERE), index_38304, inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1258)) ;
        }
        enumerator_38336.gotoNextObject () ;
        enumerator_38363.gotoNextObject () ;
        index_38304.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1257)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("gtl_expressions.galgas", 1260)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_object var_returnedValue_38519 = var_function_37783.getter_invoke (var_arguments_37541, object->mAttribute_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1262)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1262)) ;
        result_result = function_validateReturnValue (object->mAttribute_functionName, var_returnedValue_38519, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1263)) ;
      }else if (kBoolFalse == test_7) {
        result_result = GALGAS_gtlUnconstructed::constructor_new (object->mAttribute_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1266)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1267))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1265)) ;
      }
    }
  }else if (kBoolFalse == test_0) {
    GALGAS_gtlFunction var_function_38827 = callExtensionGetter_getFunction ((const cPtr_library *) constinArgument_lib.ptr (), object->mAttribute_functionName, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1272)) ;
    GALGAS_gtlDataList var_arguments_38888 = GALGAS_gtlDataList::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1273)) ;
    cEnumerator_gtlExpressionList enumerator_38933 (object->mAttribute_functionArguments, kEnumeration_up) ;
    while (enumerator_38933.hasCurrentObject ()) {
      var_arguments_38888.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_38933.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1275))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1275)) ;
      enumerator_38933.gotoNextObject () ;
    }
    result_result = callExtensionGetter_call ((const cPtr_gtlFunction *) var_function_38827.ptr (), object->mAttribute_functionName.getter_location (SOURCE_FILE ("gtl_expressions.galgas", 1277)), constinArgument_lib, var_arguments_38888, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1277)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFunctionCallExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlFunctionCallExpression.mSlotID,
                             extensionGetter_gtlFunctionCallExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFunctionCallExpression_eval (defineExtensionGetter_gtlFunctionCallExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlExistsExpression eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExistsExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlData & constinArgument_vars,
                                                                const GALGAS_library & constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExistsExpression * object = (const cPtr_gtlExistsExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsExpression) ;
  result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294)), extensionGetter_exists (object->mAttribute_variable, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1294))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1293)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExistsExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlExistsExpression.mSlotID,
                             extensionGetter_gtlExistsExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExistsExpression_eval (defineExtensionGetter_gtlExistsExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlExistsDefaultExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlExistsDefaultExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlData & constinArgument_vars,
                                                                       const GALGAS_library & constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlExistsDefaultExpression * object = (const cPtr_gtlExistsDefaultExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsDefaultExpression) ;
  const enumGalgasBool test_0 = extensionGetter_exists (object->mAttribute_variable, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1311)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = extensionGetter_get (object->mAttribute_variable, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1312)) ;
  }else if (kBoolFalse == test_0) {
    result_result = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_defaultValue.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1314)) ;
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExistsDefaultExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlExistsDefaultExpression.mSlotID,
                             extensionGetter_gtlExistsDefaultExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExistsDefaultExpression_eval (defineExtensionGetter_gtlExistsDefaultExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlTypeOfExpression eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlTypeOfExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlData & constinArgument_vars,
                                                                const GALGAS_library & constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlTypeOfExpression * object = (const cPtr_gtlTypeOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTypeOfExpression) ;
  GALGAS_gtlData var_variableValue_40637 = extensionGetter_get (object->mAttribute_variable, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1330)) ;
  result_result = GALGAS_gtlType::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1331)), var_variableValue_40637.getter_dynamicType (SOURCE_FILE ("gtl_expressions.galgas", 1331))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1331)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlTypeOfExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlTypeOfExpression.mSlotID,
                             extensionGetter_gtlTypeOfExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlTypeOfExpression_eval (defineExtensionGetter_gtlTypeOfExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlMapOfStructExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMapOfStructExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlData & constinArgument_vars,
                                                                     const GALGAS_library & constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMapOfStructExpression * object = (const cPtr_gtlMapOfStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfStructExpression) ;
  GALGAS_gtlData var_expressionValue_41189 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_expression.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1346)) ;
  if (var_expressionValue_41189.isValid ()) {
    if (var_expressionValue_41189.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
      GALGAS_gtlStruct cast_41286_expressionValueStruct ((cPtr_gtlStruct *) var_expressionValue_41189.ptr ()) ;
      result_result = GALGAS_gtlMap::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1351)), cast_41286_expressionValueStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1352))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1349)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("struct expected"), fixItArray0  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1355)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMapOfStructExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMapOfStructExpression.mSlotID,
                             extensionGetter_gtlMapOfStructExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMapOfStructExpression_eval (defineExtensionGetter_gtlMapOfStructExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlMapOfListExpression eval'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlMapOfListExpression_eval (const cPtr_gtlExpression * inObject,
                                                                   const GALGAS_gtlData & constinArgument_vars,
                                                                   const GALGAS_library & constinArgument_lib,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlMapOfListExpression * object = (const cPtr_gtlMapOfListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfListExpression) ;
  GALGAS_gtlData var_expressionValue_41895 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_expression.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1371)) ;
  if (var_expressionValue_41895.isValid ()) {
    if (var_expressionValue_41895.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlList) {
      GALGAS_gtlList cast_41988_expressionValueList ((cPtr_gtlList *) var_expressionValue_41895.ptr ()) ;
      GALGAS_gtlVarMap var_resultMap_42014 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1374)) ;
      cEnumerator_list enumerator_42072 (cast_41988_expressionValueList.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1375)), kEnumeration_up) ;
      GALGAS_uint index_42034 ((uint32_t) 0) ;
      while (enumerator_42072.hasCurrentObject ()) {
        if (enumerator_42072.current_value (HERE).isValid ()) {
          if (enumerator_42072.current_value (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlStruct) {
            GALGAS_gtlStruct cast_42135_itemStruct ((cPtr_gtlStruct *) enumerator_42072.current_value (HERE).ptr ()) ;
            const enumGalgasBool test_0 = cast_42135_itemStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1378)).getter_hasKey (object->mAttribute_key.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1378)) COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1378)).boolEnum () ;
            if (kBoolTrue == test_0) {
              GALGAS_gtlData var_keyValue_42252 ;
              cast_42135_itemStruct.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1379)).method_get (object->mAttribute_key, var_keyValue_42252, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1379)) ;
              {
              var_resultMap_42014.setter_put (callExtensionGetter_lstring ((const cPtr_gtlData *) var_keyValue_42252.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1381)), enumerator_42072.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1380)) ;
              }
            }else if (kBoolFalse == test_0) {
              TC_Array <C_FixItDescription> fixItArray1 ;
              inCompiler->emitSemanticError (var_expressionValue_41895.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1385)), GALGAS_string ("item at index ").add_operation (index_42034.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1385)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1385)).add_operation (GALGAS_string (" does not have field named "), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1385)).add_operation (object->mAttribute_key.getter_string (SOURCE_FILE ("gtl_expressions.galgas", 1386)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1386)), fixItArray1  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1385)) ;
            }
          }else{
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_expressionValue_41895.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1389)), GALGAS_string ("list of struct expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1389)) ;
          }
        }
        enumerator_42072.gotoNextObject () ;
        index_42034.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1375)) ;
      }
      result_result = GALGAS_gtlMap::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1392)), var_resultMap_42014  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1392)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_expressionValue_41895.getter_where (SOURCE_FILE ("gtl_expressions.galgas", 1394)), GALGAS_string ("list expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1394)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMapOfListExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlMapOfListExpression.mSlotID,
                             extensionGetter_gtlMapOfListExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMapOfListExpression_eval (defineExtensionGetter_gtlMapOfListExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlListOfExpression eval'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlListOfExpression_eval (const cPtr_gtlExpression * inObject,
                                                                const GALGAS_gtlData & constinArgument_vars,
                                                                const GALGAS_library & constinArgument_lib,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlListOfExpression * object = (const cPtr_gtlListOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListOfExpression) ;
  GALGAS_gtlData var_expressionValue_43140 = callExtensionGetter_eval ((const cPtr_gtlExpression *) object->mAttribute_expression.ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1410)) ;
  if (var_expressionValue_43140.isValid ()) {
    if (var_expressionValue_43140.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlMap) {
      GALGAS_gtlMap cast_43231_expressionValueMap ((cPtr_gtlMap *) var_expressionValue_43140.ptr ()) ;
      GALGAS_list var_resultList_43253 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1413)) ;
      cEnumerator_gtlVarMap enumerator_43315 (cast_43231_expressionValueMap.getter_value (SOURCE_FILE ("gtl_expressions.galgas", 1414)), kEnumeration_up) ;
      while (enumerator_43315.hasCurrentObject ()) {
        var_resultList_43253.addAssign_operation (enumerator_43315.current_value (HERE)  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1415)) ;
        enumerator_43315.gotoNextObject () ;
      }
      result_result = GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1417)), var_resultList_43253  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1417)) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray0 ;
      inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("map expected"), fixItArray0  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1419)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlListOfExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlListOfExpression.mSlotID,
                             extensionGetter_gtlListOfExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlListOfExpression_eval (defineExtensionGetter_gtlListOfExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlLiteralStructExpression eval'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLiteralStructExpression_eval (const cPtr_gtlExpression * inObject,
                                                                       const GALGAS_gtlData & constinArgument_vars,
                                                                       const GALGAS_library & constinArgument_lib,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralStructExpression * object = (const cPtr_gtlLiteralStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralStructExpression) ;
  GALGAS_gtlVarMap var_resultStruct_43888 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1435)) ;
  cEnumerator_gtlExpressionMap enumerator_43926 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_43926.hasCurrentObject ()) {
    {
    var_resultStruct_43888.setter_put (enumerator_43926.current_lkey (HERE), callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_43926.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1437)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1437)) ;
    }
    enumerator_43926.gotoNextObject () ;
  }
  result_result = GALGAS_gtlStruct::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1439)), var_resultStruct_43888  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1439)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralStructExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralStructExpression.mSlotID,
                             extensionGetter_gtlLiteralStructExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralStructExpression_eval (defineExtensionGetter_gtlLiteralStructExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlLiteralMapExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLiteralMapExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralMapExpression * object = (const cPtr_gtlLiteralMapExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralMapExpression) ;
  GALGAS_gtlVarMap var_resultStruct_44463 = GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_expressions.galgas", 1454)) ;
  cEnumerator_gtlExpressionMap enumerator_44501 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_44501.hasCurrentObject ()) {
    {
    var_resultStruct_44463.setter_put (enumerator_44501.current_lkey (HERE), callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_44501.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1456)), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1456)) ;
    }
    enumerator_44501.gotoNextObject () ;
  }
  result_result = GALGAS_gtlMap::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1458)), var_resultStruct_44463  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1458)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralMapExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralMapExpression.mSlotID,
                             extensionGetter_gtlLiteralMapExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralMapExpression_eval (defineExtensionGetter_gtlLiteralMapExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlLiteralListExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLiteralListExpression_eval (const cPtr_gtlExpression * inObject,
                                                                     const GALGAS_gtlData & constinArgument_vars,
                                                                     const GALGAS_library & constinArgument_lib,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralListExpression * object = (const cPtr_gtlLiteralListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralListExpression) ;
  GALGAS_list var_resultList_45032 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_expressions.galgas", 1473)) ;
  cEnumerator_gtlExpressionList enumerator_45067 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_45067.hasCurrentObject ()) {
    var_resultList_45032.addAssign_operation (callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_45067.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1475))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1475)) ;
    enumerator_45067.gotoNextObject () ;
  }
  result_result = GALGAS_gtlList::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1477)), var_resultList_45032  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1477)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralListExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralListExpression.mSlotID,
                             extensionGetter_gtlLiteralListExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralListExpression_eval (defineExtensionGetter_gtlLiteralListExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlLiteralSetExpression eval'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlLiteralSetExpression_eval (const cPtr_gtlExpression * inObject,
                                                                    const GALGAS_gtlData & constinArgument_vars,
                                                                    const GALGAS_library & constinArgument_lib,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlLiteralSetExpression * object = (const cPtr_gtlLiteralSetExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralSetExpression) ;
  GALGAS_stringset var_resultSet_45586 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("gtl_expressions.galgas", 1492)) ;
  cEnumerator_gtlExpressionList enumerator_45620 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_45620.hasCurrentObject ()) {
    var_resultSet_45586.addAssign_operation (callExtensionGetter_string ((const cPtr_gtlData *) callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_45620.current_expression (HERE).ptr (), constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1494)).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1494))  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1494)) ;
    enumerator_45620.gotoNextObject () ;
  }
  result_result = GALGAS_gtlSet::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1496)), var_resultSet_45586  COMMA_SOURCE_FILE ("gtl_expressions.galgas", 1496)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralSetExpression_eval (void) {
  enterExtensionGetter_eval (kTypeDescriptor_GALGAS_gtlLiteralSetExpression.mSlotID,
                             extensionGetter_gtlLiteralSetExpression_eval) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralSetExpression_eval (defineExtensionGetter_gtlLiteralSetExpression_eval, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlVarItemField stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemField_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                           const GALGAS_string & constinArgument_concatString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = (const cPtr_gtlVarItemField *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = constinArgument_concatString.add_operation (object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 106)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                             extensionGetter_gtlVarItemField_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_stringRepresentation (defineExtensionGetter_gtlVarItemField_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlVarItemSubCollection stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemSubCollection_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                                   const GALGAS_string & /* constinArgument_concatString */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemSubCollection * object = (const cPtr_gtlVarItemSubCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemSubCollection) ;
  result_result = GALGAS_string ("[").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 114)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 114)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemSubCollection_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemSubCollection.mSlotID,
                                             extensionGetter_gtlVarItemSubCollection_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemSubCollection_stringRepresentation (defineExtensionGetter_gtlVarItemSubCollection_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlVarItemCollection stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarItemCollection_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                                                const GALGAS_string & constinArgument_concatString,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarItemCollection * object = (const cPtr_gtlVarItemCollection *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemCollection) ;
  result_result = constinArgument_concatString.add_operation (object->mAttribute_field.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)).add_operation (GALGAS_char (TO_UNICODE (91)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_key.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)).add_operation (GALGAS_char (TO_UNICODE (93)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 122)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemCollection_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarItemCollection.mSlotID,
                                             extensionGetter_gtlVarItemCollection_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemCollection_stringRepresentation (defineExtensionGetter_gtlVarItemCollection_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlAddExpression stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlAddExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlAddExpression * object = (const cPtr_gtlAddExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAddExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 133)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 133)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 133)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlAddExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlAddExpression.mSlotID,
                                             extensionGetter_gtlAddExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlAddExpression_stringRepresentation (defineExtensionGetter_gtlAddExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlAndExpression stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlAndExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlAndExpression * object = (const cPtr_gtlAndExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlAndExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlAndExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlAndExpression.mSlotID,
                                             extensionGetter_gtlAndExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlAndExpression_stringRepresentation (defineExtensionGetter_gtlAndExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlDivideExpression stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlDivideExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlDivideExpression * object = (const cPtr_gtlDivideExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDivideExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlDivideExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlDivideExpression.mSlotID,
                                             extensionGetter_gtlDivideExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlDivideExpression_stringRepresentation (defineExtensionGetter_gtlDivideExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlEqualExpression stringRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEqualExpression * object = (const cPtr_gtlEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 154)).add_operation (GALGAS_string (" == "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 154)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 154)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlEqualExpression.mSlotID,
                                             extensionGetter_gtlEqualExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEqualExpression_stringRepresentation (defineExtensionGetter_gtlEqualExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@gtlGreaterOrEqualExpression stringRepresentation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlGreaterOrEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGreaterOrEqualExpression * object = (const cPtr_gtlGreaterOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterOrEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 161)).add_operation (GALGAS_string (" >= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 161)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 161)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGreaterOrEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGreaterOrEqualExpression.mSlotID,
                                             extensionGetter_gtlGreaterOrEqualExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGreaterOrEqualExpression_stringRepresentation (defineExtensionGetter_gtlGreaterOrEqualExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@gtlGreaterThanExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlGreaterThanExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGreaterThanExpression * object = (const cPtr_gtlGreaterThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGreaterThanExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGreaterThanExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGreaterThanExpression.mSlotID,
                                             extensionGetter_gtlGreaterThanExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGreaterThanExpression_stringRepresentation (defineExtensionGetter_gtlGreaterThanExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@gtlLowerOrEqualExpression stringRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLowerOrEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLowerOrEqualExpression * object = (const cPtr_gtlLowerOrEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerOrEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)).add_operation (GALGAS_string (" <= "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLowerOrEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLowerOrEqualExpression.mSlotID,
                                             extensionGetter_gtlLowerOrEqualExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLowerOrEqualExpression_stringRepresentation (defineExtensionGetter_gtlLowerOrEqualExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlLowerThanExpression stringRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLowerThanExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLowerThanExpression * object = (const cPtr_gtlLowerThanExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLowerThanExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)).add_operation (GALGAS_string (" < "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 182)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLowerThanExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLowerThanExpression.mSlotID,
                                             extensionGetter_gtlLowerThanExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLowerThanExpression_stringRepresentation (defineExtensionGetter_gtlLowerThanExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlModulusExpression stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlModulusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlModulusExpression * object = (const cPtr_gtlModulusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlModulusExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 189)).add_operation (GALGAS_string (" mod "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 189)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 189)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlModulusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlModulusExpression.mSlotID,
                                             extensionGetter_gtlModulusExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlModulusExpression_stringRepresentation (defineExtensionGetter_gtlModulusExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlMultiplyExpression stringRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMultiplyExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMultiplyExpression * object = (const cPtr_gtlMultiplyExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMultiplyExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 196)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 196)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 196)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMultiplyExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMultiplyExpression.mSlotID,
                                             extensionGetter_gtlMultiplyExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMultiplyExpression_stringRepresentation (defineExtensionGetter_gtlMultiplyExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@gtlNotEqualExpression stringRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlNotEqualExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlNotEqualExpression * object = (const cPtr_gtlNotEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotEqualExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)).add_operation (GALGAS_string (" != "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlNotEqualExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlNotEqualExpression.mSlotID,
                                             extensionGetter_gtlNotEqualExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlNotEqualExpression_stringRepresentation (defineExtensionGetter_gtlNotEqualExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension getter '@gtlOrExpression stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlOrExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlOrExpression * object = (const cPtr_gtlOrExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlOrExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 210)).add_operation (GALGAS_string (" | "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 210)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 210)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlOrExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlOrExpression.mSlotID,
                                             extensionGetter_gtlOrExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlOrExpression_stringRepresentation (defineExtensionGetter_gtlOrExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlShiftLeftExpression stringRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlShiftLeftExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlShiftLeftExpression * object = (const cPtr_gtlShiftLeftExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftLeftExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 217)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 217)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 217)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlShiftLeftExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlShiftLeftExpression.mSlotID,
                                             extensionGetter_gtlShiftLeftExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlShiftLeftExpression_stringRepresentation (defineExtensionGetter_gtlShiftLeftExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlShiftRightExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlShiftRightExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlShiftRightExpression * object = (const cPtr_gtlShiftRightExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlShiftRightExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)).add_operation (GALGAS_string (" >> "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlShiftRightExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlShiftRightExpression.mSlotID,
                                             extensionGetter_gtlShiftRightExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlShiftRightExpression_stringRepresentation (defineExtensionGetter_gtlShiftRightExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlSubstractExpression stringRepresentation'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlSubstractExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSubstractExpression * object = (const cPtr_gtlSubstractExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSubstractExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)).add_operation (GALGAS_string (" - "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSubstractExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlSubstractExpression.mSlotID,
                                             extensionGetter_gtlSubstractExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSubstractExpression_stringRepresentation (defineExtensionGetter_gtlSubstractExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlXorExpression stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlXorExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlXorExpression * object = (const cPtr_gtlXorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlXorExpression) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_lSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 238)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 238)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rSon.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 238)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlXorExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlXorExpression.mSlotID,
                                             extensionGetter_gtlXorExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlXorExpression_stringRepresentation (defineExtensionGetter_gtlXorExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlExistsExpression stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlExistsExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlExistsExpression * object = (const cPtr_gtlExistsExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlExistsExpression) ;
  result_result = GALGAS_string ("exists ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_variable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 245)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExistsExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlExistsExpression.mSlotID,
                                             extensionGetter_gtlExistsExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExistsExpression_stringRepresentation (defineExtensionGetter_gtlExistsExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@gtlFunctionCallExpression stringRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFunctionCallExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFunctionCallExpression * object = (const cPtr_gtlFunctionCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFunctionCallExpression) ;
  result_result = object->mAttribute_functionName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 252)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 252)).add_operation (extensionGetter_stringRepresentation (object->mAttribute_functionArguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 252)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 252)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFunctionCallExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlFunctionCallExpression.mSlotID,
                                             extensionGetter_gtlFunctionCallExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFunctionCallExpression_stringRepresentation (defineExtensionGetter_gtlFunctionCallExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlGetterCallExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlGetterCallExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlGetterCallExpression * object = (const cPtr_gtlGetterCallExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlGetterCallExpression) ;
  result_result = GALGAS_string ("[").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_target.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)).add_operation (object->mAttribute_getterName.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_arguments.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 260)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_result = result_result.add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 261)).add_operation (extensionGetter_stringRepresentation (object->mAttribute_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 261)) ;
  }
  result_result = result_result.add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 263)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetterCallExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlGetterCallExpression.mSlotID,
                                             extensionGetter_gtlGetterCallExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetterCallExpression_stringRepresentation (defineExtensionGetter_gtlGetterCallExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlListOfExpression stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlListOfExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlListOfExpression * object = (const cPtr_gtlListOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlListOfExpression) ;
  result_result = GALGAS_string ("listof ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_expression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 270)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlListOfExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlListOfExpression.mSlotID,
                                             extensionGetter_gtlListOfExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlListOfExpression_stringRepresentation (defineExtensionGetter_gtlListOfExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@gtlLiteralListExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLiteralListExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralListExpression * object = (const cPtr_gtlLiteralListExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralListExpression) ;
  result_result = GALGAS_string ("@( ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralListExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralListExpression.mSlotID,
                                             extensionGetter_gtlLiteralListExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralListExpression_stringRepresentation (defineExtensionGetter_gtlLiteralListExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlLiteralMapExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLiteralMapExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralMapExpression * object = (const cPtr_gtlLiteralMapExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralMapExpression) ;
  result_result = GALGAS_string ("@[ ").add_operation (extensionGetter_mapRepresentation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284)).add_operation (GALGAS_string (" ]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralMapExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralMapExpression.mSlotID,
                                             extensionGetter_gtlLiteralMapExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralMapExpression_stringRepresentation (defineExtensionGetter_gtlLiteralMapExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@gtlLiteralSetExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLiteralSetExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralSetExpression * object = (const cPtr_gtlLiteralSetExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralSetExpression) ;
  result_result = GALGAS_string ("@! ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 291)).add_operation (GALGAS_string (" !"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 291)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralSetExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralSetExpression.mSlotID,
                                             extensionGetter_gtlLiteralSetExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralSetExpression_stringRepresentation (defineExtensionGetter_gtlLiteralSetExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@gtlLiteralStructExpression stringRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlLiteralStructExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlLiteralStructExpression * object = (const cPtr_gtlLiteralStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLiteralStructExpression) ;
  result_result = GALGAS_string ("@{ ").add_operation (extensionGetter_structRepresentation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 298)).add_operation (GALGAS_string (" }"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 298)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlLiteralStructExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlLiteralStructExpression.mSlotID,
                                             extensionGetter_gtlLiteralStructExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlLiteralStructExpression_stringRepresentation (defineExtensionGetter_gtlLiteralStructExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@gtlMapOfStructExpression stringRepresentation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMapOfStructExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMapOfStructExpression * object = (const cPtr_gtlMapOfStructExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMapOfStructExpression) ;
  result_result = GALGAS_string ("mapof ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_expression.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 305)).add_operation (GALGAS_string (" end"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 305)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMapOfStructExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMapOfStructExpression.mSlotID,
                                             extensionGetter_gtlMapOfStructExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMapOfStructExpression_stringRepresentation (defineExtensionGetter_gtlMapOfStructExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@gtlTerminal stringRepresentation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlTerminal_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlTerminal * object = (const cPtr_gtlTerminal *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTerminal) ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) object->mAttribute_value.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 312)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlTerminal_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlTerminal.mSlotID,
                                             extensionGetter_gtlTerminal_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlTerminal_stringRepresentation (defineExtensionGetter_gtlTerminal_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlTypeOfExpression stringRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlTypeOfExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlTypeOfExpression * object = (const cPtr_gtlTypeOfExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTypeOfExpression) ;
  result_result = GALGAS_string ("typeof ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_variable, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 319)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlTypeOfExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlTypeOfExpression.mSlotID,
                                             extensionGetter_gtlTypeOfExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlTypeOfExpression_stringRepresentation (defineExtensionGetter_gtlTypeOfExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@gtlMinusExpression stringRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMinusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMinusExpression * object = (const cPtr_gtlMinusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMinusExpression) ;
  result_result = GALGAS_string ("-").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMinusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMinusExpression.mSlotID,
                                             extensionGetter_gtlMinusExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMinusExpression_stringRepresentation (defineExtensionGetter_gtlMinusExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlNotExpression stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlNotExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlNotExpression * object = (const cPtr_gtlNotExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlNotExpression) ;
  result_result = GALGAS_string ("not ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 333)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlNotExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlNotExpression.mSlotID,
                                             extensionGetter_gtlNotExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlNotExpression_stringRepresentation (defineExtensionGetter_gtlNotExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@gtlParenthesizedExpression stringRepresentation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlParenthesizedExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlParenthesizedExpression * object = (const cPtr_gtlParenthesizedExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlParenthesizedExpression) ;
  result_result = GALGAS_string ("(").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlParenthesizedExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlParenthesizedExpression.mSlotID,
                                             extensionGetter_gtlParenthesizedExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlParenthesizedExpression_stringRepresentation (defineExtensionGetter_gtlParenthesizedExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlPlusExpression stringRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlPlusExpression_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlPlusExpression * object = (const cPtr_gtlPlusExpression *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPlusExpression) ;
  result_result = GALGAS_string ("+").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_son.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 347)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlPlusExpression_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlPlusExpression.mSlotID,
                                             extensionGetter_gtlPlusExpression_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlPlusExpression_stringRepresentation (defineExtensionGetter_gtlPlusExpression_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlVarRef stringRepresentation'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlVarRef_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlVarRef * object = (const cPtr_gtlVarRef *) inObject ;
  macroValidSharedObject (object, cPtr_gtlVarRef) ;
  result_result = extensionGetter_stringRepresentation (object->mAttribute_variableName, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 354)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarRef_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlVarRef.mSlotID,
                                             extensionGetter_gtlVarRef_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarRef_stringRepresentation (defineExtensionGetter_gtlVarRef_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlBool stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlBool_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlBool * object = (const cPtr_gtlBool *) inObject ;
  macroValidSharedObject (object, cPtr_gtlBool) ;
  const GALGAS_gtlBool temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlBool *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 365)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlBool_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlBool.mSlotID,
                                             extensionGetter_gtlBool_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlBool_stringRepresentation (defineExtensionGetter_gtlBool_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlChar stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlChar_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const GALGAS_gtlChar temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlChar *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 372)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                             extensionGetter_gtlChar_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_stringRepresentation (defineExtensionGetter_gtlChar_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlEnum stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEnum_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const GALGAS_gtlEnum temp_0 = object ;
  result_result = GALGAS_string ("$").add_operation (callExtensionGetter_string ((const cPtr_gtlEnum *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 379)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                             extensionGetter_gtlEnum_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_stringRepresentation (defineExtensionGetter_gtlEnum_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlFloat stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFloat_stringRepresentation (const cPtr_gtlData * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const GALGAS_gtlFloat temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlFloat *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 386)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                             extensionGetter_gtlFloat_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_stringRepresentation (defineExtensionGetter_gtlFloat_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlInt stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInt_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const GALGAS_gtlInt temp_0 = object ;
  result_result = callExtensionGetter_string ((const cPtr_gtlInt *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 393)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                             extensionGetter_gtlInt_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_stringRepresentation (defineExtensionGetter_gtlInt_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlString stringRepresentation'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlString_stringRepresentation (const cPtr_gtlData * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const GALGAS_gtlString temp_0 = object ;
  GALGAS_string var_literalString_12186 = callExtensionGetter_string ((const cPtr_gtlString *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 400)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 401)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\t"), GALGAS_string ("\\t"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 402)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\f"), GALGAS_string ("\\f"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 403)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\r"), GALGAS_string ("\\r"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 404)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\v"), GALGAS_string ("\\v"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 405)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\\"), GALGAS_string ("\\\\"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 406)) ;
  var_literalString_12186 = var_literalString_12186.getter_stringByReplacingStringByString (GALGAS_string ("\""), GALGAS_string ("\\\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 407)) ;
  result_result = GALGAS_string ("\"").add_operation (var_literalString_12186, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 408)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 408)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlString_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlString.mSlotID,
                                             extensionGetter_gtlString_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlString_stringRepresentation (defineExtensionGetter_gtlString_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@gtlUnconstructed stringRepresentation'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlUnconstructed_stringRepresentation (const cPtr_gtlData * /* inObject */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("*UNCONSTRUCTED*") ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                             extensionGetter_gtlUnconstructed_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_stringRepresentation (defineExtensionGetter_gtlUnconstructed_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlType stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlType_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const GALGAS_gtlType temp_0 = object ;
  result_result = GALGAS_string ("@").add_operation (callExtensionGetter_string ((const cPtr_gtlType *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 422)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                             extensionGetter_gtlType_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_stringRepresentation (defineExtensionGetter_gtlType_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlList stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlList_stringRepresentation (const cPtr_gtlData * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlList * object = (const cPtr_gtlList *) inObject ;
  macroValidSharedObject (object, cPtr_gtlList) ;
  result_result = GALGAS_string ("@( ") ;
  cEnumerator_list enumerator_13367 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_13367.hasCurrentObject ()) {
    result_result = result_result.add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_13367.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 431)) ;
    if (enumerator_13367.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 433)) ;
    }
    enumerator_13367.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 435)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlList_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlList.mSlotID,
                                             extensionGetter_gtlList_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlList_stringRepresentation (defineExtensionGetter_gtlList_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlMap stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlMap_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlMap * object = (const cPtr_gtlMap *) inObject ;
  macroValidSharedObject (object, cPtr_gtlMap) ;
  result_result = GALGAS_string ("@[ ") ;
  cEnumerator_gtlVarMap enumerator_13680 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_13680.hasCurrentObject ()) {
    result_result = result_result.add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 444)).add_operation (enumerator_13680.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 444)).add_operation (GALGAS_string ("\": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 444)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_13680.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 444)) ;
    if (enumerator_13680.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 446)) ;
    }
    enumerator_13680.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" ]"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 448)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlMap_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlMap.mSlotID,
                                             extensionGetter_gtlMap_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlMap_stringRepresentation (defineExtensionGetter_gtlMap_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlStruct stringRepresentation'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlStruct_stringRepresentation (const cPtr_gtlData * inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlStruct * object = (const cPtr_gtlStruct *) inObject ;
  macroValidSharedObject (object, cPtr_gtlStruct) ;
  result_result = GALGAS_string ("@{ ") ;
  cEnumerator_gtlVarMap enumerator_14020 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_14020.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_14020.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 457)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 457)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlData *) enumerator_14020.current_value (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 457)) ;
    if (enumerator_14020.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 459)) ;
    }
    enumerator_14020.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" }"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 461)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlStruct_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlStruct.mSlotID,
                                             extensionGetter_gtlStruct_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlStruct_stringRepresentation (defineExtensionGetter_gtlStruct_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension getter '@gtlSet stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlSet_stringRepresentation (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlSet * object = (const cPtr_gtlSet *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSet) ;
  result_result = GALGAS_string ("@! ") ;
  cEnumerator_stringset enumerator_14344 (object->mAttribute_value, kEnumeration_up) ;
  while (enumerator_14344.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_14344.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 470)) ;
    if (enumerator_14344.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 472)) ;
    }
    enumerator_14344.gotoNextObject () ;
  }
  result_result = result_result.add_operation (GALGAS_string (" !"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 474)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSet_stringRepresentation (void) {
  enterExtensionGetter_stringRepresentation (kTypeDescriptor_GALGAS_gtlSet.mSlotID,
                                             extensionGetter_gtlSet_stringRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSet_stringRepresentation (defineExtensionGetter_gtlSet_stringRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlLetUnconstructedInstruction display'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetUnconstructedInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetUnconstructedInstruction * object = (const cPtr_gtlLetUnconstructedInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetUnconstructedInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 572))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 572)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetUnconstructedInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction.mSlotID,
                                extensionMethod_gtlLetUnconstructedInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetUnconstructedInstruction_display (defineExtensionMethod_gtlLetUnconstructedInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlLetInstruction display'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLetInstruction_display (const cPtr_gtlInstruction * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLetInstruction * object = (const cPtr_gtlLetInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLetInstruction) ;
  inCompiler->printMessage (GALGAS_string ("let ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_lValue, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 578)).add_operation (GALGAS_string (" := "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 579)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 580))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 578)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLetInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLetInstruction.mSlotID,
                                extensionMethod_gtlLetInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLetInstruction_display (defineExtensionMethod_gtlLetInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlLoopStatementInstruction display'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlLoopStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlLoopStatementInstruction * object = (const cPtr_gtlLoopStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlLoopStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_upDown.objectCompare (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 591)).getter_sint_36__34_ (SOURCE_FILE ("gtl_debugger.galgas", 591)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string (" down") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("loop ").add_operation (object->mAttribute_identifier.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 587)).add_operation (GALGAS_string (" from "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 588)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_start.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 589)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 590)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 591)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_stop.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 592)).add_operation (GALGAS_string (" step "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 593)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_step.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 595)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 594)).add_operation (GALGAS_string (" do"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 595))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 587)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlLoopStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlLoopStatementInstruction.mSlotID,
                                extensionMethod_gtlLoopStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlLoopStatementInstruction_display (defineExtensionMethod_gtlLoopStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlWarningStatementInstruction display'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlWarningStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlWarningStatementInstruction * object = (const cPtr_gtlWarningStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlWarningStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_hereInstead.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("here") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = extensionGetter_stringRepresentation (object->mAttribute_identifier, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 603)) ;
  }
  inCompiler->printMessage (GALGAS_string ("warning ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 602)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 603)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_warningMessage.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 604))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 602)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlWarningStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlWarningStatementInstruction.mSlotID,
                                extensionMethod_gtlWarningStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlWarningStatementInstruction_display (defineExtensionMethod_gtlWarningStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@gtlDisplayStatementInstruction display'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlDisplayStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlDisplayStatementInstruction * object = (const cPtr_gtlDisplayStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlDisplayStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("display ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 611))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 611)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlDisplayStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlDisplayStatementInstruction.mSlotID,
                                extensionMethod_gtlDisplayStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlDisplayStatementInstruction_display (defineExtensionMethod_gtlDisplayStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlPrintStatementInstruction display'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlPrintStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlPrintStatementInstruction * object = (const cPtr_gtlPrintStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlPrintStatementInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_carriageReturn.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("ln ") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string (" ") ;
  }
  inCompiler->printMessage (GALGAS_string ("print").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 617)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_messageToPrint.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 618))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 617)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlPrintStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlPrintStatementInstruction.mSlotID,
                                extensionMethod_gtlPrintStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlPrintStatementInstruction_display (defineExtensionMethod_gtlPrintStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlTemplateStringInstruction display'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateStringInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateStringInstruction * object = (const cPtr_gtlTemplateStringInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateStringInstruction) ;
  inCompiler->printMessage (GALGAS_string ("%").add_operation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 625)).add_operation (GALGAS_string ("%"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 625))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 625)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateStringInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlTemplateStringInstruction.mSlotID,
                                extensionMethod_gtlTemplateStringInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateStringInstruction_display (defineExtensionMethod_gtlTemplateStringInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlInputStatementInstruction display'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInputStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInputStatementInstruction * object = (const cPtr_gtlInputStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInputStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("input ( ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_formalArguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 631)).add_operation (GALGAS_string (" )"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 631))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 631)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInputStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlInputStatementInstruction.mSlotID,
                                extensionMethod_gtlInputStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInputStatementInstruction_display (defineExtensionMethod_gtlInputStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@gtlSortStatementInstruction display'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSortStatementInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSortStatementInstruction * object = (const cPtr_gtlSortStatementInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementInstruction) ;
  inCompiler->printMessage (GALGAS_string ("sort ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 637)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 638)).add_operation (extensionGetter_stringRepresentation (object->mAttribute_order, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 639))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 637)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSortStatementInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSortStatementInstruction.mSlotID,
                                extensionMethod_gtlSortStatementInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSortStatementInstruction_display (defineExtensionMethod_gtlSortStatementInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@gtlSortStatementStructInstruction display'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSortStatementStructInstruction_display (const cPtr_gtlInstruction * inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSortStatementStructInstruction * object = (const cPtr_gtlSortStatementStructInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlSortStatementStructInstruction) ;
  inCompiler->printMessage (GALGAS_string ("sort ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_variablePath, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 646)).add_operation (GALGAS_string (" by "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 647)).add_operation (extensionGetter_stringRepresentation (object->mAttribute_sortingKey, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 648))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 646)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSortStatementStructInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlSortStatementStructInstruction.mSlotID,
                                extensionMethod_gtlSortStatementStructInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSortStatementStructInstruction_display (defineExtensionMethod_gtlSortStatementStructInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@gtlTemplateInstruction display'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplateInstruction_display (const cPtr_gtlInstruction * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplateInstruction * object = (const cPtr_gtlTemplateInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplateInstruction) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_isGlobal.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("( ").add_operation (extensionGetter_stringRepresentation (object->mAttribute_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 656)).add_operation (GALGAS_string (" ) "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 656)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_ifExists.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("if exists ") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_prefix.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 659)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string (" ") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string (" in ").add_operation (object->mAttribute_prefix.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 659)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 659)) ;
  }
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = object->mAttribute_ifExists.operator_and (GALGAS_bool (kIsStrictSup, object->mAttribute_instructionsIfNotFound.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 660)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 660)).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("or ...") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("template ").add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 656)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_fileName.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 657)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 658)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 659))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplateInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlTemplateInstruction.mSlotID,
                                extensionMethod_gtlTemplateInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplateInstruction_display (defineExtensionMethod_gtlTemplateInstruction_display, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@gtlEmitInstruction display'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlEmitInstruction_display (const cPtr_gtlInstruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEmitInstruction * object = (const cPtr_gtlEmitInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEmitInstruction) ;
  inCompiler->printMessage (GALGAS_string ("! ").add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) object->mAttribute_rValue.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 666))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 666)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlEmitInstruction_display (void) {
  enterExtensionMethod_display (kTypeDescriptor_GALGAS_gtlEmitInstruction.mSlotID,
                                extensionMethod_gtlEmitInstruction_display) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlEmitInstruction_display (defineExtensionMethod_gtlEmitInstruction_display, NULL) ;

