#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@gtlData setMapItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setMapItem> gExtensionModifierTable_gtlData_setMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setMapItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_setMapItem inModifier) {
  gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setMapItem (cPtr_gtlData * inObject,
                                     const GALGAS_lstring constin_name,
                                     const GALGAS_gtlData constin_data,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setMapItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_setMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_setMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setMapItem (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                const GALGAS_gtlData /* constinArgument_data */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 308)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 308)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_setMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setMapItem (void) {
  gExtensionModifierTable_gtlData_setMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setMapItem (defineExtensionSetter_gtlData_setMapItem,
                                               freeExtensionModifier_gtlData_setMapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension setter '@gtlData deleteMapItem'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteMapItem> gExtensionModifierTable_gtlData_deleteMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteMapItem (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_deleteMapItem inModifier) {
  gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteMapItem (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_name,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteMapItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_deleteMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_deleteMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteMapItem (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 314)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 314)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                      extensionSetter_gtlData_deleteMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteMapItem (void) {
  gExtensionModifierTable_gtlData_deleteMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteMapItem (defineExtensionSetter_gtlData_deleteMapItem,
                                                  freeExtensionModifier_gtlData_deleteMapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlData itemAtIndex'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_itemAtIndex> gExtensionMethodTable_gtlData_itemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_itemAtIndex (const int32_t inClassIndex,
                                       extensionMethodSignature_gtlData_itemAtIndex inMethod) {
  gExtensionMethodTable_gtlData_itemAtIndex.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_itemAtIndex (const cPtr_gtlData * inObject,
                                      GALGAS_gtlData & out_result,
                                      const GALGAS_gtlInt constin_index,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_itemAtIndex f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_itemAtIndex.count ()) {
      f = gExtensionMethodTable_gtlData_itemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_itemAtIndex.count ()) {
           f = gExtensionMethodTable_gtlData_itemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_itemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, out_result, constin_index, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_itemAtIndex (const cPtr_gtlData * inObject,
                                                 GALGAS_gtlData & outArgument_result,
                                                 const GALGAS_gtlInt constinArgument_index,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 321)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_itemAtIndex (void) {
  enterExtensionMethod_itemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionMethod_gtlData_itemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_itemAtIndex (void) {
  gExtensionMethodTable_gtlData_itemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_itemAtIndex (defineExtensionMethod_gtlData_itemAtIndex,
                                                freeExtensionMethod_gtlData_itemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlData hasItemAtIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasItemAtIndex> gExtensionGetterTable_gtlData_hasItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasItemAtIndex (const int32_t inClassIndex,
                                          enterExtensionGetter_gtlData_hasItemAtIndex inGetter) {
  gExtensionGetterTable_gtlData_hasItemAtIndex.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                const GALGAS_gtlInt & in_index,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasItemAtIndex f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasItemAtIndex.count ()) {
      f = gExtensionGetterTable_gtlData_hasItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasItemAtIndex.count ()) {
           f = gExtensionGetterTable_gtlData_hasItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_index, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasItemAtIndex (const cPtr_gtlData * /* inObject */,
                                                           const GALGAS_gtlInt & /* constinArgument_index */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasItemAtIndex (void) {
  enterExtensionGetter_hasItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionGetter_gtlData_hasItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasItemAtIndex (void) {
  gExtensionGetterTable_gtlData_hasItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasItemAtIndex (defineExtensionGetter_gtlData_hasItemAtIndex,
                                                   freeExtensionGetter_gtlData_hasItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlData setItemAtIndex'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setItemAtIndex> gExtensionModifierTable_gtlData_setItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setItemAtIndex (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setItemAtIndex (cPtr_gtlData * inObject,
                                         const GALGAS_gtlData constin_data,
                                         const GALGAS_gtlInt constin_index,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setItemAtIndex f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_setItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_setItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_data, constin_index, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setItemAtIndex (cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    const GALGAS_gtlInt constinArgument_index,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 335)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setItemAtIndex (void) {
  gExtensionModifierTable_gtlData_setItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setItemAtIndex (defineExtensionSetter_gtlData_setItemAtIndex,
                                                   freeExtensionModifier_gtlData_setItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlData deleteItemAtIndex'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteItemAtIndex> gExtensionModifierTable_gtlData_deleteItemAtIndex ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteItemAtIndex (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteItemAtIndex (cPtr_gtlData * inObject,
                                            const GALGAS_gtlInt constin_index,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteItemAtIndex f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_deleteItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_deleteItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_index, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 341)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteItemAtIndex) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteItemAtIndex (void) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteItemAtIndex (defineExtensionSetter_gtlData_deleteItemAtIndex,
                                                      freeExtensionModifier_gtlData_deleteItemAtIndex) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@gtlData appendItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_appendItem> gExtensionModifierTable_gtlData_appendItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_appendItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_appendItem inModifier) {
  gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_appendItem (cPtr_gtlData * inObject,
                                     const GALGAS_gtlData constin_item,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_appendItem f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_appendItem.count ()) {
      f = gExtensionModifierTable_gtlData_appendItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_appendItem.count ()) {
           f = gExtensionModifierTable_gtlData_appendItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_item, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_item.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_appendItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_appendItem (void) {
  gExtensionModifierTable_gtlData_appendItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_appendItem (defineExtensionSetter_gtlData_appendItem,
                                               freeExtensionModifier_gtlData_appendItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnMap (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlMap constin_iterableMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnMap f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnMap (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlMap constinArgument_iterableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  GALGAS_lstring temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 565)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_lstring::constructor_new (GALGAS_string ("KEY"), object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 566))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 566)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_keyName ;
  }
  GALGAS_lstring var_actualKeyName_16208 = temp_0 ;
  cEnumerator_gtlVarMap enumerator_16321 (constinArgument_iterableMap.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 571)), kEnumeration_up) ;
  GALGAS_uint index_16295 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_16321.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 573)) ;
    while (enumerator_16321.hasCurrentObject () && bool_2) {
      {
      cPtr_gtlData * ptr_16418 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_16418, object->mAttribute_variableName, enumerator_16321.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 575)) ;
      }
      {
      cPtr_gtlData * ptr_16467 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_16467, var_actualKeyName_16208, GALGAS_gtlString::constructor_new (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 577)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 577)), enumerator_16321.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_instructions.galgas", 577))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 576)) ;
      }
      {
      cPtr_gtlData * ptr_16581 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_16581, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 580)), index_16295.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 580))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 579)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 582)) ;
      enumerator_16321.gotoNextObject () ;
      index_16295.increment () ;
      if (enumerator_16321.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 584)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 586)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  enterExtensionMethod_iterateOnMap (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnMap (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnMap,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension method '@gtlForeachStatementInstruction iterateOnList'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnList (const int32_t inClassIndex,
                                         extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                        GALGAS_gtlContext & io_context,
                                        GALGAS_gtlData & io_vars,
                                        GALGAS_library & io_lib,
                                        GALGAS_string & io_outputString,
                                        const GALGAS_gtlList constin_iterableList,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnList f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnList (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                          GALGAS_gtlContext & ioArgument_context,
                                                                          GALGAS_gtlData & ioArgument_vars,
                                                                          GALGAS_library & ioArgument_lib,
                                                                          GALGAS_string & ioArgument_outputString,
                                                                          const GALGAS_gtlList constinArgument_iterableList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 597)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 598)), GALGAS_string ("a key variable cannot be define when iterating on a list"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 598)) ;
  }
  cEnumerator_list enumerator_17214 (constinArgument_iterableList.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 600)), kEnumeration_up) ;
  GALGAS_uint index_17187 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_17214.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 602)) ;
    while (enumerator_17214.hasCurrentObject () && bool_2) {
      {
      cPtr_gtlData * ptr_17311 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_17311, object->mAttribute_variableName, enumerator_17214.current_value (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 604)) ;
      }
      {
      cPtr_gtlData * ptr_17360 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_17360, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 606)), index_17187.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 606))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 605)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 608)) ;
      enumerator_17214.gotoNextObject () ;
      index_17187.increment () ;
      if (enumerator_17214.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 610)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 612)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  enterExtensionMethod_iterateOnList (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                      extensionMethod_gtlForeachStatementInstruction_iterateOnList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnList.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnList (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnList,
                                                                         freeExtensionMethod_gtlForeachStatementInstruction_iterateOnList) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension method '@gtlForeachStatementInstruction iterateOnSet'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet> gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_iterateOnSet (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet inMethod) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                       GALGAS_gtlContext & io_context,
                                       GALGAS_gtlData & io_vars,
                                       GALGAS_library & io_lib,
                                       GALGAS_string & io_outputString,
                                       const GALGAS_gtlSet constin_iterableSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlForeachStatementInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlForeachStatementInstruction_iterateOnSet f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
      f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.count ()) {
           f = gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, constin_iterableSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlForeachStatementInstruction_iterateOnSet (const cPtr_gtlForeachStatementInstruction * inObject,
                                                                         GALGAS_gtlContext & ioArgument_context,
                                                                         GALGAS_gtlData & ioArgument_vars,
                                                                         GALGAS_library & ioArgument_lib,
                                                                         GALGAS_string & ioArgument_outputString,
                                                                         const GALGAS_gtlSet constinArgument_iterableSet,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlForeachStatementInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlForeachStatementInstruction) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_string::makeEmptyString ().objectCompare (object->mAttribute_keyName.getter_string (SOURCE_FILE ("gtl_instructions.galgas", 623)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticWarning (object->mAttribute_keyName.getter_location (SOURCE_FILE ("gtl_instructions.galgas", 624)), GALGAS_string ("a key variable cannot be define when iterating on a set"), fixItArray1  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 624)) ;
  }
  cEnumerator_stringset enumerator_17984 (constinArgument_iterableSet.getter_value (SOURCE_FILE ("gtl_instructions.galgas", 626)), kEnumeration_up) ;
  GALGAS_uint index_17958 ((uint32_t) 0) ;
  const bool bool_2 = true ;
  if (enumerator_17984.hasCurrentObject () && bool_2) {
    extensionMethod_execute (object->mAttribute_beforeList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 628)) ;
    while (enumerator_17984.hasCurrentObject () && bool_2) {
      {
      cPtr_gtlData * ptr_18081 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18081, object->mAttribute_variableName, GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 632)), enumerator_17984.current_key (HERE)  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 630)) ;
      }
      {
      cPtr_gtlData * ptr_18188 = (cPtr_gtlData *) ioArgument_vars.ptr () ;
      callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_18188, object->mAttribute_indexName, GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 635)), index_17958.getter_bigint (SOURCE_FILE ("gtl_instructions.galgas", 635))  COMMA_SOURCE_FILE ("gtl_instructions.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 634)) ;
      }
      extensionMethod_execute (object->mAttribute_doList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 637)) ;
      enumerator_17984.gotoNextObject () ;
      index_17958.increment () ;
      if (enumerator_17984.hasCurrentObject () && bool_2) {
        extensionMethod_execute (object->mAttribute_betweenList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 639)) ;
      }
    }
    extensionMethod_execute (object->mAttribute_afterList, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_instructions.galgas", 641)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  enterExtensionMethod_iterateOnSet (kTypeDescriptor_GALGAS_gtlForeachStatementInstruction.mSlotID,
                                     extensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet (void) {
  gExtensionMethodTable_gtlForeachStatementInstruction_iterateOnSet.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlForeachStatementInstruction_iterateOnSet (defineExtensionMethod_gtlForeachStatementInstruction_iterateOnSet,
                                                                        freeExtensionMethod_gtlForeachStatementInstruction_iterateOnSet) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@gtlExecutableEntity checkArguments'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlExecutableEntity_checkArguments> gExtensionMethodTable_gtlExecutableEntity_checkArguments ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_checkArguments (const int32_t inClassIndex,
                                          extensionMethodSignature_gtlExecutableEntity_checkArguments inMethod) {
  gExtensionMethodTable_gtlExecutableEntity_checkArguments.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_checkArguments (const cPtr_gtlExecutableEntity * inObject,
                                         const GALGAS_location constin_fromLocation,
                                         const GALGAS_gtlDataList constin_actualArguments,
                                         GALGAS_gtlData & out_entityVariableMap,
                                         GALGAS_bool & out_result,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  out_entityVariableMap.drop () ;
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExecutableEntity) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlExecutableEntity_checkArguments f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlExecutableEntity_checkArguments.count ()) {
      f = gExtensionMethodTable_gtlExecutableEntity_checkArguments (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlExecutableEntity_checkArguments.count ()) {
           f = gExtensionMethodTable_gtlExecutableEntity_checkArguments (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlExecutableEntity_checkArguments.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_fromLocation, constin_actualArguments, out_entityVariableMap, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlExecutableEntity_checkArguments (const cPtr_gtlExecutableEntity * inObject,
                                                                const GALGAS_location constinArgument_fromLocation,
                                                                const GALGAS_gtlDataList constinArgument_actualArguments,
                                                                GALGAS_gtlData & outArgument_entityVariableMap,
                                                                GALGAS_bool & outArgument_result,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlExecutableEntity * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlExecutableEntity) ;
  outArgument_result = GALGAS_bool (true) ;
  outArgument_entityVariableMap = GALGAS_gtlStruct::constructor_new (constinArgument_fromLocation, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 52)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_module.galgas", 53))  COMMA_SOURCE_FILE ("gtl_module.galgas", 50)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_formalArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 56)).objectCompare (constinArgument_actualArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 56)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    const GALGAS_gtlExecutableEntity temp_1 = object ;
    GALGAS_string temp_2 ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_1.getter_dynamicType (SOURCE_FILE ("gtl_module.galgas", 58)).objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlProcedure))).boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_string ("procedure '") ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_string ("function '") ;
    }
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("calling ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 57)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 62)).add_operation (GALGAS_string ("' needs "), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)).add_operation (object->mAttribute_formalArguments.getter_length (SOURCE_FILE ("gtl_module.galgas", 63)).getter_string (SOURCE_FILE ("gtl_module.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)).add_operation (GALGAS_string (" arguments"), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 63)), fixItArray4  COMMA_SOURCE_FILE ("gtl_module.galgas", 57)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_gtlArgumentList enumerator_1631 (object->mAttribute_formalArguments, kEnumeration_up) ;
    cEnumerator_gtlDataList enumerator_1654 (constinArgument_actualArguments, kEnumeration_up) ;
    while (enumerator_1631.hasCurrentObject () && enumerator_1654.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_1654.current_data (HERE).getter_dynamicType (SOURCE_FILE ("gtl_module.galgas", 67)).objectCompare (enumerator_1631.current_type (HERE))).operator_and (enumerator_1631.current_typed (HERE) COMMA_SOURCE_FILE ("gtl_module.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) enumerator_1654.current_data (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)), extensionGetter_typeName (enumerator_1631.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)).add_operation (GALGAS_string (" expected for "), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)).add_operation (enumerator_1631.current_name (HERE).getter_string (SOURCE_FILE ("gtl_module.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 68)), fixItArray6  COMMA_SOURCE_FILE ("gtl_module.galgas", 68)) ;
        outArgument_result = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_5) {
        {
        cPtr_gtlData * ptr_1843 = (cPtr_gtlData *) outArgument_entityVariableMap.ptr () ;
        callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_1843, enumerator_1631.current_name (HERE), enumerator_1654.current_data (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 71)) ;
        }
      }
      enumerator_1631.gotoNextObject () ;
      enumerator_1654.gotoNextObject () ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlExecutableEntity_checkArguments (void) {
  enterExtensionMethod_checkArguments (kTypeDescriptor_GALGAS_gtlExecutableEntity.mSlotID,
                                       extensionMethod_gtlExecutableEntity_checkArguments) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlExecutableEntity_checkArguments (void) {
  gExtensionMethodTable_gtlExecutableEntity_checkArguments.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlExecutableEntity_checkArguments (defineExtensionMethod_gtlExecutableEntity_checkArguments,
                                                               freeExtensionMethod_gtlExecutableEntity_checkArguments) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension method '@gtlProcedure call'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlProcedure_call> gExtensionMethodTable_gtlProcedure_call ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_call (const int32_t inClassIndex,
                                extensionMethodSignature_gtlProcedure_call inMethod) {
  gExtensionMethodTable_gtlProcedure_call.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_call (const cPtr_gtlProcedure * inObject,
                               GALGAS_gtlContext & io_context,
                               GALGAS_library & io_lib,
                               GALGAS_string & io_outputString,
                               const GALGAS_location constin_fromLocation,
                               const GALGAS_gtlDataList constin_actualArguments,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlProcedure) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlProcedure_call f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlProcedure_call.count ()) {
      f = gExtensionMethodTable_gtlProcedure_call (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlProcedure_call.count ()) {
           f = gExtensionMethodTable_gtlProcedure_call (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlProcedure_call.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_lib, io_outputString, constin_fromLocation, constin_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlProcedure_call (const cPtr_gtlProcedure * inObject,
                                               GALGAS_gtlContext & ioArgument_context,
                                               GALGAS_library & ioArgument_lib,
                                               GALGAS_string & ioArgument_outputString,
                                               const GALGAS_location constinArgument_fromLocation,
                                               const GALGAS_gtlDataList constinArgument_actualArguments,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlProcedure * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlProcedure) ;
  GALGAS_gtlData var_vars_2288 ;
  GALGAS_bool var_ok_2298 ;
  const GALGAS_gtlProcedure temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlProcedure *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_vars_2288, var_ok_2298, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 89)) ;
  const enumGalgasBool test_1 = var_ok_2298.boolEnum () ;
  if (kBoolTrue == test_1) {
    extensionMethod_execute (object->mAttribute_instructions, ioArgument_context, var_vars_2288, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 92)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("procedure call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 94)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlProcedure_call (void) {
  enterExtensionMethod_call (kTypeDescriptor_GALGAS_gtlProcedure.mSlotID,
                             extensionMethod_gtlProcedure_call) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlProcedure_call (void) {
  gExtensionMethodTable_gtlProcedure_call.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlProcedure_call (defineExtensionMethod_gtlProcedure_call,
                                              freeExtensionMethod_gtlProcedure_call) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@gtlFunction call'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlFunction_call> gExtensionGetterTable_gtlFunction_call ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_call (const int32_t inClassIndex,
                                enterExtensionGetter_gtlFunction_call inGetter) {
  gExtensionGetterTable_gtlFunction_call.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_call (const cPtr_gtlFunction * inObject,
                                         const GALGAS_location & in_fromLocation,
                                         GALGAS_library in_lib,
                                         const GALGAS_gtlDataList & in_actualArguments,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlFunction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlFunction_call f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlFunction_call.count ()) {
      f = gExtensionGetterTable_gtlFunction_call (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlFunction_call.count ()) {
           f = gExtensionGetterTable_gtlFunction_call (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlFunction_call.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_fromLocation, in_lib, in_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFunction_call (const cPtr_gtlFunction * inObject,
                                                        const GALGAS_location & constinArgument_fromLocation,
                                                        GALGAS_library inArgument_lib,
                                                        const GALGAS_gtlDataList & constinArgument_actualArguments,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFunction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlFunction) ;
  GALGAS_gtlData var_funcVariableMap_2829 ;
  GALGAS_bool var_ok_2839 ;
  const GALGAS_gtlFunction temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlFunction *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_funcVariableMap_2829, var_ok_2839, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 110)) ;
  {
  cPtr_gtlData * ptr_2861 = (cPtr_gtlData *) var_funcVariableMap_2829.ptr () ;
  callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_2861, object->mAttribute_returnVariable, GALGAS_gtlUnconstructed::constructor_new (object->mAttribute_returnVariable.getter_location (SOURCE_FILE ("gtl_module.galgas", 114)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 114))  COMMA_SOURCE_FILE ("gtl_module.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 112)) ;
  }
  const enumGalgasBool test_1 = var_ok_2839.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_gtlContext var_functionContext_3018 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 117)) ;
    GALGAS_string var_outputString_3060 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_functionContext_3018, var_funcVariableMap_2829, inArgument_lib, var_outputString_3060, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 119)) ;
    result_result = callExtensionGetter_resultField ((const cPtr_gtlData *) var_funcVariableMap_2829.ptr (), object->mAttribute_returnVariable, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 120)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("function call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 122)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFunction_call (void) {
  enterExtensionGetter_call (kTypeDescriptor_GALGAS_gtlFunction.mSlotID,
                             extensionGetter_gtlFunction_call) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlFunction_call (void) {
  gExtensionGetterTable_gtlFunction_call.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFunction_call (defineExtensionGetter_gtlFunction_call,
                                             freeExtensionGetter_gtlFunction_call) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlGetter callGetter'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlGetter_callGetter> gExtensionGetterTable_gtlGetter_callGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_callGetter (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlGetter_callGetter inGetter) {
  gExtensionGetterTable_gtlGetter_callGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_callGetter (const cPtr_gtlGetter * inObject,
                                               const GALGAS_location & in_fromLocation,
                                               GALGAS_library in_lib,
                                               const GALGAS_gtlData & in_target,
                                               const GALGAS_gtlDataList & in_actualArguments,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlGetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlGetter_callGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlGetter_callGetter.count ()) {
      f = gExtensionGetterTable_gtlGetter_callGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlGetter_callGetter.count ()) {
           f = gExtensionGetterTable_gtlGetter_callGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlGetter_callGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_fromLocation, in_lib, in_target, in_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlGetter_callGetter (const cPtr_gtlGetter * inObject,
                                                            const GALGAS_location & constinArgument_fromLocation,
                                                            GALGAS_library inArgument_lib,
                                                            const GALGAS_gtlData & constinArgument_target,
                                                            const GALGAS_gtlDataList & constinArgument_actualArguments,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlGetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlGetter) ;
  GALGAS_gtlData var_getterVariableMap_3685 ;
  GALGAS_bool var_ok_3695 ;
  const GALGAS_gtlGetter temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlGetter *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_getterVariableMap_3685, var_ok_3695, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 139)) ;
  {
  cPtr_gtlData * ptr_3719 = (cPtr_gtlData *) var_getterVariableMap_3685.ptr () ;
  callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_3719, object->mAttribute_returnVariable, GALGAS_gtlUnconstructed::constructor_new (object->mAttribute_returnVariable.getter_location (SOURCE_FILE ("gtl_module.galgas", 143)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 143))  COMMA_SOURCE_FILE ("gtl_module.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 141)) ;
  }
  const enumGalgasBool test_1 = var_ok_3695.boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    cPtr_gtlData * ptr_3869 = (cPtr_gtlData *) var_getterVariableMap_3685.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_3869, GALGAS_lstring::constructor_new (GALGAS_string ("self"), constinArgument_fromLocation  COMMA_SOURCE_FILE ("gtl_module.galgas", 147)), constinArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 146)) ;
    }
    GALGAS_gtlContext var_getterContext_3972 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 150)) ;
    GALGAS_string var_outputString_4014 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_getterContext_3972, var_getterVariableMap_3685, inArgument_lib, var_outputString_4014, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 152)) ;
    result_result = callExtensionGetter_resultField ((const cPtr_gtlData *) var_getterVariableMap_3685.ptr (), object->mAttribute_returnVariable, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 153)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("getter call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 155)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetter_callGetter (void) {
  enterExtensionGetter_callGetter (kTypeDescriptor_GALGAS_gtlGetter.mSlotID,
                                   extensionGetter_gtlGetter_callGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlGetter_callGetter (void) {
  gExtensionGetterTable_gtlGetter_callGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetter_callGetter (defineExtensionGetter_gtlGetter_callGetter,
                                                 freeExtensionGetter_gtlGetter_callGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlGetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlGetter_typedName> gExtensionGetterTable_gtlGetter_typedName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlGetter_typedName inGetter) {
  gExtensionGetterTable_gtlGetter_typedName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlGetter * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlGetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlGetter_typedName f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlGetter_typedName.count ()) {
      f = gExtensionGetterTable_gtlGetter_typedName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlGetter_typedName.count ()) {
           f = gExtensionGetterTable_gtlGetter_typedName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlGetter_typedName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlGetter_typedName (const cPtr_gtlGetter * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlGetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlGetter) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mAttribute_targetType, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 162)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 162)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_module.galgas", 162)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlGetter_typedName (void) {
  enterExtensionGetter_typedName (kTypeDescriptor_GALGAS_gtlGetter.mSlotID,
                                  extensionGetter_gtlGetter_typedName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlGetter_typedName (void) {
  gExtensionGetterTable_gtlGetter_typedName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlGetter_typedName (defineExtensionGetter_gtlGetter_typedName,
                                                freeExtensionGetter_gtlGetter_typedName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension method '@gtlSetter callSetter'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlSetter_callSetter> gExtensionMethodTable_gtlSetter_callSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_callSetter (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlSetter_callSetter inMethod) {
  gExtensionMethodTable_gtlSetter_callSetter.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_callSetter (const cPtr_gtlSetter * inObject,
                                     const GALGAS_location constin_fromLocation,
                                     GALGAS_library in_lib,
                                     GALGAS_gtlData & io_target,
                                     const GALGAS_gtlDataList constin_actualArguments,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlSetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlSetter_callSetter f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlSetter_callSetter.count ()) {
      f = gExtensionMethodTable_gtlSetter_callSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlSetter_callSetter.count ()) {
           f = gExtensionMethodTable_gtlSetter_callSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlSetter_callSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_fromLocation, in_lib, io_target, constin_actualArguments, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlSetter_callSetter (const cPtr_gtlSetter * inObject,
                                                  const GALGAS_location constinArgument_fromLocation,
                                                  GALGAS_library inArgument_lib,
                                                  GALGAS_gtlData & ioArgument_target,
                                                  const GALGAS_gtlDataList constinArgument_actualArguments,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlSetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlSetter) ;
  GALGAS_gtlData var_setterVariableMap_4736 ;
  GALGAS_bool var_ok_4746 ;
  const GALGAS_gtlSetter temp_0 = object ;
  callExtensionMethod_checkArguments ((const cPtr_gtlSetter *) temp_0.ptr (), constinArgument_fromLocation, constinArgument_actualArguments, var_setterVariableMap_4736, var_ok_4746, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 177)) ;
  const enumGalgasBool test_1 = var_ok_4746.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstring var_selfName_4786 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), constinArgument_fromLocation  COMMA_SOURCE_FILE ("gtl_module.galgas", 180)) ;
    {
    cPtr_gtlData * ptr_4844 = (cPtr_gtlData *) var_setterVariableMap_4736.ptr () ;
    callExtensionSetter_setStructField ((cPtr_gtlData *) ptr_4844, var_selfName_4786, ioArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 181)) ;
    }
    GALGAS_gtlContext var_setterContext_4925 = function_emptyContext (inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 185)) ;
    GALGAS_string var_outputString_4967 = GALGAS_string::makeEmptyString () ;
    extensionMethod_execute (object->mAttribute_instructions, var_setterContext_4925, var_setterVariableMap_4736, inArgument_lib, var_outputString_4967, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 187)) ;
    callExtensionMethod_structField ((const cPtr_gtlData *) var_setterVariableMap_4736.ptr (), var_selfName_4786, ioArgument_target, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 188)) ;
  }else if (kBoolFalse == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_fromLocation, GALGAS_string ("setter call failed"), fixItArray2  COMMA_SOURCE_FILE ("gtl_module.galgas", 190)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlSetter_callSetter (void) {
  enterExtensionMethod_callSetter (kTypeDescriptor_GALGAS_gtlSetter.mSlotID,
                                   extensionMethod_gtlSetter_callSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlSetter_callSetter (void) {
  gExtensionMethodTable_gtlSetter_callSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlSetter_callSetter (defineExtensionMethod_gtlSetter_callSetter,
                                                 freeExtensionMethod_gtlSetter_callSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlSetter typedName'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlSetter_typedName> gExtensionGetterTable_gtlSetter_typedName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_typedName (const int32_t inClassIndex,
                                     enterExtensionGetter_gtlSetter_typedName inGetter) {
  gExtensionGetterTable_gtlSetter_typedName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_typedName (const cPtr_gtlSetter * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlSetter) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlSetter_typedName f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlSetter_typedName.count ()) {
      f = gExtensionGetterTable_gtlSetter_typedName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlSetter_typedName.count ()) {
           f = gExtensionGetterTable_gtlSetter_typedName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlSetter_typedName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlSetter_typedName (const cPtr_gtlSetter * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlSetter * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlSetter) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mAttribute_targetType, inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 197)).add_operation (object->mAttribute_name.getter_string (SOURCE_FILE ("gtl_module.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("gtl_module.galgas", 197)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_module.galgas", 197)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlSetter_typedName (void) {
  enterExtensionGetter_typedName (kTypeDescriptor_GALGAS_gtlSetter.mSlotID,
                                  extensionGetter_gtlSetter_typedName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlSetter_typedName (void) {
  gExtensionGetterTable_gtlSetter_typedName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlSetter_typedName (defineExtensionGetter_gtlSetter_typedName,
                                                freeExtensionGetter_gtlSetter_typedName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension getter '@gtlVarItemField lstringPath'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlVarItemField_lstringPath> gExtensionGetterTable_gtlVarItemField_lstringPath ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_lstringPath (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlVarItemField_lstringPath inGetter) {
  gExtensionGetterTable_gtlVarItemField_lstringPath.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_lstringPath (const cPtr_gtlVarItemField * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlVarItemField) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlVarItemField_lstringPath f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlVarItemField_lstringPath.count ()) {
      f = gExtensionGetterTable_gtlVarItemField_lstringPath (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlVarItemField_lstringPath.count ()) {
           f = gExtensionGetterTable_gtlVarItemField_lstringPath (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlVarItemField_lstringPath.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlVarItemField_lstringPath (const cPtr_gtlVarItemField * inObject,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlVarItemField * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlVarItemField) ;
  result_result = object->mAttribute_field ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlVarItemField_lstringPath (void) {
  enterExtensionGetter_lstringPath (kTypeDescriptor_GALGAS_gtlVarItemField.mSlotID,
                                    extensionGetter_gtlVarItemField_lstringPath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlVarItemField_lstringPath (void) {
  gExtensionGetterTable_gtlVarItemField_lstringPath.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItemField_lstringPath (defineExtensionGetter_gtlVarItemField_lstringPath,
                                                        freeExtensionGetter_gtlVarItemField_lstringPath) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlExpression location'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_location> gExtensionGetterTable_gtlExpression_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlExpression_location inGetter) {
  gExtensionGetterTable_gtlExpression_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_gtlExpression * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_location f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_location.count ()) {
      f = gExtensionGetterTable_gtlExpression_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_location.count ()) {
           f = gExtensionGetterTable_gtlExpression_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_location extensionGetter_gtlExpression_location (const cPtr_gtlExpression * inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_gtlExpression * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlExpression) ;
  result_result = object->mAttribute_where ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlExpression_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlExpression.mSlotID,
                                 extensionGetter_gtlExpression_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_location (void) {
  gExtensionGetterTable_gtlExpression_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_location (defineExtensionGetter_gtlExpression_location,
                                                   freeExtensionGetter_gtlExpression_location) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Abstract extension getter '@gtlExpression eval'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlExpression_eval> gExtensionGetterTable_gtlExpression_eval ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_eval (const int32_t inClassIndex,
                                enterExtensionGetter_gtlExpression_eval inGetter) {
  gExtensionGetterTable_gtlExpression_eval.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlExpression_eval (void) {
  gExtensionGetterTable_gtlExpression_eval.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlExpression_eval (NULL,
                                               freeExtensionGetter_gtlExpression_eval) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_eval (const cPtr_gtlExpression * inObject,
                                         const GALGAS_gtlData & in_vars,
                                         const GALGAS_library & in_lib,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_eval f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_eval.count ()) {
      f = gExtensionGetterTable_gtlExpression_eval (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_eval.count ()) {
           f = gExtensionGetterTable_gtlExpression_eval (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_eval.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_vars, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (void) :
mAttribute_data () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::~ GALGAS_gtlDataList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (const GALGAS_gtlData & inOperand0) :
mAttribute_data (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlDataList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlDataList_2D_element::objectCompare (const GALGAS_gtlDataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_data.objectCompare (inOperand.mAttribute_data) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlDataList_2D_element::isValid (void) const {
  return mAttribute_data.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::drop (void) {
  mAttribute_data.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlDataList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @gtlDataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_data.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlDataList_2D_element::getter_data (UNUSED_LOCATION_ARGS) const {
  return mAttribute_data ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlDataList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDataList_2D_element ("gtlDataList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDataList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDataList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  const GALGAS_gtlDataList_2D_element * p = (const GALGAS_gtlDataList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDataList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDataList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::~ GALGAS_gtlVarMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_gtlData & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_value (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_gtlData & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlVarMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlVarMap_2D_element::objectCompare (const GALGAS_gtlVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlVarMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlVarMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlVarMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarMap_2D_element ("gtlVarMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  const GALGAS_gtlVarMap_2D_element * p = (const GALGAS_gtlVarMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlVarMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::~ GALGAS_gtlExpressionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_gtlExpression & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_expression (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element GALGAS_gtlExpressionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_gtlExpression & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlExpressionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlExpressionMap_2D_element::objectCompare (const GALGAS_gtlExpressionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_expression.objectCompare (inOperand.mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlExpressionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_expression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_expression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlExpressionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpressionMap_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlExpressionMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ("gtlExpressionMap-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpressionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpressionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionMap_2D_element GALGAS_gtlExpressionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpressionMap_2D_element result ;
  const GALGAS_gtlExpressionMap_2D_element * p = (const GALGAS_gtlExpressionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpressionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpressionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_aTemplate () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::~ GALGAS_gtlTemplateMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_gtlTemplate & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_aTemplate (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_gtlTemplate::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_gtlTemplate & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlTemplateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlTemplateMap_2D_element::objectCompare (const GALGAS_gtlTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_aTemplate.objectCompare (inOperand.mAttribute_aTemplate) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlTemplateMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_aTemplate.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTemplateMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_aTemplate.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTemplateMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @gtlTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_aTemplate.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlTemplateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate GALGAS_gtlTemplateMap_2D_element::getter_aTemplate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_aTemplate ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlTemplateMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ("gtlTemplateMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplateMap_2D_element result ;
  const GALGAS_gtlTemplateMap_2D_element * p = (const GALGAS_gtlTemplateMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTemplateMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTemplateMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::GALGAS_list_2D_element (void) :
mAttribute_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::~ GALGAS_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element::GALGAS_list_2D_element (const GALGAS_gtlData & inOperand0) :
mAttribute_value (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element GALGAS_list_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_list_2D_element::objectCompare (const GALGAS_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_value.objectCompare (inOperand.mAttribute_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_list_2D_element::isValid (void) const {
  return mAttribute_value.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_list_2D_element::drop (void) {
  mAttribute_value.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_list_2D_element::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_list_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mAttribute_value ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @list-element type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_list_2D_element ("list-element",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_list_2D_element GALGAS_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_list_2D_element result ;
  const GALGAS_list_2D_element * p = (const GALGAS_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (void) :
mAttribute_condition (),
mAttribute_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::~ GALGAS_gtlThenElsifStatementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (const GALGAS_gtlExpression & inOperand0,
                                                                                          const GALGAS_gtlInstructionList & inOperand1) :
mAttribute_condition (inOperand0),
mAttribute_instructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element GALGAS_gtlThenElsifStatementList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0,
                                                                                                          const GALGAS_gtlInstructionList & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlThenElsifStatementList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlThenElsifStatementList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlThenElsifStatementList_2D_element::objectCompare (const GALGAS_gtlThenElsifStatementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_condition.objectCompare (inOperand.mAttribute_condition) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_instructionList.objectCompare (inOperand.mAttribute_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlThenElsifStatementList_2D_element::isValid (void) const {
  return mAttribute_condition.isValid () && mAttribute_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlThenElsifStatementList_2D_element::drop (void) {
  mAttribute_condition.drop () ;
  mAttribute_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlThenElsifStatementList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlThenElsifStatementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_condition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlThenElsifStatementList_2D_element::getter_condition (UNUSED_LOCATION_ARGS) const {
  return mAttribute_condition ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlThenElsifStatementList_2D_element::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @gtlThenElsifStatementList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ("gtlThenElsifStatementList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlThenElsifStatementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlThenElsifStatementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlThenElsifStatementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlThenElsifStatementList_2D_element GALGAS_gtlThenElsifStatementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlThenElsifStatementList_2D_element result ;
  const GALGAS_gtlThenElsifStatementList_2D_element * p = (const GALGAS_gtlThenElsifStatementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlThenElsifStatementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlThenElsifStatementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (void) :
mAttribute_key (),
mAttribute_order () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::~ GALGAS_sortingKeyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lsint & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_order (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortingKeyList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lsint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lsint & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortingKeyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_sortingKeyList_2D_element::objectCompare (const GALGAS_sortingKeyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_order.objectCompare (inOperand.mAttribute_order) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_sortingKeyList_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_order.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_order.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sortingKeyList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @sortingKeyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_order.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortingKeyList_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_sortingKeyList_2D_element::getter_order (UNUSED_LOCATION_ARGS) const {
  return mAttribute_order ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sortingKeyList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortingKeyList_2D_element ("sortingKeyList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortingKeyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortingKeyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortingKeyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortingKeyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  const GALGAS_sortingKeyList_2D_element * p = (const GALGAS_sortingKeyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortingKeyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortingKeyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (void) :
mAttribute_typed (),
mAttribute_type (),
mAttribute_name () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::~ GALGAS_gtlArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_type & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mAttribute_typed (inOperand0),
mAttribute_type (inOperand1),
mAttribute_name (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element GALGAS_gtlArgumentList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                      const GALGAS_type & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_gtlArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlArgumentList_2D_element::objectCompare (const GALGAS_gtlArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_typed.objectCompare (inOperand.mAttribute_typed) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_type.objectCompare (inOperand.mAttribute_type) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_name.objectCompare (inOperand.mAttribute_name) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlArgumentList_2D_element::isValid (void) const {
  return mAttribute_typed.isValid () && mAttribute_type.isValid () && mAttribute_name.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlArgumentList_2D_element::drop (void) {
  mAttribute_typed.drop () ;
  mAttribute_type.drop () ;
  mAttribute_name.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlArgumentList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @gtlArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_typed.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_name.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_gtlArgumentList_2D_element::getter_typed (UNUSED_LOCATION_ARGS) const {
  return mAttribute_typed ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlArgumentList_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mAttribute_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlArgumentList_2D_element::getter_name (UNUSED_LOCATION_ARGS) const {
  return mAttribute_name ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlArgumentList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ("gtlArgumentList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlArgumentList_2D_element GALGAS_gtlArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlArgumentList_2D_element result ;
  const GALGAS_gtlArgumentList_2D_element * p = (const GALGAS_gtlArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_procedure () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::~ GALGAS_gtlProcMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlProcedure & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_procedure (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlProcMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlProcedure::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlProcedure & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlProcMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlProcMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlProcMap_2D_element::objectCompare (const GALGAS_gtlProcMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_procedure.objectCompare (inOperand.mAttribute_procedure) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlProcMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_procedure.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlProcMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_procedure.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlProcMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlProcMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_procedure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlProcMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcedure GALGAS_gtlProcMap_2D_element::getter_procedure (UNUSED_LOCATION_ARGS) const {
  return mAttribute_procedure ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlProcMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlProcMap_2D_element ("gtlProcMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlProcMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlProcMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlProcMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlProcMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlProcMap_2D_element result ;
  const GALGAS_gtlProcMap_2D_element * p = (const GALGAS_gtlProcMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlProcMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlProcMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_function () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::~ GALGAS_gtlFuncMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlFunction & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_function (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlFuncMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlFunction::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlFunction & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlFuncMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlFuncMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlFuncMap_2D_element::objectCompare (const GALGAS_gtlFuncMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_function.objectCompare (inOperand.mAttribute_function) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlFuncMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_function.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlFuncMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_function.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlFuncMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlFuncMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_function.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlFuncMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction GALGAS_gtlFuncMap_2D_element::getter_function (UNUSED_LOCATION_ARGS) const {
  return mAttribute_function ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlFuncMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ("gtlFuncMap-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlFuncMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlFuncMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFuncMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlFuncMap_2D_element result ;
  const GALGAS_gtlFuncMap_2D_element * p = (const GALGAS_gtlFuncMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlFuncMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFuncMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_theGetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::~ GALGAS_gtlGetterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlGetter & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_theGetter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element GALGAS_gtlGetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlGetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlGetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlGetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlGetterMap_2D_element::objectCompare (const GALGAS_gtlGetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_theGetter.objectCompare (inOperand.mAttribute_theGetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlGetterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_theGetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlGetterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_theGetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlGetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlGetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_theGetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlGetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter GALGAS_gtlGetterMap_2D_element::getter_theGetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_theGetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlGetterMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ("gtlGetterMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap_2D_element GALGAS_gtlGetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetterMap_2D_element result ;
  const GALGAS_gtlGetterMap_2D_element * p = (const GALGAS_gtlGetterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlGetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlGetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_theSetter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::~ GALGAS_gtlSetterMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlSetter & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_theSetter (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element GALGAS_gtlSetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlSetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlSetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlSetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlSetterMap_2D_element::objectCompare (const GALGAS_gtlSetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_theSetter.objectCompare (inOperand.mAttribute_theSetter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlSetterMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_theSetter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlSetterMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_theSetter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlSetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlSetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_theSetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlSetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter GALGAS_gtlSetterMap_2D_element::getter_theSetter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_theSetter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlSetterMap-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ("gtlSetterMap-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlSetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlSetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSetterMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap_2D_element GALGAS_gtlSetterMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetterMap_2D_element result ;
  const GALGAS_gtlSetterMap_2D_element * p = (const GALGAS_gtlSetterMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlSetterMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSetterMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (void) :
mAttribute_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::~ GALGAS_gtlExpressionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (const GALGAS_gtlExpression & inOperand0) :
mAttribute_expression (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element GALGAS_gtlExpressionList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlExpressionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlExpressionList_2D_element::objectCompare (const GALGAS_gtlExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_expression.objectCompare (inOperand.mAttribute_expression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlExpressionList_2D_element::isValid (void) const {
  return mAttribute_expression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionList_2D_element::drop (void) {
  mAttribute_expression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlExpressionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpressionList_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_expression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlExpressionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ("gtlExpressionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList_2D_element GALGAS_gtlExpressionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpressionList_2D_element result ;
  const GALGAS_gtlExpressionList_2D_element * p = (const GALGAS_gtlExpressionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpressionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpressionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlContext addModulePath'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_addModulePath> gExtensionModifierTable_gtlContext_addModulePath ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_addModulePath (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_addModulePath inModifier) {
  gExtensionModifierTable_gtlContext_addModulePath.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_addModulePath (cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_rootPath,
                                        const GALGAS_string constin_modulePath,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_addModulePath f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_addModulePath.count ()) {
      f = gExtensionModifierTable_gtlContext_addModulePath (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_addModulePath.count ()) {
           f = gExtensionModifierTable_gtlContext_addModulePath (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_addModulePath.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_rootPath, constin_modulePath, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_addModulePath (cPtr_gtlContext * inObject,
                                                      const GALGAS_string constinArgument_rootPath,
                                                      const GALGAS_string constinArgument_modulePath,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  GALGAS_string var_normalizedModulePath_1497 = constinArgument_modulePath.getter_absolutePathFromPath (constinArgument_rootPath COMMA_SOURCE_FILE ("gtl_types.galgas", 59)).getter_stringByStandardizingPath (SOURCE_FILE ("gtl_types.galgas", 59)) ;
  object->mAttribute_importPath.addAssign_operation (var_normalizedModulePath_1497  COMMA_SOURCE_FILE ("gtl_types.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_addModulePath (void) {
  enterExtensionSetter_addModulePath (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionSetter_gtlContext_addModulePath) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_addModulePath (void) {
  gExtensionModifierTable_gtlContext_addModulePath.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_addModulePath (defineExtensionSetter_gtlContext_addModulePath,
                                                     freeExtensionModifier_gtlContext_addModulePath) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@gtlContext addInputVariable'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_addInputVariable> gExtensionModifierTable_gtlContext_addInputVariable ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_addInputVariable (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_addInputVariable inModifier) {
  gExtensionModifierTable_gtlContext_addInputVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_addInputVariable (cPtr_gtlContext * inObject,
                                           GALGAS_gtlData in_inputVariable,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_addInputVariable f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_addInputVariable.count ()) {
      f = gExtensionModifierTable_gtlContext_addInputVariable (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_addInputVariable.count ()) {
           f = gExtensionModifierTable_gtlContext_addInputVariable (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_addInputVariable.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_inputVariable, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_addInputVariable (cPtr_gtlContext * inObject,
                                                         GALGAS_gtlData inArgument_inputVariable,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  object->mAttribute_inputVars.addAssign_operation (inArgument_inputVariable  COMMA_SOURCE_FILE ("gtl_types.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_addInputVariable (void) {
  enterExtensionSetter_addInputVariable (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_addInputVariable) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_addInputVariable (void) {
  gExtensionModifierTable_gtlContext_addInputVariable.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_addInputVariable (defineExtensionSetter_gtlContext_addInputVariable,
                                                        freeExtensionModifier_gtlContext_addInputVariable) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@gtlContext popFirstInputArg'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_popFirstInputArg> gExtensionModifierTable_gtlContext_popFirstInputArg ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_popFirstInputArg (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_popFirstInputArg inModifier) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_popFirstInputArg (cPtr_gtlContext * inObject,
                                           GALGAS_location in_where,
                                           GALGAS_gtlData & out_result,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_result.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_popFirstInputArg f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_popFirstInputArg.count ()) {
      f = gExtensionModifierTable_gtlContext_popFirstInputArg (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_popFirstInputArg.count ()) {
           f = gExtensionModifierTable_gtlContext_popFirstInputArg (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_popFirstInputArg.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_where, out_result, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_popFirstInputArg (cPtr_gtlContext * inObject,
                                                         GALGAS_location inArgument_where,
                                                         GALGAS_gtlData & outArgument_result,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_inputVars.getter_length (SOURCE_FILE ("gtl_types.galgas", 73)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    object->mAttribute_inputVars.setter_popFirst (outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 74)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inArgument_where, GALGAS_string ("No input argument available"), fixItArray1  COMMA_SOURCE_FILE ("gtl_types.galgas", 76)) ;
    outArgument_result.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_popFirstInputArg (void) {
  enterExtensionSetter_popFirstInputArg (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_popFirstInputArg) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_popFirstInputArg (void) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_popFirstInputArg (defineExtensionSetter_gtlContext_popFirstInputArg,
                                                        freeExtensionModifier_gtlContext_popFirstInputArg) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlContext fullPrefix'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlContext_fullPrefix> gExtensionGetterTable_gtlContext_fullPrefix ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_fullPrefix (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlContext_fullPrefix inGetter) {
  gExtensionGetterTable_gtlContext_fullPrefix.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_fullPrefix (const cPtr_gtlContext * inObject,
                                               const GALGAS_gtlData & in_vars,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_fullPrefix f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_fullPrefix.count ()) {
      f = gExtensionGetterTable_gtlContext_fullPrefix (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_fullPrefix.count ()) {
           f = gExtensionGetterTable_gtlContext_fullPrefix (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_fullPrefix.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_vars, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlContext_fullPrefix (const cPtr_gtlContext * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_vars */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_full ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_full = object->mAttribute_prefix ;
//---
  return result_full ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlContext_fullPrefix (void) {
  enterExtensionGetter_fullPrefix (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                   extensionGetter_gtlContext_fullPrefix) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlContext_fullPrefix (void) {
  gExtensionGetterTable_gtlContext_fullPrefix.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlContext_fullPrefix (defineExtensionGetter_gtlContext_fullPrefix,
                                                  freeExtensionGetter_gtlContext_fullPrefix) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@gtlContext fullTemplateFileName'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlContext_fullTemplateFileName> gExtensionGetterTable_gtlContext_fullTemplateFileName ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_fullTemplateFileName (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlContext_fullTemplateFileName inGetter) {
  gExtensionGetterTable_gtlContext_fullTemplateFileName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_fullTemplateFileName (const cPtr_gtlContext * inObject,
                                                         GALGAS_gtlContext in_context,
                                                         GALGAS_gtlData in_vars,
                                                         GALGAS_lstring in_simpleName,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_fullTemplateFileName f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_fullTemplateFileName.count ()) {
      f = gExtensionGetterTable_gtlContext_fullTemplateFileName (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_fullTemplateFileName.count ()) {
           f = gExtensionGetterTable_gtlContext_fullTemplateFileName (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_fullTemplateFileName.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_context, in_vars, in_simpleName, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlContext_fullTemplateFileName (const cPtr_gtlContext * inObject,
                                                                       GALGAS_gtlContext inArgument_context,
                                                                       GALGAS_gtlData inArgument_vars,
                                                                       GALGAS_lstring inArgument_simpleName,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_fullName ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  const GALGAS_gtlContext temp_0 = object ;
  GALGAS_gtlContext var_copy_2437 = temp_0 ;
  const GALGAS_gtlContext temp_1 = object ;
  GALGAS_lstring var_fullPref_2464 = callExtensionGetter_fullPrefix ((const cPtr_gtlContext *) temp_1.ptr (), inArgument_vars, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 106)) ;
  GALGAS_string var_prefixedTemplatePath_2521 = extensionGetter_stringByAppendingPath (object->mAttribute_templateDirectory, var_fullPref_2464.getter_string (SOURCE_FILE ("gtl_types.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 108)) ;
  GALGAS_string var_hierarchicalPath_2609 = object->mAttribute_path ;
  GALGAS_string var_rootPath_2635 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2521, inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 110)) ;
  GALGAS_bool var_found_2761 = GALGAS_bool (false) ;
  if (var_hierarchicalPath_2609.getter_length (SOURCE_FILE ("gtl_types.galgas", 117)).isValid ()) {
    uint32_t variant_2777 = var_hierarchicalPath_2609.getter_length (SOURCE_FILE ("gtl_types.galgas", 117)).uintValue () ;
    bool loop_2777 = true ;
    while (loop_2777) {
      GALGAS_bool test_2 = var_found_2761.operator_not (SOURCE_FILE ("gtl_types.galgas", 118)) ;
      if (kBoolTrue == test_2.boolEnum ()) {
        test_2 = GALGAS_bool (kIsStrictSup, var_hierarchicalPath_2609.getter_length (SOURCE_FILE ("gtl_types.galgas", 118)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_2777 = test_2.isValid () ;
      if (loop_2777) {
        loop_2777 = test_2.boolValue () ;
      }
      if (loop_2777 && (0 == variant_2777)) {
        loop_2777 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_types.galgas", 117)) ;
      }
      if (loop_2777) {
        variant_2777 -- ;
        GALGAS_string var_fullPath_2882 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2521, var_hierarchicalPath_2609, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 121)), inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 119)) ;
        const enumGalgasBool test_3 = var_fullPath_2882.getter_fileExists (SOURCE_FILE ("gtl_types.galgas", 126)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_rootPath_2635 = var_fullPath_2882 ;
          var_found_2761 = GALGAS_bool (true) ;
        }
        var_hierarchicalPath_2609 = var_hierarchicalPath_2609.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_types.galgas", 133)) ;
      }
    }
  }
  result_fullName = GALGAS_lstring::constructor_new (var_rootPath_2635, inArgument_simpleName.getter_location (SOURCE_FILE ("gtl_types.galgas", 138))  COMMA_SOURCE_FILE ("gtl_types.galgas", 136)) ;
//---
  return result_fullName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlContext_fullTemplateFileName (void) {
  enterExtensionGetter_fullTemplateFileName (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                             extensionGetter_gtlContext_fullTemplateFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlContext_fullTemplateFileName (void) {
  gExtensionGetterTable_gtlContext_fullTemplateFileName.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlContext_fullTemplateFileName (defineExtensionGetter_gtlContext_fullTemplateFileName,
                                                            freeExtensionGetter_gtlContext_fullTemplateFileName) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlContext setDebugger'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_setDebugger> gExtensionModifierTable_gtlContext_setDebugger ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setDebugger (const int32_t inClassIndex,
                                       extensionSetterSignature_gtlContext_setDebugger inModifier) {
  gExtensionModifierTable_gtlContext_setDebugger.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setDebugger (cPtr_gtlContext * inObject,
                                      GALGAS_bool in_debugOn,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setDebugger f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setDebugger.count ()) {
      f = gExtensionModifierTable_gtlContext_setDebugger (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setDebugger.count ()) {
           f = gExtensionModifierTable_gtlContext_setDebugger (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setDebugger.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_debugOn, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_setDebugger (cPtr_gtlContext * inObject,
                                                    GALGAS_bool inArgument_debugOn,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mAttribute_debuggerContext.setter_setDebugActive (inArgument_debugOn COMMA_SOURCE_FILE ("gtl_debugger.galgas", 45)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_setDebugger (void) {
  enterExtensionSetter_setDebugger (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionSetter_gtlContext_setDebugger) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_setDebugger (void) {
  gExtensionModifierTable_gtlContext_setDebugger.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_setDebugger (defineExtensionSetter_gtlContext_setDebugger,
                                                   freeExtensionModifier_gtlContext_setDebugger) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlContext setBreakOnNext'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlContext_setBreakOnNext> gExtensionModifierTable_gtlContext_setBreakOnNext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setBreakOnNext (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlContext_setBreakOnNext inModifier) {
  gExtensionModifierTable_gtlContext_setBreakOnNext.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setBreakOnNext (cPtr_gtlContext * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setBreakOnNext f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setBreakOnNext.count ()) {
      f = gExtensionModifierTable_gtlContext_setBreakOnNext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setBreakOnNext.count ()) {
           f = gExtensionModifierTable_gtlContext_setBreakOnNext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setBreakOnNext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlContext_setBreakOnNext (cPtr_gtlContext * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mAttribute_debuggerContext.setter_setBreakOnNext (GALGAS_bool (true) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 50)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlContext_setBreakOnNext (void) {
  enterExtensionSetter_setBreakOnNext (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                       extensionSetter_gtlContext_setBreakOnNext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlContext_setBreakOnNext (void) {
  gExtensionModifierTable_gtlContext_setBreakOnNext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlContext_setBreakOnNext (defineExtensionSetter_gtlContext_setBreakOnNext,
                                                      freeExtensionModifier_gtlContext_setBreakOnNext) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlContext debugActive'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlContext_debugActive> gExtensionGetterTable_gtlContext_debugActive ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_debugActive (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_debugActive inGetter) {
  gExtensionGetterTable_gtlContext_debugActive.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_debugActive (const cPtr_gtlContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_debugActive f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_debugActive.count ()) {
      f = gExtensionGetterTable_gtlContext_debugActive (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_debugActive.count ()) {
           f = gExtensionGetterTable_gtlContext_debugActive (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_debugActive.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlContext_debugActive (const cPtr_gtlContext * inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_debugOn ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_debugOn = object->mAttribute_debuggerContext.getter_debugActive (SOURCE_FILE ("gtl_debugger.galgas", 56)) ;
//---
  return result_debugOn ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlContext_debugActive (void) {
  enterExtensionGetter_debugActive (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_debugActive) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlContext_debugActive (void) {
  gExtensionGetterTable_gtlContext_debugActive.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlContext_debugActive (defineExtensionGetter_gtlContext_debugActive,
                                                   freeExtensionGetter_gtlContext_debugActive) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlContext breakOnNext'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlContext_breakOnNext> gExtensionGetterTable_gtlContext_breakOnNext ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_breakOnNext (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_breakOnNext inGetter) {
  gExtensionGetterTable_gtlContext_breakOnNext.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_breakOnNext (const cPtr_gtlContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_breakOnNext f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_breakOnNext.count ()) {
      f = gExtensionGetterTable_gtlContext_breakOnNext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_breakOnNext.count ()) {
           f = gExtensionGetterTable_gtlContext_breakOnNext (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_breakOnNext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlContext_breakOnNext (const cPtr_gtlContext * inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOnNext ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_breakOnNext = object->mAttribute_debuggerContext.getter_breakOnNext (SOURCE_FILE ("gtl_debugger.galgas", 62)) ;
//---
  return result_breakOnNext ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlContext_breakOnNext (void) {
  enterExtensionGetter_breakOnNext (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_breakOnNext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlContext_breakOnNext (void) {
  gExtensionGetterTable_gtlContext_breakOnNext.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlContext_breakOnNext (defineExtensionGetter_gtlContext_breakOnNext,
                                                   freeExtensionGetter_gtlContext_breakOnNext) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed desc'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlUnconstructed_desc (const cPtr_gtlData * /* inObject */,
                                                            const GALGAS_uint & constinArgument_tab,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)).add_operation (GALGAS_string ("unconstructed\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_desc (defineExtensionGetter_gtlUnconstructed_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed string'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlUnconstructed_string (const cPtr_gtlData * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an unconstructed to a string"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 364)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                               extensionGetter_gtlUnconstructed_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_string (defineExtensionGetter_gtlUnconstructed_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed lstring'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlUnconstructed_lstring (const cPtr_gtlData * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an unconstructed to a lstring"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 368)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                extensionGetter_gtlUnconstructed_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_lstring (defineExtensionGetter_gtlUnconstructed_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed bool'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlUnconstructed_bool (const cPtr_gtlData * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an unconstructed to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 372)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_bool (defineExtensionGetter_gtlUnconstructed_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlUnconstructed int'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlUnconstructed_int (const cPtr_gtlData * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an unconstructed to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 376)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                            extensionGetter_gtlUnconstructed_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_int (defineExtensionGetter_gtlUnconstructed_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed float'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlUnconstructed_float (const cPtr_gtlData * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an unconstructed to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 380)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_float (defineExtensionGetter_gtlUnconstructed_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed plusOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_plusOp (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 384)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                               extensionGetter_gtlUnconstructed_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_plusOp (defineExtensionGetter_gtlUnconstructed_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Overriding extension getter '@gtlUnconstructed minusOp'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_minusOp (const cPtr_gtlData * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 387)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                extensionGetter_gtlUnconstructed_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_minusOp (defineExtensionGetter_gtlUnconstructed_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed notOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_notOp (const cPtr_gtlData * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 390)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_notOp (defineExtensionGetter_gtlUnconstructed_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed addOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_addOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 393)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_addOp (defineExtensionGetter_gtlUnconstructed_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed subOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_subOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 396)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_subOp (defineExtensionGetter_gtlUnconstructed_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed mulOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_mulOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 399)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_mulOp (defineExtensionGetter_gtlUnconstructed_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed divOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_divOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 402)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_divOp (defineExtensionGetter_gtlUnconstructed_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed modOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_modOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 405)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_modOp (defineExtensionGetter_gtlUnconstructed_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed andOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_andOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 408)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_andOp (defineExtensionGetter_gtlUnconstructed_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed orOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_orOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 411)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_orOp (defineExtensionGetter_gtlUnconstructed_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed xorOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_xorOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 414)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_xorOp (defineExtensionGetter_gtlUnconstructed_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed slOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_slOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 417)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_slOp (defineExtensionGetter_gtlUnconstructed_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed srOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_srOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 420)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_srOp (defineExtensionGetter_gtlUnconstructed_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed neqOp'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_neqOp (const cPtr_gtlData * inObject,
                                                              const GALGAS_gtlData & /* constinArgument_right */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 423)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                              extensionGetter_gtlUnconstructed_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_neqOp (defineExtensionGetter_gtlUnconstructed_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed eqOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_eqOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 426)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_eqOp (defineExtensionGetter_gtlUnconstructed_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed gtOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_gtOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 429)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_gtOp (defineExtensionGetter_gtlUnconstructed_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed geOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_geOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 432)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_geOp (defineExtensionGetter_gtlUnconstructed_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed ltOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_ltOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 435)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_ltOp (defineExtensionGetter_gtlUnconstructed_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlUnconstructed leOp'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_leOp (const cPtr_gtlData * inObject,
                                                             const GALGAS_gtlData & /* constinArgument_right */,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 438)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                             extensionGetter_gtlUnconstructed_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_leOp (defineExtensionGetter_gtlUnconstructed_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlUnconstructed embeddedType'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlUnconstructed_embeddedType (const cPtr_gtlData * inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("unconstructed data provided as argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 443)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                     extensionGetter_gtlUnconstructed_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_embeddedType (defineExtensionGetter_gtlUnconstructed_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding extension method '@gtlUnconstructed addMyValue'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlUnconstructed_addMyValue (const cPtr_gtlData * inObject,
                                                         GALGAS_objectlist & /* ioArgument_objectList */,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("Attempting to pass an unconstructed data to a function"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 448)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlUnconstructed_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                   extensionMethod_gtlUnconstructed_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlUnconstructed_addMyValue (defineExtensionMethod_gtlUnconstructed_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension getter '@gtlUnconstructed performGetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlUnconstructed_performGetter (const cPtr_gtlData * inObject,
                                                                      const GALGAS_lstring & constinArgument_methodName,
                                                                      const GALGAS_gtlDataList & constinArgument_arguments,
                                                                      const GALGAS_library & constinArgument_lib,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlUnconstructed * object = (const cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 460)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 461)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 461)) ;
    }
    const GALGAS_gtlUnconstructed temp_1 = object ;
    result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 463)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 463)), temp_1.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 463))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 462)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 465)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 466)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 466)) ;
      }
      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 468)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 468)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 467)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 470)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 471)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 471)) ;
        }
        result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 473)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 473)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 473))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 472)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 475)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_gtlUnconstructed temp_5 = object ;
          result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 476)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 477)), constinArgument_lib, temp_5, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 476)) ;
        }else if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 483)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 483)).add_operation (GALGAS_string ("' for unconstructed target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 483)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 483)) ;
          result_result.drop () ; // Release error dropped variable
        }
      }
    }
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlUnconstructed_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                      extensionGetter_gtlUnconstructed_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlUnconstructed_performGetter (defineExtensionGetter_gtlUnconstructed_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension setter '@gtlUnconstructed performSetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlUnconstructed_performSetter (cPtr_gtlData * inObject,
                                                            const GALGAS_lstring constinArgument_methodName,
                                                            const GALGAS_gtlDataList constinArgument_arguments,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlUnconstructed * object = (cPtr_gtlUnconstructed *) inObject ;
  macroValidSharedObject (object, cPtr_gtlUnconstructed) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 495)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 496)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 496)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 497)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 497)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 497)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 497)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 497)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_15591 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_15591.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 498)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 498)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 499)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 500)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 501)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 501)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 502)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 503)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlUnconstructed temp_4 = object ;
        GALGAS_gtlData var_copy_15896 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("unconstructed"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 505)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 506)), constinArgument_lib, var_copy_15896, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 505)) ;
        object->mAttribute_where = var_copy_15896.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 511)) ;
        object->mAttribute_meta = var_copy_15896.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 512)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 514)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 514)).add_operation (GALGAS_string ("' for unconstructed target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 514)), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 514)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlUnconstructed_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlUnconstructed.mSlotID,
                                      extensionSetter_gtlUnconstructed_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlUnconstructed_performSetter (defineExtensionSetter_gtlUnconstructed_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlType_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint & constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 528)).add_operation (GALGAS_string ("type: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 528)).add_operation (extensionGetter_typeName (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 529)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 529)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_desc (defineExtensionGetter_gtlType_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlType_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = extensionGetter_typeName (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 532)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                               extensionGetter_gtlType_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_string (defineExtensionGetter_gtlType_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlType lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlType_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  result_result = GALGAS_lstring::constructor_new (extensionGetter_typeName (object->mAttribute_type, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 535)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 535)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                extensionGetter_gtlType_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_lstring (defineExtensionGetter_gtlType_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlType_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a type to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 539)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_bool (defineExtensionGetter_gtlType_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlType_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a type to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 543)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                            extensionGetter_gtlType_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_int (defineExtensionGetter_gtlType_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlType_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a type to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 547)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_float (defineExtensionGetter_gtlType_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 551)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                               extensionGetter_gtlType_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_plusOp (defineExtensionGetter_gtlType_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlType minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 554)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                extensionGetter_gtlType_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_minusOp (defineExtensionGetter_gtlType_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 557)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_notOp (defineExtensionGetter_gtlType_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 560)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_addOp (defineExtensionGetter_gtlType_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 563)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_subOp (defineExtensionGetter_gtlType_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 566)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_mulOp (defineExtensionGetter_gtlType_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 569)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_divOp (defineExtensionGetter_gtlType_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 572)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_modOp (defineExtensionGetter_gtlType_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 575)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_andOp (defineExtensionGetter_gtlType_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 578)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_orOp (defineExtensionGetter_gtlType_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 581)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_xorOp (defineExtensionGetter_gtlType_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 584)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_slOp (defineExtensionGetter_gtlType_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 587)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_srOp (defineExtensionGetter_gtlType_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlType neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlType).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlType temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlType *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlType *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlType", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 591)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 591)), GALGAS_bool (kIsNotEqual, object->mAttribute_type.objectCompare (temp_1.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 591))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 591)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 593)), GALGAS_string ("type expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 593)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                              extensionGetter_gtlType_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_neqOp (defineExtensionGetter_gtlType_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlType).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlType temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlType *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlType *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlType", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 598)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 598)), GALGAS_bool (kIsEqual, object->mAttribute_type.objectCompare (temp_1.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 598))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 598)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 600)), GALGAS_string ("type expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 600)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_eqOp (defineExtensionGetter_gtlType_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 604)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_gtOp (defineExtensionGetter_gtlType_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 607)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_geOp (defineExtensionGetter_gtlType_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 610)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_ltOp (defineExtensionGetter_gtlType_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlType leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("type forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 613)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                             extensionGetter_gtlType_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_leOp (defineExtensionGetter_gtlType_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlType embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlType_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_type) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlType_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                     extensionGetter_gtlType_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_embeddedType (defineExtensionGetter_gtlType_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlType addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlType_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_type.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 623))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 623)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlType_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                   extensionMethod_gtlType_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlType_addMyValue (defineExtensionMethod_gtlType_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlType performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlType_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_methodName,
                                                             const GALGAS_gtlDataList & constinArgument_arguments,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlType * object = (const cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 635)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 636)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 636)) ;
    }
    const GALGAS_gtlType temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 638)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 638)), callExtensionGetter_string ((const cPtr_gtlType *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 638))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 637)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 640)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 641)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 641)) ;
      }
      const GALGAS_gtlType temp_3 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 643)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 643)), temp_3.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 643))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 642)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 645)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 646)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 646)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 648)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 648)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 647)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 650)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 651)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 651)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 653)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 653)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 653))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 652)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 655)).boolEnum () ;
          if (kBoolTrue == test_6) {
            const GALGAS_gtlType temp_7 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 656)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 657)), constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 656)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 663)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 663)).add_operation (GALGAS_string ("' for type target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 663)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 663)) ;
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

static void defineExtensionGetter_gtlType_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                      extensionGetter_gtlType_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlType_performGetter (defineExtensionGetter_gtlType_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlType performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlType_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlType * object = (cPtr_gtlType *) inObject ;
  macroValidSharedObject (object, cPtr_gtlType) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 675)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 676)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 676)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 677)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 677)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 677)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 677)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 677)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_21675 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_21675.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 678)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 678)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 679)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 680)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 681)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 681)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 682)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 683)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlType temp_4 = object ;
        GALGAS_gtlData var_copy_21971 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("type"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 685)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 686)), constinArgument_lib, var_copy_21971, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 685)) ;
        GALGAS_gtlType temp_5 ;
        if (var_copy_21971.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlType *> (var_copy_21971.ptr ())) {
            temp_5 = (cPtr_gtlType *) var_copy_21971.ptr () ;
          }else{
            inCompiler->castError ("gtlType", var_copy_21971.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 691)) ;
          }
        }
        object->mAttribute_type = temp_5.getter_type (SOURCE_FILE ("gtl_data_types.galgas", 691)) ;
        object->mAttribute_where = var_copy_21971.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 692)) ;
        object->mAttribute_meta = var_copy_21971.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 693)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 695)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 695)).add_operation (GALGAS_string ("' for type target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 695)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 695)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlType_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlType.mSlotID,
                                      extensionSetter_gtlType_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlType_performSetter (defineExtensionSetter_gtlType_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEnum_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint & constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 708)).add_operation (GALGAS_string ("enum: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 708)).add_operation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 709)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 709)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_desc (defineExtensionGetter_gtlEnum_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlEnum_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                               extensionGetter_gtlEnum_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_string (defineExtensionGetter_gtlEnum_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlEnum lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlEnum_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value, object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 715)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                extensionGetter_gtlEnum_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_lstring (defineExtensionGetter_gtlEnum_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlEnum_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an enum to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 719)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_bool (defineExtensionGetter_gtlEnum_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlEnum_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an enum to an int"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 723)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                            extensionGetter_gtlEnum_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_int (defineExtensionGetter_gtlEnum_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlEnum_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an enum to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 727)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_float (defineExtensionGetter_gtlEnum_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 731)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                               extensionGetter_gtlEnum_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_plusOp (defineExtensionGetter_gtlEnum_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlEnum minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 734)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                extensionGetter_gtlEnum_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_minusOp (defineExtensionGetter_gtlEnum_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 737)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_notOp (defineExtensionGetter_gtlEnum_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 740)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_addOp (defineExtensionGetter_gtlEnum_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 743)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_subOp (defineExtensionGetter_gtlEnum_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 746)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_mulOp (defineExtensionGetter_gtlEnum_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 749)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_divOp (defineExtensionGetter_gtlEnum_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 752)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_modOp (defineExtensionGetter_gtlEnum_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 755)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_andOp (defineExtensionGetter_gtlEnum_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 758)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_orOp (defineExtensionGetter_gtlEnum_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 761)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_xorOp (defineExtensionGetter_gtlEnum_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 764)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_slOp (defineExtensionGetter_gtlEnum_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 767)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_srOp (defineExtensionGetter_gtlEnum_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlEnum neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlEnum).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlEnum temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlEnum *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlEnum *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlEnum", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 774)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 773)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 774))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 771)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 777)), GALGAS_string ("enum expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 777)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                              extensionGetter_gtlEnum_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_neqOp (defineExtensionGetter_gtlEnum_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlEnum).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlEnum temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlEnum *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlEnum *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlEnum", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 785)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 784)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 785))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 782)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 788)), GALGAS_string ("enum expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 788)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_eqOp (defineExtensionGetter_gtlEnum_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 792)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_gtOp (defineExtensionGetter_gtlEnum_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 795)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_geOp (defineExtensionGetter_gtlEnum_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 798)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_ltOp (defineExtensionGetter_gtlEnum_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlEnum leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 801)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                             extensionGetter_gtlEnum_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_leOp (defineExtensionGetter_gtlEnum_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlEnum embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlEnum_embeddedType (const cPtr_gtlData * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 806)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlEnum_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                     extensionGetter_gtlEnum_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_embeddedType (defineExtensionGetter_gtlEnum_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlEnum addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlEnum_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & /* ioArgument_objectList */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("enum forbidden as built in function argument"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 811)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlEnum_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                   extensionMethod_gtlEnum_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlEnum_addMyValue (defineExtensionMethod_gtlEnum_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlEnum performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlEnum_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_methodName,
                                                             const GALGAS_gtlDataList & constinArgument_arguments,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlEnum * object = (const cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 823)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 824)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 824)) ;
    }
    const GALGAS_gtlEnum temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 826)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 826)), callExtensionGetter_string ((const cPtr_gtlEnum *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 826))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 825)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 828)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 829)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 829)) ;
      }
      const GALGAS_gtlEnum temp_3 = object ;
      result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 831)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 831)), temp_3.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 831))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 830)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 833)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 834)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 834)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 836)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 836)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 835)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 838)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 839)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 839)) ;
          }
          result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 841)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 841)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 841))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 840)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 843)).boolEnum () ;
          if (kBoolTrue == test_6) {
            const GALGAS_gtlEnum temp_7 = object ;
            result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 844)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 845)), constinArgument_lib, temp_7, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 844)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 851)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 851)).add_operation (GALGAS_string ("' for enum target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 851)), fixItArray8  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 851)) ;
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

static void defineExtensionGetter_gtlEnum_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                      extensionGetter_gtlEnum_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlEnum_performGetter (defineExtensionGetter_gtlEnum_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlEnum performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlEnum_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlEnum * object = (cPtr_gtlEnum *) inObject ;
  macroValidSharedObject (object, cPtr_gtlEnum) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 863)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 864)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 864)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 865)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_27868 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_27868.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 866)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 866)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 867)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 868)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 869)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 869)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 870)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 871)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlEnum temp_4 = object ;
        GALGAS_gtlData var_copy_28164 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("enum"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 873)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 874)), constinArgument_lib, var_copy_28164, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 873)) ;
        GALGAS_gtlEnum temp_5 ;
        if (var_copy_28164.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlEnum *> (var_copy_28164.ptr ())) {
            temp_5 = (cPtr_gtlEnum *) var_copy_28164.ptr () ;
          }else{
            inCompiler->castError ("gtlEnum", var_copy_28164.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 879)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 879)) ;
        object->mAttribute_where = var_copy_28164.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 880)) ;
        object->mAttribute_meta = var_copy_28164.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 881)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 883)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 883)).add_operation (GALGAS_string ("' for enum target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 883)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 883)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlEnum_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlEnum.mSlotID,
                                      extensionSetter_gtlEnum_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlEnum_performSetter (defineExtensionSetter_gtlEnum_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlChar_desc (const cPtr_gtlData * inObject,
                                                   const GALGAS_uint & constinArgument_tab,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 896)).add_operation (GALGAS_string ("char: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 896)).add_operation (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 897)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 897)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 897)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_desc (defineExtensionGetter_gtlChar_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlChar_string (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 900)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                               extensionGetter_gtlChar_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_string (defineExtensionGetter_gtlChar_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlChar lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlChar_lstring (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 903)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 903)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                extensionGetter_gtlChar_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_lstring (defineExtensionGetter_gtlChar_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlChar_bool (const cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a char to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 907)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_bool (defineExtensionGetter_gtlChar_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlChar_int (const cPtr_gtlData * inObject,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  result_result = object->mAttribute_value.getter_uint (SOURCE_FILE ("gtl_data_types.galgas", 911)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 911)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                            extensionGetter_gtlChar_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_int (defineExtensionGetter_gtlChar_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlChar_float (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a char to a float"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 915)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_float (defineExtensionGetter_gtlChar_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_plusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 919)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                               extensionGetter_gtlChar_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_plusOp (defineExtensionGetter_gtlChar_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlChar minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_minusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 923)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                extensionGetter_gtlChar_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_minusOp (defineExtensionGetter_gtlChar_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_notOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 927)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_notOp (defineExtensionGetter_gtlChar_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_addOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 931)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_addOp (defineExtensionGetter_gtlChar_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_subOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 935)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_subOp (defineExtensionGetter_gtlChar_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_mulOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 939)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_mulOp (defineExtensionGetter_gtlChar_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_divOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 943)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_divOp (defineExtensionGetter_gtlChar_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_modOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 947)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_modOp (defineExtensionGetter_gtlChar_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_andOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 951)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_andOp (defineExtensionGetter_gtlChar_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_orOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 955)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_orOp (defineExtensionGetter_gtlChar_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_xorOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 959)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_xorOp (defineExtensionGetter_gtlChar_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_slOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 963)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_slOp (defineExtensionGetter_gtlChar_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_srOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & /* constinArgument_right */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("char forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 967)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_srOp (defineExtensionGetter_gtlChar_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlChar neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_neqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 975)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 974)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 975))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 972)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 978)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 978)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                              extensionGetter_gtlChar_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_neqOp (defineExtensionGetter_gtlChar_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_eqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 987)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 986)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 987))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 984)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 990)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 990)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_eqOp (defineExtensionGetter_gtlChar_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_gtOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 999)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 998)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 999))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 996)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_right.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1002)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1002)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_gtOp (defineExtensionGetter_gtlChar_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_geOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1011)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1010)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1011))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1008)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1014)), GALGAS_string ("char expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1014)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_geOp (defineExtensionGetter_gtlChar_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_ltOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1023)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1022)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1023))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1020)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1026)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1026)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_ltOp (defineExtensionGetter_gtlChar_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlChar leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_leOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlChar).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlChar temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlChar *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlChar", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1035)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1034)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1035))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1032)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1038)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1038)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                             extensionGetter_gtlChar_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_leOp (defineExtensionGetter_gtlChar_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlChar embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlChar_embeddedType (const cPtr_gtlData * /* inObject */,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_char) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                     extensionGetter_gtlChar_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_embeddedType (defineExtensionGetter_gtlChar_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlChar addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlChar_addMyValue (const cPtr_gtlData * inObject,
                                                GALGAS_objectlist & ioArgument_objectList,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1049))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1049)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlChar_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                   extensionMethod_gtlChar_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlChar_addMyValue (defineExtensionMethod_gtlChar_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlChar performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlChar_performGetter (const cPtr_gtlData * inObject,
                                                             const GALGAS_lstring & constinArgument_methodName,
                                                             const GALGAS_gtlDataList & constinArgument_arguments,
                                                             const GALGAS_library & constinArgument_lib,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlChar * object = (const cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1061)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1062)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1062)) ;
    }
    const GALGAS_gtlChar temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1064)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1064)), callExtensionGetter_string ((const cPtr_gtlChar *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1064))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1063)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("isAlnum").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1066)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1067)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1067)) ;
      }
      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1069)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1069)), object->mAttribute_value.getter_isalnum (SOURCE_FILE ("gtl_data_types.galgas", 1069))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1068)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("isCntrl").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1071)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1072)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1072)) ;
        }
        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1074)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1074)), object->mAttribute_value.getter_iscntrl (SOURCE_FILE ("gtl_data_types.galgas", 1074))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1073)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("isDigit").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1076)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1077)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1077)) ;
          }
          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1079)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1079)), object->mAttribute_value.getter_isdigit (SOURCE_FILE ("gtl_data_types.galgas", 1079))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1078)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("isAlpha").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1081)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1082)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1082)) ;
            }
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1084)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1084)), object->mAttribute_value.getter_isalpha (SOURCE_FILE ("gtl_data_types.galgas", 1084))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1083)) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("isLower").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1086)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1087)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1087)) ;
              }
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1089)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1089)), object->mAttribute_value.getter_islower (SOURCE_FILE ("gtl_data_types.galgas", 1089))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1088)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("isUpper").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1091)))).boolEnum () ;
              if (kBoolTrue == test_7) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1092)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1092)) ;
                }
                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1094)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1094)), object->mAttribute_value.getter_isupper (SOURCE_FILE ("gtl_data_types.galgas", 1094))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1093)) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("isXDigit").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1096)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1097)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1097)) ;
                  }
                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1099)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1099)), object->mAttribute_value.getter_isxdigit (SOURCE_FILE ("gtl_data_types.galgas", 1099))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1098)) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1101)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1102)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1102)) ;
                    }
                    const GALGAS_gtlChar temp_10 = object ;
                    result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1104)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1104)), temp_10.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1104))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1103)) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1106)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1107)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1107)) ;
                      }
                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1109)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1109)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1108)) ;
                    }else if (kBoolFalse == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1111)))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1112)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1112)) ;
                        }
                        result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1114)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1114)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1114))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1113)) ;
                      }else if (kBoolFalse == test_12) {
                        const enumGalgasBool test_13 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1116)).boolEnum () ;
                        if (kBoolTrue == test_13) {
                          const GALGAS_gtlChar temp_14 = object ;
                          result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1117)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1118)), constinArgument_lib, temp_14, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1117)) ;
                        }else if (kBoolFalse == test_13) {
                          TC_Array <C_FixItDescription> fixItArray15 ;
                          inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1124)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1124)).add_operation (GALGAS_string ("' for char target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1124)), fixItArray15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1124)) ;
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
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlChar_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                      extensionGetter_gtlChar_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlChar_performGetter (defineExtensionGetter_gtlChar_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlChar performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlChar_performSetter (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_methodName,
                                                   const GALGAS_gtlDataList constinArgument_arguments,
                                                   const GALGAS_library constinArgument_lib,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlChar * object = (cPtr_gtlChar *) inObject ;
  macroValidSharedObject (object, cPtr_gtlChar) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1136)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1137)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1137)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1138)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_36052 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_36052.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1139)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1139)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1140)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1141)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1142)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1142)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1143)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1144)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlChar temp_4 = object ;
        GALGAS_gtlData var_copy_36348 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("char"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1146)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1147)), constinArgument_lib, var_copy_36348, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1146)) ;
        GALGAS_gtlChar temp_5 ;
        if (var_copy_36348.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlChar *> (var_copy_36348.ptr ())) {
            temp_5 = (cPtr_gtlChar *) var_copy_36348.ptr () ;
          }else{
            inCompiler->castError ("gtlChar", var_copy_36348.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1152)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1152)) ;
        object->mAttribute_where = var_copy_36348.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1153)) ;
        object->mAttribute_meta = var_copy_36348.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1154)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1156)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1156)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1156)).add_operation (GALGAS_string ("' for char target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1156)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1156)) ;
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlChar_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlChar.mSlotID,
                                      extensionSetter_gtlChar_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlChar_performSetter (defineExtensionSetter_gtlChar_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInt_desc (const cPtr_gtlData * inObject,
                                                  const GALGAS_uint & constinArgument_tab,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1169)).add_operation (GALGAS_string ("integer: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1169)).add_operation (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1170)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1170)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_desc (defineExtensionGetter_gtlInt_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlInt_string (const cPtr_gtlData * inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1173)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                               extensionGetter_gtlInt_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_string (defineExtensionGetter_gtlInt_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt lstring'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlInt_lstring (const cPtr_gtlData * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1176)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1176)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                extensionGetter_gtlInt_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_lstring (defineExtensionGetter_gtlInt_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlInt_bool (const cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast an int to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1180)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_bool (defineExtensionGetter_gtlInt_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Overriding extension getter '@gtlInt int'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlInt_int (const cPtr_gtlData * inObject,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                            extensionGetter_gtlInt_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_int (defineExtensionGetter_gtlInt_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt float'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlInt_float (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = object->mAttribute_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1188)).getter_double (SOURCE_FILE ("gtl_data_types.galgas", 1188)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_float (defineExtensionGetter_gtlInt_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_plusOp (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const GALGAS_gtlInt temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                               extensionGetter_gtlInt_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_plusOp (defineExtensionGetter_gtlInt_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlInt minusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_minusOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1194)), object->mAttribute_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1194))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1194)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                extensionGetter_gtlInt_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_minusOp (defineExtensionGetter_gtlInt_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt notOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_notOp (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1198)), object->mAttribute_value.operator_tilde (SOURCE_FILE ("gtl_data_types.galgas", 1198))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1198)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_notOp (defineExtensionGetter_gtlInt_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt addOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_addOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1206)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1205)), object->mAttribute_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1206)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1206))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1203)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1209)), GALGAS_string ("*int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1209)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_addOp (defineExtensionGetter_gtlInt_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt subOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_subOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1218)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1217)), object->mAttribute_value.substract_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1218)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1218))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1215)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1221)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1221)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_subOp (defineExtensionGetter_gtlInt_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt mulOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_mulOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1230)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1229)), object->mAttribute_value.multiply_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1230)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1230))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1227)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1233)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1233)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_mulOp (defineExtensionGetter_gtlInt_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt divOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_divOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1242)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1241)), object->mAttribute_value.divide_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1242)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1242))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1239)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1245)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1245)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_divOp (defineExtensionGetter_gtlInt_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt modOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_modOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1254)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1253)), object->mAttribute_value.modulo_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1254))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1251)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1257)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1257)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_modOp (defineExtensionGetter_gtlInt_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt andOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_andOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1266)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1265)), object->mAttribute_value.operator_and (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1266)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1266))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1263)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1269)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1269)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_andOp (defineExtensionGetter_gtlInt_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_orOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1278)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1277)), object->mAttribute_value.operator_or (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1278)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1278))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1275)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1281)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1281)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_orOp (defineExtensionGetter_gtlInt_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt xorOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_xorOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1290)) ;
      }
    }
    result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1289)), object->mAttribute_value.operator_xor (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1290)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1290))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1287)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1293)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1293)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_xorOp (defineExtensionGetter_gtlInt_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_slOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1299)) ;
      }
    }
    GALGAS_bigint var_r_40173 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1299)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_r_40173.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1300)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_gtlInt temp_3 ;
      if (constinArgument_right.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
          temp_3 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1304)) ;
        }
      }
      result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1303)), object->mAttribute_value.left_shift_operation (temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1304)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1304)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1304))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1301)) ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1307)), GALGAS_string ("positive int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1307)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1310)), GALGAS_string ("int expected"), fixItArray5  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1310)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_slOp (defineExtensionGetter_gtlInt_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_srOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1316)) ;
      }
    }
    GALGAS_bigint var_r_40607 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1316)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsSupOrEqual, var_r_40607.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1317)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_result = GALGAS_gtlInt::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1318)), object->mAttribute_value.right_shift_operation (var_r_40607.getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1318)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1318))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1318)) ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1320)), GALGAS_string ("positive int expected"), fixItArray3  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1320)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1323)), GALGAS_string ("int expected"), fixItArray4  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1323)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_srOp (defineExtensionGetter_gtlInt_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt neqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_neqOp (const cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData & constinArgument_right,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1332)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1331)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1332))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1329)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1335)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1335)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                              extensionGetter_gtlInt_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_neqOp (defineExtensionGetter_gtlInt_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_eqOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1344)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1343)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1344))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1341)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1347)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1347)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_eqOp (defineExtensionGetter_gtlInt_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_gtOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1356)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1355)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1356))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1353)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1359)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1359)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_gtOp (defineExtensionGetter_gtlInt_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_geOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1368)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1367)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1368))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1365)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1371)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1371)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_geOp (defineExtensionGetter_gtlInt_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_ltOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1380)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1379)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1380))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1377)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1383)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1383)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_ltOp (defineExtensionGetter_gtlInt_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlInt leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_leOp (const cPtr_gtlData * inObject,
                                                   const GALGAS_gtlData & constinArgument_right,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlInt).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlInt temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlInt *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1392)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1391)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1392))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1389)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1395)), GALGAS_string ("int expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1395)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                             extensionGetter_gtlInt_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_leOp (defineExtensionGetter_gtlInt_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlInt embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlInt_embeddedType (const cPtr_gtlData * /* inObject */,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_bigint) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                     extensionGetter_gtlInt_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_embeddedType (defineExtensionGetter_gtlInt_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Overriding extension method '@gtlInt addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInt_addMyValue (const cPtr_gtlData * inObject,
                                               GALGAS_objectlist & ioArgument_objectList,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1406))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1406)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInt_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                   extensionMethod_gtlInt_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInt_addMyValue (defineExtensionMethod_gtlInt_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension getter '@gtlInt performGetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlInt_performGetter (const cPtr_gtlData * inObject,
                                                            const GALGAS_lstring & constinArgument_methodName,
                                                            const GALGAS_gtlDataList & constinArgument_arguments,
                                                            const GALGAS_library & constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlInt * object = (const cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1418)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1419)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1419)) ;
    }
    const GALGAS_gtlInt temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1421)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1421)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1421))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1420)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("padded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1423)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1424)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1424)) ;
      }
      GALGAS_gtlInt temp_3 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)).ptr ())) {
          temp_3 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)) ;
        }
      }
      GALGAS_uint var_fieldSize_43401 = temp_3.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1425)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1425)) ;
      const GALGAS_gtlInt temp_4 = object ;
      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1427)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1428)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1429)).getter_stringByLeftAndRightPadding (var_fieldSize_43401, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1429))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1426)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("leftPadded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1431)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1432)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1432)) ;
        }
        GALGAS_gtlInt temp_6 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)).ptr ())) {
            temp_6 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)).ptr () ;
          }else{
            inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)) ;
          }
        }
        GALGAS_uint var_fieldSize_43742 = temp_6.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1433)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1433)) ;
        const GALGAS_gtlInt temp_7 = object ;
        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1435)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1436)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_7.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1437)).getter_stringByLeftPadding (var_fieldSize_43742, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1437))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1434)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("rightPadded").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1439)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1440)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1440)) ;
          }
          GALGAS_gtlInt temp_9 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)).ptr ())) {
              temp_9 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)).ptr () ;
            }else{
              inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)) ;
            }
          }
          GALGAS_uint var_fieldSize_44077 = temp_9.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1441)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1441)) ;
          const GALGAS_gtlInt temp_10 = object ;
          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1443)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1444)), callExtensionGetter_string ((const cPtr_gtlInt *) temp_10.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1445)).getter_stringByRightPadding (var_fieldSize_44077, GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1445))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1442)) ;
        }else if (kBoolFalse == test_8) {
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("hexString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1447)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1448)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1448)) ;
            }
            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1450)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1450)), object->mAttribute_value.getter_hexString (SOURCE_FILE ("gtl_data_types.galgas", 1450))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1449)) ;
          }else if (kBoolFalse == test_11) {
            const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("xString").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1452)))).boolEnum () ;
            if (kBoolTrue == test_12) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1453)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1453)) ;
              }
              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1455)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1455)), object->mAttribute_value.getter_xString (SOURCE_FILE ("gtl_data_types.galgas", 1455))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1454)) ;
            }else if (kBoolFalse == test_12) {
              const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, GALGAS_string ("numberOfBytes").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1457)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1458)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1458)) ;
                }
                result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1460)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1461)), object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1462)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1462)).substract_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1462)).divide_operation (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1462)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1462)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1462))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1459)) ;
              }else if (kBoolFalse == test_13) {
                const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, GALGAS_string ("signedNumberOfBytes").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1464)))).boolEnum () ;
                if (kBoolTrue == test_14) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1465)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1465)) ;
                  }
                  result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1467)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1468)), object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1469)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1469)).substract_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1469)).divide_operation (GALGAS_uint ((uint32_t) 8U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1469)).add_operation (GALGAS_uint ((uint32_t) 1U).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1469)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1469))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1466)) ;
                }else if (kBoolFalse == test_14) {
                  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_string ("numberOfBits").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1471)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1472)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1472)) ;
                    }
                    result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1474)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1475)), object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1476)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1476))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1473)) ;
                  }else if (kBoolFalse == test_15) {
                    const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, GALGAS_string ("signedNumberOfBits").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1478)))).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1479)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1479)) ;
                      }
                      result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1481)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1482)), object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1483)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1483))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1480)) ;
                    }else if (kBoolFalse == test_16) {
                      const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("sign").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1485)))).boolEnum () ;
                      if (kBoolTrue == test_17) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1486)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1486)) ;
                        }
                        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1488)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1489)), object->mAttribute_value.getter_sign (SOURCE_FILE ("gtl_data_types.galgas", 1490)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1490))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1487)) ;
                      }else if (kBoolFalse == test_17) {
                        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInByte").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1492)))).boolEnum () ;
                        if (kBoolTrue == test_18) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1493)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1493)) ;
                          }
                          result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1495)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1496)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1497)).objectCompare (GALGAS_uint ((uint32_t) 8U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1494)) ;
                        }else if (kBoolFalse == test_18) {
                          const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInByte").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1499)))).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1500)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1500)) ;
                            }
                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1502)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1503)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1504)).objectCompare (GALGAS_uint ((uint32_t) 8U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1501)) ;
                          }else if (kBoolFalse == test_19) {
                            const enumGalgasBool test_20 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInShort").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1506)))).boolEnum () ;
                            if (kBoolTrue == test_20) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1507)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1507)) ;
                              }
                              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1509)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1510)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1511)).objectCompare (GALGAS_uint ((uint32_t) 16U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1508)) ;
                            }else if (kBoolFalse == test_20) {
                              const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInShort").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1513)))).boolEnum () ;
                              if (kBoolTrue == test_21) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1514)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1514)) ;
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1516)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1517)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1518)).objectCompare (GALGAS_uint ((uint32_t) 16U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1515)) ;
                              }else if (kBoolFalse == test_21) {
                                const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1520)))).boolEnum () ;
                                if (kBoolTrue == test_22) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1521)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1521)) ;
                                  }
                                  result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1523)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1524)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1525)).objectCompare (GALGAS_uint ((uint32_t) 32U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1522)) ;
                                }else if (kBoolFalse == test_22) {
                                  const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1527)))).boolEnum () ;
                                  if (kBoolTrue == test_23) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1528)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1528)) ;
                                    }
                                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1530)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1531)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1532)).objectCompare (GALGAS_uint ((uint32_t) 32U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1529)) ;
                                  }else if (kBoolFalse == test_23) {
                                    const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsUnsignedInLongLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1534)))).boolEnum () ;
                                    if (kBoolTrue == test_24) {
                                      {
                                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1535)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1535)) ;
                                      }
                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1537)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1538)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForUnsignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1539)).objectCompare (GALGAS_uint ((uint32_t) 64U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1536)) ;
                                    }else if (kBoolFalse == test_24) {
                                      const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, GALGAS_string ("fitsSignedInLongLong").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1541)))).boolEnum () ;
                                      if (kBoolTrue == test_25) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1542)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1542)) ;
                                        }
                                        result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1544)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1545)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.getter_bitCountForSignedRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 1546)).objectCompare (GALGAS_uint ((uint32_t) 64U)))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1543)) ;
                                      }else if (kBoolFalse == test_25) {
                                        const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, GALGAS_string ("abs").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1548)))).boolEnum () ;
                                        if (kBoolTrue == test_26) {
                                          {
                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1549)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1549)) ;
                                          }
                                          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1551)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1552)), object->mAttribute_value.getter_abs (SOURCE_FILE ("gtl_data_types.galgas", 1553))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1550)) ;
                                        }else if (kBoolFalse == test_26) {
                                          const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_string ("bitAtIndex").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1555)))).boolEnum () ;
                                          if (kBoolTrue == test_27) {
                                            {
                                            routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1556)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1556)) ;
                                            }
                                            GALGAS_gtlInt temp_28 ;
                                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)).isValid ()) {
                                              if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)).ptr ())) {
                                                temp_28 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)).ptr () ;
                                              }else{
                                                inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)) ;
                                              }
                                            }
                                            GALGAS_uint var_index_48273 = temp_28.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1557)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1557)) ;
                                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1559)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1560)), object->mAttribute_value.getter_bitAtIndex (var_index_48273 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1561))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1558)) ;
                                          }else if (kBoolFalse == test_27) {
                                            const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1563)))).boolEnum () ;
                                            if (kBoolTrue == test_29) {
                                              {
                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1564)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1564)) ;
                                              }
                                              const GALGAS_gtlInt temp_30 = object ;
                                              result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1566)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1566)), temp_30.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1566))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1565)) ;
                                            }else if (kBoolFalse == test_29) {
                                              const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1568)))).boolEnum () ;
                                              if (kBoolTrue == test_31) {
                                                {
                                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1569)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1569)) ;
                                                }
                                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1571)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1571)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1570)) ;
                                              }else if (kBoolFalse == test_31) {
                                                const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1573)))).boolEnum () ;
                                                if (kBoolTrue == test_32) {
                                                  {
                                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1574)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1574)) ;
                                                  }
                                                  result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1576)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1576)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1576))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1575)) ;
                                                }else if (kBoolFalse == test_32) {
                                                  const enumGalgasBool test_33 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1578)).boolEnum () ;
                                                  if (kBoolTrue == test_33) {
                                                    const GALGAS_gtlInt temp_34 = object ;
                                                    result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1579)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1580)), constinArgument_lib, temp_34, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1579)) ;
                                                  }else if (kBoolFalse == test_33) {
                                                    TC_Array <C_FixItDescription> fixItArray35 ;
                                                    inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1586)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1586)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1586)).add_operation (GALGAS_string ("' for int target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1586)), fixItArray35  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1586)) ;
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
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInt_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                      extensionGetter_gtlInt_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInt_performGetter (defineExtensionGetter_gtlInt_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension setter '@gtlInt performSetter'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlInt_performSetter (cPtr_gtlData * inObject,
                                                  const GALGAS_lstring constinArgument_methodName,
                                                  const GALGAS_gtlDataList constinArgument_arguments,
                                                  const GALGAS_library constinArgument_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlInt * object = (cPtr_gtlInt *) inObject ;
  macroValidSharedObject (object, cPtr_gtlInt) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1598)).objectCompare (GALGAS_string ("setBitAtIndex"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_boolIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1599)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1599)) ;
    }
    GALGAS_gtlBool temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlBool *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)).ptr ())) {
        temp_1 = (cPtr_gtlBool *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)).ptr () ;
      }else{
        inCompiler->castError ("gtlBool", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1600)) ;
      }
    }
    GALGAS_bool var_bit_49736 = temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1600)) ;
    GALGAS_gtlInt temp_2 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)).ptr ())) {
        temp_2 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)).ptr () ;
      }else{
        inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)) ;
      }
    }
    GALGAS_uint var_index_49801 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1601)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1601)) ;
    {
    object->mAttribute_value.setter_setBitAtIndex (var_bit_49736, var_index_49801 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1602)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1603)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1604)).objectCompare (GALGAS_string ("complementBitAtIndex"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1605)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1605)) ;
      }
      GALGAS_gtlInt temp_4 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)).ptr ())) {
          temp_4 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)) ;
        }
      }
      GALGAS_uint var_index_50052 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1606)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1606)) ;
      {
      object->mAttribute_value.setter_complementBitAtIndex (var_index_50052 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1607)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1608)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1609)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1610)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1610)) ;
        }
        GALGAS_gtlString temp_6 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1611)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1611)).ptr ())) {
            temp_6 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1611)).ptr () ;
          }else{
            inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1611)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1611)) ;
          }
        }
        GALGAS_gtlString var_descriptionToSet_50309 = temp_6 ;
        {
        object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_50309.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1612)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1612)) ;
        }
        object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1613)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1614)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1615)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1615)) ;
          }
          object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1616)) ;
        }else if (kBoolFalse == test_7) {
          const enumGalgasBool test_8 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1617)).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_gtlInt temp_9 = object ;
            GALGAS_gtlData var_copy_50604 = temp_9 ;
            callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("int"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1619)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1620)), constinArgument_lib, var_copy_50604, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1619)) ;
            GALGAS_gtlInt temp_10 ;
            if (var_copy_50604.isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlInt *> (var_copy_50604.ptr ())) {
                temp_10 = (cPtr_gtlInt *) var_copy_50604.ptr () ;
              }else{
                inCompiler->castError ("gtlInt", var_copy_50604.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1625)) ;
              }
            }
            object->mAttribute_value = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1625)) ;
            object->mAttribute_where = var_copy_50604.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1626)) ;
            object->mAttribute_meta = var_copy_50604.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1627)) ;
          }else if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1629)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1629)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1629)).add_operation (GALGAS_string ("' for int target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1629)), fixItArray11  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1629)) ;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlInt_performSetter (void) {
  enterExtensionSetter_performSetter (kTypeDescriptor_GALGAS_gtlInt.mSlotID,
                                      extensionSetter_gtlInt_performSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlInt_performSetter (defineExtensionSetter_gtlInt_performSetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat desc'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFloat_desc (const cPtr_gtlData * inObject,
                                                    const GALGAS_uint & constinArgument_tab,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1642)).add_operation (GALGAS_string ("float: "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1642)).add_operation (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1643)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1643)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_desc (void) {
  enterExtensionGetter_desc (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_desc) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_desc (defineExtensionGetter_gtlFloat_desc, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat string'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_gtlFloat_string (const cPtr_gtlData * inObject,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1646)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_string (void) {
  enterExtensionGetter_string (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                               extensionGetter_gtlFloat_string) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_string (defineExtensionGetter_gtlFloat_string, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat lstring'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring extensionGetter_gtlFloat_lstring (const cPtr_gtlData * inObject,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1649)), object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1649)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_lstring (void) {
  enterExtensionGetter_lstring (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                extensionGetter_gtlFloat_lstring) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_lstring (defineExtensionGetter_gtlFloat_lstring, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat bool'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlFloat_bool (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a float to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1653)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_bool (void) {
  enterExtensionGetter_bool (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_bool) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_bool (defineExtensionGetter_gtlFloat_bool, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Overriding extension getter '@gtlFloat int'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bigint extensionGetter_gtlFloat_int (const cPtr_gtlData * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bigint result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mAttribute_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1657)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1657)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_int (void) {
  enterExtensionGetter_int (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                            extensionGetter_gtlFloat_int) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_int (defineExtensionGetter_gtlFloat_int, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat float'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_double extensionGetter_gtlFloat_float (const cPtr_gtlData * inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_double result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = object->mAttribute_value ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_float (void) {
  enterExtensionGetter_float (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_float) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_float (defineExtensionGetter_gtlFloat_float, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat plusOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_plusOp (const cPtr_gtlData * inObject,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const GALGAS_gtlFloat temp_0 = object ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_plusOp (void) {
  enterExtensionGetter_plusOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                               extensionGetter_gtlFloat_plusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_plusOp (defineExtensionGetter_gtlFloat_plusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Overriding extension getter '@gtlFloat minusOp'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_minusOp (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  result_result = GALGAS_gtlFloat::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1667)), object->mAttribute_value.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1667))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1667)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_minusOp (void) {
  enterExtensionGetter_minusOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                extensionGetter_gtlFloat_minusOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_minusOp (defineExtensionGetter_gtlFloat_minusOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat notOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_notOp (const cPtr_gtlData * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1671)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_notOp (void) {
  enterExtensionGetter_notOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_notOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_notOp (defineExtensionGetter_gtlFloat_notOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat addOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_addOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1679)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1678)), object->mAttribute_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1679)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1679))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1676)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1682)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1682)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_addOp (void) {
  enterExtensionGetter_addOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_addOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_addOp (defineExtensionGetter_gtlFloat_addOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat subOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_subOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1691)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1690)), object->mAttribute_value.substract_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1691)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1691))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1688)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1694)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1694)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_subOp (void) {
  enterExtensionGetter_subOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_subOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_subOp (defineExtensionGetter_gtlFloat_subOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat mulOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_mulOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1703)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1702)), object->mAttribute_value.multiply_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1703))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1700)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1706)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1706)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_mulOp (void) {
  enterExtensionGetter_mulOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_mulOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_mulOp (defineExtensionGetter_gtlFloat_mulOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat divOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_divOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1715)) ;
      }
    }
    result_result = GALGAS_gtlFloat::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1714)), object->mAttribute_value.divide_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1715)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1715))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1712)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1718)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1718)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_divOp (void) {
  enterExtensionGetter_divOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_divOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_divOp (defineExtensionGetter_gtlFloat_divOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat modOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_modOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1723)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_modOp (void) {
  enterExtensionGetter_modOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_modOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_modOp (defineExtensionGetter_gtlFloat_modOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat andOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_andOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1727)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_andOp (void) {
  enterExtensionGetter_andOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_andOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_andOp (defineExtensionGetter_gtlFloat_andOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat orOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_orOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1731)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_orOp (void) {
  enterExtensionGetter_orOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_orOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_orOp (defineExtensionGetter_gtlFloat_orOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat xorOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_xorOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1735)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_xorOp (void) {
  enterExtensionGetter_xorOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_xorOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_xorOp (defineExtensionGetter_gtlFloat_xorOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat slOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_slOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1739)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_slOp (void) {
  enterExtensionGetter_slOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_slOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_slOp (defineExtensionGetter_gtlFloat_slOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat srOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_srOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & /* constinArgument_right */,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("float forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1743)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_srOp (void) {
  enterExtensionGetter_srOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_srOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_srOp (defineExtensionGetter_gtlFloat_srOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat neqOp'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_neqOp (const cPtr_gtlData * inObject,
                                                      const GALGAS_gtlData & constinArgument_right,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1751)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1750)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1751))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1748)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1754)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1754)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_neqOp (void) {
  enterExtensionGetter_neqOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                              extensionGetter_gtlFloat_neqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_neqOp (defineExtensionGetter_gtlFloat_neqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat eqOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_eqOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1763)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1762)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1763))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1760)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1766)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1766)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_eqOp (void) {
  enterExtensionGetter_eqOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_eqOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_eqOp (defineExtensionGetter_gtlFloat_eqOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat gtOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_gtOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1775)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1774)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1775))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1772)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1778)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1778)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_gtOp (void) {
  enterExtensionGetter_gtOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_gtOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_gtOp (defineExtensionGetter_gtlFloat_gtOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat geOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_geOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1787)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1786)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1787))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1784)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1790)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1790)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_geOp (void) {
  enterExtensionGetter_geOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_geOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_geOp (defineExtensionGetter_gtlFloat_geOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat ltOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_ltOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1799)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1798)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1799))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1796)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1802)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1802)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_ltOp (void) {
  enterExtensionGetter_ltOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_ltOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_ltOp (defineExtensionGetter_gtlFloat_ltOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Overriding extension getter '@gtlFloat leOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_leOp (const cPtr_gtlData * inObject,
                                                     const GALGAS_gtlData & constinArgument_right,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (constinArgument_right.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlFloat).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_gtlFloat temp_1 ;
    if (constinArgument_right.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_right.ptr ())) {
        temp_1 = (cPtr_gtlFloat *) constinArgument_right.ptr () ;
      }else{
        inCompiler->castError ("gtlFloat", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1811)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1810)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1811))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1808)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1814)), GALGAS_string ("float expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1814)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_leOp (void) {
  enterExtensionGetter_leOp (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                             extensionGetter_gtlFloat_leOp) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_leOp (defineExtensionGetter_gtlFloat_leOp, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlFloat embeddedType'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_type extensionGetter_gtlFloat_embeddedType (const cPtr_gtlData * /* inObject */,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_result ; // Returned variable
  result_result = GALGAS_type (& kTypeDescriptor_GALGAS_double) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_embeddedType (void) {
  enterExtensionGetter_embeddedType (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                     extensionGetter_gtlFloat_embeddedType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_embeddedType (defineExtensionGetter_gtlFloat_embeddedType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Overriding extension method '@gtlFloat addMyValue'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlFloat_addMyValue (const cPtr_gtlData * inObject,
                                                 GALGAS_objectlist & ioArgument_objectList,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 1825))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1825)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlFloat_addMyValue (void) {
  enterExtensionMethod_addMyValue (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                   extensionMethod_gtlFloat_addMyValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlFloat_addMyValue (defineExtensionMethod_gtlFloat_addMyValue, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension getter '@gtlFloat performGetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlFloat_performGetter (const cPtr_gtlData * inObject,
                                                              const GALGAS_lstring & constinArgument_methodName,
                                                              const GALGAS_gtlDataList & constinArgument_arguments,
                                                              const GALGAS_library & constinArgument_lib,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlFloat * object = (const cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("string").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1837)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1838)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1838)) ;
    }
    const GALGAS_gtlFloat temp_1 = object ;
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1840)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1840)), callExtensionGetter_string ((const cPtr_gtlFloat *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1840))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1839)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("cos").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1842)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1843)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1843)) ;
      }
      result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1845)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1845)), object->mAttribute_value.getter_cos (SOURCE_FILE ("gtl_data_types.galgas", 1845))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1844)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_string ("sin").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1847)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1848)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1848)) ;
        }
        result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1850)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1850)), object->mAttribute_value.getter_sin (SOURCE_FILE ("gtl_data_types.galgas", 1850))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1849)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, GALGAS_string ("tan").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1852)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1853)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1853)) ;
          }
          result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1855)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1855)), object->mAttribute_value.getter_tan (SOURCE_FILE ("gtl_data_types.galgas", 1855))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1854)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, GALGAS_string ("cosDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1857)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1858)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1858)) ;
            }
            result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1860)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1860)), object->mAttribute_value.getter_cosDegree (SOURCE_FILE ("gtl_data_types.galgas", 1860))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1859)) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, GALGAS_string ("sinDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1862)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1863)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1863)) ;
              }
              result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1865)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1865)), object->mAttribute_value.getter_sinDegree (SOURCE_FILE ("gtl_data_types.galgas", 1865))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1864)) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, GALGAS_string ("tanDegree").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1867)))).boolEnum () ;
              if (kBoolTrue == test_7) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1868)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1868)) ;
                }
                result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1870)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1870)), object->mAttribute_value.getter_tanDegree (SOURCE_FILE ("gtl_data_types.galgas", 1870))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1869)) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, GALGAS_string ("exp").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1872)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1873)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1873)) ;
                  }
                  result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1875)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1875)), object->mAttribute_value.getter_exp (SOURCE_FILE ("gtl_data_types.galgas", 1875))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1874)) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, GALGAS_string ("logn").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1877)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1878)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1878)) ;
                    }
                    result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1880)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1880)), object->mAttribute_value.getter_logn (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1880))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1879)) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, GALGAS_string ("log2").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1882)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1883)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1883)) ;
                      }
                      result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1885)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1885)), object->mAttribute_value.getter_log_32_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1885))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1884)) ;
                    }else if (kBoolFalse == test_10) {
                      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, GALGAS_string ("log10").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1887)))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1888)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1888)) ;
                        }
                        result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1890)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1890)), object->mAttribute_value.getter_log_31__30_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1890))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1889)) ;
                      }else if (kBoolFalse == test_11) {
                        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, GALGAS_string ("sqrt").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1892)))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1893)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1893)) ;
                          }
                          result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1895)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1895)), object->mAttribute_value.getter_sqrt (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1895))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1894)) ;
                        }else if (kBoolFalse == test_12) {
                          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, GALGAS_string ("power").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1897)))).boolEnum () ;
                          if (kBoolTrue == test_13) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_floatArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1898)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1898)) ;
                            }
                            GALGAS_gtlFloat temp_14 ;
                            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)).isValid ()) {
                              if (NULL != dynamic_cast <const cPtr_gtlFloat *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)).ptr ())) {
                                temp_14 = (cPtr_gtlFloat *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)).ptr () ;
                              }else{
                                inCompiler->castError ("gtlFloat", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1899)) ;
                              }
                            }
                            GALGAS_double var_power_58807 = temp_14.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1899)) ;
                            result_result = GALGAS_gtlFloat::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1901)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1901)), object->mAttribute_value.getter_power (var_power_58807, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1901))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1900)) ;
                          }else if (kBoolFalse == test_13) {
                            const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1903)))).boolEnum () ;
                            if (kBoolTrue == test_15) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1904)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1904)) ;
                              }
                              const GALGAS_gtlFloat temp_16 = object ;
                              result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1906)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1906)), temp_16.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 1906))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1905)) ;
                            }else if (kBoolFalse == test_15) {
                              const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1908)))).boolEnum () ;
                              if (kBoolTrue == test_17) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1909)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1909)) ;
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1911)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1911)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1910)) ;
                              }else if (kBoolFalse == test_17) {
                                const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, GALGAS_string ("int").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1913)))).boolEnum () ;
                                if (kBoolTrue == test_18) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1914)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1914)) ;
                                  }
                                  result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1916)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1916)), object->mAttribute_value.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1916)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1916))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1915)) ;
                                }else if (kBoolFalse == test_18) {
                                  const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1918)))).boolEnum () ;
                                  if (kBoolTrue == test_19) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1919)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1919)) ;
                                    }
                                    result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1921)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1921)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1921))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1920)) ;
                                  }else if (kBoolFalse == test_19) {
                                    const enumGalgasBool test_20 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1923)).boolEnum () ;
                                    if (kBoolTrue == test_20) {
                                      const GALGAS_gtlFloat temp_21 = object ;
                                      result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1924)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1925)), constinArgument_lib, temp_21, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1924)) ;
                                    }else if (kBoolFalse == test_20) {
                                      TC_Array <C_FixItDescription> fixItArray22 ;
                                      inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1931)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1931)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1931)).add_operation (GALGAS_string ("' for float target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1931)), fixItArray22  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1931)) ;
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
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlFloat_performGetter (void) {
  enterExtensionGetter_performGetter (kTypeDescriptor_GALGAS_gtlFloat.mSlotID,
                                      extensionGetter_gtlFloat_performGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlFloat_performGetter (defineExtensionGetter_gtlFloat_performGetter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Overriding extension setter '@gtlFloat performSetter'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlFloat_performSetter (cPtr_gtlData * inObject,
                                                    const GALGAS_lstring constinArgument_methodName,
                                                    const GALGAS_gtlDataList constinArgument_arguments,
                                                    const GALGAS_library constinArgument_lib,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlFloat * object = (cPtr_gtlFloat *) inObject ;
  macroValidSharedObject (object, cPtr_gtlFloat) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_string ("setDescription").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1943)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1944)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1944)) ;
    }
    GALGAS_gtlString temp_1 ;
    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)).isValid ()) {
      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)).ptr ())) {
        temp_1 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)).ptr () ;
      }else{
        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1945)) ;
      }
    }
    GALGAS_gtlString var_descriptionToSet_60457 = temp_1 ;
    {
    object->setter_setMeta (callExtensionGetter_lstring ((const cPtr_gtlString *) var_descriptionToSet_60457.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1946)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1946)) ;
    }
    object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1947)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("touch").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1948)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1949)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1949)) ;
      }
      object->mAttribute_where = constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1950)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = callExtensionGetter_setterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1951)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_gtlFloat temp_4 = object ;
        GALGAS_gtlData var_copy_60754 = temp_4 ;
        callExtensionMethod_callSetter ((const cPtr_gtlSetter *) callExtensionGetter_getSetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("float"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1953)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1954)), constinArgument_lib, var_copy_60754, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1953)) ;
        GALGAS_gtlFloat temp_5 ;
        if (var_copy_60754.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlFloat *> (var_copy_60754.ptr ())) {
            temp_5 = (cPtr_gtlFloat *) var_copy_60754.ptr () ;
          }else{
            inCompiler->castError ("gtlFloat", var_copy_60754.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1959)) ;
          }
        }
        object->mAttribute_value = temp_5.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 1959)) ;
        object->mAttribute_where = var_copy_60754.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 1960)) ;
        object->mAttribute_meta = var_copy_60754.getter_meta (SOURCE_FILE ("gtl_data_types.galgas", 1961)) ;
      }else if (kBoolFalse == test_3) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 1963)), GALGAS_string ("unknown setter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 1963)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1963)).add_operation (GALGAS_string ("' for float target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1963)), fixItArray6  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1963)) ;
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
                                                     const GALGAS_uint & constinArgument_tab,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  result_result = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), constinArgument_tab  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1976)).add_operation (GALGAS_string ("string: \""), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1976)).add_operation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1977)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1977)) ;
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
  result_result = object->mAttribute_value ;
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
  result_result = GALGAS_lstring::constructor_new (object->mAttribute_value, object->mAttribute_where  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1982)) ;
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
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("cannot cast a string to a bool"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1985)) ;
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
  result_result = object->mAttribute_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1989)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 1989)) ;
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
  result_result = object->mAttribute_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1993)).getter_double (SOURCE_FILE ("gtl_data_types.galgas", 1993)) ;
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
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 1997)) ;
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
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2001)) ;
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
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2005)) ;
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
                                                       const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2013)) ;
      }
    }
    result_result = GALGAS_gtlString::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2012)), object->mAttribute_value.add_operation (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2013)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2013))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2010)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2016)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2016)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2021)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2025)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2029)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2033)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2037)) ;
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
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2041)) ;
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
                                                       const GALGAS_gtlData & /* constinArgument_right */,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2045)) ;
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
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2049)) ;
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
                                                      const GALGAS_gtlData & /* constinArgument_right */,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  TC_Array <C_FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (object->mAttribute_where, GALGAS_string ("string forbidden"), fixItArray0  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2053)) ;
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
                                                       const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2061)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2060)), GALGAS_bool (kIsNotEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2061))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2058)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2064)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2064)) ;
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
                                                      const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2073)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2072)), GALGAS_bool (kIsEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2073))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2070)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2076)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2076)) ;
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
                                                      const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2085)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2084)), GALGAS_bool (kIsStrictSup, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2085))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2082)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2088)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2088)) ;
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
                                                      const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2097)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2096)), GALGAS_bool (kIsSupOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2097))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2094)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2100)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2100)) ;
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
                                                      const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2109)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2108)), GALGAS_bool (kIsStrictInf, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2109))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2106)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2112)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2112)) ;
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
                                                      const GALGAS_gtlData & constinArgument_right,
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
        inCompiler->castError ("gtlString", constinArgument_right.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2121)) ;
      }
    }
    result_result = GALGAS_gtlBool::constructor_new (object->mAttribute_where, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2120)), GALGAS_bool (kIsInfOrEqual, object->mAttribute_value.objectCompare (temp_1.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2121))))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2118)) ;
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_right.getter_where (SOURCE_FILE ("gtl_data_types.galgas", 2124)), GALGAS_string ("string expected"), fixItArray2  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2124)) ;
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
  ioArgument_objectList.addAssign_operation (object->mAttribute_value.getter_object (SOURCE_FILE ("gtl_data_types.galgas", 2135))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2135)) ;
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
                                                               const GALGAS_lstring & constinArgument_methodName,
                                                               const GALGAS_gtlDataList & constinArgument_arguments,
                                                               const GALGAS_library & constinArgument_lib,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlString * object = (const cPtr_gtlString *) inObject ;
  macroValidSharedObject (object, cPtr_gtlString) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2147)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2148)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2148)) ;
    }
    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2150)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2150)), object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2149)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2152)).objectCompare (GALGAS_string ("charAtIndex"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2153)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2153)) ;
      }
      GALGAS_gtlInt temp_2 ;
      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).isValid ()) {
        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr ())) {
          temp_2 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr () ;
        }else{
          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)) ;
        }
      }
      GALGAS_uint var_index_66317 = temp_2.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2154)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2154)) ;
      result_result = GALGAS_gtlChar::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2156)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2156)), object->mAttribute_value.getter_characterAtIndex (var_index_66317, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2156))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2155)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2158)).objectCompare (GALGAS_string ("indexOfChar"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2159)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2159)) ;
        }
        GALGAS_gtlChar temp_4 ;
        if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr ())) {
            temp_4 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr () ;
          }else{
            inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2160)) ;
          }
        }
        GALGAS_char var_lookedUpChar_66616 = temp_4.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2160)) ;
        GALGAS_uint var_index_66681 = GALGAS_uint ((uint32_t) 0U) ;
        GALGAS_uint var_length_66702 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2162)) ;
        GALGAS_bool var_found_66735 = GALGAS_bool (false) ;
        if (var_length_66702.isValid ()) {
          uint32_t variant_66752 = var_length_66702.uintValue () ;
          bool loop_66752 = true ;
          while (loop_66752) {
            GALGAS_bool test_5 = var_found_66735.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2165)) ;
            if (kBoolTrue == test_5.boolEnum ()) {
              test_5 = GALGAS_bool (kIsStrictInf, var_index_66681.objectCompare (var_length_66702)) ;
            }
            loop_66752 = test_5.isValid () ;
            if (loop_66752) {
              loop_66752 = test_5.boolValue () ;
            }
            if (loop_66752 && (0 == variant_66752)) {
              loop_66752 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2164)) ;
            }
            if (loop_66752) {
              variant_66752 -- ;
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_characterAtIndex (var_index_66681, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2166)).objectCompare (var_lookedUpChar_66616)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_found_66735 = GALGAS_bool (true) ;
              }else if (kBoolFalse == test_6) {
                var_index_66681.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2169)) ;
              }
            }
          }
        }
        GALGAS_bigint temp_7 ;
        const enumGalgasBool test_8 = var_found_66735.boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = var_index_66681.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2175)) ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2175)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2175)) ;
        }
        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2173)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2174)), temp_7  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2172)) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2177)).objectCompare (GALGAS_string ("indexOfCharInRange"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          {
          routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2178)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2178)) ;
          }
          GALGAS_gtlChar temp_10 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr ())) {
              temp_10 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2179)) ;
            }
          }
          GALGAS_char var_minChar_67205 = temp_10.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2179)) ;
          GALGAS_gtlChar temp_11 ;
          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).isValid ()) {
            if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr ())) {
              temp_11 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr () ;
            }else{
              inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2180)) ;
            }
          }
          GALGAS_char var_maxChar_67272 = temp_11.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2180)) ;
          GALGAS_uint var_index_67337 = GALGAS_uint ((uint32_t) 0U) ;
          GALGAS_uint var_length_67358 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2182)) ;
          GALGAS_bool var_found_67391 = GALGAS_bool (false) ;
          if (var_length_67358.isValid ()) {
            uint32_t variant_67408 = var_length_67358.uintValue () ;
            bool loop_67408 = true ;
            while (loop_67408) {
              GALGAS_bool test_12 = var_found_67391.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2185)) ;
              if (kBoolTrue == test_12.boolEnum ()) {
                test_12 = GALGAS_bool (kIsStrictInf, var_index_67337.objectCompare (var_length_67358)) ;
              }
              loop_67408 = test_12.isValid () ;
              if (loop_67408) {
                loop_67408 = test_12.boolValue () ;
              }
              if (loop_67408 && (0 == variant_67408)) {
                loop_67408 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2184)) ;
              }
              if (loop_67408) {
                variant_67408 -- ;
                GALGAS_char var_currentChar_67482 = object->mAttribute_value.getter_characterAtIndex (var_index_67337, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2186)) ;
                GALGAS_bool test_13 = GALGAS_bool (kIsSupOrEqual, var_currentChar_67482.objectCompare (var_minChar_67205)) ;
                if (kBoolTrue == test_13.boolEnum ()) {
                  test_13 = GALGAS_bool (kIsInfOrEqual, var_currentChar_67482.objectCompare (var_maxChar_67272)) ;
                }
                const enumGalgasBool test_14 = test_13.boolEnum () ;
                if (kBoolTrue == test_14) {
                  var_found_67391 = GALGAS_bool (true) ;
                }else if (kBoolFalse == test_14) {
                  var_index_67337.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2190)) ;
                }
              }
            }
          }
          GALGAS_bigint temp_15 ;
          const enumGalgasBool test_16 = var_found_67391.boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = var_index_67337.getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2196)) ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2196)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2196)) ;
          }
          result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2194)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2195)), temp_15  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2193)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2198)).objectCompare (GALGAS_string ("containsChar"))).boolEnum () ;
          if (kBoolTrue == test_17) {
            {
            routine_argumentsCheck (constinArgument_methodName, function_charArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2199)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2199)) ;
            }
            GALGAS_gtlChar temp_18 ;
            if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).isValid ()) {
              if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr ())) {
                temp_18 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr () ;
              }else{
                inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
              }
            }
            GALGAS_char var_lookedUpChar_67912 = temp_18.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2200)) ;
            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2202)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2203)), object->mAttribute_value.getter_containsCharacter (var_lookedUpChar_67912 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2204))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2201)) ;
          }else if (kBoolFalse == test_17) {
            const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2206)).objectCompare (GALGAS_string ("containsCharInRange"))).boolEnum () ;
            if (kBoolTrue == test_19) {
              {
              routine_argumentsCheck (constinArgument_methodName, function_charCharArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2207)) ;
              }
              GALGAS_gtlChar temp_20 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr ())) {
                  temp_20 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2208)) ;
                }
              }
              GALGAS_char var_minChar_68235 = temp_20.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2208)) ;
              GALGAS_gtlChar temp_21 ;
              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).isValid ()) {
                if (NULL != dynamic_cast <const cPtr_gtlChar *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr ())) {
                  temp_21 = (cPtr_gtlChar *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr () ;
                }else{
                  inCompiler->castError ("gtlChar", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2209)) ;
                }
              }
              GALGAS_char var_maxChar_68302 = temp_21.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2209)) ;
              result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2211)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2212)), object->mAttribute_value.getter_containsCharacterInRange (var_minChar_68235, var_maxChar_68302 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2213))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2210)) ;
            }else if (kBoolFalse == test_19) {
              const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2215)).objectCompare (GALGAS_string ("HTMLRepresentation"))).boolEnum () ;
              if (kBoolTrue == test_22) {
                {
                routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2216)) ;
                }
                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2218)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2218)), object->mAttribute_value.getter_HTMLRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2218))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2217)) ;
              }else if (kBoolFalse == test_22) {
                const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2220)).objectCompare (GALGAS_string ("identifierRepresentation"))).boolEnum () ;
                if (kBoolTrue == test_23) {
                  {
                  routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2221)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2221)) ;
                  }
                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2223)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2223)), object->mAttribute_value.getter_identifierRepresentation (SOURCE_FILE ("gtl_data_types.galgas", 2223))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2222)) ;
                }else if (kBoolFalse == test_23) {
                  const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2225)).objectCompare (GALGAS_string ("fileExists"))).boolEnum () ;
                  if (kBoolTrue == test_24) {
                    {
                    routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2226)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2226)) ;
                    }
                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2228)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2228)), object->mAttribute_value.getter_fileExists (SOURCE_FILE ("gtl_data_types.galgas", 2228))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2227)) ;
                  }else if (kBoolFalse == test_24) {
                    const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2230)).objectCompare (GALGAS_string ("lowercaseString"))).boolEnum () ;
                    if (kBoolTrue == test_25) {
                      {
                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2231)) ;
                      }
                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2233)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2233)), object->mAttribute_value.getter_lowercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2233))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2232)) ;
                    }else if (kBoolFalse == test_25) {
                      const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2235)).objectCompare (GALGAS_string ("length"))).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        {
                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2236)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2236)) ;
                        }
                        result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2238)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2238)), object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2238)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2238))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2237)) ;
                      }else if (kBoolFalse == test_26) {
                        GALGAS_bool test_27 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2240)).objectCompare (GALGAS_string ("capitalized"))) ;
                        if (kBoolTrue != test_27.boolEnum ()) {
                          test_27 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2241)))) ;
                        }
                        const enumGalgasBool test_28 = test_27.boolEnum () ;
                        if (kBoolTrue == test_28) {
                          {
                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2242)) ;
                          }
                          result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2244)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2244)), object->mAttribute_value.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("gtl_data_types.galgas", 2244))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2243)) ;
                        }else if (kBoolFalse == test_28) {
                          const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2246)).objectCompare (GALGAS_string ("uppercaseString"))).boolEnum () ;
                          if (kBoolTrue == test_29) {
                            {
                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2247)) ;
                            }
                            result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2249)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2249)), object->mAttribute_value.getter_uppercaseString (SOURCE_FILE ("gtl_data_types.galgas", 2249))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2248)) ;
                          }else if (kBoolFalse == test_29) {
                            const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2251)).objectCompare (GALGAS_string ("unsigned"))).boolEnum () ;
                            if (kBoolTrue == test_30) {
                              {
                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2252)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2252)) ;
                              }
                              result_result = GALGAS_gtlInt::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2254)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)), object->mAttribute_value.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2254)).getter_bigint (SOURCE_FILE ("gtl_data_types.galgas", 2254))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2253)) ;
                            }else if (kBoolFalse == test_30) {
                              const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2256)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                              if (kBoolTrue == test_31) {
                                {
                                routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2257)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2257)) ;
                                }
                                GALGAS_gtlString temp_32 ;
                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).isValid ()) {
                                  if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr ())) {
                                    temp_32 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr () ;
                                  }else{
                                    inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2258)) ;
                                  }
                                }
                                GALGAS_string var_subString_70451 = temp_32.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2258)) ;
                                GALGAS_uint var_subStringLength_70528 = var_subString_70451.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2259)) ;
                                GALGAS_uint var_start_70565 = GALGAS_uint ((uint32_t) 0U) ;
                                GALGAS_uint var_stop_70584 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2261)).substract_operation (var_subStringLength_70528, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2261)) ;
                                GALGAS_bool var_exists_70636 = GALGAS_bool (false) ;
                                if (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2263)).isValid ()) {
                                  uint32_t variant_70654 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2263)).uintValue () ;
                                  bool loop_70654 = true ;
                                  while (loop_70654) {
                                    GALGAS_bool test_33 = var_exists_70636.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2264)) ;
                                    if (kBoolTrue == test_33.boolEnum ()) {
                                      test_33 = GALGAS_bool (kIsInfOrEqual, var_start_70565.objectCompare (var_stop_70584)) ;
                                    }
                                    loop_70654 = test_33.isValid () ;
                                    if (loop_70654) {
                                      loop_70654 = test_33.boolValue () ;
                                    }
                                    if (loop_70654 && (0 == variant_70654)) {
                                      loop_70654 = false ;
                                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2263)) ;
                                    }
                                    if (loop_70654) {
                                      variant_70654 -- ;
                                      const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_subString (var_start_70565, var_subStringLength_70528 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2265)).objectCompare (var_subString_70451)).boolEnum () ;
                                      if (kBoolTrue == test_34) {
                                        var_exists_70636 = GALGAS_bool (true) ;
                                      }
                                      var_start_70565.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2268)) ;
                                    }
                                  }
                                }
                                result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2271)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2271)), var_exists_70636  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2270)) ;
                              }else if (kBoolFalse == test_31) {
                                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2273)).objectCompare (GALGAS_string ("leftSubString"))).boolEnum () ;
                                if (kBoolTrue == test_35) {
                                  {
                                  routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2274)) ;
                                  }
                                  GALGAS_gtlInt temp_36 ;
                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).isValid ()) {
                                    if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr ())) {
                                      temp_36 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr () ;
                                    }else{
                                      inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                                    }
                                  }
                                  GALGAS_uint var_index_71062 = temp_36.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2275)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2275)) ;
                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2277)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2277)), object->mAttribute_value.getter_leftSubString (var_index_71062 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2277))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2276)) ;
                                }else if (kBoolFalse == test_35) {
                                  const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2279)).objectCompare (GALGAS_string ("rightSubString"))).boolEnum () ;
                                  if (kBoolTrue == test_37) {
                                    {
                                    routine_argumentsCheck (constinArgument_methodName, function_intArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2280)) ;
                                    }
                                    GALGAS_gtlInt temp_38 ;
                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).isValid ()) {
                                      if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr ())) {
                                        temp_38 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr () ;
                                      }else{
                                        inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                                      }
                                    }
                                    GALGAS_uint var_index_71355 = temp_38.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2281)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2281)) ;
                                    result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2283)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2283)), object->mAttribute_value.getter_rightSubString (var_index_71355 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2283))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2282)) ;
                                  }else if (kBoolFalse == test_37) {
                                    const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2285)).objectCompare (GALGAS_string ("subString"))).boolEnum () ;
                                    if (kBoolTrue == test_39) {
                                      {
                                      routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2286)) ;
                                      }
                                      GALGAS_gtlInt temp_40 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr ())) {
                                          temp_40 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)) ;
                                        }
                                      }
                                      GALGAS_uint var_start_71648 = temp_40.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2287)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2287)) ;
                                      GALGAS_gtlInt temp_41 ;
                                      if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).isValid ()) {
                                        if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr ())) {
                                          temp_41 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr () ;
                                        }else{
                                          inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)) ;
                                        }
                                      }
                                      GALGAS_uint var_length_71720 = temp_41.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2288)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2288)) ;
                                      result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2290)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290)), object->mAttribute_value.getter_subString (var_start_71648, var_length_71720 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2290))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2289)) ;
                                    }else if (kBoolFalse == test_39) {
                                      const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2292)).objectCompare (GALGAS_string ("reversedString"))).boolEnum () ;
                                      if (kBoolTrue == test_42) {
                                        {
                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2293)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2293)) ;
                                        }
                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2295)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2295)), object->mAttribute_value.getter_reversedString (SOURCE_FILE ("gtl_data_types.galgas", 2295))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2294)) ;
                                      }else if (kBoolFalse == test_42) {
                                        const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2297)).objectCompare (GALGAS_string ("componentsSeparatedByString"))).boolEnum () ;
                                        if (kBoolTrue == test_43) {
                                          {
                                          routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2298)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2298)) ;
                                          }
                                          GALGAS_gtlString temp_44 ;
                                          if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).isValid ()) {
                                            if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr ())) {
                                              temp_44 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr () ;
                                            }else{
                                              inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                            }
                                          }
                                          GALGAS_string var_separator_72254 = temp_44.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2299)) ;
                                          GALGAS_stringlist var_stringlist_72332 = object->mAttribute_value.getter_componentsSeparatedByString (var_separator_72254 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2300)) ;
                                          GALGAS_list var_components_72402 = GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2301)) ;
                                          cEnumerator_stringlist enumerator_72443 (var_stringlist_72332, kEnumeration_up) ;
                                          while (enumerator_72443.hasCurrentObject ()) {
                                            var_components_72402.addAssign_operation (GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2304)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2304)), enumerator_72443.current_mValue (HERE)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2303)) ;
                                            enumerator_72443.gotoNextObject () ;
                                          }
                                          result_result = GALGAS_gtlList::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2308)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2308)), var_components_72402  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2307)) ;
                                        }else if (kBoolFalse == test_43) {
                                          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2310)).objectCompare (GALGAS_string ("interpretEscape"))).boolEnum () ;
                                          if (kBoolTrue == test_45) {
                                            TC_Array <C_FixItDescription> fixItArray46 ;
                                            inCompiler->emitSemanticWarning (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2311)), GALGAS_string ("deprecated method"), fixItArray46  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2311)) ;
                                            const GALGAS_gtlString temp_47 = object ;
                                            result_result = temp_47 ;
                                          }else if (kBoolFalse == test_45) {
                                            const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2313)).objectCompare (GALGAS_string ("columnPrefixedBy"))).boolEnum () ;
                                            if (kBoolTrue == test_48) {
                                              {
                                              routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2314)) ;
                                              }
                                              GALGAS_gtlString temp_49 ;
                                              if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).isValid ()) {
                                                if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr ())) {
                                                  temp_49 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr () ;
                                                }else{
                                                  inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2315)) ;
                                                }
                                              }
                                              GALGAS_string var_prefix_72895 = temp_49.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2315)) ;
                                              result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2317)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2318)), var_prefix_72895.add_operation (object->mAttribute_value, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)).getter_stringByReplacingStringByString (GALGAS_string ("\n"), GALGAS_string ("\n").add_operation (var_prefix_72895, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2319))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2316)) ;
                                            }else if (kBoolFalse == test_48) {
                                              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2321)).objectCompare (GALGAS_string ("wrap"))).boolEnum () ;
                                              if (kBoolTrue == test_50) {
                                                {
                                                routine_argumentsCheck (constinArgument_methodName, function_intIntArguments (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2322)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2322)) ;
                                                }
                                                GALGAS_gtlInt temp_51 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr ())) {
                                                    temp_51 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)) ;
                                                  }
                                                }
                                                GALGAS_uint var_width_73232 = temp_51.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2323)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2323)) ;
                                                GALGAS_gtlInt temp_52 ;
                                                if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).isValid ()) {
                                                  if (NULL != dynamic_cast <const cPtr_gtlInt *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr ())) {
                                                    temp_52 = (cPtr_gtlInt *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr () ;
                                                  }else{
                                                    inCompiler->castError ("gtlInt", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)) ;
                                                  }
                                                }
                                                GALGAS_uint var_shift_73303 = temp_52.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2324)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2324)) ;
                                                GALGAS_string var_stringShift_73382 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_shift_73303  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2325)) ;
                                                GALGAS_stringlist var_paragraphs_73459 = object->mAttribute_value.getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2326)) ;
                                                GALGAS_stringlist var_resultParagraphs_73540 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("gtl_data_types.galgas", 2327)) ;
                                                cEnumerator_stringlist enumerator_73589 (var_paragraphs_73459, kEnumeration_up) ;
                                                while (enumerator_73589.hasCurrentObject ()) {
                                                  GALGAS_stringlist var_words_73616 = enumerator_73589.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string (" ") COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2329)) ;
                                                  GALGAS_uint var_lineWidth_73685 = GALGAS_uint ((uint32_t) 0U) ;
                                                  GALGAS_string var_line_73708 = GALGAS_string::makeEmptyString () ;
                                                  cEnumerator_stringlist enumerator_73739 (var_words_73616, kEnumeration_up) ;
                                                  while (enumerator_73739.hasCurrentObject ()) {
                                                    const enumGalgasBool test_53 = GALGAS_bool (kIsNotEqual, enumerator_73739.current_mValue (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                                                    if (kBoolTrue == test_53) {
                                                      const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, var_lineWidth_73685.add_operation (enumerator_73739.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2334)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2334)).objectCompare (var_width_73232)).boolEnum () ;
                                                      if (kBoolTrue == test_54) {
                                                        var_line_73708.plusAssign_operation(GALGAS_string ("\n").add_operation (var_stringShift_73382, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2335)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2335)) ;
                                                        var_lineWidth_73685 = var_shift_73303 ;
                                                      }
                                                      var_lineWidth_73685.plusAssign_operation(enumerator_73739.current_mValue (HERE).getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2338)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2338)) ;
                                                      var_line_73708.plusAssign_operation(enumerator_73739.current_mValue (HERE).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2339)), inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2339)) ;
                                                    }
                                                    enumerator_73739.gotoNextObject () ;
                                                  }
                                                  var_resultParagraphs_73540.addAssign_operation (var_line_73708  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2342)) ;
                                                  enumerator_73589.gotoNextObject () ;
                                                }
                                                result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2345)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2346)), GALGAS_string::constructor_componentsJoinedByString (var_resultParagraphs_73540, GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2347))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2344)) ;
                                              }else if (kBoolFalse == test_50) {
                                                const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2349)).objectCompare (GALGAS_string ("replaceString"))).boolEnum () ;
                                                if (kBoolTrue == test_55) {
                                                  {
                                                  routine_argumentsCheck (constinArgument_methodName, function_stringStringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2350)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2350)) ;
                                                  }
                                                  GALGAS_gtlString temp_56 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr ())) {
                                                      temp_56 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2351)) ;
                                                    }
                                                  }
                                                  GALGAS_string var_find_74336 = temp_56.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2351)) ;
                                                  GALGAS_gtlString temp_57 ;
                                                  if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).isValid ()) {
                                                    if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr ())) {
                                                      temp_57 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr () ;
                                                    }else{
                                                      inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2352)) ;
                                                    }
                                                  }
                                                  GALGAS_string var_rep_74403 = temp_57.getter_value (SOURCE_FILE ("gtl_data_types.galgas", 2352)) ;
                                                  result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2354)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2355)), object->mAttribute_value.getter_stringByReplacingStringByString (var_find_74336, var_rep_74403, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2356))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2353)) ;
                                                }else if (kBoolFalse == test_55) {
                                                  const enumGalgasBool test_58 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2358)).objectCompare (GALGAS_string ("subStringExists"))).boolEnum () ;
                                                  if (kBoolTrue == test_58) {
                                                    {
                                                    routine_argumentsCheck (constinArgument_methodName, function_stringArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2359)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2359)) ;
                                                    }
                                                    GALGAS_gtlString temp_59 ;
                                                    if (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).isValid ()) {
                                                      if (NULL != dynamic_cast <const cPtr_gtlString *> (constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr ())) {
                                                        temp_59 = (cPtr_gtlString *) constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr () ;
                                                      }else{
                                                        inCompiler->castError ("gtlString", constinArgument_arguments.getter_dataAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)) ;
                                                      }
                                                    }
                                                    GALGAS_string var_subString_74738 = callExtensionGetter_string ((const cPtr_gtlString *) temp_59.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2360)) ;
                                                    GALGAS_uint var_subLength_74810 = var_subString_74738.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2361)) ;
                                                    GALGAS_uint var_start_74847 = GALGAS_uint ((uint32_t) 0U) ;
                                                    GALGAS_uint var_stop_74866 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2363)).substract_operation (var_subLength_74810, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2363)) ;
                                                    GALGAS_bool var_exists_74912 = GALGAS_bool (false) ;
                                                    if (object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2365)).isValid ()) {
                                                      uint32_t variant_74929 = object->mAttribute_value.getter_length (SOURCE_FILE ("gtl_data_types.galgas", 2365)).uintValue () ;
                                                      bool loop_74929 = true ;
                                                      while (loop_74929) {
                                                        loop_74929 = GALGAS_bool (kIsInfOrEqual, var_start_74847.objectCompare (var_stop_74866)).operator_and (var_exists_74912.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2366)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2366)).isValid () ;
                                                        if (loop_74929) {
                                                          loop_74929 = GALGAS_bool (kIsInfOrEqual, var_start_74847.objectCompare (var_stop_74866)).operator_and (var_exists_74912.operator_not (SOURCE_FILE ("gtl_data_types.galgas", 2366)) COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2366)).boolValue () ;
                                                        }
                                                        if (loop_74929 && (0 == variant_74929)) {
                                                          loop_74929 = false ;
                                                          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_data_types.galgas", 2365)) ;
                                                        }
                                                        if (loop_74929) {
                                                          variant_74929 -- ;
                                                          const enumGalgasBool test_60 = GALGAS_bool (kIsEqual, object->mAttribute_value.getter_subString (var_start_74847, var_subLength_74810 COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2367)).objectCompare (var_subString_74738)).boolEnum () ;
                                                          if (kBoolTrue == test_60) {
                                                            var_exists_74912 = GALGAS_bool (true) ;
                                                          }
                                                          var_start_74847.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2370)) ;
                                                        }
                                                      }
                                                    }
                                                    result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2373)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2374)), var_exists_74912  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2372)) ;
                                                  }else if (kBoolFalse == test_58) {
                                                    const enumGalgasBool test_61 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2377)).objectCompare (GALGAS_string ("envVarExists"))).boolEnum () ;
                                                    if (kBoolTrue == test_61) {
                                                      {
                                                      routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2378)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2378)) ;
                                                      }
                                                      result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2380)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2381)), object->mAttribute_value.getter_doesEnvironmentVariableExist (SOURCE_FILE ("gtl_data_types.galgas", 2382))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2379)) ;
                                                    }else if (kBoolFalse == test_61) {
                                                      const enumGalgasBool test_62 = GALGAS_bool (kIsEqual, constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2384)).objectCompare (GALGAS_string ("envVar"))).boolEnum () ;
                                                      if (kBoolTrue == test_62) {
                                                        {
                                                        routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2385)) ;
                                                        }
                                                        result_result = GALGAS_gtlString::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2387)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2388)), GALGAS_string::constructor_stringWithEnvironmentVariableOrEmpty (object->mAttribute_value  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2389))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2386)) ;
                                                      }else if (kBoolFalse == test_62) {
                                                        const enumGalgasBool test_63 = GALGAS_bool (kIsEqual, GALGAS_string ("type").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2391)))).boolEnum () ;
                                                        if (kBoolTrue == test_63) {
                                                          {
                                                          routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2392)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2392)) ;
                                                          }
                                                          const GALGAS_gtlString temp_64 = object ;
                                                          result_result = GALGAS_gtlType::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2394)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2394)), temp_64.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 2394))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2393)) ;
                                                        }else if (kBoolFalse == test_63) {
                                                          const enumGalgasBool test_65 = GALGAS_bool (kIsEqual, GALGAS_string ("isANumber").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2396)))).boolEnum () ;
                                                          if (kBoolTrue == test_65) {
                                                            {
                                                            routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2397)) ;
                                                            }
                                                            result_result = GALGAS_gtlBool::constructor_new (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2399)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2399)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2398)) ;
                                                          }else if (kBoolFalse == test_65) {
                                                            const enumGalgasBool test_66 = GALGAS_bool (kIsEqual, GALGAS_string ("description").objectCompare (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2401)))).boolEnum () ;
                                                            if (kBoolTrue == test_66) {
                                                              {
                                                              routine_argumentsCheck (constinArgument_methodName, function_noArgument (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2402)), constinArgument_arguments, inCompiler  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2402)) ;
                                                              }
                                                              result_result = GALGAS_gtlString::constructor_new (object->mAttribute_meta.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2404)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2404)), object->mAttribute_meta.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2404))  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2403)) ;
                                                            }else if (kBoolFalse == test_66) {
                                                              const enumGalgasBool test_67 = callExtensionGetter_getterExists ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2406)).boolEnum () ;
                                                              if (kBoolTrue == test_67) {
                                                                const GALGAS_gtlString temp_68 = object ;
                                                                result_result = callExtensionGetter_callGetter ((const cPtr_gtlGetter *) callExtensionGetter_getGetter ((const cPtr_library *) constinArgument_lib.ptr (), GALGAS_string ("string"), constinArgument_methodName, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2407)).ptr (), constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2408)), constinArgument_lib, temp_68, constinArgument_arguments, inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2407)) ;
                                                              }else if (kBoolFalse == test_67) {
                                                                TC_Array <C_FixItDescription> fixItArray69 ;
                                                                inCompiler->emitSemanticError (constinArgument_methodName.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 2414)), GALGAS_string ("unknown getter '").add_operation (constinArgument_methodName.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 2414)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)).add_operation (GALGAS_string ("' for string target"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)), fixItArray69  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 2414)) ;
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

