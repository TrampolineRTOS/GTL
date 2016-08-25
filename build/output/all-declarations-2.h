#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "all-predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @gtlModule class                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlModule : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_gtlModule (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_gtlModule constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_gtlModule * ptr (void) const { return (const cPtr_gtlModule *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_gtlModule (const cPtr_gtlModule * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_gtlModule extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_gtlModule constructor_new (const class GALGAS_lstring & inOperand0,
                                                          const class GALGAS_gtlProcMap & inOperand1,
                                                          const class GALGAS_gtlFuncMap & inOperand2
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_gtlModule & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_gtlFuncMap getter_functions (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_name (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_gtlProcMap getter_procedures (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_gtlModule class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_gtlModule ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @gtlModule class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlModule : public acPtr_class {
//--- Attributes
  public : GALGAS_lstring mAttribute_name ;
  public : GALGAS_gtlProcMap mAttribute_procedures ;
  public : GALGAS_gtlFuncMap mAttribute_functions ;

//--- Constructor
  public : cPtr_gtlModule (const GALGAS_lstring & in_name,
                           const GALGAS_gtlProcMap & in_procedures,
                           const GALGAS_gtlFuncMap & in_functions
                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_name (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlProcMap getter_procedures (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlFuncMap getter_functions (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @gtlTemplate class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_gtlTemplate : public acPtr_class {
//--- Attributes
  public : GALGAS_string mAttribute_path ;
  public : GALGAS_gtlInstructionList mAttribute_program ;

//--- Constructor
  public : cPtr_gtlTemplate (const GALGAS_string & in_path,
                             const GALGAS_gtlInstructionList & in_program
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_path (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_gtlInstructionList getter_program (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlContext addModulePath'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_gtlContext_addModulePath) (class cPtr_gtlContext * inObject,
                                                                   const class GALGAS_string constinArgument0,
                                                                   const class GALGAS_string constinArgument1,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_addModulePath (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_addModulePath inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_addModulePath (class cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_rootPath,
                                        const GALGAS_string constin_modulePath,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlVarMap replaceOrCreate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_replaceOrCreate (class GALGAS_gtlVarMap & ioObject,
                                      const class GALGAS_lstring constin_key,
                                      const class GALGAS_gtlData constin_data,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension setter '@gtlVarMap replaceOrCreateAtLevel'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_replaceOrCreateAtLevel (class GALGAS_gtlVarMap & ioObject,
                                             const class GALGAS_lstring constin_key,
                                             const class GALGAS_gtlData constin_data,
                                             const class GALGAS_uint constin_level,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension setter '@gtlTemplateMap getTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_getTemplate (class GALGAS_gtlTemplateMap & ioObject,
                                  const class GALGAS_gtlContext constin_context,
                                  class GALGAS_lstring in_path,
                                  class GALGAS_bool in_ifExists,
                                  class GALGAS_library & io_lib,
                                  class GALGAS_bool & out_found,
                                  class GALGAS_gtlTemplate & out_result,
                                  class C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension getter '@string gtlType' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_type extensionGetter_gtlType (const class GALGAS_string & inObject,
                                           const class GALGAS_location & constinArgument0,
                                           class C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlInstruction location'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*enterExtensionGetter_gtlInstruction_location) (const class cPtr_gtlInstruction * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlInstruction_location inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callExtensionGetter_location (const cPtr_gtlInstruction * inObject,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@gtlInstruction printLocation'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlInstruction_printLocation) (const class cPtr_gtlInstruction * inObject,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_printLocation (const int32_t inClassIndex,
                                         extensionMethodSignature_gtlInstruction_printLocation inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_printLocation (const class cPtr_gtlInstruction * inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Extension method '@gtlInstructionList execute'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_execute (const class GALGAS_gtlInstructionList inObject,
                              class GALGAS_gtlContext & io_context,
                              class GALGAS_gtlData & io_vars,
                              class GALGAS_library & io_lib,
                              class GALGAS_string & io_outputString,
                              class C_Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlContext breakOnNext'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlContext_breakOnNext) (const class cPtr_gtlContext * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_breakOnNext (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_breakOnNext inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_breakOnNext (const cPtr_gtlContext * inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlContext debugActive'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlContext_debugActive) (const class cPtr_gtlContext * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_debugActive (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_debugActive inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_debugActive (const cPtr_gtlContext * inObject,
                                                   class C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract extension getter '@gtlAbstractSortInstruction compare'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_sint (*enterExtensionGetter_gtlAbstractSortInstruction_compare) (const class cPtr_gtlAbstractSortInstruction * inObject,
                                                                                      const class GALGAS_gtlData & constinArgument0,
                                                                                      const class GALGAS_gtlData & constinArgument1,
                                                                                      class C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_compare (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlAbstractSortInstruction_compare inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sint callExtensionGetter_compare (const class cPtr_gtlAbstractSortInstruction * inObject,
                                               const GALGAS_gtlData & constin_s_31_,
                                               const GALGAS_gtlData & constin_s_32_,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@gtlAbstractSortInstruction swap'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlAbstractSortInstruction_swap) (const class cPtr_gtlAbstractSortInstruction * inObject,
                                                                          class GALGAS_list & ioArgument0,
                                                                          const class GALGAS_uint constinArgument1,
                                                                          const class GALGAS_uint constinArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_swap (const int32_t inClassIndex,
                                extensionMethodSignature_gtlAbstractSortInstruction_swap inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_swap (const class cPtr_gtlAbstractSortInstruction * inObject,
                               GALGAS_list & io_aList,
                               const GALGAS_uint constin_index_31_,
                               const GALGAS_uint constin_index_32_,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension method '@gtlAbstractSortInstruction partition'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlAbstractSortInstruction_partition) (const class cPtr_gtlAbstractSortInstruction * inObject,
                                                                               class GALGAS_list & ioArgument0,
                                                                               const class GALGAS_uint constinArgument1,
                                                                               const class GALGAS_uint constinArgument2,
                                                                               class GALGAS_uint & ioArgument3,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_partition (const int32_t inClassIndex,
                                     extensionMethodSignature_gtlAbstractSortInstruction_partition inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_partition (const class cPtr_gtlAbstractSortInstruction * inObject,
                                    GALGAS_list & io_aList,
                                    const GALGAS_uint constin_min,
                                    const GALGAS_uint constin_max,
                                    GALGAS_uint & io_pivotIndex,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension method '@gtlAbstractSortInstruction sort'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlAbstractSortInstruction_sort) (const class cPtr_gtlAbstractSortInstruction * inObject,
                                                                          class GALGAS_list & ioArgument0,
                                                                          const class GALGAS_uint constinArgument1,
                                                                          const class GALGAS_uint constinArgument2,
                                                                          class C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_sort (const int32_t inClassIndex,
                                extensionMethodSignature_gtlAbstractSortInstruction_sort inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_sort (const class cPtr_gtlAbstractSortInstruction * inObject,
                               GALGAS_list & io_aList,
                               const GALGAS_uint constin_min,
                               const GALGAS_uint constin_max,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension getter '@gtlSortStatementStructInstruction compareElements'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_sint (*enterExtensionGetter_gtlSortStatementStructInstruction_compareElements) (const class cPtr_gtlSortStatementStructInstruction * inObject,
                                                                                                     const class GALGAS_gtlData & constinArgument0,
                                                                                                     const class GALGAS_gtlData & constinArgument1,
                                                                                                     class GALGAS_sortingKeyList inArgument2,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_compareElements (const int32_t inClassIndex,
                                           enterExtensionGetter_gtlSortStatementStructInstruction_compareElements inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_sint callExtensionGetter_compareElements (const cPtr_gtlSortStatementStructInstruction * inObject,
                                                       const GALGAS_gtlData & constin_s_31_,
                                                       const GALGAS_gtlData & constin_s_32_,
                                                       GALGAS_sortingKeyList in_keyList,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlData_bool) (const class cPtr_gtlData * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_bool (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_bool inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_bool (const class cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_gtOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_gtOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_gtOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_gtOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_ltOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_ltOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_ltOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_ltOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@gtlVarItem stringPath'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_gtlVarItem_stringPath) (const class cPtr_gtlVarItem * inObject,
                                                                           const class GALGAS_gtlData & constinArgument0,
                                                                           const class GALGAS_library & constinArgument1,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringPath (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlVarItem_stringPath inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_stringPath (const class cPtr_gtlVarItem * inObject,
                                                    const GALGAS_gtlData & constin_vars,
                                                    const GALGAS_library & constin_lib,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Abstract extension getter '@gtlVarItem location'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_location (*enterExtensionGetter_gtlVarItem_location) (const class cPtr_gtlVarItem * inObject,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlVarItem_location inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location callExtensionGetter_location (const class cPtr_gtlVarItem * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Abstract extension method '@gtlVarItem setInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlVarItem_setInContext) (const class cPtr_gtlVarItem * inObject,
                                                                  class GALGAS_gtlData & ioArgument0,
                                                                  const class GALGAS_gtlData constinArgument1,
                                                                  const class GALGAS_library constinArgument2,
                                                                  const class GALGAS_gtlVarPath constinArgument3,
                                                                  const class GALGAS_gtlData constinArgument4,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_setInContext (const int32_t inClassIndex,
                                        extensionMethodSignature_gtlVarItem_setInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_setInContext (const class cPtr_gtlVarItem * inObject,
                                       GALGAS_gtlData & io_context,
                                       const GALGAS_gtlData constin_vars,
                                       const GALGAS_library constin_lib,
                                       const GALGAS_gtlVarPath constin_path,
                                       const GALGAS_gtlData constin_newData,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Abstract extension getter '@gtlVarItem getInContext'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlVarItem_getInContext) (const class cPtr_gtlVarItem * inObject,
                                                                              const class GALGAS_gtlData & constinArgument0,
                                                                              const class GALGAS_gtlData & constinArgument1,
                                                                              const class GALGAS_library & constinArgument2,
                                                                              const class GALGAS_gtlVarPath & constinArgument3,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getInContext (const int32_t inClassIndex,
                                        enterExtensionGetter_gtlVarItem_getInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_getInContext (const class cPtr_gtlVarItem * inObject,
                                                       const GALGAS_gtlData & constin_context,
                                                       const GALGAS_gtlData & constin_vars,
                                                       const GALGAS_library & constin_lib,
                                                       const GALGAS_gtlVarPath & constin_path,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Abstract extension getter '@gtlVarItem existsInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlVarItem_existsInContext) (const class cPtr_gtlVarItem * inObject,
                                                                              const class GALGAS_gtlData & constinArgument0,
                                                                              const class GALGAS_gtlData & constinArgument1,
                                                                              const class GALGAS_library & constinArgument2,
                                                                              const class GALGAS_gtlVarPath & constinArgument3,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_existsInContext (const int32_t inClassIndex,
                                           enterExtensionGetter_gtlVarItem_existsInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_existsInContext (const class cPtr_gtlVarItem * inObject,
                                                       const GALGAS_gtlData & constin_context,
                                                       const GALGAS_gtlData & constin_vars,
                                                       const GALGAS_library & constin_lib,
                                                       const GALGAS_gtlVarPath & constin_path,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Abstract extension method '@gtlVarItem deleteInContext'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlVarItem_deleteInContext) (const class cPtr_gtlVarItem * inObject,
                                                                     class GALGAS_gtlData & ioArgument0,
                                                                     const class GALGAS_gtlData constinArgument1,
                                                                     const class GALGAS_library constinArgument2,
                                                                     const class GALGAS_gtlVarPath constinArgument3,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_deleteInContext (const int32_t inClassIndex,
                                           extensionMethodSignature_gtlVarItem_deleteInContext inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_deleteInContext (const class cPtr_gtlVarItem * inObject,
                                          GALGAS_gtlData & io_context,
                                          const GALGAS_gtlData constin_vars,
                                          const GALGAS_library constin_lib,
                                          const GALGAS_gtlVarPath constin_path,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension getter '@gtlVarPath stringPath' (as function)                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string extensionGetter_stringPath (const class GALGAS_gtlVarPath & inObject,
                                                const class GALGAS_gtlData & constinArgument0,
                                                const class GALGAS_library & constinArgument1,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@gtlVarPath set'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_set (const class GALGAS_gtlVarPath inObject,
                          class GALGAS_gtlData & io_vars,
                          const class GALGAS_library constin_lib,
                          const class GALGAS_gtlData constin_data,
                          class C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension getter '@gtlVarPath get' (as function)                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData extensionGetter_get (const class GALGAS_gtlVarPath & inObject,
                                          const class GALGAS_gtlData & constinArgument0,
                                          const class GALGAS_library & constinArgument1,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension getter '@gtlVarPath exists' (as function)                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool extensionGetter_exists (const class GALGAS_gtlVarPath & inObject,
                                          const class GALGAS_gtlData & constinArgument0,
                                          const class GALGAS_library & constinArgument1,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension method '@gtlVarPath delete'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_delete (const class GALGAS_gtlVarPath inObject,
                             class GALGAS_gtlData & io_vars,
                             const class GALGAS_library constin_lib,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension getter '@gtlVarPath location' (as function)                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_location extensionGetter_location (const class GALGAS_gtlVarPath & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlTemplate execute'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlTemplate_execute) (const class cPtr_gtlTemplate * inObject,
                                                              class GALGAS_gtlContext & ioArgument0,
                                                              class GALGAS_gtlData & ioArgument1,
                                                              class GALGAS_library & ioArgument2,
                                                              class GALGAS_string & ioArgument3,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_execute (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlTemplate_execute inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_execute (const class cPtr_gtlTemplate * inObject,
                                  GALGAS_gtlContext & io_context,
                                  GALGAS_gtlData & io_vars,
                                  GALGAS_library & io_lib,
                                  GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@library functionExists'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_library_functionExists) (const class cPtr_library * inObject,
                                                                          const class GALGAS_lstring & constinArgument0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_functionExists (const int32_t inClassIndex,
                                          enterExtensionGetter_library_functionExists inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_functionExists (const cPtr_library * inObject,
                                                      const GALGAS_lstring & constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@library getFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlFunction (*enterExtensionGetter_library_getFunction) (const class cPtr_library * inObject,
                                                                              const class GALGAS_lstring & constinArgument0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getFunction (const int32_t inClassIndex,
                                       enterExtensionGetter_library_getFunction inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlFunction callExtensionGetter_getFunction (const cPtr_library * inObject,
                                                          const GALGAS_lstring & constin_name,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library getterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_library_getterExists) (const class cPtr_library * inObject,
                                                                        const class GALGAS_string & constinArgument0,
                                                                        const class GALGAS_lstring & constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_getterExists inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_getterExists (const cPtr_library * inObject,
                                                    const GALGAS_string & constin_type,
                                                    const GALGAS_lstring & constin_name,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlGetter (*enterExtensionGetter_library_getGetter) (const class cPtr_library * inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          const class GALGAS_lstring & constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getGetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getGetter inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlGetter callExtensionGetter_getGetter (const cPtr_library * inObject,
                                                      const GALGAS_string & constin_type,
                                                      const GALGAS_lstring & constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library setterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_library_setterExists) (const class cPtr_library * inObject,
                                                                        const class GALGAS_string & constinArgument0,
                                                                        const class GALGAS_lstring & constinArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_setterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_setterExists inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_setterExists (const cPtr_library * inObject,
                                                    const GALGAS_string & constin_type,
                                                    const GALGAS_lstring & constin_name,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlSetter (*enterExtensionGetter_library_getSetter) (const class cPtr_library * inObject,
                                                                          const class GALGAS_string & constinArgument0,
                                                                          const class GALGAS_lstring & constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getSetter inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlSetter callExtensionGetter_getSetter (const cPtr_library * inObject,
                                                      const GALGAS_string & constin_type,
                                                      const GALGAS_lstring & constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library getTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_library_getTemplate) (class cPtr_library * inObject,
                                                              const class GALGAS_gtlContext constinArgument0,
                                                              class GALGAS_lstring inArgument1,
                                                              class GALGAS_bool inArgument2,
                                                              class GALGAS_library & ioArgument3,
                                                              class GALGAS_bool & outArgument4,
                                                              class GALGAS_gtlTemplate & outArgument5,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_getTemplate (const int32_t inClassIndex,
                                       extensionSetterSignature_library_getTemplate inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_getTemplate (class cPtr_library * inObject,
                                      const GALGAS_gtlContext constin_context,
                                      GALGAS_lstring in_path,
                                      GALGAS_bool in_ifExists,
                                      GALGAS_library & io_lib,
                                      GALGAS_bool & out_found,
                                      GALGAS_gtlTemplate & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_gtlData_desc) (const class cPtr_gtlData * inObject,
                                                                  const class GALGAS_uint & constinArgument0,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_desc (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_desc inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_desc (const class cPtr_gtlData * inObject,
                                              const GALGAS_uint & constin_tab,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_string (*enterExtensionGetter_gtlData_string) (const class cPtr_gtlData * inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_string (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_string inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_string callExtensionGetter_string (const class cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData lstring'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_lstring (*enterExtensionGetter_gtlData_lstring) (const class cPtr_gtlData * inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_lstring (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_lstring inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_lstring callExtensionGetter_lstring (const class cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData int'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bigint (*enterExtensionGetter_gtlData_int) (const class cPtr_gtlData * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_int (const int32_t inClassIndex,
                               enterExtensionGetter_gtlData_int inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bigint callExtensionGetter_int (const class cPtr_gtlData * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData float'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_double (*enterExtensionGetter_gtlData_float) (const class cPtr_gtlData * inObject,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_float (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_float inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_double callExtensionGetter_float (const class cPtr_gtlData * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_plusOp) (const class cPtr_gtlData * inObject,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_plusOp (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_plusOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_plusOp (const class cPtr_gtlData * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData minusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_minusOp) (const class cPtr_gtlData * inObject,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_minusOp (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_minusOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_minusOp (const class cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData notOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_notOp) (const class cPtr_gtlData * inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_notOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_notOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_notOp (const class cPtr_gtlData * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData addOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_addOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_addOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_addOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_addOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData subOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_subOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_subOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_subOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_subOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData mulOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_mulOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mulOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_mulOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_mulOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData divOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_divOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_divOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_divOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_divOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData modOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_modOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_modOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_modOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_modOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData andOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_andOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_andOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_andOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_andOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_orOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_orOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_orOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_orOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData xorOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_xorOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_xorOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_xorOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_xorOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_slOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_slOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_slOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_slOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_srOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_srOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_srOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_srOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData neqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_neqOp) (const class cPtr_gtlData * inObject,
                                                                    const class GALGAS_gtlData & constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_neqOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_neqOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_neqOp (const class cPtr_gtlData * inObject,
                                                const GALGAS_gtlData & constin_right,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_eqOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_eqOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_eqOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_eqOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_leOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_leOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_leOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_leOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_geOp) (const class cPtr_gtlData * inObject,
                                                                   const class GALGAS_gtlData & constinArgument0,
                                                                   class C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_geOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_geOp inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_geOp (const class cPtr_gtlData * inObject,
                                               const GALGAS_gtlData & constin_right,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Abstract extension method '@gtlData addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlData_addMyValue) (const class cPtr_gtlData * inObject,
                                                             class GALGAS_objectlist & ioArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addMyValue (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlData_addMyValue inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addMyValue (const class cPtr_gtlData * inObject,
                                     GALGAS_objectlist & io_objectList,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@gtlData performGetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_performGetter) (const class cPtr_gtlData * inObject,
                                                                            const class GALGAS_lstring & constinArgument0,
                                                                            const class GALGAS_gtlDataList & constinArgument1,
                                                                            const class GALGAS_library & constinArgument2,
                                                                            class C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performGetter (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_performGetter inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_performGetter (const class cPtr_gtlData * inObject,
                                                        const GALGAS_lstring & constin_methodName,
                                                        const GALGAS_gtlDataList & constin_arguments,
                                                        const GALGAS_library & constin_lib,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension setter '@gtlData performSetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_gtlData_performSetter) (class cPtr_gtlData * inObject,
                                                                const class GALGAS_lstring constinArgument0,
                                                                const class GALGAS_gtlDataList constinArgument1,
                                                                const class GALGAS_library constinArgument2,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_performSetter (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_performSetter inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_performSetter (class cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_methodName,
                                        const GALGAS_gtlDataList constin_arguments,
                                        const GALGAS_library constin_lib,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlData structField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlData_structField) (const class cPtr_gtlData * inObject,
                                                              const class GALGAS_lstring constinArgument0,
                                                              class GALGAS_gtlData & outArgument1,
                                                              class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_structField (const int32_t inClassIndex,
                                       extensionMethodSignature_gtlData_structField inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_structField (const class cPtr_gtlData * inObject,
                                      const GALGAS_lstring constin_name,
                                      GALGAS_gtlData & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData resultField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlData (*enterExtensionGetter_gtlData_resultField) (const class cPtr_gtlData * inObject,
                                                                          const class GALGAS_lstring & constinArgument0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_resultField (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_resultField inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlData callExtensionGetter_resultField (const cPtr_gtlData * inObject,
                                                      const GALGAS_lstring & constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlData setStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_gtlData_setStructField) (class cPtr_gtlData * inObject,
                                                                 const class GALGAS_lstring constinArgument0,
                                                                 const class GALGAS_gtlData constinArgument1,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructField (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setStructField inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructField (class cPtr_gtlData * inObject,
                                         const GALGAS_lstring constin_name,
                                         const GALGAS_gtlData constin_data,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@gtlData setStructFieldAtLevel'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_gtlData_setStructFieldAtLevel) (class cPtr_gtlData * inObject,
                                                                        const class GALGAS_lstring constinArgument0,
                                                                        const class GALGAS_gtlData constinArgument1,
                                                                        const class GALGAS_uint constinArgument2,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructFieldAtLevel (const int32_t inClassIndex,
                                                 extensionSetterSignature_gtlData_setStructFieldAtLevel inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructFieldAtLevel (class cPtr_gtlData * inObject,
                                                const GALGAS_lstring constin_name,
                                                const GALGAS_gtlData constin_data,
                                                const GALGAS_uint constin_level,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlData deleteStructField'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionSetterSignature_gtlData_deleteStructField) (class cPtr_gtlData * inObject,
                                                                    const class GALGAS_lstring constinArgument0,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteStructField (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteStructField inModifier) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteStructField (class cPtr_gtlData * inObject,
                                            const GALGAS_lstring constin_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlData hasStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlData_hasStructField) (const class cPtr_gtlData * inObject,
                                                                          const class GALGAS_lstring & constinArgument0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasStructField (const int32_t inClassIndex,
                                          enterExtensionGetter_gtlData_hasStructField inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_hasStructField (const cPtr_gtlData * inObject,
                                                      const GALGAS_lstring & constin_name,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData overrideMap'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlStruct (*enterExtensionGetter_gtlData_overrideMap) (const class cPtr_gtlData * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overrideMap (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_overrideMap inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlStruct callExtensionGetter_overrideMap (const cPtr_gtlData * inObject,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlData overriddenMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_gtlStruct (*enterExtensionGetter_gtlData_overriddenMap) (const class cPtr_gtlData * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overriddenMap (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_overriddenMap inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_gtlStruct callExtensionGetter_overriddenMap (const cPtr_gtlData * inObject,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@gtlData mapItem'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*extensionMethodSignature_gtlData_mapItem) (const class cPtr_gtlData * inObject,
                                                          const class GALGAS_lstring constinArgument0,
                                                          class GALGAS_gtlData & outArgument1,
                                                          class C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_mapItem (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlData_mapItem inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_mapItem (const class cPtr_gtlData * inObject,
                                  const GALGAS_lstring constin_name,
                                  GALGAS_gtlData & out_result,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData hasMapItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*enterExtensionGetter_gtlData_hasMapItem) (const class cPtr_gtlData * inObject,
                                                                      const class GALGAS_lstring & constinArgument0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasMapItem (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlData_hasMapItem inGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callExtensionGetter_hasMapItem (const cPtr_gtlData * inObject,
                                                  const GALGAS_lstring & constin_name,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

#endif
