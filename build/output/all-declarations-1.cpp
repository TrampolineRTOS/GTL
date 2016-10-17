#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@string loadCommandFile'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_loadCommandFile (const GALGAS_string inObject,
                                      GALGAS_gtlContext & ioArgument_context,
                                      GALGAS_gtlData & ioArgument_vars,
                                      GALGAS_library & ioArgument_lib,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_string temp_0 = inObject ;
  const enumGalgasBool test_1 = temp_0.getter_fileExists (SOURCE_FILE ("gtl_debugger.galgas", 70)).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_string temp_2 = inObject ;
    inCompiler->printMessage (GALGAS_string ("loading file ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71)) ;
    const GALGAS_string temp_3 = inObject ;
    GALGAS_stringlist var_commands_2683 = GALGAS_string::constructor_stringWithContentsOfFile (temp_3, inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 72)).getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_debugger.galgas", 73)) ;
    GALGAS_string var_whatInFile_2793 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringlist enumerator_2826 (var_commands_2683, kENUMERATION_UP) ;
    while (enumerator_2826.hasCurrentObject ()) {
      var_whatInFile_2793.plusAssign_operation(enumerator_2826.current_mValue (HERE).getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 77)) ;
      enumerator_2826.gotoNextObject () ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_whatInFile_2793.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      cEnumerator_stringlist enumerator_2959 (var_commands_2683, kENUMERATION_UP) ;
      while (enumerator_2959.hasCurrentObject ()) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_2959.current_mValue (HERE).getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger.galgas", 82)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_gtlInstruction var_command_3129 ;
          var_command_3129.drop () ;
          cGrammar_gtl_5F_debugger_5F_grammar::_performSourceStringParsing_ (inCompiler, enumerator_2959.current_mValue (HERE), GALGAS_string ("Debugger command"), var_command_3129  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 83)) ;
          inCompiler->printMessage (ioArgument_context.getter_debuggerContext (SOURCE_FILE ("gtl_debugger.galgas", 85)).getter_instructionColor (SOURCE_FILE ("gtl_debugger.galgas", 85)).add_operation (ioArgument_context.getter_debuggerContext (SOURCE_FILE ("gtl_debugger.galgas", 86)).getter_instructionFace (SOURCE_FILE ("gtl_debugger.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 85))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 85)) ;
          callExtensionMethod_display ((const cPtr_gtlInstruction *) var_command_3129.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 87)) ;
          inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 88))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 88)) ;
          inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 89)) ;
          GALGAS_string var_result_3355 = GALGAS_string::makeEmptyString () ;
          callExtensionMethod_execute ((const cPtr_gtlInstruction *) var_command_3129.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, var_result_3355, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 91)) ;
        }
        enumerator_2959.gotoNextObject () ;
      }
    }else if (kBoolFalse == test_4) {
      const GALGAS_string temp_6 = inObject ;
      inCompiler->printMessage (GALGAS_string ("No command in ").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95)).add_operation (GALGAS_string (" file\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@gtlBreakpointList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_gtlBreakpointList : public cCollectionElement {
  public : GALGAS_gtlBreakpointList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpoint & in_breakpoint
                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_gtlBreakpointList::cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpoint & in_breakpoint
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_breakpoint) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_gtlBreakpointList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_gtlBreakpointList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_gtlBreakpointList (mObject.mProperty_breakpoint COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_gtlBreakpointList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "breakpoint" ":" ;
  mObject.mProperty_breakpoint.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_gtlBreakpointList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_gtlBreakpointList * operand = (cCollectionElement_gtlBreakpointList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_gtlBreakpointList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList::GALGAS_gtlBreakpointList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList::GALGAS_gtlBreakpointList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlBreakpointList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::constructor_listWithValue (const GALGAS_gtlBreakpoint & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlBreakpointList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_gtlBreakpointList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_gtlBreakpoint & in_breakpoint
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlBreakpointList * p = NULL ;
  macroMyNew (p, cCollectionElement_gtlBreakpointList (in_breakpoint COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::addAssign_operation (const GALGAS_gtlBreakpoint & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_gtlBreakpointList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::setter_insertAtIndex (const GALGAS_gtlBreakpoint inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_gtlBreakpointList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::setter_removeAtIndex (GALGAS_gtlBreakpoint & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
      outOperand0 = p->mObject.mProperty_breakpoint ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::setter_popFirst (GALGAS_gtlBreakpoint & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::setter_popLast (GALGAS_gtlBreakpoint & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::method_first (GALGAS_gtlBreakpoint & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::method_last (GALGAS_gtlBreakpoint & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::add_operation (const GALGAS_gtlBreakpointList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList::plusAssign_operation (const GALGAS_gtlBreakpointList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpointList::getter_breakpointAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  GALGAS_gtlBreakpoint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    result = p->mObject.mProperty_breakpoint ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_gtlBreakpointList::cEnumerator_gtlBreakpointList (const GALGAS_gtlBreakpointList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element cEnumerator_gtlBreakpointList::current (LOCATION_ARGS) const {
  const cCollectionElement_gtlBreakpointList * p = (const cCollectionElement_gtlBreakpointList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint cEnumerator_gtlBreakpointList::current_breakpoint (LOCATION_ARGS) const {
  const cCollectionElement_gtlBreakpointList * p = (const cCollectionElement_gtlBreakpointList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
  return p->mObject.mProperty_breakpoint ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlBreakpointList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointList ("gtlBreakpointList",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList result ;
  const GALGAS_gtlBreakpointList * p = (const GALGAS_gtlBreakpointList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@gtlInstructionListContextStack' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_gtlInstructionListContextStack : public cCollectionElement {
  public : GALGAS_gtlInstructionListContextStack_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_gtlInstructionListContextStack (const GALGAS_uint & in_nextInstructionIndex,
                                                              const GALGAS_gtlInstructionList & in_instructionList
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_gtlInstructionListContextStack::cCollectionElement_gtlInstructionListContextStack (const GALGAS_uint & in_nextInstructionIndex,
                                                                                                      const GALGAS_gtlInstructionList & in_instructionList
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_nextInstructionIndex, in_instructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_gtlInstructionListContextStack::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_gtlInstructionListContextStack::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_gtlInstructionListContextStack (mObject.mProperty_nextInstructionIndex, mObject.mProperty_instructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_gtlInstructionListContextStack::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "nextInstructionIndex" ":" ;
  mObject.mProperty_nextInstructionIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "instructionList" ":" ;
  mObject.mProperty_instructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_gtlInstructionListContextStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_gtlInstructionListContextStack * operand = (cCollectionElement_gtlInstructionListContextStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_gtlInstructionListContextStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack::GALGAS_gtlInstructionListContextStack (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack::GALGAS_gtlInstructionListContextStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlInstructionListContextStack  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::constructor_listWithValue (const GALGAS_uint & inOperand0,
                                                                                                        const GALGAS_gtlInstructionList & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlInstructionListContextStack (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_gtlInstructionListContextStack::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_uint & in_nextInstructionIndex,
                                                                       const GALGAS_gtlInstructionList & in_instructionList
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlInstructionListContextStack * p = NULL ;
  macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (in_nextInstructionIndex,
                                                                    in_instructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::addAssign_operation (const GALGAS_uint & inOperand0,
                                                                 const GALGAS_gtlInstructionList & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                                  const GALGAS_gtlInstructionList inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                                  GALGAS_gtlInstructionList & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
      outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
      outOperand1 = p->mObject.mProperty_instructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::setter_popFirst (GALGAS_uint & outOperand0,
                                                             GALGAS_gtlInstructionList & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::setter_popLast (GALGAS_uint & outOperand0,
                                                            GALGAS_gtlInstructionList & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::method_first (GALGAS_uint & outOperand0,
                                                          GALGAS_gtlInstructionList & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::method_last (GALGAS_uint & outOperand0,
                                                         GALGAS_gtlInstructionList & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::add_operation (const GALGAS_gtlInstructionListContextStack & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack::plusAssign_operation (const GALGAS_gtlInstructionListContextStack inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlInstructionListContextStack::getter_nextInstructionIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    result = p->mObject.mProperty_nextInstructionIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlInstructionListContextStack::getter_instructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  GALGAS_gtlInstructionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    result = p->mObject.mProperty_instructionList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_gtlInstructionListContextStack::cEnumerator_gtlInstructionListContextStack (const GALGAS_gtlInstructionListContextStack & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element cEnumerator_gtlInstructionListContextStack::current (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_gtlInstructionListContextStack::current_nextInstructionIndex (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject.mProperty_nextInstructionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cEnumerator_gtlInstructionListContextStack::current_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject.mProperty_instructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @gtlInstructionListContextStack type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionListContextStack ("gtlInstructionListContextStack",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInstructionListContextStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionListContextStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInstructionListContextStack::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionListContextStack (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack result ;
  const GALGAS_gtlInstructionListContextStack * p = (const GALGAS_gtlInstructionListContextStack *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInstructionListContextStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionListContextStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_debugCommandInput::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_debugCommandInput * p = (const cPtr_debugCommandInput *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_debugCommandInput) ;
  if (kOperandEqual == result) {
    result = mProperty_history.objectCompare (p->mProperty_history) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_debugCommandInput::objectCompare (const GALGAS_debugCommandInput & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput::GALGAS_debugCommandInput (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput GALGAS_debugCommandInput::constructor_default (LOCATION_ARGS) {
  return GALGAS_debugCommandInput::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput::GALGAS_debugCommandInput (const cPtr_debugCommandInput * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_debugCommandInput) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput GALGAS_debugCommandInput::constructor_new (const GALGAS_stringlist & inAttribute_history
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_debugCommandInput result ;
  if (inAttribute_history.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_debugCommandInput (inAttribute_history COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_debugCommandInput::getter_history (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_debugCommandInput * p = (const cPtr_debugCommandInput *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debugCommandInput) ;
    result = p->mProperty_history ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_debugCommandInput::getter_history (UNUSED_LOCATION_ARGS) const {
  return mProperty_history ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @debugCommandInput class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_debugCommandInput::cPtr_debugCommandInput (const GALGAS_stringlist & in_history
                                                COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_history (in_history) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_debugCommandInput::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debugCommandInput ;
}

void cPtr_debugCommandInput::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@debugCommandInput:" ;
  mProperty_history.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_debugCommandInput::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_debugCommandInput (mProperty_history COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @debugCommandInput type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_debugCommandInput ("debugCommandInput",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_debugCommandInput::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debugCommandInput ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_debugCommandInput::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_debugCommandInput (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput GALGAS_debugCommandInput::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_debugCommandInput result ;
  const GALGAS_debugCommandInput * p = (const GALGAS_debugCommandInput *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_debugCommandInput *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("debugCommandInput", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBreakpoint::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
  if (kOperandEqual == result) {
    result = mProperty_fileName.objectCompare (p->mProperty_fileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_lineNum.objectCompare (p->mProperty_lineNum) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBreakpoint::objectCompare (const GALGAS_gtlBreakpoint & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint::GALGAS_gtlBreakpoint (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpoint::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpoint::constructor_new (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint::GALGAS_gtlBreakpoint (const cPtr_gtlBreakpoint * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpoint) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpoint::constructor_new (const GALGAS_string & inAttribute_fileName,
                                                            const GALGAS_uint & inAttribute_lineNum,
                                                            const GALGAS_string & inAttribute_signature
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpoint result ;
  if (inAttribute_fileName.isValid () && inAttribute_lineNum.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpoint (inAttribute_fileName, inAttribute_lineNum, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlBreakpoint::getter_fileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    result = p->mProperty_fileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlBreakpoint::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlBreakpoint::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    result = p->mProperty_lineNum ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_gtlBreakpoint::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  return mProperty_lineNum ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlBreakpoint::getter_signature (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    result = p->mProperty_signature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlBreakpoint::getter_signature (UNUSED_LOCATION_ARGS) const {
  return mProperty_signature ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @gtlBreakpoint class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBreakpoint::cPtr_gtlBreakpoint (const GALGAS_string & in_fileName,
                                        const GALGAS_uint & in_lineNum,
                                        const GALGAS_string & in_signature
                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_fileName (in_fileName),
mProperty_lineNum (in_lineNum),
mProperty_signature (in_signature) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBreakpoint::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpoint ;
}

void cPtr_gtlBreakpoint::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@gtlBreakpoint:" ;
  mProperty_fileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_lineNum.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBreakpoint::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBreakpoint (mProperty_fileName, mProperty_lineNum, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @gtlBreakpoint type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpoint ("gtlBreakpoint",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpoint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpoint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpoint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpoint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpoint::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpoint result ;
  const GALGAS_gtlBreakpoint * p = (const GALGAS_gtlBreakpoint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpoint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpoint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@gtlVarPath stringRepresentation'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlVarPath & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_gtlVarPath temp_0 = inObject ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) temp_0.getter_itemAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 653)).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 653)) ;
  const GALGAS_gtlVarPath temp_1 = inObject ;
  cEnumerator_gtlVarPath enumerator_19938 (temp_1.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 654)), kENUMERATION_UP) ;
  while (enumerator_19938.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) enumerator_19938.current_item (HERE).ptr (), GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)) ;
    enumerator_19938.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Abstract extension getter '@gtlVarItem stringRepresentation'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlVarItem_stringRepresentation> gExtensionGetterTable_gtlVarItem_stringRepresentation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlVarItem_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlVarItem_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlVarItem_stringRepresentation (void) {
  gExtensionGetterTable_gtlVarItem_stringRepresentation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlVarItem_stringRepresentation (NULL,
                                                            freeExtensionGetter_gtlVarItem_stringRepresentation) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                        const GALGAS_string in_concatString,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlVarItem) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlVarItem_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlVarItem_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlVarItem_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlVarItem_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlVarItem_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlVarItem_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_concatString, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@gtlExpressionList stringRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlExpressionList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionList temp_0 = inObject ;
  cEnumerator_gtlExpressionList enumerator_32477 (temp_0, kENUMERATION_UP) ;
  while (enumerator_32477.hasCurrentObject ()) {
    result_result = result_result.add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_32477.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1057)) ;
    if (enumerator_32477.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1059)) ;
    }
    enumerator_32477.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@gtlExpressionMap mapRepresentation'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_mapRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_32771 (temp_0, kENUMERATION_UP) ;
  while (enumerator_32771.hasCurrentObject ()) {
    result_result = result_result.add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1069)).add_operation (enumerator_32771.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1069)).add_operation (GALGAS_string ("\": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1069)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_32771.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1069)) ;
    if (enumerator_32771.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1071)) ;
    }
    enumerator_32771.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension Getter '@gtlExpressionMap structRepresentation'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_structRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_33090 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33090.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_33090.current_lkey (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1081)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1081)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1081)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_33090.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1081)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1081)) ;
    if (enumerator_33090.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)) ;
    }
    enumerator_33090.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension Getter '@gtlArgumentList stringRepresentation'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlArgumentList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlArgumentList temp_0 = inObject ;
  cEnumerator_gtlArgumentList enumerator_33400 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33400.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_33400.current_name (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1093)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1093)) ;
    const enumGalgasBool test_1 = enumerator_33400.current_typed (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result = result_result.add_operation (GALGAS_string (" : @"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)).add_operation (extensionGetter_typeName (enumerator_33400.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)) ;
    }
    if (enumerator_33400.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1098)) ;
    }
    enumerator_33400.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@sortingKeyList stringRepresentation'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_sortingKeyList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_sortingKeyList temp_0 = inObject ;
  cEnumerator_sortingKeyList enumerator_33923 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33923.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_33923.current_key (HERE).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1115)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1115)).add_operation (extensionGetter_stringRepresentation (enumerator_33923.current_order (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1115)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1115)) ;
    if (enumerator_33923.hasNextObject ()) {
      result_result = GALGAS_string (", ") ;
    }
    enumerator_33923.gotoNextObject () ;
  }
//---
  return result_result ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension getter '@gtlInstruction shortLocation'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlInstruction_shortLocation> gExtensionGetterTable_gtlInstruction_shortLocation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_shortLocation (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlInstruction_shortLocation inGetter) {
  gExtensionGetterTable_gtlInstruction_shortLocation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_shortLocation (const cPtr_gtlInstruction * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlInstruction_shortLocation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlInstruction_shortLocation.count ()) {
      f = gExtensionGetterTable_gtlInstruction_shortLocation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlInstruction_shortLocation.count ()) {
           f = gExtensionGetterTable_gtlInstruction_shortLocation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlInstruction_shortLocation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_string extensionGetter_gtlInstruction_shortLocation (const cPtr_gtlInstruction * inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlInstruction) ;
  result_result = object->mProperty_where.getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1125)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 1125)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1125)).add_operation (object->mProperty_where.getter_line (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1125)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1125)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInstruction_shortLocation (void) {
  enterExtensionGetter_shortLocation (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                      extensionGetter_gtlInstruction_shortLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlInstruction_shortLocation (void) {
  gExtensionGetterTable_gtlInstruction_shortLocation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInstruction_shortLocation (defineExtensionGetter_gtlInstruction_shortLocation,
                                                         freeExtensionGetter_gtlInstruction_shortLocation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension method '@gtlInstruction displayWithLocation'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlInstruction_displayWithLocation> gExtensionMethodTable_gtlInstruction_displayWithLocation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_displayWithLocation (const int32_t inClassIndex,
                                               extensionMethodSignature_gtlInstruction_displayWithLocation inMethod) {
  gExtensionMethodTable_gtlInstruction_displayWithLocation.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_displayWithLocation (const cPtr_gtlInstruction * inObject,
                                              const GALGAS_debuggerContext constin_context,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlInstruction_displayWithLocation f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlInstruction_displayWithLocation.count ()) {
      f = gExtensionMethodTable_gtlInstruction_displayWithLocation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlInstruction_displayWithLocation.count ()) {
           f = gExtensionMethodTable_gtlInstruction_displayWithLocation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlInstruction_displayWithLocation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_context, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlInstruction_displayWithLocation (const cPtr_gtlInstruction * inObject,
                                                                const GALGAS_debuggerContext constinArgument_context,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlInstruction * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlInstruction) ;
  const GALGAS_gtlInstruction temp_0 = object ;
  inCompiler->printMessage (callExtensionGetter_shortLocation ((const cPtr_gtlInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1132)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1132))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1132)) ;
  inCompiler->printMessage (constinArgument_context.getter_instructionColor (SOURCE_FILE ("gtl_debugger.galgas", 1133)).add_operation (constinArgument_context.getter_instructionFace (SOURCE_FILE ("gtl_debugger.galgas", 1133)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1133))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1133)) ;
  const GALGAS_gtlInstruction temp_1 = object ;
  callExtensionMethod_display ((const cPtr_gtlInstruction *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1134)) ;
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1135)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1135))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1135)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlInstruction_displayWithLocation (void) {
  enterExtensionMethod_displayWithLocation (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                            extensionMethod_gtlInstruction_displayWithLocation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlInstruction_displayWithLocation (void) {
  gExtensionMethodTable_gtlInstruction_displayWithLocation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInstruction_displayWithLocation (defineExtensionMethod_gtlInstruction_displayWithLocation,
                                                               freeExtensionMethod_gtlInstruction_displayWithLocation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension method '@gtlInstruction display'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlInstruction_display> gExtensionMethodTable_gtlInstruction_display ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_display (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlInstruction_display inMethod) {
  gExtensionMethodTable_gtlInstruction_display.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlInstruction_display (void) {
  gExtensionMethodTable_gtlInstruction_display.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlInstruction_display (NULL,
                                                   freeExtensionMethod_gtlInstruction_display) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_display (const cPtr_gtlInstruction * inObject,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlInstruction_display f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlInstruction_display.count ()) {
      f = gExtensionMethodTable_gtlInstruction_display (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_gtlInstruction_display.count ()) {
          f = gExtensionMethodTable_gtlInstruction_display (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_gtlInstruction_display.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Extension getter '@gtlInstruction mayExecuteWithoutError'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlInstruction_mayExecuteWithoutError> gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mayExecuteWithoutError (const int32_t inClassIndex,
                                                  enterExtensionGetter_gtlInstruction_mayExecuteWithoutError inGetter) {
  gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_mayExecuteWithoutError (const cPtr_gtlInstruction * inObject,
                                                        const GALGAS_gtlContext in_exeContext,
                                                        const GALGAS_gtlData in_context,
                                                        const GALGAS_library in_lib,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlInstruction_mayExecuteWithoutError f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.count ()) {
      f = gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.count ()) {
           f = gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_exeContext, in_context, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlInstruction_mayExecuteWithoutError (const cPtr_gtlInstruction * /* inObject */,
                                                                          const GALGAS_gtlContext /* constinArgument_exeContext */,
                                                                          const GALGAS_gtlData /* constinArgument_context */,
                                                                          const GALGAS_library /* constinArgument_lib */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_may ; // Returned variable
  result_may = GALGAS_bool (true) ;
//---
  return result_may ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlInstruction_mayExecuteWithoutError (void) {
  enterExtensionGetter_mayExecuteWithoutError (kTypeDescriptor_GALGAS_gtlInstruction.mSlotID,
                                               extensionGetter_gtlInstruction_mayExecuteWithoutError) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlInstruction_mayExecuteWithoutError (void) {
  gExtensionGetterTable_gtlInstruction_mayExecuteWithoutError.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlInstruction_mayExecuteWithoutError (defineExtensionGetter_gtlInstruction_mayExecuteWithoutError,
                                                                  freeExtensionGetter_gtlInstruction_mayExecuteWithoutError) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlStepInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlStepInstruction * p = (const cPtr_gtlStepInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlStepInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlStepInstruction::objectCompare (const GALGAS_gtlStepInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStepInstruction::GALGAS_gtlStepInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlStepInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStepInstruction::GALGAS_gtlStepInstruction (const cPtr_gtlStepInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlStepInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlStepInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlStepInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @gtlStepInstruction class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlStepInstruction::cPtr_gtlStepInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlStepInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStepInstruction ;
}

void cPtr_gtlStepInstruction::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@gtlStepInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlStepInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlStepInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlStepInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlStepInstruction ("gtlStepInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlStepInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStepInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlStepInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlStepInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStepInstruction result ;
  const GALGAS_gtlStepInstruction * p = (const GALGAS_gtlStepInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlStepInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlStepInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlDoInstInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDoInstInstruction * p = (const cPtr_gtlDoInstInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDoInstInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_instructionToDo.objectCompare (p->mProperty_instructionToDo) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlDoInstInstruction::objectCompare (const GALGAS_gtlDoInstInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstInstruction::GALGAS_gtlDoInstInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstInstruction::GALGAS_gtlDoInstInstruction (const cPtr_gtlDoInstInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoInstInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstInstruction GALGAS_gtlDoInstInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                          const GALGAS_string & inAttribute_signature,
                                                                          const GALGAS_gtlInstruction & inAttribute_instructionToDo
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_instructionToDo.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoInstInstruction (inAttribute_where, inAttribute_signature, inAttribute_instructionToDo COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstruction GALGAS_gtlDoInstInstruction::getter_instructionToDo (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstruction result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlDoInstInstruction * p = (const cPtr_gtlDoInstInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoInstInstruction) ;
    result = p->mProperty_instructionToDo ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstruction cPtr_gtlDoInstInstruction::getter_instructionToDo (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionToDo ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @gtlDoInstInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlDoInstInstruction::cPtr_gtlDoInstInstruction (const GALGAS_location & in_where,
                                                      const GALGAS_string & in_signature,
                                                      const GALGAS_gtlInstruction & in_instructionToDo
                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_instructionToDo (in_instructionToDo) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlDoInstInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstInstruction ;
}

void cPtr_gtlDoInstInstruction::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@gtlDoInstInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_instructionToDo.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlDoInstInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDoInstInstruction (mProperty_where, mProperty_signature, mProperty_instructionToDo COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlDoInstInstruction type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoInstInstruction ("gtlDoInstInstruction",
                                             & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDoInstInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDoInstInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoInstInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstInstruction GALGAS_gtlDoInstInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstInstruction result ;
  const GALGAS_gtlDoInstInstruction * p = (const GALGAS_gtlDoInstInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDoInstInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoInstInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlDoNotAllInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDoNotAllInstruction * p = (const cPtr_gtlDoNotAllInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDoNotAllInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlDoNotAllInstruction::objectCompare (const GALGAS_gtlDoNotAllInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotAllInstruction::GALGAS_gtlDoNotAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoNotAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_string::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotAllInstruction::GALGAS_gtlDoNotAllInstruction (const cPtr_gtlDoNotAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoNotAllInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_string & inAttribute_signature
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoNotAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlDoNotAllInstruction class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlDoNotAllInstruction::cPtr_gtlDoNotAllInstruction (const GALGAS_location & in_where,
                                                          const GALGAS_string & in_signature
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlDoNotAllInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ;
}

void cPtr_gtlDoNotAllInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlDoNotAllInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlDoNotAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDoNotAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlDoNotAllInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ("gtlDoNotAllInstruction",
                                               & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDoNotAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDoNotAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoNotAllInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotAllInstruction result ;
  const GALGAS_gtlDoNotAllInstruction * p = (const GALGAS_gtlDoNotAllInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDoNotAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoNotAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlDoInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDoInstruction * p = (const cPtr_gtlDoInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDoInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlDoInstruction::objectCompare (const GALGAS_gtlDoInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstruction::GALGAS_gtlDoInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_string::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstruction::GALGAS_gtlDoInstruction (const cPtr_gtlDoInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_string & inAttribute_signature
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlDoInstruction class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlDoInstruction::cPtr_gtlDoInstruction (const GALGAS_location & in_where,
                                              const GALGAS_string & in_signature
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlDoInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstruction ;
}

void cPtr_gtlDoInstruction::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlDoInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlDoInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDoInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlDoInstruction type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoInstruction ("gtlDoInstruction",
                                         & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlDoInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlDoInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstruction result ;
  const GALGAS_gtlDoInstruction * p = (const GALGAS_gtlDoInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDoInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlContinueInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlContinueInstruction * p = (const cPtr_gtlContinueInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlContinueInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlContinueInstruction::objectCompare (const GALGAS_gtlContinueInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContinueInstruction::GALGAS_gtlContinueInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlContinueInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_string::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContinueInstruction::GALGAS_gtlContinueInstruction (const cPtr_gtlContinueInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlContinueInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_string & inAttribute_signature
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlContinueInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlContinueInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlContinueInstruction class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlContinueInstruction::cPtr_gtlContinueInstruction (const GALGAS_location & in_where,
                                                          const GALGAS_string & in_signature
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlContinueInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContinueInstruction ;
}

void cPtr_gtlContinueInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@gtlContinueInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlContinueInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlContinueInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @gtlContinueInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlContinueInstruction ("gtlContinueInstruction",
                                               & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlContinueInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContinueInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlContinueInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlContinueInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlContinueInstruction result ;
  const GALGAS_gtlContinueInstruction * p = (const GALGAS_gtlContinueInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlContinueInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlContinueInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBreakpointInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBreakpointInstruction * p = (const cPtr_gtlBreakpointInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_fileName.objectCompare (p->mProperty_fileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_lineNum.objectCompare (p->mProperty_lineNum) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBreakpointInstruction::objectCompare (const GALGAS_gtlBreakpointInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointInstruction::GALGAS_gtlBreakpointInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointInstruction GALGAS_gtlBreakpointInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_uint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointInstruction::GALGAS_gtlBreakpointInstruction (const cPtr_gtlBreakpointInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointInstruction GALGAS_gtlBreakpointInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_string & inAttribute_signature,
                                                                                  const GALGAS_string & inAttribute_fileName,
                                                                                  const GALGAS_uint & inAttribute_lineNum
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_fileName.isValid () && inAttribute_lineNum.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointInstruction (inAttribute_where, inAttribute_signature, inAttribute_fileName, inAttribute_lineNum COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlBreakpointInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpointInstruction * p = (const cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    result = p->mProperty_fileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlBreakpointInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlBreakpointInstruction::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpointInstruction * p = (const cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    result = p->mProperty_lineNum ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_gtlBreakpointInstruction::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  return mProperty_lineNum ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @gtlBreakpointInstruction class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBreakpointInstruction::cPtr_gtlBreakpointInstruction (const GALGAS_location & in_where,
                                                              const GALGAS_string & in_signature,
                                                              const GALGAS_string & in_fileName,
                                                              const GALGAS_uint & in_lineNum
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_fileName (in_fileName),
mProperty_lineNum (in_lineNum) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBreakpointInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointInstruction ;
}

void cPtr_gtlBreakpointInstruction::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlBreakpointInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_fileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_lineNum.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBreakpointInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBreakpointInstruction (mProperty_where, mProperty_signature, mProperty_fileName, mProperty_lineNum COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlBreakpointInstruction type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointInstruction ("gtlBreakpointInstruction",
                                                 & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointInstruction GALGAS_gtlBreakpointInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointInstruction result ;
  const GALGAS_gtlBreakpointInstruction * p = (const GALGAS_gtlBreakpointInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBreakpointListInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBreakpointListInstruction * p = (const cPtr_gtlBreakpointListInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBreakpointListInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBreakpointListInstruction::objectCompare (const GALGAS_gtlBreakpointListInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointListInstruction::GALGAS_gtlBreakpointListInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointListInstruction::GALGAS_gtlBreakpointListInstruction (const cPtr_gtlBreakpointListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointListInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointListInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointListInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlBreakpointListInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBreakpointListInstruction::cPtr_gtlBreakpointListInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBreakpointListInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ;
}

void cPtr_gtlBreakpointListInstruction::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@gtlBreakpointListInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBreakpointListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBreakpointListInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlBreakpointListInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ("gtlBreakpointListInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointListInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointListInstruction result ;
  const GALGAS_gtlBreakpointListInstruction * p = (const GALGAS_gtlBreakpointListInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBreakpointDeleteInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBreakpointDeleteInstruction * p = (const cPtr_gtlBreakpointDeleteInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBreakpointDeleteInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_numToDelete.objectCompare (p->mProperty_numToDelete) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBreakpointDeleteInstruction::objectCompare (const GALGAS_gtlBreakpointDeleteInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteInstruction::GALGAS_gtlBreakpointDeleteInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteInstruction GALGAS_gtlBreakpointDeleteInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointDeleteInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_lbigint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteInstruction::GALGAS_gtlBreakpointDeleteInstruction (const cPtr_gtlBreakpointDeleteInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointDeleteInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteInstruction GALGAS_gtlBreakpointDeleteInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                              const GALGAS_string & inAttribute_signature,
                                                                                              const GALGAS_lbigint & inAttribute_numToDelete
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_numToDelete.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointDeleteInstruction (inAttribute_where, inAttribute_signature, inAttribute_numToDelete COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_gtlBreakpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlBreakpointDeleteInstruction * p = (const cPtr_gtlBreakpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointDeleteInstruction) ;
    result = p->mProperty_numToDelete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_gtlBreakpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mProperty_numToDelete ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @gtlBreakpointDeleteInstruction class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBreakpointDeleteInstruction::cPtr_gtlBreakpointDeleteInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_lbigint & in_numToDelete
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_numToDelete (in_numToDelete) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBreakpointDeleteInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ;
}

void cPtr_gtlBreakpointDeleteInstruction::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@gtlBreakpointDeleteInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_numToDelete.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBreakpointDeleteInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBreakpointDeleteInstruction (mProperty_where, mProperty_signature, mProperty_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @gtlBreakpointDeleteInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ("gtlBreakpointDeleteInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointDeleteInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointDeleteInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointDeleteInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteInstruction GALGAS_gtlBreakpointDeleteInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteInstruction result ;
  const GALGAS_gtlBreakpointDeleteInstruction * p = (const GALGAS_gtlBreakpointDeleteInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointDeleteInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointDeleteInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlBreakpointDeleteAllInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBreakpointDeleteAllInstruction * p = (const cPtr_gtlBreakpointDeleteAllInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBreakpointDeleteAllInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlBreakpointDeleteAllInstruction::objectCompare (const GALGAS_gtlBreakpointDeleteAllInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteAllInstruction::GALGAS_gtlBreakpointDeleteAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteAllInstruction::GALGAS_gtlBreakpointDeleteAllInstruction (const cPtr_gtlBreakpointDeleteAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointDeleteAllInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                                    const GALGAS_string & inAttribute_signature
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointDeleteAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @gtlBreakpointDeleteAllInstruction class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlBreakpointDeleteAllInstruction::cPtr_gtlBreakpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                                                const GALGAS_string & in_signature
                                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlBreakpointDeleteAllInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ;
}

void cPtr_gtlBreakpointDeleteAllInstruction::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@gtlBreakpointDeleteAllInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlBreakpointDeleteAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlBreakpointDeleteAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @gtlBreakpointDeleteAllInstruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ("gtlBreakpointDeleteAllInstruction",
                                                          & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointDeleteAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointDeleteAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointDeleteAllInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteAllInstruction result ;
  const GALGAS_gtlBreakpointDeleteAllInstruction * p = (const GALGAS_gtlBreakpointDeleteAllInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointDeleteAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointDeleteAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlWatchpointListInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWatchpointListInstruction * p = (const cPtr_gtlWatchpointListInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWatchpointListInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlWatchpointListInstruction::objectCompare (const GALGAS_gtlWatchpointListInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointListInstruction::GALGAS_gtlWatchpointListInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointListInstruction::GALGAS_gtlWatchpointListInstruction (const cPtr_gtlWatchpointListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointListInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointListInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointListInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @gtlWatchpointListInstruction class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlWatchpointListInstruction::cPtr_gtlWatchpointListInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlWatchpointListInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ;
}

void cPtr_gtlWatchpointListInstruction::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@gtlWatchpointListInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlWatchpointListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWatchpointListInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlWatchpointListInstruction type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ("gtlWatchpointListInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlWatchpointListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlWatchpointListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointListInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointListInstruction result ;
  const GALGAS_gtlWatchpointListInstruction * p = (const GALGAS_gtlWatchpointListInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWatchpointListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlWatchpointDeleteInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWatchpointDeleteInstruction * p = (const cPtr_gtlWatchpointDeleteInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWatchpointDeleteInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_numToDelete.objectCompare (p->mProperty_numToDelete) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlWatchpointDeleteInstruction::objectCompare (const GALGAS_gtlWatchpointDeleteInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteInstruction::GALGAS_gtlWatchpointDeleteInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteInstruction GALGAS_gtlWatchpointDeleteInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointDeleteInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_lbigint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteInstruction::GALGAS_gtlWatchpointDeleteInstruction (const cPtr_gtlWatchpointDeleteInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointDeleteInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteInstruction GALGAS_gtlWatchpointDeleteInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                              const GALGAS_string & inAttribute_signature,
                                                                                              const GALGAS_lbigint & inAttribute_numToDelete
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_numToDelete.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointDeleteInstruction (inAttribute_where, inAttribute_signature, inAttribute_numToDelete COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_gtlWatchpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWatchpointDeleteInstruction * p = (const cPtr_gtlWatchpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointDeleteInstruction) ;
    result = p->mProperty_numToDelete ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint cPtr_gtlWatchpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mProperty_numToDelete ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @gtlWatchpointDeleteInstruction class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlWatchpointDeleteInstruction::cPtr_gtlWatchpointDeleteInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_lbigint & in_numToDelete
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_numToDelete (in_numToDelete) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlWatchpointDeleteInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ;
}

void cPtr_gtlWatchpointDeleteInstruction::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@gtlWatchpointDeleteInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_numToDelete.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlWatchpointDeleteInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWatchpointDeleteInstruction (mProperty_where, mProperty_signature, mProperty_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @gtlWatchpointDeleteInstruction type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ("gtlWatchpointDeleteInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlWatchpointDeleteInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlWatchpointDeleteInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointDeleteInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteInstruction GALGAS_gtlWatchpointDeleteInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteInstruction result ;
  const GALGAS_gtlWatchpointDeleteInstruction * p = (const GALGAS_gtlWatchpointDeleteInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWatchpointDeleteInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointDeleteInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlWatchpointDeleteAllInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWatchpointDeleteAllInstruction * p = (const cPtr_gtlWatchpointDeleteAllInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWatchpointDeleteAllInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlWatchpointDeleteAllInstruction::objectCompare (const GALGAS_gtlWatchpointDeleteAllInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteAllInstruction::GALGAS_gtlWatchpointDeleteAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteAllInstruction::GALGAS_gtlWatchpointDeleteAllInstruction (const cPtr_gtlWatchpointDeleteAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointDeleteAllInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                                    const GALGAS_string & inAttribute_signature
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointDeleteAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @gtlWatchpointDeleteAllInstruction class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlWatchpointDeleteAllInstruction::cPtr_gtlWatchpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                                                const GALGAS_string & in_signature
                                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlWatchpointDeleteAllInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ;
}

void cPtr_gtlWatchpointDeleteAllInstruction::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@gtlWatchpointDeleteAllInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlWatchpointDeleteAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWatchpointDeleteAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @gtlWatchpointDeleteAllInstruction type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ("gtlWatchpointDeleteAllInstruction",
                                                          & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlWatchpointDeleteAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlWatchpointDeleteAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointDeleteAllInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteAllInstruction result ;
  const GALGAS_gtlWatchpointDeleteAllInstruction * p = (const GALGAS_gtlWatchpointDeleteAllInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWatchpointDeleteAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointDeleteAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlListInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlListInstruction * p = (const cPtr_gtlListInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlListInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_window.objectCompare (p->mProperty_window) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlListInstruction::objectCompare (const GALGAS_gtlListInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListInstruction::GALGAS_gtlListInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListInstruction GALGAS_gtlListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListInstruction::GALGAS_gtlListInstruction (const cPtr_gtlListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlListInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListInstruction GALGAS_gtlListInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature,
                                                                      const GALGAS_uint & inAttribute_window
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlListInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_window.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlListInstruction (inAttribute_where, inAttribute_signature, inAttribute_window COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlListInstruction::getter_window (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlListInstruction * p = (const cPtr_gtlListInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListInstruction) ;
    result = p->mProperty_window ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_gtlListInstruction::getter_window (UNUSED_LOCATION_ARGS) const {
  return mProperty_window ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @gtlListInstruction class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlListInstruction::cPtr_gtlListInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature,
                                                  const GALGAS_uint & in_window
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_window (in_window) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlListInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListInstruction ;
}

void cPtr_gtlListInstruction::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@gtlListInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_window.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlListInstruction (mProperty_where, mProperty_signature, mProperty_window COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlListInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlListInstruction ("gtlListInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlListInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlListInstruction GALGAS_gtlListInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlListInstruction result ;
  const GALGAS_gtlListInstruction * p = (const GALGAS_gtlListInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlHistoryInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlHistoryInstruction * p = (const cPtr_gtlHistoryInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlHistoryInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlHistoryInstruction::objectCompare (const GALGAS_gtlHistoryInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHistoryInstruction::GALGAS_gtlHistoryInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlHistoryInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_string::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHistoryInstruction::GALGAS_gtlHistoryInstruction (const cPtr_gtlHistoryInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlHistoryInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                            const GALGAS_string & inAttribute_signature
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlHistoryInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlHistoryInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @gtlHistoryInstruction class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlHistoryInstruction::cPtr_gtlHistoryInstruction (const GALGAS_location & in_where,
                                                        const GALGAS_string & in_signature
                                                        COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlHistoryInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHistoryInstruction ;
}

void cPtr_gtlHistoryInstruction::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@gtlHistoryInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlHistoryInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlHistoryInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @gtlHistoryInstruction type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlHistoryInstruction ("gtlHistoryInstruction",
                                              & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlHistoryInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHistoryInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlHistoryInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlHistoryInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlHistoryInstruction result ;
  const GALGAS_gtlHistoryInstruction * p = (const GALGAS_gtlHistoryInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlHistoryInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlHistoryInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlLoadInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLoadInstruction * p = (const cPtr_gtlLoadInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLoadInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_fileName.objectCompare (p->mProperty_fileName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlLoadInstruction::objectCompare (const GALGAS_gtlLoadInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoadInstruction::GALGAS_gtlLoadInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoadInstruction GALGAS_gtlLoadInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLoadInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoadInstruction::GALGAS_gtlLoadInstruction (const cPtr_gtlLoadInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLoadInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoadInstruction GALGAS_gtlLoadInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature,
                                                                      const GALGAS_string & inAttribute_fileName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlLoadInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_fileName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLoadInstruction (inAttribute_where, inAttribute_signature, inAttribute_fileName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlLoadInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLoadInstruction * p = (const cPtr_gtlLoadInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoadInstruction) ;
    result = p->mProperty_fileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlLoadInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @gtlLoadInstruction class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlLoadInstruction::cPtr_gtlLoadInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature,
                                                  const GALGAS_string & in_fileName
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_fileName (in_fileName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlLoadInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLoadInstruction ;
}

void cPtr_gtlLoadInstruction::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@gtlLoadInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_fileName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlLoadInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLoadInstruction (mProperty_where, mProperty_signature, mProperty_fileName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlLoadInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLoadInstruction ("gtlLoadInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlLoadInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLoadInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlLoadInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLoadInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlLoadInstruction GALGAS_gtlLoadInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlLoadInstruction result ;
  const GALGAS_gtlLoadInstruction * p = (const GALGAS_gtlLoadInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLoadInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLoadInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlHelpInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlHelpInstruction * p = (const cPtr_gtlHelpInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlHelpInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlHelpInstruction::objectCompare (const GALGAS_gtlHelpInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHelpInstruction::GALGAS_gtlHelpInstruction (void) :
GALGAS_gtlInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlHelpInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHelpInstruction::GALGAS_gtlHelpInstruction (const cPtr_gtlHelpInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlHelpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlHelpInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlHelpInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @gtlHelpInstruction class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlHelpInstruction::cPtr_gtlHelpInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlHelpInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHelpInstruction ;
}

void cPtr_gtlHelpInstruction::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@gtlHelpInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlHelpInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlHelpInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlHelpInstruction type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlHelpInstruction ("gtlHelpInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlHelpInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHelpInstruction ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlHelpInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlHelpInstruction (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlHelpInstruction result ;
  const GALGAS_gtlHelpInstruction * p = (const GALGAS_gtlHelpInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlHelpInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlHelpInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@debugCommandInput getCommand'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_debugCommandInput_getCommand> gExtensionModifierTable_debugCommandInput_getCommand ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debugCommandInput_getCommand inModifier) {
  gExtensionModifierTable_debugCommandInput_getCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_getCommand (cPtr_debugCommandInput * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_command.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debugCommandInput) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debugCommandInput_getCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_debugCommandInput_getCommand.count ()) {
      f = gExtensionModifierTable_debugCommandInput_getCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debugCommandInput_getCommand.count ()) {
           f = gExtensionModifierTable_debugCommandInput_getCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debugCommandInput_getCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, out_command, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_debugCommandInput_getCommand (cPtr_debugCommandInput * inObject,
                                                          GALGAS_string & outArgument_command,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debugCommandInput * object = inObject ;
  macroValidSharedObject (object, cPtr_debugCommandInput) ;
  outArgument_command = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_savedCommand_844 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_historyIndex_870 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_char var_inputChar_892 = GALGAS_char (TO_UNICODE (13)) ;
  GALGAS_uint var_cursorPos_917 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_uint var_escapeState_941 = GALGAS_uint ((uint32_t) 0U) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger_input.galgas", 42)).isValid ()) {
    uint32_t variant_955 = GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger_input.galgas", 42)).uintValue () ;
    bool loop_955 = true ;
    while (loop_955) {
        var_inputChar_892 = GALGAS_char::constructor_unicodeCharacterFromRawKeyboard (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 43)) ;
      loop_955 = GALGAS_bool (kIsNotEqual, var_inputChar_892.objectCompare (GALGAS_char (TO_UNICODE (13)))).isValid () ;
      if (loop_955) {
        loop_955 = GALGAS_bool (kIsNotEqual, var_inputChar_892.objectCompare (GALGAS_char (TO_UNICODE (13)))).boolValue () ;
      }
      if (loop_955 && (0 == variant_955)) {
        loop_955 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_debugger_input.galgas", 42)) ;
      }
      if (loop_955) {
        variant_955 -- ;
        const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_escapeState_941.objectCompare (GALGAS_uint ((uint32_t) 1U))).operator_and (GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 45)).objectCompare (GALGAS_uint ((uint32_t) 91U))) COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 45)).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_escapeState_941 = GALGAS_uint ((uint32_t) 2U) ;
        }else if (kBoolFalse == test_0) {
          const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_escapeState_941.objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 49)).objectCompare (GALGAS_uint ((uint32_t) 68U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_cursorPos_917.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_cursorPos_917.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 52)) ;
                inCompiler->printMessage (GALGAS_string ("\x1B""[1D")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 53)) ;
              }
            }else if (kBoolFalse == test_2) {
              const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 55)).objectCompare (GALGAS_uint ((uint32_t) 67U))).boolEnum () ;
              if (kBoolTrue == test_4) {
                const enumGalgasBool test_5 = GALGAS_bool (kIsStrictInf, var_cursorPos_917.objectCompare (outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 57)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  var_cursorPos_917.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 58)) ;
                  inCompiler->printMessage (GALGAS_string ("\x1B""[1C")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 59)) ;
                }
              }else if (kBoolFalse == test_4) {
                const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 65U))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_historyIndex_870.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    var_savedCommand_844 = outArgument_command ;
                  }
                  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictInf, var_historyIndex_870.objectCompare (object->mProperty_history.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 66)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, var_cursorPos_917.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      inCompiler->printMessage (GALGAS_string ("\x1B""[").add_operation (var_cursorPos_917.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68)) ;
                    }
                    inCompiler->printMessage (GALGAS_string ("\x1B""[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 70)) ;
                    outArgument_command = object->mProperty_history.getter_mValueAtIndex (var_historyIndex_870, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 71)) ;
                    inCompiler->printMessage (outArgument_command  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 72)) ;
                    var_cursorPos_917 = outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 73)) ;
                    var_historyIndex_870.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 74)) ;
                  }
                }else if (kBoolFalse == test_6) {
                  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 66U))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_historyIndex_870.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, var_cursorPos_917.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        inCompiler->printMessage (GALGAS_string ("\x1B""[").add_operation (var_cursorPos_917.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80)) ;
                      }
                      inCompiler->printMessage (GALGAS_string ("\x1B""[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 82)) ;
                      var_historyIndex_870.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 83)) ;
                      const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, var_historyIndex_870.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        outArgument_command = var_savedCommand_844 ;
                      }else if (kBoolFalse == test_13) {
                        outArgument_command = object->mProperty_history.getter_mValueAtIndex (var_historyIndex_870.substract_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 87)) ;
                      }
                      inCompiler->printMessage (outArgument_command  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 89)) ;
                      var_cursorPos_917 = outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 90)) ;
                    }
                  }
                }
              }
            }
            var_escapeState_941 = GALGAS_uint ((uint32_t) 0U) ;
          }else if (kBoolFalse == test_1) {
            const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 95)).objectCompare (GALGAS_uint ((uint32_t) 127U))).boolEnum () ;
            if (kBoolTrue == test_14) {
              const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_cursorPos_917.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
              if (kBoolTrue == test_15) {
                var_cursorPos_917.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 98)) ;
                {
                GALGAS_char joker_2684 ; // Joker input parameter
                outArgument_command.setter_removeCharacterAtIndex (joker_2684, var_cursorPos_917, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 99)) ;
                }
                inCompiler->printMessage (GALGAS_string ("\x1B""[1D\x1B""[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 100)) ;
                GALGAS_uint var_remainingChars_2766 = outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 101)).substract_operation (var_cursorPos_917, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 101)) ;
                const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_remainingChars_2766.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                if (kBoolTrue == test_16) {
                  inCompiler->printMessage (outArgument_command.getter_rightSubString (var_remainingChars_2766 COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 103))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 103)) ;
                  inCompiler->printMessage (GALGAS_string ("\x1B""[").add_operation (var_remainingChars_2766.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104)) ;
                }
              }
              inCompiler->printMessage (var_inputChar_892.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 107))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 107)) ;
            }else if (kBoolFalse == test_14) {
              const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, var_inputChar_892.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 27U))).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_escapeState_941 = GALGAS_uint ((uint32_t) 1U) ;
              }else if (kBoolFalse == test_17) {
                const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, var_inputChar_892.objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
                if (kBoolTrue == test_18) {
                  const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, var_cursorPos_917.objectCompare (outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 112)))).boolEnum () ;
                  if (kBoolTrue == test_19) {
                    outArgument_command = outArgument_command.add_operation (var_inputChar_892.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 113)) ;
                    inCompiler->printMessage (var_inputChar_892.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 114))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 114)) ;
                    var_cursorPos_917.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 115)) ;
                  }else if (kBoolFalse == test_19) {
                    {
                    outArgument_command.setter_insertCharacterAtIndex (var_inputChar_892, var_cursorPos_917, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 117)) ;
                    }
                    inCompiler->printMessage (var_inputChar_892.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 118))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 118)) ;
                    var_cursorPos_917.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 119)) ;
                    GALGAS_uint var_remainingChars_3446 = outArgument_command.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 120)).substract_operation (var_cursorPos_917, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 120)) ;
                    const enumGalgasBool test_20 = GALGAS_bool (kIsStrictSup, var_remainingChars_3446.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                    if (kBoolTrue == test_20) {
                      inCompiler->printMessage (outArgument_command.getter_rightSubString (var_remainingChars_3446 COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 122))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 122)) ;
                      inCompiler->printMessage (GALGAS_string ("\x1B""[").add_operation (var_remainingChars_3446.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123)) ;
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
  inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 143)) ;
  const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, outArgument_command.getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger_input.galgas", 144)).objectCompare (GALGAS_string ("hist"))).boolEnum () ;
  if (kBoolTrue == test_21) {
    {
    object->mProperty_history.setter_insertAtIndex (outArgument_command, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 145)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_debugCommandInput_getCommand (void) {
  enterExtensionSetter_getCommand (kTypeDescriptor_GALGAS_debugCommandInput.mSlotID,
                                   extensionSetter_debugCommandInput_getCommand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_debugCommandInput_getCommand (void) {
  gExtensionModifierTable_debugCommandInput_getCommand.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_debugCommandInput_getCommand (defineExtensionSetter_debugCommandInput_getCommand,
                                                         freeExtensionModifier_debugCommandInput_getCommand) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@debugCommandInput listHistory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_debugCommandInput_listHistory> gExtensionMethodTable_debugCommandInput_listHistory ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_listHistory (const int32_t inClassIndex,
                                       extensionMethodSignature_debugCommandInput_listHistory inMethod) {
  gExtensionMethodTable_debugCommandInput_listHistory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_listHistory (const cPtr_debugCommandInput * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debugCommandInput) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debugCommandInput_listHistory f = NULL ;
    if (classIndex < gExtensionMethodTable_debugCommandInput_listHistory.count ()) {
      f = gExtensionMethodTable_debugCommandInput_listHistory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debugCommandInput_listHistory.count ()) {
           f = gExtensionMethodTable_debugCommandInput_listHistory (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debugCommandInput_listHistory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_debugCommandInput_listHistory (const cPtr_debugCommandInput * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debugCommandInput * object = inObject ;
  macroValidSharedObject (object, cPtr_debugCommandInput) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_history.getter_length (SOURCE_FILE ("gtl_debugger_input.galgas", 151)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("Command history:\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 152)) ;
    cEnumerator_stringlist enumerator_4332 (object->mProperty_history, kENUMERATION_UP) ;
    GALGAS_uint index_4314 ((uint32_t) 0) ;
    while (enumerator_4332.hasCurrentObject ()) {
      inCompiler->printMessage (index_4314.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 154)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (enumerator_4332.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)) ;
      enumerator_4332.gotoNextObject () ;
      index_4314.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 153)) ;
    }
  }else if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("Command history empty.\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 157)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_debugCommandInput_listHistory (void) {
  enterExtensionMethod_listHistory (kTypeDescriptor_GALGAS_debugCommandInput.mSlotID,
                                    extensionMethod_debugCommandInput_listHistory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_debugCommandInput_listHistory (void) {
  gExtensionMethodTable_debugCommandInput_listHistory.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_debugCommandInput_listHistory (defineExtensionMethod_debugCommandInput_listHistory,
                                                          freeExtensionMethod_debugCommandInput_listHistory) ;



//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  switch (select_gtl_5F_debugger_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlContinueInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 46)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  switch (select_gtl_5F_debugger_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 55)) ;
  outArgument_instruction = GALGAS_gtlHelpInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 57)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 66)) ;
  outArgument_instruction = GALGAS_gtlStepInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 68)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 77)) ;
  GALGAS_lstring var_fileName_1774 ;
  switch (select_gtl_5F_debugger_5F_parser_1 (inCompiler)) {
  case 1: {
    var_fileName_1774 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 80)) ;
  } break ;
  case 2: {
    var_fileName_1774 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlLoadInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 85)), GALGAS_string::makeEmptyString (), var_fileName_1774.getter_string (SOURCE_FILE ("gtl_debugger_parser.galgas", 87))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 77)) ;
  switch (select_gtl_5F_debugger_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 95)) ;
  outArgument_instruction = GALGAS_gtlHistoryInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 97)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 106)) ;
  switch (select_gtl_5F_debugger_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 108)) ;
    switch (select_gtl_5F_debugger_5F_parser_3 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_index_2386 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 110)) ;
      outArgument_instruction = GALGAS_gtlBreakpointDeleteInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 112)), GALGAS_string::makeEmptyString (), var_index_2386  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 111)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 117)) ;
      outArgument_instruction = GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 119)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 118)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    switch (select_gtl_5F_debugger_5F_parser_4 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_fileName_2682 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 125)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 126)) ;
      GALGAS_lstring var_fileExtension_2739 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 127)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 128)) ;
      GALGAS_lbigint var_lineNum_2809 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 129)) ;
      outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 131)), GALGAS_string::makeEmptyString (), var_fileName_2682.getter_string (SOURCE_FILE ("gtl_debugger_parser.galgas", 133)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 133)).add_operation (var_fileExtension_2739.getter_string (SOURCE_FILE ("gtl_debugger_parser.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 133)), var_lineNum_2809.getter_bigint (SOURCE_FILE ("gtl_debugger_parser.galgas", 134)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 134))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 130)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_lineNum_3038 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 137)) ;
      outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 139)), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), var_lineNum_3038.getter_bigint (SOURCE_FILE ("gtl_debugger_parser.galgas", 142)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 142))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 138)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    GALGAS_lstring var_fileNameAndLineNum_3222 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 146)) ;
    GALGAS_stringlist var_components_3249 = var_fileNameAndLineNum_3222.getter_string (SOURCE_FILE ("gtl_debugger_parser.galgas", 147)).getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 147)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_components_3249.getter_length (SOURCE_FILE ("gtl_debugger_parser.galgas", 148)).objectCompare (GALGAS_uint ((uint32_t) 2U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_fileName_3374 = var_components_3249.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 149)) ;
      GALGAS_string var_lineNum_3428 = var_components_3249.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 150)) ;
      outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 152)), GALGAS_string::makeEmptyString (), var_fileName_3374, var_lineNum_3428.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 155))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 151)) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 158)), GALGAS_string ("Illegal breakpoint location"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 158)) ;
      outArgument_instruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 4: {
    outArgument_instruction = GALGAS_gtlBreakpointListInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 162)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 161)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 106)) ;
  switch (select_gtl_5F_debugger_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 108)) ;
    switch (select_gtl_5F_debugger_5F_parser_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    switch (select_gtl_5F_debugger_5F_parser_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 125)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 126)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 127)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 128)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 129)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 137)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 146)) ;
  } break ;
  case 4: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 172)) ;
  switch (select_gtl_5F_debugger_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 174)) ;
    switch (select_gtl_5F_debugger_5F_parser_6 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_index_4025 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 176)) ;
      outArgument_instruction = GALGAS_gtlWatchpointDeleteInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 178)), GALGAS_string::makeEmptyString (), var_index_4025  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 177)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 183)) ;
      outArgument_instruction = GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 185)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 190)) ;
    GALGAS_gtlExpression var_watchExpression_4332 ;
    nt_gtl_5F_expression_ (var_watchExpression_4332, inCompiler) ;
    outArgument_instruction = GALGAS_gtlWatchpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 193)), GALGAS_string::makeEmptyString (), var_watchExpression_4332  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 192)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 197)) ;
  } break ;
  case 3: {
    outArgument_instruction = GALGAS_gtlWatchpointListInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 200)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 199)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 172)) ;
  switch (select_gtl_5F_debugger_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 174)) ;
    switch (select_gtl_5F_debugger_5F_parser_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 176)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 183)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 190)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 197)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 211)) ;
  switch (select_gtl_5F_debugger_5F_parser_7 (inCompiler)) {
  case 1: {
    GALGAS_gtlInstruction var_instructionToStepDo_4764 ;
    nt_gtl_5F_step_5F_do_5F_command_ (var_instructionToStepDo_4764, inCompiler) ;
    outArgument_instruction = GALGAS_gtlDoInstInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 215)), GALGAS_string::makeEmptyString (), var_instructionToStepDo_4764  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 220)) ;
    switch (select_gtl_5F_debugger_5F_parser_8 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_num_4948 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 222)) ;
      outArgument_instruction = GALGAS_gtlDoNotInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 224)), GALGAS_string::makeEmptyString (), var_num_4948  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 223)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 229)) ;
      outArgument_instruction = GALGAS_gtlDoNotAllInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 231)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 230)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    outArgument_instruction = GALGAS_gtlDoInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 237)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 211)) ;
  switch (select_gtl_5F_debugger_5F_parser_7 (inCompiler)) {
  case 1: {
    nt_gtl_5F_step_5F_do_5F_command_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 220)) ;
    switch (select_gtl_5F_debugger_5F_parser_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 222)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 229)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  outArgument_instruction = GALGAS_gtlStepInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 248)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 247)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 257)) ;
  GALGAS_gtlVarPath var_variable_5647 ;
  nt_gtl_5F_variable_ (var_variable_5647, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 260)) ;
    GALGAS_gtlExpression var_expression_5713 ;
    nt_gtl_5F_expression_ (var_expression_5713, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 263)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_5713  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 262)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 269)) ;
    GALGAS_gtlExpression var_expression_5883 ;
    nt_gtl_5F_expression_ (var_expression_5883, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAddInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 272)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_5883  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 271)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 278)) ;
    GALGAS_gtlExpression var_expression_6055 ;
    nt_gtl_5F_expression_ (var_expression_6055, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetSubstractInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 281)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6055  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 280)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 287)) ;
    GALGAS_gtlExpression var_expression_6233 ;
    nt_gtl_5F_expression_ (var_expression_6233, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetMultiplyInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 290)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6233  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 289)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 296)) ;
    GALGAS_gtlExpression var_expression_6410 ;
    nt_gtl_5F_expression_ (var_expression_6410, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetDivideInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 299)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6410  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 298)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 305)) ;
    GALGAS_gtlExpression var_expression_6587 ;
    nt_gtl_5F_expression_ (var_expression_6587, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetModuloInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 308)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6587  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 307)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 314)) ;
    GALGAS_gtlExpression var_expression_6763 ;
    nt_gtl_5F_expression_ (var_expression_6763, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftLeftInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 317)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6763  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 316)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 323)) ;
    GALGAS_gtlExpression var_expression_6942 ;
    nt_gtl_5F_expression_ (var_expression_6942, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftRightInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 326)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_6942  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 325)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 332)) ;
    GALGAS_gtlExpression var_expression_7121 ;
    nt_gtl_5F_expression_ (var_expression_7121, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAndInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 335)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_7121  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 334)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 341)) ;
    GALGAS_gtlExpression var_expression_7293 ;
    nt_gtl_5F_expression_ (var_expression_7293, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetOrInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 344)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_7293  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 343)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 350)) ;
    GALGAS_gtlExpression var_expression_7464 ;
    nt_gtl_5F_expression_ (var_expression_7464, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetXorInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 353)), GALGAS_string::makeEmptyString (), var_variable_5647, var_expression_7464  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 352)) ;
  } break ;
  case 12: {
    outArgument_instruction = GALGAS_gtlLetUnconstructedInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 360)), GALGAS_string::makeEmptyString (), var_variable_5647  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 257)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 260)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 269)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 278)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 287)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 296)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 305)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 314)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 323)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 332)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 341)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 350)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 12: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                        C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 371)) ;
  GALGAS_gtlVarPath var_variable_7878 ;
  nt_gtl_5F_variable_ (var_variable_7878, inCompiler) ;
  outArgument_instruction = GALGAS_gtlUnletInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 374)), GALGAS_string::makeEmptyString (), var_variable_7878  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 371)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                        C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  nt_gtl_5F_step_5F_do_5F_command_ (outArgument_instruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_step_5F_do_5F_command_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 391)) ;
  outArgument_instruction = GALGAS_gtlVariablesInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 393)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 392)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 391)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 403)) ;
  GALGAS_gtlVarPath var_variable_8570 ;
  nt_gtl_5F_variable_ (var_variable_8570, inCompiler) ;
  outArgument_instruction = GALGAS_gtlDisplayStatementInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 406)), GALGAS_string::makeEmptyString (), var_variable_8570  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 403)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 416)) ;
  GALGAS_gtlExpression var_expression_8863 ;
  nt_gtl_5F_expression_ (var_expression_8863, inCompiler) ;
  outArgument_instruction = GALGAS_gtlPrintStatementInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 419)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), var_expression_8863  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 416)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 430)) ;
  GALGAS_uint var_window_9131 = GALGAS_uint ((uint32_t) 5U) ;
  switch (select_gtl_5F_debugger_5F_parser_10 (inCompiler)) {
  case 1: {
    GALGAS_lbigint var_num_9199 = inCompiler->synthetizedAttribute_intValue () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 433)) ;
    var_window_9131 = var_num_9199.getter_bigint (SOURCE_FILE ("gtl_debugger_parser.galgas", 434)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 434)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_window_9131.objectCompare (GALGAS_uint ((uint32_t) 10U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_window_9131 = GALGAS_uint ((uint32_t) 10U) ;
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlListInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 439)), GALGAS_string::makeEmptyString (), var_window_9131  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 430)) ;
  switch (select_gtl_5F_debugger_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 433)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlThenElsifStatementList var_thenElsifList_9685 = GALGAS_gtlThenElsifStatementList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 451)) ;
  GALGAS_gtlInstructionList var_elseList_9729 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 452)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  GALGAS_location var_where_9768 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_gtlExpression var_condition_9832 ;
    nt_gtl_5F_expression_ (var_condition_9832, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 457)) ;
    GALGAS_gtlInstructionList var_instructionList_9911 ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_ (var_instructionList_9911, inCompiler) ;
    var_thenElsifList_9685.addAssign_operation (var_condition_9832, var_instructionList_9911  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 460)) ;
    switch (select_gtl_5F_debugger_5F_parser_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 462)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_debugger_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 466)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_ (var_elseList_9729, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 470)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 471)) ;
  outArgument_instruction = GALGAS_gtlIfStatementInstruction::constructor_new (var_where_9768, function_signature (var_where_9768, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 474)), var_thenElsifList_9685, var_elseList_9729  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 473)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 457)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (inCompiler) ;
    switch (select_gtl_5F_debugger_5F_parser_11 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 462)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_debugger_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 466)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 470)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_ (GALGAS_gtlInstructionList & outArgument_instructionList,
                                                                                                                  C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instructionList.drop () ; // Release 'out' argument
  outArgument_instructionList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 484)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_parser_13 (inCompiler)) {
    case 2: {
      GALGAS_gtlInstruction var_instruction_10620 ;
      nt_gtl_5F_step_5F_do_5F_command_ (var_instruction_10620, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_10620  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 489)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_parser_13 (inCompiler)) {
    case 2: {
      nt_gtl_5F_step_5F_do_5F_command_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_relation_5F_term_ (outArgument_expression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      GALGAS_location var_opLocation_1117 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      GALGAS_gtlExpression var_rightSon_1174 ;
      nt_gtl_5F_relation_5F_term_ (var_rightSon_1174, inCompiler) ;
      outArgument_expression = GALGAS_gtlOrExpression::constructor_new (var_opLocation_1117, outArgument_expression, var_rightSon_1174  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      GALGAS_location var_opLocation_1287 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      GALGAS_gtlExpression var_rightSon_1344 ;
      nt_gtl_5F_relation_5F_term_ (var_rightSon_1344, inCompiler) ;
      outArgument_expression = GALGAS_gtlXorExpression::constructor_new (var_opLocation_1287, outArgument_expression, var_rightSon_1344  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 45)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_relation_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      nt_gtl_5F_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      nt_gtl_5F_relation_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                                C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_relation_5F_factor_ (outArgument_expression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      GALGAS_location var_opLocation_1812 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      GALGAS_gtlExpression var_rightSon_1871 ;
      nt_gtl_5F_relation_5F_factor_ (var_rightSon_1871, inCompiler) ;
      outArgument_expression = GALGAS_gtlAndExpression::constructor_new (var_opLocation_1812, outArgument_expression, var_rightSon_1871  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 61)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      nt_gtl_5F_relation_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                                  C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_simple_5F_expression_ (outArgument_expression, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    GALGAS_location var_opLocation_2341 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    GALGAS_gtlExpression var_rightSon_2402 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2402, inCompiler) ;
    outArgument_expression = GALGAS_gtlEqualExpression::constructor_new (var_opLocation_2341, outArgument_expression, var_rightSon_2402  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 77)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    GALGAS_location var_opLocation_2526 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    GALGAS_gtlExpression var_rightSon_2587 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2587, inCompiler) ;
    outArgument_expression = GALGAS_gtlNotEqualExpression::constructor_new (var_opLocation_2526, outArgument_expression, var_rightSon_2587  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 83)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    GALGAS_location var_opLocation_2714 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    GALGAS_gtlExpression var_rightSon_2775 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2775, inCompiler) ;
    outArgument_expression = GALGAS_gtlLowerOrEqualExpression::constructor_new (var_opLocation_2714, outArgument_expression, var_rightSon_2775  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 89)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    GALGAS_location var_opLocation_2906 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    GALGAS_gtlExpression var_rightSon_2967 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2967, inCompiler) ;
    outArgument_expression = GALGAS_gtlGreaterOrEqualExpression::constructor_new (var_opLocation_2906, outArgument_expression, var_rightSon_2967  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 95)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    GALGAS_location var_opLocation_3099 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    GALGAS_gtlExpression var_rightSon_3160 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_3160, inCompiler) ;
    outArgument_expression = GALGAS_gtlGreaterThanExpression::constructor_new (var_opLocation_3099, outArgument_expression, var_rightSon_3160  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 101)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    GALGAS_location var_opLocation_3289 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    GALGAS_gtlExpression var_rightSon_3350 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_3350, inCompiler) ;
    outArgument_expression = GALGAS_gtlLowerThanExpression::constructor_new (var_opLocation_3289, outArgument_expression, var_rightSon_3350  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 107)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                                    C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_term_ (outArgument_expression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      GALGAS_location var_opLocation_3829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      GALGAS_gtlExpression var_rightSon_3877 ;
      nt_gtl_5F_term_ (var_rightSon_3877, inCompiler) ;
      outArgument_expression = GALGAS_gtlShiftLeftExpression::constructor_new (var_opLocation_3829, outArgument_expression, var_rightSon_3877  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 125)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      GALGAS_location var_opLocation_4009 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      GALGAS_gtlExpression var_rightSon_4057 ;
      nt_gtl_5F_term_ (var_rightSon_4057, inCompiler) ;
      outArgument_expression = GALGAS_gtlShiftRightExpression::constructor_new (var_opLocation_4009, outArgument_expression, var_rightSon_4057  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 131)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      GALGAS_location var_opLocation_4189 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      GALGAS_gtlExpression var_rightSon_4237 ;
      nt_gtl_5F_term_ (var_rightSon_4237, inCompiler) ;
      outArgument_expression = GALGAS_gtlAddExpression::constructor_new (var_opLocation_4189, outArgument_expression, var_rightSon_4237  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 137)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      GALGAS_location var_opLocation_4362 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      const enumGalgasBool test_1 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("+")) ;
        inCompiler->emitSemanticWarning (var_opLocation_4362, GALGAS_string ("'.' operator is deprecated"), fixItArray2  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 143)) ;
      }
      GALGAS_gtlExpression var_rightSon_4550 ;
      nt_gtl_5F_term_ (var_rightSon_4550, inCompiler) ;
      outArgument_expression = GALGAS_gtlAddExpression::constructor_new (var_opLocation_4362, outArgument_expression, var_rightSon_4550  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 146)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      GALGAS_location var_opLocation_4675 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      GALGAS_gtlExpression var_rightSon_4723 ;
      nt_gtl_5F_term_ (var_rightSon_4723, inCompiler) ;
      outArgument_expression = GALGAS_gtlSubstractExpression::constructor_new (var_opLocation_4675, outArgument_expression, var_rightSon_4723  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 152)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                    C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_factor_ (outArgument_expression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      GALGAS_location var_opLocation_5190 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      GALGAS_gtlExpression var_rightSon_5240 ;
      nt_gtl_5F_factor_ (var_rightSon_5240, inCompiler) ;
      outArgument_expression = GALGAS_gtlMultiplyExpression::constructor_new (var_opLocation_5190, outArgument_expression, var_rightSon_5240  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 170)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      GALGAS_location var_opLocation_5370 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      GALGAS_gtlExpression var_rightSon_5420 ;
      nt_gtl_5F_factor_ (var_rightSon_5420, inCompiler) ;
      outArgument_expression = GALGAS_gtlDivideExpression::constructor_new (var_opLocation_5370, outArgument_expression, var_rightSon_5420  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 176)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      GALGAS_location var_opLocation_5550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      GALGAS_gtlExpression var_rightSon_5600 ;
      nt_gtl_5F_factor_ (var_rightSon_5600, inCompiler) ;
      outArgument_expression = GALGAS_gtlModulusExpression::constructor_new (var_opLocation_5550, outArgument_expression, var_rightSon_5600  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 182)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      nt_gtl_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      nt_gtl_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      nt_gtl_5F_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  GALGAS_location var_opLocation_6020 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  GALGAS_gtlExpression var_factorExpression_6080 ;
  nt_gtl_5F_expression_ (var_factorExpression_6080, inCompiler) ;
  outArgument_expression = GALGAS_gtlParenthesizedExpression::constructor_new (var_opLocation_6020, var_factorExpression_6080  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 197)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 201)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  GALGAS_location var_opLocation_6502 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  GALGAS_gtlExpression var_notExpression_6555 ;
  nt_gtl_5F_factor_ (var_notExpression_6555, inCompiler) ;
  outArgument_expression = GALGAS_gtlNotExpression::constructor_new (var_opLocation_6502, var_notExpression_6555  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 213)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  GALGAS_location var_opLocation_6946 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  GALGAS_gtlExpression var_notExpression_6999 ;
  nt_gtl_5F_factor_ (var_notExpression_6999, inCompiler) ;
  outArgument_expression = GALGAS_gtlNotExpression::constructor_new (var_opLocation_6946, var_notExpression_6999  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  GALGAS_location var_opLocation_7390 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  GALGAS_gtlExpression var_minusExpression_7445 ;
  nt_gtl_5F_factor_ (var_minusExpression_7445, inCompiler) ;
  outArgument_expression = GALGAS_gtlMinusExpression::constructor_new (var_opLocation_7390, var_minusExpression_7445  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  GALGAS_location var_opLocation_7840 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  GALGAS_gtlExpression var_plusExpression_7894 ;
  nt_gtl_5F_factor_ (var_plusExpression_7894, inCompiler) ;
  outArgument_expression = GALGAS_gtlPlusExpression::constructor_new (var_opLocation_7840, var_plusExpression_7894  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  GALGAS_location var_opLocation_8289 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (var_opLocation_8289, GALGAS_gtlBool::constructor_new (var_opLocation_8289, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 261)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 261))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 272)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 273)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInteger_9160 = inCompiler->synthetizedAttribute_intValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 285)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), var_literalInteger_9160.getter_bigint (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalFloat_9615 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 298)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), GALGAS_gtlFloat::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), var_literalFloat_9615.getter_double (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 299)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 298)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lstring var_literalString_10063 = inCompiler->synthetizedAttribute_a_5F_string () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 311)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), GALGAS_gtlString::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), var_literalString_10063.getter_string (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 311)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_10513 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 324)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), GALGAS_gtlChar::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), var_literalChar_10513.getter_char (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 325)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 324)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 338)) ;
  GALGAS_gtlExpression var_target_11047 ;
  nt_gtl_5F_expression_ (var_target_11047, inCompiler) ;
  GALGAS_lstring var_getterName_11087 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 340)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (var_getterName_11087.getter_string (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 342)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("capitalized")) ;
      inCompiler->emitSemanticWarning (var_getterName_11087.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 343)), GALGAS_string ("stringByCapitalizingFirstCharacter is deprecated"), fixItArray2  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 343)) ;
    }
  }
  GALGAS_gtlExpressionList var_argumentList_11368 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 347)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 350)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_gtlExpression var_argument_11462 ;
      nt_gtl_5F_expression_ (var_argument_11462, inCompiler) ;
      var_argumentList_11368.addAssign_operation (var_argument_11462  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 353)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 355)) ;
      } break ;
      default:
        repeatFlag_3 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 358)) ;
  outArgument_expression = GALGAS_gtlGetterCallExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 360)), var_target_11047, var_getterName_11087, var_argumentList_11368  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 338)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 340)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 350)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 355)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 358)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_gtlVarPath var_path_11814 ;
  nt_gtl_5F_variable_ (var_path_11814, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
    outArgument_expression = GALGAS_gtlVarRef::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 374)), var_path_11814  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 374)) ;
  } break ;
  case 2: {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_path_11814.getter_length (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 376)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 377)), GALGAS_string ("illegal function name"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 377)) ;
    }
    GALGAS_gtlExpressionList var_functionArguments_12000 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 379)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 380)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_8 (inCompiler)) {
    case 1: {
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_gtlExpression var_expression_12097 ;
        nt_gtl_5F_expression_ (var_expression_12097, inCompiler) ;
        var_functionArguments_12000.addAssign_operation (var_expression_12097  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 384)) ;
        switch (select_gtl_5F_debugger_5F_expression_5F_parser_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 386)) ;
        } break ;
        default:
          repeatFlag_2 = false ;
          break ;
        }
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 389)) ;
    GALGAS_lstring var_functionName_12217 = extensionGetter_pathAsFunctionName (var_path_11814, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 390)) ;
    outArgument_expression = GALGAS_gtlFunctionCallExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 392)), var_functionName_12217, var_functionArguments_12000  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 391)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 380)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_8 (inCompiler)) {
    case 1: {
      bool repeatFlag_0 = true ;
      while (repeatFlag_0) {
        nt_gtl_5F_expression_parse (inCompiler) ;
        switch (select_gtl_5F_debugger_5F_expression_5F_parser_9 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 386)) ;
        } break ;
        default:
          repeatFlag_0 = false ;
          break ;
        }
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 389)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 404)) ;
  GALGAS_gtlVarPath var_path_12547 ;
  nt_gtl_5F_variable_ (var_path_12547, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 406)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 407)) ;
    GALGAS_gtlExpression var_defaultExpression_12633 ;
    nt_gtl_5F_expression_ (var_defaultExpression_12633, inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 409)) ;
    outArgument_expression = GALGAS_gtlExistsDefaultExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 411)), var_path_12547, var_defaultExpression_12633  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 410)) ;
  } break ;
  case 2: {
    outArgument_expression = GALGAS_gtlExistsExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 414)), var_path_12547  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 414)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 404)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 406)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 407)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 409)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 423)) ;
  GALGAS_gtlVarPath var_path_12988 ;
  nt_gtl_5F_variable_ (var_path_12988, inCompiler) ;
  outArgument_expression = GALGAS_gtlTypeOfExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 424)), var_path_12988  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 423)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 432)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 434)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 436)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 437)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 435))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 433)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 432)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 448)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 450)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 452)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 453)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 451))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 448)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lstring var_enumValue_13754 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 464)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 466)), GALGAS_gtlEnum::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 468)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 469)), var_enumValue_13754.getter_string (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 470))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 467))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 465)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 464)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  GALGAS_lstring var_typeName_14058 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  GALGAS_string var_name_14073 = var_typeName_14058.getter_string (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 481)) ;
  GALGAS_gtlType var_type_14109 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("int"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 484)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 484)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 484)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("float"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 486)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 486)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 486)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("string"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 488)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 488)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlString)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 488)) ;
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 490)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 490)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 490)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("struct"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 492)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 492)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 492)) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("list"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 494)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 494)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlList)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 494)) ;
            }else if (kBoolFalse == test_5) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("map"))).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 496)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 496)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 496)) ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("enum"))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 498)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 498)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 498)) ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("type"))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 500)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 500)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlType)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 500)) ;
                  }else if (kBoolFalse == test_8) {
                    const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("set"))).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 502)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 502)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 502)) ;
                    }else if (kBoolFalse == test_9) {
                      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("char"))).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 504)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 504)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 504)) ;
                      }else if (kBoolFalse == test_10) {
                        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_name_14073.objectCompare (GALGAS_string ("unconstructed"))).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_type_14109 = GALGAS_gtlType::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 506)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 506)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 506)) ;
                        }else if (kBoolFalse == test_11) {
                          TC_Array <C_FixItDescription> fixItArray12 ;
                          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)), var_name_14073.add_operation (GALGAS_string (" does not name a type"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)), fixItArray12  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)) ;
                          var_type_14109.drop () ; // Release error dropped variable
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
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (var_typeName_14058.getter_location (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 509)), var_type_14109  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 509)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 517)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@( )")) ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 519)), GALGAS_string ("emptylist is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 519)) ;
  }
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 522)), GALGAS_gtlList::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 524)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 525)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 526))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 523))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 521)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 517)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 536)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@[ ]")) ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 538)), GALGAS_string ("emptymap is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 538)) ;
  }
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 541)), GALGAS_gtlMap::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 543)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 544)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 545))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 542))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 540)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 536)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 555)) ;
  GALGAS_gtlExpression var_data_16424 ;
  nt_gtl_5F_expression_ (var_data_16424, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 558)) ;
    GALGAS_lstring var_key_16477 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 559)) ;
    outArgument_expression = GALGAS_gtlMapOfListExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 561)), var_data_16424, var_key_16477  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 560)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 566)) ;
    outArgument_expression = GALGAS_gtlMapOfStructExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 568)), var_data_16424  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 567)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 555)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 558)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 559)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 566)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 579)) ;
  GALGAS_gtlExpression var_data_16857 ;
  nt_gtl_5F_expression_ (var_data_16857, inCompiler) ;
  outArgument_expression = GALGAS_gtlListOfExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 581)), var_data_16857  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 581)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 582)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 579)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 582)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 590)) ;
  GALGAS_gtlExpressionList var_expressionList_17099 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 591)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_12 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_gtlExpression var_listItem_17180 ;
      nt_gtl_5F_expression_ (var_listItem_17180, inCompiler) ;
      var_expressionList_17099.addAssign_operation (var_listItem_17180  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 595)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 596)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 600)) ;
  outArgument_expression = GALGAS_gtlLiteralListExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 601)), var_expressionList_17099  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 601)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 590)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_12 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_13 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 596)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 600)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 609)) ;
  GALGAS_gtlExpressionMap var_expressionMap_17500 = GALGAS_gtlExpressionMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 610)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_14 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_key_17566 = inCompiler->synthetizedAttribute_a_5F_string () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 613)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 614)) ;
      GALGAS_gtlExpression var_mapItem_17623 ;
      nt_gtl_5F_expression_ (var_mapItem_17623, inCompiler) ;
      {
      var_expressionMap_17500.setter_put (var_key_17566, var_mapItem_17623, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 616)) ;
      }
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 617)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 621)) ;
  outArgument_expression = GALGAS_gtlLiteralMapExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 622)), var_expressionMap_17500  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 622)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 609)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_14 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 613)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 614)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_15 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 617)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 621)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 630)) ;
  GALGAS_gtlExpressionMap var_expressionMap_17949 = GALGAS_gtlExpressionMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 631)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_16 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_fieldName_18024 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 634)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 635)) ;
      GALGAS_gtlExpression var_structField_18085 ;
      nt_gtl_5F_expression_ (var_structField_18085, inCompiler) ;
      {
      var_expressionMap_17949.setter_put (var_fieldName_18024, var_structField_18085, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 637)) ;
      }
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 638)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 642)) ;
  outArgument_expression = GALGAS_gtlLiteralStructExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 643)), var_expressionMap_17949  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 643)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 630)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_16 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 634)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 635)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 638)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 642)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 651)) ;
  GALGAS_gtlExpressionList var_expressionList_18426 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 652)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_18 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_gtlExpression var_setElement_18509 ;
      nt_gtl_5F_expression_ (var_setElement_18509, inCompiler) ;
      var_expressionList_18426.addAssign_operation (var_setElement_18509  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 656)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 657)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 661)) ;
  outArgument_expression = GALGAS_gtlLiteralSetExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 662)), var_expressionList_18426  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 662)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 651)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_18 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_19 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 657)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 661)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_ (GALGAS_gtlVarPath & outArgument_path,
                                                                                                                         C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_path.drop () ; // Release 'out' argument
  outArgument_path = GALGAS_gtlVarPath::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 670)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_18855 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 672)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 674)) ;
      GALGAS_gtlExpression var_expression_18930 ;
      nt_gtl_5F_expression_ (var_expression_18930, inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 676)) ;
      outArgument_path.addAssign_operation (GALGAS_gtlVarItemCollection::constructor_new (var_variableName_18855, var_expression_18930  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 677))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 677)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 679)) ;
        GALGAS_gtlExpression var_expression_19092 ;
        nt_gtl_5F_expression_ (var_expression_19092, inCompiler) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 681)) ;
        outArgument_path.addAssign_operation (GALGAS_gtlVarItemSubCollection::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682)), var_expression_19092  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_gtl_5F_debugger_5F_expression_5F_parser_23 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 685)) ;
            GALGAS_gtlExpression var_expression_19274 ;
            nt_gtl_5F_expression_ (var_expression_19274, inCompiler) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 687)) ;
            outArgument_path.addAssign_operation (GALGAS_gtlVarItemSubCollection::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688)), var_expression_19274  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688)) ;
          } break ;
          default:
            repeatFlag_1 = false ;
            break ;
          }
        }
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      outArgument_path.addAssign_operation (GALGAS_gtlVarItemField::constructor_new (var_variableName_18855  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 693))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 693)) ;
    } break ;
    default:
      break ;
    }
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 696)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 672)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 674)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 676)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 679)) ;
        nt_gtl_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 681)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          switch (select_gtl_5F_debugger_5F_expression_5F_parser_23 (inCompiler)) {
          case 2: {
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 685)) ;
            nt_gtl_5F_expression_parse (inCompiler) ;
            inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 687)) ;
          } break ;
          default:
            repeatFlag_1 = false ;
            break ;
          }
        }
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_) COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 696)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (void) :
mProperty_type () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::~ GALGAS_gtlTypedArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (const GALGAS_type & inOperand0) :
mProperty_type (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::constructor_new (const GALGAS_type & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlTypedArgumentList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlTypedArgumentList_2D_element::objectCompare (const GALGAS_gtlTypedArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlTypedArgumentList_2D_element::isValid (void) const {
  return mProperty_type.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTypedArgumentList_2D_element::drop (void) {
  mProperty_type.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlTypedArgumentList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @gtlTypedArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlTypedArgumentList_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @gtlTypedArgumentList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ("gtlTypedArgumentList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTypedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTypedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTypedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  const GALGAS_gtlTypedArgumentList_2D_element * p = (const GALGAS_gtlTypedArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTypedArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTypedArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (void) :
mProperty_instruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::~ GALGAS_gtlInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (const GALGAS_gtlInstruction & inOperand0) :
mProperty_instruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::constructor_new (const GALGAS_gtlInstruction & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlInstructionList_2D_element::objectCompare (const GALGAS_gtlInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_instruction.objectCompare (inOperand.mProperty_instruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlInstructionList_2D_element::isValid (void) const {
  return mProperty_instruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionList_2D_element::drop (void) {
  mProperty_instruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @gtlInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_instruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstruction GALGAS_gtlInstructionList_2D_element::getter_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_instruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @gtlInstructionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ("gtlInstructionList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  const GALGAS_gtlInstructionList_2D_element * p = (const GALGAS_gtlInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (void) :
mProperty_item () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::~ GALGAS_gtlVarPath_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (const GALGAS_gtlVarItem & inOperand0) :
mProperty_item (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::constructor_new (const GALGAS_gtlVarItem & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlVarPath_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlVarPath_2D_element::objectCompare (const GALGAS_gtlVarPath_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_item.objectCompare (inOperand.mProperty_item) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlVarPath_2D_element::isValid (void) const {
  return mProperty_item.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarPath_2D_element::drop (void) {
  mProperty_item.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlVarPath_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlVarPath-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_item.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarItem GALGAS_gtlVarPath_2D_element::getter_item (UNUSED_LOCATION_ARGS) const {
  return mProperty_item ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @gtlVarPath-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarPath_2D_element ("gtlVarPath-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlVarPath_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarPath_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlVarPath_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarPath_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  const GALGAS_gtlVarPath_2D_element * p = (const GALGAS_gtlVarPath_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlVarPath_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarPath-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (void) :
mProperty_nextInstructionIndex (),
mProperty_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::~ GALGAS_gtlInstructionListContextStack_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (const GALGAS_uint & inOperand0,
                                                                                                    const GALGAS_gtlInstructionList & inOperand1) :
mProperty_nextInstructionIndex (inOperand0),
mProperty_instructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlInstructionListContextStack_2D_element (GALGAS_uint::constructor_default (HERE),
                                                           GALGAS_gtlInstructionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                    const GALGAS_gtlInstructionList & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlInstructionListContextStack_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlInstructionListContextStack_2D_element::objectCompare (const GALGAS_gtlInstructionListContextStack_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_nextInstructionIndex.objectCompare (inOperand.mProperty_nextInstructionIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_instructionList.objectCompare (inOperand.mProperty_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlInstructionListContextStack_2D_element::isValid (void) const {
  return mProperty_nextInstructionIndex.isValid () && mProperty_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack_2D_element::drop (void) {
  mProperty_nextInstructionIndex.drop () ;
  mProperty_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInstructionListContextStack_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @gtlInstructionListContextStack-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_nextInstructionIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_gtlInstructionListContextStack_2D_element::getter_nextInstructionIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_nextInstructionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlInstructionListContextStack_2D_element::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @gtlInstructionListContextStack-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ("gtlInstructionListContextStack-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInstructionListContextStack_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInstructionListContextStack_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionListContextStack_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  const GALGAS_gtlInstructionListContextStack_2D_element * p = (const GALGAS_gtlInstructionListContextStack_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInstructionListContextStack_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionListContextStack-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (void) :
mProperty_breakpoint () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::~ GALGAS_gtlBreakpointList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (const GALGAS_gtlBreakpoint & inOperand0) :
mProperty_breakpoint (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlBreakpointList_2D_element (GALGAS_gtlBreakpoint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_new (const GALGAS_gtlBreakpoint & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlBreakpointList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_gtlBreakpointList_2D_element::objectCompare (const GALGAS_gtlBreakpointList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_breakpoint.objectCompare (inOperand.mProperty_breakpoint) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_gtlBreakpointList_2D_element::isValid (void) const {
  return mProperty_breakpoint.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList_2D_element::drop (void) {
  mProperty_breakpoint.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlBreakpointList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @gtlBreakpointList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_breakpoint.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpoint GALGAS_gtlBreakpointList_2D_element::getter_breakpoint (UNUSED_LOCATION_ARGS) const {
  return mProperty_breakpoint ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @gtlBreakpointList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ("gtlBreakpointList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlBreakpointList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlBreakpointList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  const GALGAS_gtlBreakpointList_2D_element * p = (const GALGAS_gtlBreakpointList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlBreakpointList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_debuggerContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_debuggerContext) ;
  if (kOperandEqual == result) {
    result = mProperty_debugActive.objectCompare (p->mProperty_debugActive) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_breakOnNext.objectCompare (p->mProperty_breakOnNext) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_loopOnCommand.objectCompare (p->mProperty_loopOnCommand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_promptColor.objectCompare (p->mProperty_promptColor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_promptFace.objectCompare (p->mProperty_promptFace) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_instructionColor.objectCompare (p->mProperty_instructionColor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_instructionFace.objectCompare (p->mProperty_instructionFace) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_outputColor.objectCompare (p->mProperty_outputColor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_outputFace.objectCompare (p->mProperty_outputFace) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warningColor.objectCompare (p->mProperty_warningColor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_warningFace.objectCompare (p->mProperty_warningFace) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_executeDebuggerCommand.objectCompare (p->mProperty_executeDebuggerCommand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_doList.objectCompare (p->mProperty_doList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_breakpoints.objectCompare (p->mProperty_breakpoints) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_watchpoints.objectCompare (p->mProperty_watchpoints) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_nextInstructionIndex.objectCompare (p->mProperty_nextInstructionIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_instructionList.objectCompare (p->mProperty_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_contextStack.objectCompare (p->mProperty_contextStack) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_commandInput.objectCompare (p->mProperty_commandInput) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_debuggerContext::objectCompare (const GALGAS_debuggerContext & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext::GALGAS_debuggerContext (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_debuggerContext::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_gtlInstructionList::constructor_emptyList (HERE),
                                                  GALGAS_gtlBreakpointList::constructor_emptyList (HERE),
                                                  GALGAS_gtlExpressionList::constructor_emptyList (HERE),
                                                  GALGAS_uint::constructor_default (HERE),
                                                  GALGAS_gtlInstructionList::constructor_emptyList (HERE),
                                                  GALGAS_gtlInstructionListContextStack::constructor_emptyList (HERE),
                                                  GALGAS_debugCommandInput::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext::GALGAS_debuggerContext (const cPtr_debuggerContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_debuggerContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::constructor_new (const GALGAS_bool & inAttribute_debugActive,
                                                                const GALGAS_bool & inAttribute_breakOnNext,
                                                                const GALGAS_bool & inAttribute_loopOnCommand,
                                                                const GALGAS_string & inAttribute_promptColor,
                                                                const GALGAS_string & inAttribute_promptFace,
                                                                const GALGAS_string & inAttribute_instructionColor,
                                                                const GALGAS_string & inAttribute_instructionFace,
                                                                const GALGAS_string & inAttribute_outputColor,
                                                                const GALGAS_string & inAttribute_outputFace,
                                                                const GALGAS_string & inAttribute_warningColor,
                                                                const GALGAS_string & inAttribute_warningFace,
                                                                const GALGAS_bool & inAttribute_executeDebuggerCommand,
                                                                const GALGAS_gtlInstructionList & inAttribute_doList,
                                                                const GALGAS_gtlBreakpointList & inAttribute_breakpoints,
                                                                const GALGAS_gtlExpressionList & inAttribute_watchpoints,
                                                                const GALGAS_uint & inAttribute_nextInstructionIndex,
                                                                const GALGAS_gtlInstructionList & inAttribute_instructionList,
                                                                const GALGAS_gtlInstructionListContextStack & inAttribute_contextStack,
                                                                const GALGAS_debugCommandInput & inAttribute_commandInput
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_debuggerContext result ;
  if (inAttribute_debugActive.isValid () && inAttribute_breakOnNext.isValid () && inAttribute_loopOnCommand.isValid () && inAttribute_promptColor.isValid () && inAttribute_promptFace.isValid () && inAttribute_instructionColor.isValid () && inAttribute_instructionFace.isValid () && inAttribute_outputColor.isValid () && inAttribute_outputFace.isValid () && inAttribute_warningColor.isValid () && inAttribute_warningFace.isValid () && inAttribute_executeDebuggerCommand.isValid () && inAttribute_doList.isValid () && inAttribute_breakpoints.isValid () && inAttribute_watchpoints.isValid () && inAttribute_nextInstructionIndex.isValid () && inAttribute_instructionList.isValid () && inAttribute_contextStack.isValid () && inAttribute_commandInput.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_debuggerContext (inAttribute_debugActive, inAttribute_breakOnNext, inAttribute_loopOnCommand, inAttribute_promptColor, inAttribute_promptFace, inAttribute_instructionColor, inAttribute_instructionFace, inAttribute_outputColor, inAttribute_outputFace, inAttribute_warningColor, inAttribute_warningFace, inAttribute_executeDebuggerCommand, inAttribute_doList, inAttribute_breakpoints, inAttribute_watchpoints, inAttribute_nextInstructionIndex, inAttribute_instructionList, inAttribute_contextStack, inAttribute_commandInput COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_debugActive (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_debugActive ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_debugActive (UNUSED_LOCATION_ARGS) const {
  return mProperty_debugActive ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_breakOnNext (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_breakOnNext ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_breakOnNext (UNUSED_LOCATION_ARGS) const {
  return mProperty_breakOnNext ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_loopOnCommand (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_loopOnCommand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_loopOnCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_loopOnCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_promptColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_promptColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_promptColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_promptColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_promptFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_promptFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_promptFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_promptFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_instructionColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_instructionColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_instructionColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_instructionFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_instructionFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_instructionFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_outputColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_outputColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_outputColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_outputColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_outputFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_outputFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_outputFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_outputFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_warningColor (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_warningColor ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_warningColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_warningColor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_debuggerContext::getter_warningFace (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_warningFace ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_debuggerContext::getter_warningFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_warningFace ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_debuggerContext::getter_executeDebuggerCommand (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_executeDebuggerCommand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_debuggerContext::getter_executeDebuggerCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_executeDebuggerCommand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_debuggerContext::getter_doList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_doList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_debuggerContext::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mProperty_doList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList GALGAS_debuggerContext::getter_breakpoints (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_breakpoints ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlBreakpointList cPtr_debuggerContext::getter_breakpoints (UNUSED_LOCATION_ARGS) const {
  return mProperty_breakpoints ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList GALGAS_debuggerContext::getter_watchpoints (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_watchpoints ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpressionList cPtr_debuggerContext::getter_watchpoints (UNUSED_LOCATION_ARGS) const {
  return mProperty_watchpoints ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_debuggerContext::getter_nextInstructionIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_nextInstructionIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_debuggerContext::getter_nextInstructionIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_nextInstructionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_debuggerContext::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_instructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_debuggerContext::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack GALGAS_debuggerContext::getter_contextStack (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_contextStack ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionListContextStack cPtr_debuggerContext::getter_contextStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_contextStack ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput GALGAS_debuggerContext::getter_commandInput (UNUSED_LOCATION_ARGS) const {
  GALGAS_debugCommandInput result ;
  if (NULL != mObjectPtr) {
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    result = p->mProperty_commandInput ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debugCommandInput cPtr_debuggerContext::getter_commandInput (UNUSED_LOCATION_ARGS) const {
  return mProperty_commandInput ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_debugActive = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_debugActive = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_breakOnNext = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_breakOnNext = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setLoopOnCommand (GALGAS_bool inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_loopOnCommand = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setLoopOnCommand (GALGAS_bool inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_loopOnCommand = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_promptColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_promptColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_promptFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_promptFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_instructionColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_instructionFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_outputColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_outputColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_outputFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_outputFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setWarningColor (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_warningColor = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setWarningColor (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_warningColor = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setWarningFace (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_warningFace = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setWarningFace (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_warningFace = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setExecuteDebuggerCommand (GALGAS_bool inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_executeDebuggerCommand = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setExecuteDebuggerCommand (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_executeDebuggerCommand = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_debuggerContext::setter_setNextInstructionIndex (GALGAS_uint inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_nextInstructionIndex = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_debuggerContext::setter_setNextInstructionIndex (GALGAS_uint inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_nextInstructionIndex = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @debuggerContext class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_debuggerContext::cPtr_debuggerContext (const GALGAS_bool & in_debugActive,
                                            const GALGAS_bool & in_breakOnNext,
                                            const GALGAS_bool & in_loopOnCommand,
                                            const GALGAS_string & in_promptColor,
                                            const GALGAS_string & in_promptFace,
                                            const GALGAS_string & in_instructionColor,
                                            const GALGAS_string & in_instructionFace,
                                            const GALGAS_string & in_outputColor,
                                            const GALGAS_string & in_outputFace,
                                            const GALGAS_string & in_warningColor,
                                            const GALGAS_string & in_warningFace,
                                            const GALGAS_bool & in_executeDebuggerCommand,
                                            const GALGAS_gtlInstructionList & in_doList,
                                            const GALGAS_gtlBreakpointList & in_breakpoints,
                                            const GALGAS_gtlExpressionList & in_watchpoints,
                                            const GALGAS_uint & in_nextInstructionIndex,
                                            const GALGAS_gtlInstructionList & in_instructionList,
                                            const GALGAS_gtlInstructionListContextStack & in_contextStack,
                                            const GALGAS_debugCommandInput & in_commandInput
                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_debugActive (in_debugActive),
mProperty_breakOnNext (in_breakOnNext),
mProperty_loopOnCommand (in_loopOnCommand),
mProperty_promptColor (in_promptColor),
mProperty_promptFace (in_promptFace),
mProperty_instructionColor (in_instructionColor),
mProperty_instructionFace (in_instructionFace),
mProperty_outputColor (in_outputColor),
mProperty_outputFace (in_outputFace),
mProperty_warningColor (in_warningColor),
mProperty_warningFace (in_warningFace),
mProperty_executeDebuggerCommand (in_executeDebuggerCommand),
mProperty_doList (in_doList),
mProperty_breakpoints (in_breakpoints),
mProperty_watchpoints (in_watchpoints),
mProperty_nextInstructionIndex (in_nextInstructionIndex),
mProperty_instructionList (in_instructionList),
mProperty_contextStack (in_contextStack),
mProperty_commandInput (in_commandInput) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_debuggerContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debuggerContext ;
}

void cPtr_debuggerContext::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@debuggerContext:" ;
  mProperty_debugActive.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_breakOnNext.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_loopOnCommand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_promptColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_promptFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_instructionColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_instructionFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_outputColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_outputFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warningColor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_warningFace.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_executeDebuggerCommand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_doList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_breakpoints.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_watchpoints.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_nextInstructionIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_contextStack.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_commandInput.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_debuggerContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_debuggerContext (mProperty_debugActive, mProperty_breakOnNext, mProperty_loopOnCommand, mProperty_promptColor, mProperty_promptFace, mProperty_instructionColor, mProperty_instructionFace, mProperty_outputColor, mProperty_outputFace, mProperty_warningColor, mProperty_warningFace, mProperty_executeDebuggerCommand, mProperty_doList, mProperty_breakpoints, mProperty_watchpoints, mProperty_nextInstructionIndex, mProperty_instructionList, mProperty_contextStack, mProperty_commandInput COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @debuggerContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_debuggerContext ("debuggerContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_debuggerContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debuggerContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_debuggerContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_debuggerContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_debuggerContext GALGAS_debuggerContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_debuggerContext result ;
  const GALGAS_debuggerContext * p = (const GALGAS_debuggerContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_debuggerContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("debuggerContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_gtlData::objectCompare (const GALGAS_gtlData & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData::GALGAS_gtlData (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData::GALGAS_gtlData (const cPtr_gtlData * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlData) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_gtlData::getter_where (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    result = p->mProperty_where ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_gtlData::getter_where (UNUSED_LOCATION_ARGS) const {
  return mProperty_where ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_gtlData::getter_meta (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    result = p->mProperty_meta ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_gtlData::getter_meta (UNUSED_LOCATION_ARGS) const {
  return mProperty_meta ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlData::setter_setWhere (GALGAS_location inValue
                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mProperty_where = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlData::setter_setWhere (GALGAS_location inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_where = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlData::setter_setMeta (GALGAS_lstring inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mProperty_meta = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlData::setter_setMeta (GALGAS_lstring inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_meta = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlData class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlData::cPtr_gtlData (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_where (in_where),
mProperty_meta (in_meta) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlData type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlData ("gtlData",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlData::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlData ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlData::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlData (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData GALGAS_gtlData::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  const GALGAS_gtlData * p = (const GALGAS_gtlData *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlData *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlData", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_gtlExpression::objectCompare (const GALGAS_gtlExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression::GALGAS_gtlExpression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression::GALGAS_gtlExpression (const cPtr_gtlExpression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_gtlExpression::getter_where (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlExpression * p = (const cPtr_gtlExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpression) ;
    result = p->mProperty_where ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_gtlExpression::getter_where (UNUSED_LOCATION_ARGS) const {
  return mProperty_where ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @gtlExpression class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlExpression::cPtr_gtlExpression (const GALGAS_location & in_where
                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_where (in_where) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @gtlExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpression ("gtlExpression",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlExpression GALGAS_gtlExpression::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpression result ;
  const GALGAS_gtlExpression * p = (const GALGAS_gtlExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlTemplate::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlTemplate * p = (const cPtr_gtlTemplate *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlTemplate) ;
  if (kOperandEqual == result) {
    result = mProperty_path.objectCompare (p->mProperty_path) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_program.objectCompare (p->mProperty_program) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlTemplate::objectCompare (const GALGAS_gtlTemplate & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate::GALGAS_gtlTemplate (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate GALGAS_gtlTemplate::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlTemplate::constructor_new (GALGAS_string::constructor_default (HERE),
                                              GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate::GALGAS_gtlTemplate (const cPtr_gtlTemplate * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlTemplate) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate GALGAS_gtlTemplate::constructor_new (const GALGAS_string & inAttribute_path,
                                                        const GALGAS_gtlInstructionList & inAttribute_program
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplate result ;
  if (inAttribute_path.isValid () && inAttribute_program.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlTemplate (inAttribute_path, inAttribute_program COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlTemplate::getter_path (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlTemplate * p = (const cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    result = p->mProperty_path ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlTemplate::getter_path (UNUSED_LOCATION_ARGS) const {
  return mProperty_path ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList GALGAS_gtlTemplate::getter_program (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlTemplate * p = (const cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    result = p->mProperty_program ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInstructionList cPtr_gtlTemplate::getter_program (UNUSED_LOCATION_ARGS) const {
  return mProperty_program ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @gtlTemplate class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlTemplate::cPtr_gtlTemplate (const GALGAS_string & in_path,
                                    const GALGAS_gtlInstructionList & in_program
                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_path (in_path),
mProperty_program (in_program) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlTemplate::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplate ;
}

void cPtr_gtlTemplate::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@gtlTemplate:" ;
  mProperty_path.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_program.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlTemplate::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlTemplate (mProperty_path, mProperty_program COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @gtlTemplate type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTemplate ("gtlTemplate",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlTemplate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplate ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlTemplate::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTemplate (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplate GALGAS_gtlTemplate::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplate result ;
  const GALGAS_gtlTemplate * p = (const GALGAS_gtlTemplate *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlTemplate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTemplate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlTemplate execute'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlTemplate_execute> gExtensionMethodTable_gtlTemplate_execute ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_execute (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlTemplate_execute inMethod) {
  gExtensionMethodTable_gtlTemplate_execute.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_execute (const cPtr_gtlTemplate * inObject,
                                  GALGAS_gtlContext & io_context,
                                  GALGAS_gtlData & io_vars,
                                  GALGAS_library & io_lib,
                                  GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlTemplate) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlTemplate_execute f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlTemplate_execute.count ()) {
      f = gExtensionMethodTable_gtlTemplate_execute (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlTemplate_execute.count ()) {
           f = gExtensionMethodTable_gtlTemplate_execute (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlTemplate_execute.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_context, io_vars, io_lib, io_outputString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlTemplate_execute (const cPtr_gtlTemplate * inObject,
                                                 GALGAS_gtlContext & ioArgument_context,
                                                 GALGAS_gtlData & ioArgument_vars,
                                                 GALGAS_library & ioArgument_lib,
                                                 GALGAS_string & ioArgument_outputString,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlTemplate * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlTemplate) ;
  extensionMethod_execute (object->mProperty_program, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 225)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlTemplate_execute (void) {
  enterExtensionMethod_execute (kTypeDescriptor_GALGAS_gtlTemplate.mSlotID,
                                extensionMethod_gtlTemplate_execute) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlTemplate_execute (void) {
  gExtensionMethodTable_gtlTemplate_execute.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlTemplate_execute (defineExtensionMethod_gtlTemplate_execute,
                                                freeExtensionMethod_gtlTemplate_execute) ;

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_library::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_library * p = (const cPtr_library *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_library) ;
  if (kOperandEqual == result) {
    result = mProperty_funcMap.objectCompare (p->mProperty_funcMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_getterMap.objectCompare (p->mProperty_getterMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_setterMap.objectCompare (p->mProperty_setterMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_templateMap.objectCompare (p->mProperty_templateMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_doneImports.objectCompare (p->mProperty_doneImports) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_library::objectCompare (const GALGAS_library & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library::GALGAS_library (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library GALGAS_library::constructor_default (LOCATION_ARGS) {
  return GALGAS_library::constructor_new (GALGAS_gtlFuncMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlGetterMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlSetterMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlTemplateMap::constructor_emptyMap (HERE),
                                          GALGAS_stringset::constructor_emptySet (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library::GALGAS_library (const cPtr_library * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_library) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library GALGAS_library::constructor_new (const GALGAS_gtlFuncMap & inAttribute_funcMap,
                                                const GALGAS_gtlGetterMap & inAttribute_getterMap,
                                                const GALGAS_gtlSetterMap & inAttribute_setterMap,
                                                const GALGAS_gtlTemplateMap & inAttribute_templateMap,
                                                const GALGAS_stringset & inAttribute_doneImports
                                                COMMA_LOCATION_ARGS) {
  GALGAS_library result ;
  if (inAttribute_funcMap.isValid () && inAttribute_getterMap.isValid () && inAttribute_setterMap.isValid () && inAttribute_templateMap.isValid () && inAttribute_doneImports.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_library (inAttribute_funcMap, inAttribute_getterMap, inAttribute_setterMap, inAttribute_templateMap, inAttribute_doneImports COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap GALGAS_library::getter_funcMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlFuncMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    result = p->mProperty_funcMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFuncMap cPtr_library::getter_funcMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_funcMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap GALGAS_library::getter_getterMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlGetterMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    result = p->mProperty_getterMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetterMap cPtr_library::getter_getterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_getterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap GALGAS_library::getter_setterMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlSetterMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    result = p->mProperty_setterMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetterMap cPtr_library::getter_setterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_setterMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap GALGAS_library::getter_templateMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlTemplateMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    result = p->mProperty_templateMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlTemplateMap cPtr_library::getter_templateMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_templateMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_library::getter_doneImports (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    result = p->mProperty_doneImports ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_library::getter_doneImports (UNUSED_LOCATION_ARGS) const {
  return mProperty_doneImports ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @library class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_library::cPtr_library (const GALGAS_gtlFuncMap & in_funcMap,
                            const GALGAS_gtlGetterMap & in_getterMap,
                            const GALGAS_gtlSetterMap & in_setterMap,
                            const GALGAS_gtlTemplateMap & in_templateMap,
                            const GALGAS_stringset & in_doneImports
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_funcMap (in_funcMap),
mProperty_getterMap (in_getterMap),
mProperty_setterMap (in_setterMap),
mProperty_templateMap (in_templateMap),
mProperty_doneImports (in_doneImports) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_library::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_library ;
}

void cPtr_library::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@library:" ;
  mProperty_funcMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_getterMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_setterMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_templateMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_doneImports.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_library::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_library (mProperty_funcMap, mProperty_getterMap, mProperty_setterMap, mProperty_templateMap, mProperty_doneImports COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @library type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_library ("library",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_library::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_library ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_library::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_library (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_library GALGAS_library::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_library result ;
  const GALGAS_library * p = (const GALGAS_library *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_library *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("library", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@library functionExists'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_functionExists> gExtensionGetterTable_library_functionExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_functionExists (const int32_t inClassIndex,
                                          enterExtensionGetter_library_functionExists inGetter) {
  gExtensionGetterTable_library_functionExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_functionExists (const cPtr_library * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_functionExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_functionExists.count ()) {
      f = gExtensionGetterTable_library_functionExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_functionExists.count ()) {
           f = gExtensionGetterTable_library_functionExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_functionExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_functionExists (const cPtr_library * inObject,
                                                           const GALGAS_lstring constinArgument_name,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mProperty_funcMap.getter_hasKey (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 286)) COMMA_SOURCE_FILE ("gtl_types.galgas", 286)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_functionExists (void) {
  enterExtensionGetter_functionExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                       extensionGetter_library_functionExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_functionExists (void) {
  gExtensionGetterTable_library_functionExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_functionExists (defineExtensionGetter_library_functionExists,
                                                   freeExtensionGetter_library_functionExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@library getFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getFunction> gExtensionGetterTable_library_getFunction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getFunction (const int32_t inClassIndex,
                                       enterExtensionGetter_library_getFunction inGetter) {
  gExtensionGetterTable_library_getFunction.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlFunction callExtensionGetter_getFunction (const cPtr_library * inObject,
                                                    const GALGAS_lstring in_name,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunction result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getFunction f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getFunction.count ()) {
      f = gExtensionGetterTable_library_getFunction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getFunction.count ()) {
           f = gExtensionGetterTable_library_getFunction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getFunction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlFunction extensionGetter_library_getFunction (const cPtr_library * inObject,
                                                               const GALGAS_lstring constinArgument_name,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlFunction result_aFunction ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mProperty_funcMap.method_get (constinArgument_name, result_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 293)) ;
//---
  return result_aFunction ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getFunction (void) {
  enterExtensionGetter_getFunction (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionGetter_library_getFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getFunction (void) {
  gExtensionGetterTable_library_getFunction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getFunction (defineExtensionGetter_library_getFunction,
                                                freeExtensionGetter_library_getFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library putFunction'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putFunction> gExtensionModifierTable_library_putFunction ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putFunction (const int32_t inClassIndex,
                                       extensionSetterSignature_library_putFunction inModifier) {
  gExtensionModifierTable_library_putFunction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putFunction (cPtr_library * inObject,
                                      const GALGAS_lstring constin_name,
                                      const GALGAS_gtlFunction constin_aFunction,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putFunction f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putFunction.count ()) {
      f = gExtensionModifierTable_library_putFunction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putFunction.count ()) {
           f = gExtensionModifierTable_library_putFunction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putFunction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aFunction, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putFunction (cPtr_library * inObject,
                                                 const GALGAS_lstring constinArgument_name,
                                                 const GALGAS_gtlFunction constinArgument_aFunction,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_funcMap.setter_put (constinArgument_name, constinArgument_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 300)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putFunction (void) {
  enterExtensionSetter_putFunction (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_putFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putFunction (void) {
  gExtensionModifierTable_library_putFunction.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putFunction (defineExtensionSetter_library_putFunction,
                                                freeExtensionModifier_library_putFunction) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library getterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getterExists> gExtensionGetterTable_library_getterExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_getterExists inGetter) {
  gExtensionGetterTable_library_getterExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_getterExists (const cPtr_library * inObject,
                                              const GALGAS_string in_type,
                                              const GALGAS_lstring in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getterExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getterExists.count ()) {
      f = gExtensionGetterTable_library_getterExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getterExists.count ()) {
           f = gExtensionGetterTable_library_getterExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getterExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_getterExists (const cPtr_library * inObject,
                                                         const GALGAS_string constinArgument_type,
                                                         const GALGAS_lstring constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mProperty_getterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 308)) COMMA_SOURCE_FILE ("gtl_types.galgas", 308)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getterExists (void) {
  enterExtensionGetter_getterExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                     extensionGetter_library_getterExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getterExists (void) {
  gExtensionGetterTable_library_getterExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getterExists (defineExtensionGetter_library_getterExists,
                                                 freeExtensionGetter_library_getterExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getGetter> gExtensionGetterTable_library_getGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getGetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getGetter inGetter) {
  gExtensionGetterTable_library_getGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlGetter callExtensionGetter_getGetter (const cPtr_library * inObject,
                                                const GALGAS_string in_type,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetter result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getGetter.count ()) {
      f = gExtensionGetterTable_library_getGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getGetter.count ()) {
           f = gExtensionGetterTable_library_getGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlGetter extensionGetter_library_getGetter (const cPtr_library * inObject,
                                                           const GALGAS_string constinArgument_type,
                                                           const GALGAS_lstring constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlGetter result_aGetter ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mProperty_getterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 316)), constinArgument_name.getter_location (SOURCE_FILE ("gtl_types.galgas", 316))  COMMA_SOURCE_FILE ("gtl_types.galgas", 316)), result_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 316)) ;
//---
  return result_aGetter ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getGetter (void) {
  enterExtensionGetter_getGetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_getGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getGetter (void) {
  gExtensionGetterTable_library_getGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getGetter (defineExtensionGetter_library_getGetter,
                                              freeExtensionGetter_library_getGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putGetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putGetter> gExtensionModifierTable_library_putGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putGetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putGetter inModifier) {
  gExtensionModifierTable_library_putGetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putGetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlGetter constin_aGetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putGetter f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putGetter.count ()) {
      f = gExtensionModifierTable_library_putGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putGetter.count ()) {
           f = gExtensionModifierTable_library_putGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aGetter, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putGetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlGetter constinArgument_aGetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_getterMap.setter_put (constinArgument_name, constinArgument_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 323)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putGetter (void) {
  enterExtensionSetter_putGetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putGetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putGetter (void) {
  gExtensionModifierTable_library_putGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putGetter (defineExtensionSetter_library_putGetter,
                                              freeExtensionModifier_library_putGetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@library setterExists'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_setterExists> gExtensionGetterTable_library_setterExists ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_setterExists (const int32_t inClassIndex,
                                        enterExtensionGetter_library_setterExists inGetter) {
  gExtensionGetterTable_library_setterExists.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_setterExists (const cPtr_library * inObject,
                                              const GALGAS_string in_type,
                                              const GALGAS_lstring in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_setterExists f = NULL ;
    if (classIndex < gExtensionGetterTable_library_setterExists.count ()) {
      f = gExtensionGetterTable_library_setterExists (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_setterExists.count ()) {
           f = gExtensionGetterTable_library_setterExists (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_setterExists.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_setterExists (const cPtr_library * inObject,
                                                         const GALGAS_string constinArgument_type,
                                                         const GALGAS_lstring constinArgument_name,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_exists ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_exists = object->mProperty_setterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 331)) COMMA_SOURCE_FILE ("gtl_types.galgas", 331)) ;
//---
  return result_exists ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_setterExists (void) {
  enterExtensionGetter_setterExists (kTypeDescriptor_GALGAS_library.mSlotID,
                                     extensionGetter_library_setterExists) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_setterExists (void) {
  gExtensionGetterTable_library_setterExists.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_setterExists (defineExtensionGetter_library_setterExists,
                                                 freeExtensionGetter_library_setterExists) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library getSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_getSetter> gExtensionGetterTable_library_getSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_getSetter (const int32_t inClassIndex,
                                     enterExtensionGetter_library_getSetter inGetter) {
  gExtensionGetterTable_library_getSetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlSetter callExtensionGetter_getSetter (const cPtr_library * inObject,
                                                const GALGAS_string in_type,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetter result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_getSetter f = NULL ;
    if (classIndex < gExtensionGetterTable_library_getSetter.count ()) {
      f = gExtensionGetterTable_library_getSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_getSetter.count ()) {
           f = gExtensionGetterTable_library_getSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_getSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_type, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlSetter extensionGetter_library_getSetter (const cPtr_library * inObject,
                                                           const GALGAS_string constinArgument_type,
                                                           const GALGAS_lstring constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlSetter result_aSetter ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mProperty_setterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.getter_string (SOURCE_FILE ("gtl_types.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 339)), constinArgument_name.getter_location (SOURCE_FILE ("gtl_types.galgas", 339))  COMMA_SOURCE_FILE ("gtl_types.galgas", 339)), result_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 339)) ;
//---
  return result_aSetter ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_getSetter (void) {
  enterExtensionGetter_getSetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_getSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_getSetter (void) {
  gExtensionGetterTable_library_getSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_getSetter (defineExtensionGetter_library_getSetter,
                                              freeExtensionGetter_library_getSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library putSetter'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_putSetter> gExtensionModifierTable_library_putSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_putSetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putSetter inModifier) {
  gExtensionModifierTable_library_putSetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_putSetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlSetter constin_aSetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putSetter f = NULL ;
    if (classIndex < gExtensionModifierTable_library_putSetter.count ()) {
      f = gExtensionModifierTable_library_putSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putSetter.count ()) {
           f = gExtensionModifierTable_library_putSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aSetter, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_putSetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlSetter constinArgument_aSetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_setterMap.setter_put (constinArgument_name, constinArgument_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 346)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_putSetter (void) {
  enterExtensionSetter_putSetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putSetter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_putSetter (void) {
  gExtensionModifierTable_library_putSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_putSetter (defineExtensionSetter_library_putSetter,
                                              freeExtensionModifier_library_putSetter) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@library hasImport'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_library_hasImport> gExtensionGetterTable_library_hasImport ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasImport (const int32_t inClassIndex,
                                     enterExtensionGetter_library_hasImport inGetter) {
  gExtensionGetterTable_library_hasImport.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasImport (const cPtr_library * inObject,
                                           const GALGAS_string in_importPath,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_library_hasImport f = NULL ;
    if (classIndex < gExtensionGetterTable_library_hasImport.count ()) {
      f = gExtensionGetterTable_library_hasImport (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_library_hasImport.count ()) {
           f = gExtensionGetterTable_library_hasImport (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_library_hasImport.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_importPath, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_library_hasImport (const cPtr_library * inObject,
                                                      const GALGAS_string constinArgument_importPath,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  result_result = object->mProperty_doneImports.getter_hasKey (constinArgument_importPath COMMA_SOURCE_FILE ("gtl_types.galgas", 353)) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_library_hasImport (void) {
  enterExtensionGetter_hasImport (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionGetter_library_hasImport) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_library_hasImport (void) {
  gExtensionGetterTable_library_hasImport.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_library_hasImport (defineExtensionGetter_library_hasImport,
                                              freeExtensionGetter_library_hasImport) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension setter '@library doImport'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_doImport> gExtensionModifierTable_library_doImport ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_doImport (const int32_t inClassIndex,
                                    extensionSetterSignature_library_doImport inModifier) {
  gExtensionModifierTable_library_doImport.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_doImport (cPtr_library * inObject,
                                   const GALGAS_string constin_importPath,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_doImport f = NULL ;
    if (classIndex < gExtensionModifierTable_library_doImport.count ()) {
      f = gExtensionModifierTable_library_doImport (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_doImport.count ()) {
           f = gExtensionModifierTable_library_doImport (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_doImport.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_importPath, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_doImport (cPtr_library * inObject,
                                              const GALGAS_string constinArgument_importPath,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mProperty_doneImports.addAssign_operation (constinArgument_importPath  COMMA_SOURCE_FILE ("gtl_types.galgas", 359)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_doImport (void) {
  enterExtensionSetter_doImport (kTypeDescriptor_GALGAS_library.mSlotID,
                                 extensionSetter_library_doImport) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_doImport (void) {
  gExtensionModifierTable_library_doImport.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_doImport (defineExtensionSetter_library_doImport,
                                             freeExtensionModifier_library_doImport) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension setter '@library getTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_library_getTemplate> gExtensionModifierTable_library_getTemplate ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_getTemplate (const int32_t inClassIndex,
                                       extensionSetterSignature_library_getTemplate inModifier) {
  gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_getTemplate (cPtr_library * inObject,
                                      const GALGAS_gtlContext constin_context,
                                      GALGAS_lstring in_path,
                                      GALGAS_bool in_ifExists,
                                      GALGAS_library & io_lib,
                                      GALGAS_bool & out_found,
                                      GALGAS_gtlTemplate & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_found.drop () ;
  out_result.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_getTemplate f = NULL ;
    if (classIndex < gExtensionModifierTable_library_getTemplate.count ()) {
      f = gExtensionModifierTable_library_getTemplate (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_getTemplate.count ()) {
           f = gExtensionModifierTable_library_getTemplate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_context, in_path, in_ifExists, io_lib, out_found, out_result, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_library_getTemplate (cPtr_library * inObject,
                                                 const GALGAS_gtlContext constinArgument_context,
                                                 GALGAS_lstring inArgument_path,
                                                 GALGAS_bool inArgument_ifExists,
                                                 GALGAS_library & ioArgument_lib,
                                                 GALGAS_bool & outArgument_found,
                                                 GALGAS_gtlTemplate & outArgument_result,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  extensionSetter_getTemplate (object->mProperty_templateMap, constinArgument_context, inArgument_path, inArgument_ifExists, ioArgument_lib, outArgument_found, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 371)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_library_getTemplate (void) {
  enterExtensionSetter_getTemplate (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_getTemplate) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_library_getTemplate (void) {
  gExtensionModifierTable_library_getTemplate.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_library_getTemplate (defineExtensionSetter_library_getTemplate,
                                                freeExtensionModifier_library_getTemplate) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Extension Getter '@type typeName'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_typeName (const GALGAS_type & inObject,
                                        C_Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_typeName ; // Returned variable
  const GALGAS_type temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, temp_0.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_typeName = GALGAS_string ("int") ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_type temp_2 = inObject ;
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, temp_2.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar))).boolEnum () ;
    if (kBoolTrue == test_3) {
      result_typeName = GALGAS_string ("char") ;
    }else if (kBoolFalse == test_3) {
      const GALGAS_type temp_4 = inObject ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, temp_4.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result_typeName = GALGAS_string ("float") ;
      }else if (kBoolFalse == test_5) {
        const GALGAS_type temp_6 = inObject ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_6.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
        if (kBoolTrue == test_7) {
          result_typeName = GALGAS_string ("string") ;
        }else if (kBoolFalse == test_7) {
          const GALGAS_type temp_8 = inObject ;
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, temp_8.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
          if (kBoolTrue == test_9) {
            result_typeName = GALGAS_string ("bool") ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_type temp_10 = inObject ;
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_10.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
            if (kBoolTrue == test_11) {
              result_typeName = GALGAS_string ("struct") ;
            }else if (kBoolFalse == test_11) {
              const GALGAS_type temp_12 = inObject ;
              const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, temp_12.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlList))).boolEnum () ;
              if (kBoolTrue == test_13) {
                result_typeName = GALGAS_string ("list") ;
              }else if (kBoolFalse == test_13) {
                const GALGAS_type temp_14 = inObject ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, temp_14.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap))).boolEnum () ;
                if (kBoolTrue == test_15) {
                  result_typeName = GALGAS_string ("map") ;
                }else if (kBoolFalse == test_15) {
                  const GALGAS_type temp_16 = inObject ;
                  const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, temp_16.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlType))).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    result_typeName = GALGAS_string ("type") ;
                  }else if (kBoolFalse == test_17) {
                    const GALGAS_type temp_18 = inObject ;
                    const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, temp_18.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum))).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      result_typeName = GALGAS_string ("enum") ;
                    }else if (kBoolFalse == test_19) {
                      const GALGAS_type temp_20 = inObject ;
                      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, temp_20.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet))).boolEnum () ;
                      if (kBoolTrue == test_21) {
                        result_typeName = GALGAS_string ("set") ;
                      }else if (kBoolFalse == test_21) {
                        const GALGAS_type temp_22 = inObject ;
                        const enumGalgasBool test_23 = GALGAS_bool (kIsEqual, temp_22.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed))).boolEnum () ;
                        if (kBoolTrue == test_23) {
                          result_typeName = GALGAS_string ("unconstructed") ;
                        }else if (kBoolFalse == test_23) {
                          result_typeName = GALGAS_string ("-unknown-") ;
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
  return result_typeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension Getter '@lstring gtlType'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type extensionGetter_gtlType (const GALGAS_lstring & inObject,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_type ; // Returned variable
  const GALGAS_lstring temp_0 = inObject ;
  GALGAS_string var_typeName_2294 = temp_0.getter_string (SOURCE_FILE ("gtl_data_types.galgas", 67)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("int"))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("char"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("float"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat) ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlString) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("bool"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool) ;
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("struct"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct) ;
            }else if (kBoolFalse == test_6) {
              const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("list"))).boolEnum () ;
              if (kBoolTrue == test_7) {
                result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlList) ;
              }else if (kBoolFalse == test_7) {
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("map"))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap) ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("type"))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlType) ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("enum"))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum) ;
                    }else if (kBoolFalse == test_10) {
                      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("set"))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet) ;
                      }else if (kBoolFalse == test_11) {
                        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_typeName_2294.objectCompare (GALGAS_string ("unconstructed"))).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed) ;
                        }else if (kBoolFalse == test_12) {
                          TC_Array <C_FixItDescription> fixItArray13 ;
                          inCompiler->emitSemanticError (inObject.mProperty_location, GALGAS_string ("unknown type"), fixItArray13  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 80)) ;
                          result_type.drop () ; // Release error dropped variable
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
  return result_type ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Extension getter '@gtlData location'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_location> gExtensionGetterTable_gtlData_location ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_location (const int32_t inClassIndex,
                                    enterExtensionGetter_gtlData_location inGetter) {
  gExtensionGetterTable_gtlData_location.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location callExtensionGetter_location (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_location f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_location.count ()) {
      f = gExtensionGetterTable_gtlData_location (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_location.count ()) {
           f = gExtensionGetterTable_gtlData_location (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_location.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_location extensionGetter_gtlData_location (const cPtr_gtlData * inObject,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  result_result = object->mProperty_where ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_location (void) {
  enterExtensionGetter_location (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                 extensionGetter_gtlData_location) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_location (void) {
  gExtensionGetterTable_gtlData_location.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_location (defineExtensionGetter_gtlData_location,
                                             freeExtensionGetter_gtlData_location) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData desc'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_desc> gExtensionGetterTable_gtlData_desc ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_desc (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_desc inGetter) {
  gExtensionGetterTable_gtlData_desc.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_desc (void) {
  gExtensionGetterTable_gtlData_desc.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_desc (NULL,
                                         freeExtensionGetter_gtlData_desc) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_desc (const cPtr_gtlData * inObject,
                                        const GALGAS_uint in_tab,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_desc f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_desc.count ()) {
      f = gExtensionGetterTable_gtlData_desc (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_desc.count ()) {
           f = gExtensionGetterTable_gtlData_desc (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_desc.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_tab, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData string'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_string> gExtensionGetterTable_gtlData_string ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_string (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_string inGetter) {
  gExtensionGetterTable_gtlData_string.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_string (void) {
  gExtensionGetterTable_gtlData_string.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_string (NULL,
                                           freeExtensionGetter_gtlData_string) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_string (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_string f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_string.count ()) {
      f = gExtensionGetterTable_gtlData_string (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_string.count ()) {
           f = gExtensionGetterTable_gtlData_string (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_string.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData lstring'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_lstring> gExtensionGetterTable_gtlData_lstring ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_lstring (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_lstring inGetter) {
  gExtensionGetterTable_gtlData_lstring.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_lstring (void) {
  gExtensionGetterTable_gtlData_lstring.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_lstring (NULL,
                                            freeExtensionGetter_gtlData_lstring) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring callExtensionGetter_lstring (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_lstring f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_lstring.count ()) {
      f = gExtensionGetterTable_gtlData_lstring (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_lstring.count ()) {
           f = gExtensionGetterTable_gtlData_lstring (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_lstring.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData bool'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_bool> gExtensionGetterTable_gtlData_bool ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_bool (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_bool inGetter) {
  gExtensionGetterTable_gtlData_bool.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_bool (void) {
  gExtensionGetterTable_gtlData_bool.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_bool (NULL,
                                         freeExtensionGetter_gtlData_bool) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_bool (const cPtr_gtlData * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_bool f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_bool.count ()) {
      f = gExtensionGetterTable_gtlData_bool (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_bool.count ()) {
           f = gExtensionGetterTable_gtlData_bool (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_bool.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData int'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_int> gExtensionGetterTable_gtlData_int ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_int (const int32_t inClassIndex,
                               enterExtensionGetter_gtlData_int inGetter) {
  gExtensionGetterTable_gtlData_int.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_int (void) {
  gExtensionGetterTable_gtlData_int.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_int (NULL,
                                        freeExtensionGetter_gtlData_int) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint callExtensionGetter_int (const cPtr_gtlData * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_int f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_int.count ()) {
      f = gExtensionGetterTable_gtlData_int (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_int.count ()) {
           f = gExtensionGetterTable_gtlData_int (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_int.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData float'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_float> gExtensionGetterTable_gtlData_float ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_float (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_float inGetter) {
  gExtensionGetterTable_gtlData_float.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_float (void) {
  gExtensionGetterTable_gtlData_float.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_float (NULL,
                                          freeExtensionGetter_gtlData_float) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double callExtensionGetter_float (const cPtr_gtlData * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_double result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_float f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_float.count ()) {
      f = gExtensionGetterTable_gtlData_float (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_float.count ()) {
           f = gExtensionGetterTable_gtlData_float (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_float.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData plusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_plusOp> gExtensionGetterTable_gtlData_plusOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_plusOp (const int32_t inClassIndex,
                                  enterExtensionGetter_gtlData_plusOp inGetter) {
  gExtensionGetterTable_gtlData_plusOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_plusOp (void) {
  gExtensionGetterTable_gtlData_plusOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_plusOp (NULL,
                                           freeExtensionGetter_gtlData_plusOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_plusOp (const cPtr_gtlData * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_plusOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_plusOp.count ()) {
      f = gExtensionGetterTable_gtlData_plusOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_plusOp.count ()) {
           f = gExtensionGetterTable_gtlData_plusOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_plusOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                    Abstract extension getter '@gtlData minusOp'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_minusOp> gExtensionGetterTable_gtlData_minusOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_minusOp (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlData_minusOp inGetter) {
  gExtensionGetterTable_gtlData_minusOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_minusOp (void) {
  gExtensionGetterTable_gtlData_minusOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_minusOp (NULL,
                                            freeExtensionGetter_gtlData_minusOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_minusOp (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_minusOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_minusOp.count ()) {
      f = gExtensionGetterTable_gtlData_minusOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_minusOp.count ()) {
           f = gExtensionGetterTable_gtlData_minusOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_minusOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData notOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_notOp> gExtensionGetterTable_gtlData_notOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_notOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_notOp inGetter) {
  gExtensionGetterTable_gtlData_notOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_notOp (void) {
  gExtensionGetterTable_gtlData_notOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_notOp (NULL,
                                          freeExtensionGetter_gtlData_notOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_notOp (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_notOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_notOp.count ()) {
      f = gExtensionGetterTable_gtlData_notOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_notOp.count ()) {
           f = gExtensionGetterTable_gtlData_notOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_notOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData addOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_addOp> gExtensionGetterTable_gtlData_addOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_addOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_addOp inGetter) {
  gExtensionGetterTable_gtlData_addOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_addOp (void) {
  gExtensionGetterTable_gtlData_addOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_addOp (NULL,
                                          freeExtensionGetter_gtlData_addOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_addOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_addOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_addOp.count ()) {
      f = gExtensionGetterTable_gtlData_addOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_addOp.count ()) {
           f = gExtensionGetterTable_gtlData_addOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_addOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData subOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_subOp> gExtensionGetterTable_gtlData_subOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_subOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_subOp inGetter) {
  gExtensionGetterTable_gtlData_subOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_subOp (void) {
  gExtensionGetterTable_gtlData_subOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_subOp (NULL,
                                          freeExtensionGetter_gtlData_subOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_subOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_subOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_subOp.count ()) {
      f = gExtensionGetterTable_gtlData_subOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_subOp.count ()) {
           f = gExtensionGetterTable_gtlData_subOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_subOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData mulOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_mulOp> gExtensionGetterTable_gtlData_mulOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_mulOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_mulOp inGetter) {
  gExtensionGetterTable_gtlData_mulOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_mulOp (void) {
  gExtensionGetterTable_gtlData_mulOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_mulOp (NULL,
                                          freeExtensionGetter_gtlData_mulOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_mulOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_mulOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_mulOp.count ()) {
      f = gExtensionGetterTable_gtlData_mulOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_mulOp.count ()) {
           f = gExtensionGetterTable_gtlData_mulOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_mulOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData divOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_divOp> gExtensionGetterTable_gtlData_divOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_divOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_divOp inGetter) {
  gExtensionGetterTable_gtlData_divOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_divOp (void) {
  gExtensionGetterTable_gtlData_divOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_divOp (NULL,
                                          freeExtensionGetter_gtlData_divOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_divOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_divOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_divOp.count ()) {
      f = gExtensionGetterTable_gtlData_divOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_divOp.count ()) {
           f = gExtensionGetterTable_gtlData_divOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_divOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData modOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_modOp> gExtensionGetterTable_gtlData_modOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_modOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_modOp inGetter) {
  gExtensionGetterTable_gtlData_modOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_modOp (void) {
  gExtensionGetterTable_gtlData_modOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_modOp (NULL,
                                          freeExtensionGetter_gtlData_modOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_modOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_modOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_modOp.count ()) {
      f = gExtensionGetterTable_gtlData_modOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_modOp.count ()) {
           f = gExtensionGetterTable_gtlData_modOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_modOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData andOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_andOp> gExtensionGetterTable_gtlData_andOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_andOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_andOp inGetter) {
  gExtensionGetterTable_gtlData_andOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_andOp (void) {
  gExtensionGetterTable_gtlData_andOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_andOp (NULL,
                                          freeExtensionGetter_gtlData_andOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_andOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_andOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_andOp.count ()) {
      f = gExtensionGetterTable_gtlData_andOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_andOp.count ()) {
           f = gExtensionGetterTable_gtlData_andOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_andOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData orOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_orOp> gExtensionGetterTable_gtlData_orOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_orOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_orOp inGetter) {
  gExtensionGetterTable_gtlData_orOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_orOp (void) {
  gExtensionGetterTable_gtlData_orOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_orOp (NULL,
                                         freeExtensionGetter_gtlData_orOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_orOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_orOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_orOp.count ()) {
      f = gExtensionGetterTable_gtlData_orOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_orOp.count ()) {
           f = gExtensionGetterTable_gtlData_orOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_orOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData xorOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_xorOp> gExtensionGetterTable_gtlData_xorOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_xorOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_xorOp inGetter) {
  gExtensionGetterTable_gtlData_xorOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_xorOp (void) {
  gExtensionGetterTable_gtlData_xorOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_xorOp (NULL,
                                          freeExtensionGetter_gtlData_xorOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_xorOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_xorOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_xorOp.count ()) {
      f = gExtensionGetterTable_gtlData_xorOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_xorOp.count ()) {
           f = gExtensionGetterTable_gtlData_xorOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_xorOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData slOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_slOp> gExtensionGetterTable_gtlData_slOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_slOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_slOp inGetter) {
  gExtensionGetterTable_gtlData_slOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_slOp (void) {
  gExtensionGetterTable_gtlData_slOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_slOp (NULL,
                                         freeExtensionGetter_gtlData_slOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_slOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_slOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_slOp.count ()) {
      f = gExtensionGetterTable_gtlData_slOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_slOp.count ()) {
           f = gExtensionGetterTable_gtlData_slOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_slOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData srOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_srOp> gExtensionGetterTable_gtlData_srOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_srOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_srOp inGetter) {
  gExtensionGetterTable_gtlData_srOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_srOp (void) {
  gExtensionGetterTable_gtlData_srOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_srOp (NULL,
                                         freeExtensionGetter_gtlData_srOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_srOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_srOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_srOp.count ()) {
      f = gExtensionGetterTable_gtlData_srOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_srOp.count ()) {
           f = gExtensionGetterTable_gtlData_srOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_srOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Abstract extension getter '@gtlData neqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_neqOp> gExtensionGetterTable_gtlData_neqOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_neqOp (const int32_t inClassIndex,
                                 enterExtensionGetter_gtlData_neqOp inGetter) {
  gExtensionGetterTable_gtlData_neqOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_neqOp (void) {
  gExtensionGetterTable_gtlData_neqOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_neqOp (NULL,
                                          freeExtensionGetter_gtlData_neqOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_neqOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_neqOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_neqOp.count ()) {
      f = gExtensionGetterTable_gtlData_neqOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_neqOp.count ()) {
           f = gExtensionGetterTable_gtlData_neqOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_neqOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData eqOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_eqOp> gExtensionGetterTable_gtlData_eqOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_eqOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_eqOp inGetter) {
  gExtensionGetterTable_gtlData_eqOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_eqOp (void) {
  gExtensionGetterTable_gtlData_eqOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_eqOp (NULL,
                                         freeExtensionGetter_gtlData_eqOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_eqOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_eqOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_eqOp.count ()) {
      f = gExtensionGetterTable_gtlData_eqOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_eqOp.count ()) {
           f = gExtensionGetterTable_gtlData_eqOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_eqOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData ltOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_ltOp> gExtensionGetterTable_gtlData_ltOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_ltOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_ltOp inGetter) {
  gExtensionGetterTable_gtlData_ltOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_ltOp (void) {
  gExtensionGetterTable_gtlData_ltOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_ltOp (NULL,
                                         freeExtensionGetter_gtlData_ltOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_ltOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_ltOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_ltOp.count ()) {
      f = gExtensionGetterTable_gtlData_ltOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_ltOp.count ()) {
           f = gExtensionGetterTable_gtlData_ltOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_ltOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData leOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_leOp> gExtensionGetterTable_gtlData_leOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_leOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_leOp inGetter) {
  gExtensionGetterTable_gtlData_leOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_leOp (void) {
  gExtensionGetterTable_gtlData_leOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_leOp (NULL,
                                         freeExtensionGetter_gtlData_leOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_leOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_leOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_leOp.count ()) {
      f = gExtensionGetterTable_gtlData_leOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_leOp.count ()) {
           f = gExtensionGetterTable_gtlData_leOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_leOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData gtOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_gtOp> gExtensionGetterTable_gtlData_gtOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_gtOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_gtOp inGetter) {
  gExtensionGetterTable_gtlData_gtOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_gtOp (void) {
  gExtensionGetterTable_gtlData_gtOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_gtOp (NULL,
                                         freeExtensionGetter_gtlData_gtOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_gtOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_gtOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_gtOp.count ()) {
      f = gExtensionGetterTable_gtlData_gtOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_gtOp.count ()) {
           f = gExtensionGetterTable_gtlData_gtOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_gtOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Abstract extension getter '@gtlData geOp'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_geOp> gExtensionGetterTable_gtlData_geOp ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_geOp (const int32_t inClassIndex,
                                enterExtensionGetter_gtlData_geOp inGetter) {
  gExtensionGetterTable_gtlData_geOp.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_geOp (void) {
  gExtensionGetterTable_gtlData_geOp.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_geOp (NULL,
                                         freeExtensionGetter_gtlData_geOp) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_geOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_geOp f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_geOp.count ()) {
      f = gExtensionGetterTable_gtlData_geOp (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_geOp.count ()) {
           f = gExtensionGetterTable_gtlData_geOp (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_geOp.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_right, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Abstract extension getter '@gtlData embeddedType'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_embeddedType> gExtensionGetterTable_gtlData_embeddedType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_embeddedType (const int32_t inClassIndex,
                                        enterExtensionGetter_gtlData_embeddedType inGetter) {
  gExtensionGetterTable_gtlData_embeddedType.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_embeddedType (void) {
  gExtensionGetterTable_gtlData_embeddedType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_embeddedType (NULL,
                                                 freeExtensionGetter_gtlData_embeddedType) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type callExtensionGetter_embeddedType (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_type result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_embeddedType f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_embeddedType.count ()) {
      f = gExtensionGetterTable_gtlData_embeddedType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_embeddedType.count ()) {
           f = gExtensionGetterTable_gtlData_embeddedType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_embeddedType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                                                                                                                     *
//                                   Abstract extension method '@gtlData addMyValue'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_addMyValue> gExtensionMethodTable_gtlData_addMyValue ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_addMyValue (const int32_t inClassIndex,
                                      extensionMethodSignature_gtlData_addMyValue inMethod) {
  gExtensionMethodTable_gtlData_addMyValue.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_addMyValue (void) {
  gExtensionMethodTable_gtlData_addMyValue.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_addMyValue (NULL,
                                               freeExtensionMethod_gtlData_addMyValue) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_addMyValue (const cPtr_gtlData * inObject,
                                     GALGAS_objectlist & io_objectList,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_addMyValue f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_addMyValue.count ()) {
      f = gExtensionMethodTable_gtlData_addMyValue (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_gtlData_addMyValue.count ()) {
          f = gExtensionMethodTable_gtlData_addMyValue (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_gtlData_addMyValue.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_objectList, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension getter '@gtlData performGetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_performGetter> gExtensionGetterTable_gtlData_performGetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_performGetter (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_performGetter inGetter) {
  gExtensionGetterTable_gtlData_performGetter.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_performGetter (void) {
  gExtensionGetterTable_gtlData_performGetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_performGetter (NULL,
                                                  freeExtensionGetter_gtlData_performGetter) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_performGetter (const cPtr_gtlData * inObject,
                                                  const GALGAS_lstring in_methodName,
                                                  const GALGAS_gtlDataList in_arguments,
                                                  const GALGAS_gtlContext in_context,
                                                  const GALGAS_library in_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_performGetter f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_performGetter.count ()) {
      f = gExtensionGetterTable_gtlData_performGetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_performGetter.count ()) {
           f = gExtensionGetterTable_gtlData_performGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_performGetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_methodName, in_arguments, in_context, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Abstract extension setter '@gtlData performSetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_performSetter> gExtensionModifierTable_gtlData_performSetter ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_performSetter (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_performSetter inModifier) {
  gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_performSetter (void) {
  gExtensionModifierTable_gtlData_performSetter.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_performSetter (NULL,
                                                  freeExtensionModifier_gtlData_performSetter) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_performSetter (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_methodName,
                                        const GALGAS_gtlDataList constin_arguments,
                                        const GALGAS_gtlContext constin_context,
                                        const GALGAS_library constin_lib,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_performSetter f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_performSetter.count ()) {
      f = gExtensionModifierTable_gtlData_performSetter (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_performSetter.count ()) {
           f = gExtensionModifierTable_gtlData_performSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_methodName, constin_arguments, constin_context, constin_lib, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension method '@gtlData structField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_structField> gExtensionMethodTable_gtlData_structField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_structField (const int32_t inClassIndex,
                                       extensionMethodSignature_gtlData_structField inMethod) {
  gExtensionMethodTable_gtlData_structField.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_structField (const cPtr_gtlData * inObject,
                                      const GALGAS_lstring constin_name,
                                      GALGAS_gtlData & out_result,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_structField f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_structField.count ()) {
      f = gExtensionMethodTable_gtlData_structField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_structField.count ()) {
           f = gExtensionMethodTable_gtlData_structField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_structField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_structField (const cPtr_gtlData * inObject,
                                                 const GALGAS_lstring constinArgument_name,
                                                 GALGAS_gtlData & outArgument_result,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 240)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 240)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 240)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 240)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_structField (void) {
  enterExtensionMethod_structField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionMethod_gtlData_structField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_structField (void) {
  gExtensionMethodTable_gtlData_structField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_structField (defineExtensionMethod_gtlData_structField,
                                                freeExtensionMethod_gtlData_structField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData resultField'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_resultField> gExtensionGetterTable_gtlData_resultField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_resultField (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_resultField inGetter) {
  gExtensionGetterTable_gtlData_resultField.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlData callExtensionGetter_resultField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_resultField f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_resultField.count ()) {
      f = gExtensionGetterTable_gtlData_resultField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_resultField.count ()) {
           f = gExtensionGetterTable_gtlData_resultField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_resultField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_gtlData extensionGetter_gtlData_resultField (const cPtr_gtlData * inObject,
                                                           const GALGAS_lstring constinArgument_name,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlData result_result ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 247)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 247)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 247)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 247)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_resultField (void) {
  enterExtensionGetter_resultField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionGetter_gtlData_resultField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_resultField (void) {
  gExtensionGetterTable_gtlData_resultField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_resultField (defineExtensionGetter_gtlData_resultField,
                                                freeExtensionGetter_gtlData_resultField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension setter '@gtlData setStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructField> gExtensionModifierTable_gtlData_setStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructField (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setStructField inModifier) {
  gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructField (cPtr_gtlData * inObject,
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
    extensionSetterSignature_gtlData_setStructField f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructField.count ()) {
      f = gExtensionModifierTable_gtlData_setStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructField.count ()) {
           f = gExtensionModifierTable_gtlData_setStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setStructField (cPtr_gtlData * inObject,
                                                    const GALGAS_lstring constinArgument_name,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 255)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 255)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 255)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 255)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setStructField (void) {
  gExtensionModifierTable_gtlData_setStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setStructField (defineExtensionSetter_gtlData_setStructField,
                                                   freeExtensionModifier_gtlData_setStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension setter '@gtlData setStructFieldAtLevel'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructFieldAtLevel> gExtensionModifierTable_gtlData_setStructFieldAtLevel ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_setStructFieldAtLevel (const int32_t inClassIndex,
                                                 extensionSetterSignature_gtlData_setStructFieldAtLevel inModifier) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constin_name,
                                                const GALGAS_gtlData constin_data,
                                                const GALGAS_uint constin_level,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setStructFieldAtLevel f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
      f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
           f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, constin_level, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                           const GALGAS_lstring constinArgument_name,
                                                           const GALGAS_gtlData /* constinArgument_data */,
                                                           const GALGAS_uint /* constinArgument_level */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 264)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 264)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 264)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 264)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                              extensionSetter_gtlData_setStructFieldAtLevel) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_setStructFieldAtLevel (void) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_setStructFieldAtLevel (defineExtensionSetter_gtlData_setStructFieldAtLevel,
                                                          freeExtensionModifier_gtlData_setStructFieldAtLevel) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Extension setter '@gtlData deleteStructField'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteStructField> gExtensionModifierTable_gtlData_deleteStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionSetter_deleteStructField (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteStructField inModifier) {
  gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionSetter_deleteStructField (cPtr_gtlData * inObject,
                                            const GALGAS_lstring constin_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteStructField f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
      f = gExtensionModifierTable_gtlData_deleteStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
           f = gExtensionModifierTable_gtlData_deleteStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionSetter_gtlData_deleteStructField (cPtr_gtlData * inObject,
                                                       const GALGAS_lstring constinArgument_name,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 270)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 270)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 270)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 270)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionSetter_gtlData_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionModifier_gtlData_deleteStructField (void) {
  gExtensionModifierTable_gtlData_deleteStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gSetter_gtlData_deleteStructField (defineExtensionSetter_gtlData_deleteStructField,
                                                      freeExtensionModifier_gtlData_deleteStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension getter '@gtlData hasStructField'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasStructField> gExtensionGetterTable_gtlData_hasStructField ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasStructField (const int32_t inClassIndex,
                                          enterExtensionGetter_gtlData_hasStructField inGetter) {
  gExtensionGetterTable_gtlData_hasStructField.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasStructField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasStructField f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasStructField.count ()) {
      f = gExtensionGetterTable_gtlData_hasStructField (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasStructField.count ()) {
           f = gExtensionGetterTable_gtlData_hasStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasStructField.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasStructField (const cPtr_gtlData * /* inObject */,
                                                           const GALGAS_lstring /* constinArgument_name */,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasStructField (void) {
  enterExtensionGetter_hasStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionGetter_gtlData_hasStructField) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasStructField (void) {
  gExtensionGetterTable_gtlData_hasStructField.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasStructField (defineExtensionGetter_gtlData_hasStructField,
                                                   freeExtensionGetter_gtlData_hasStructField) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData overrideMap'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_overrideMap> gExtensionGetterTable_gtlData_overrideMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overrideMap (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlData_overrideMap inGetter) {
  gExtensionGetterTable_gtlData_overrideMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct callExtensionGetter_overrideMap (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_overrideMap f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_overrideMap.count ()) {
      f = gExtensionGetterTable_gtlData_overrideMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_overrideMap.count ()) {
           f = gExtensionGetterTable_gtlData_overrideMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_overrideMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_gtlStruct extensionGetter_gtlData_overrideMap (const cPtr_gtlData * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 283)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 283)) ;
  result_mapOverriden.drop () ; // Release error dropped variable
//---
  return result_mapOverriden ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_overrideMap (void) {
  enterExtensionGetter_overrideMap (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                    extensionGetter_gtlData_overrideMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_overrideMap (void) {
  gExtensionGetterTable_gtlData_overrideMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_overrideMap (defineExtensionGetter_gtlData_overrideMap,
                                                freeExtensionGetter_gtlData_overrideMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Extension getter '@gtlData overriddenMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_overriddenMap> gExtensionGetterTable_gtlData_overriddenMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_overriddenMap (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlData_overriddenMap inGetter) {
  gExtensionGetterTable_gtlData_overriddenMap.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlStruct callExtensionGetter_overriddenMap (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_overriddenMap f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_overriddenMap.count ()) {
      f = gExtensionGetterTable_gtlData_overriddenMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_overriddenMap.count ()) {
           f = gExtensionGetterTable_gtlData_overriddenMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_overriddenMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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

static GALGAS_gtlStruct extensionGetter_gtlData_overriddenMap (const cPtr_gtlData * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 289)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 289)) ;
  result_overriddenMap.drop () ; // Release error dropped variable
//---
  return result_overriddenMap ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_overriddenMap (void) {
  enterExtensionGetter_overriddenMap (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                      extensionGetter_gtlData_overriddenMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_overriddenMap (void) {
  gExtensionGetterTable_gtlData_overriddenMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_overriddenMap (defineExtensionGetter_gtlData_overriddenMap,
                                                  freeExtensionGetter_gtlData_overriddenMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Extension method '@gtlData mapItem'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_gtlData_mapItem> gExtensionMethodTable_gtlData_mapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_mapItem (const int32_t inClassIndex,
                                   extensionMethodSignature_gtlData_mapItem inMethod) {
  gExtensionMethodTable_gtlData_mapItem.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_mapItem (const cPtr_gtlData * inObject,
                                  const GALGAS_lstring constin_name,
                                  GALGAS_gtlData & out_result,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlData_mapItem f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlData_mapItem.count ()) {
      f = gExtensionMethodTable_gtlData_mapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlData_mapItem.count ()) {
           f = gExtensionMethodTable_gtlData_mapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlData_mapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_name, out_result, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_gtlData_mapItem (const cPtr_gtlData * inObject,
                                             const GALGAS_lstring constinArgument_name,
                                             GALGAS_gtlData & outArgument_result,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 296)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 296)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 296)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 296)) ;
  outArgument_result.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_gtlData_mapItem (void) {
  enterExtensionMethod_mapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                extensionMethod_gtlData_mapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_gtlData_mapItem (void) {
  gExtensionMethodTable_gtlData_mapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_gtlData_mapItem (defineExtensionMethod_gtlData_mapItem,
                                            freeExtensionMethod_gtlData_mapItem) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Extension getter '@gtlData hasMapItem'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_gtlData_hasMapItem> gExtensionGetterTable_gtlData_hasMapItem ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_hasMapItem (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlData_hasMapItem inGetter) {
  gExtensionGetterTable_gtlData_hasMapItem.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool callExtensionGetter_hasMapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring in_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_hasMapItem f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_hasMapItem.count ()) {
      f = gExtensionGetterTable_gtlData_hasMapItem (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_hasMapItem.count ()) {
           f = gExtensionGetterTable_gtlData_hasMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_hasMapItem.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_name, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_gtlData_hasMapItem (const cPtr_gtlData * /* inObject */,
                                                       const GALGAS_lstring /* constinArgument_name */,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_gtlData_hasMapItem (void) {
  enterExtensionGetter_hasMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionGetter_gtlData_hasMapItem) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_gtlData_hasMapItem (void) {
  gExtensionGetterTable_gtlData_hasMapItem.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_gtlData_hasMapItem (defineExtensionGetter_gtlData_hasMapItem,
                                               freeExtensionGetter_gtlData_hasMapItem) ;

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
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 310)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 310)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 310)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 310)) ;
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
  inCompiler->emitSemanticError (constinArgument_name.getter_location (SOURCE_FILE ("gtl_data_types.galgas", 316)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 316)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 316)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 316)) ;
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
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 323)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 323)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 323)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 323)) ;
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
                                                const GALGAS_gtlInt in_index,
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
                                                           const GALGAS_gtlInt /* constinArgument_index */,
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
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 337)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 337)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 337)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 337)) ;
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
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 343)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 343)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 343)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 343)) ;
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
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_item.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 349)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 349)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 349)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 349)) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlUnconstructed::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlUnconstructed * p = (const cPtr_gtlUnconstructed *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlUnconstructed) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_meta.objectCompare (p->mProperty_meta) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlUnconstructed::objectCompare (const GALGAS_gtlUnconstructed & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlUnconstructed::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (const cPtr_gtlUnconstructed * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlUnconstructed) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_lstring & inAttribute_meta
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlUnconstructed (inAttribute_where, inAttribute_meta COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @gtlUnconstructed class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlUnconstructed::cPtr_gtlUnconstructed (const GALGAS_location & in_where,
                                              const GALGAS_lstring & in_meta
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlUnconstructed::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlUnconstructed ;
}

void cPtr_gtlUnconstructed::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@gtlUnconstructed:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlUnconstructed::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlUnconstructed (mProperty_where, mProperty_meta COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @gtlUnconstructed type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlUnconstructed ("gtlUnconstructed",
                                         & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlUnconstructed::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlUnconstructed ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlUnconstructed::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlUnconstructed (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  const GALGAS_gtlUnconstructed * p = (const GALGAS_gtlUnconstructed *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlUnconstructed *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlUnconstructed", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlType::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlType * p = (const cPtr_gtlType *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlType) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_meta.objectCompare (p->mProperty_meta) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_type.objectCompare (p->mProperty_type) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlType::objectCompare (const GALGAS_gtlType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType::GALGAS_gtlType (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType::GALGAS_gtlType (const cPtr_gtlType * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType GALGAS_gtlType::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_type & inAttribute_type
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlType result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_type.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlType (inAttribute_where, inAttribute_meta, inAttribute_type COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_gtlType::getter_type (UNUSED_LOCATION_ARGS) const {
  GALGAS_type result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlType * p = (const cPtr_gtlType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlType) ;
    result = p->mProperty_type ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cPtr_gtlType::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlType class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlType::cPtr_gtlType (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_type & in_type
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_type (in_type) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlType::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlType ;
}

void cPtr_gtlType::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlType:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_type.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlType (mProperty_where, mProperty_meta, mProperty_type COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlType ("gtlType",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlType GALGAS_gtlType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlType result ;
  const GALGAS_gtlType * p = (const GALGAS_gtlType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlEnum::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlEnum * p = (const cPtr_gtlEnum *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlEnum) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_meta.objectCompare (p->mProperty_meta) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlEnum::objectCompare (const GALGAS_gtlEnum & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum::GALGAS_gtlEnum (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlEnum::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum::GALGAS_gtlEnum (const cPtr_gtlEnum * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_string & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlEnum result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlEnum (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_gtlEnum::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlEnum * p = (const cPtr_gtlEnum *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlEnum) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_gtlEnum::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlEnum class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlEnum::cPtr_gtlEnum (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_string & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlEnum::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEnum ;
}

void cPtr_gtlEnum::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlEnum:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlEnum::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlEnum (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlEnum type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlEnum ("gtlEnum",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlEnum GALGAS_gtlEnum::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlEnum result ;
  const GALGAS_gtlEnum * p = (const GALGAS_gtlEnum *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlChar::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlChar * p = (const cPtr_gtlChar *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlChar) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_meta.objectCompare (p->mProperty_meta) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlChar::objectCompare (const GALGAS_gtlChar & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar::GALGAS_gtlChar (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlChar::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_char::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar::GALGAS_gtlChar (const cPtr_gtlChar * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlChar) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_char & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlChar result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlChar (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_gtlChar::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_char result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlChar * p = (const cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char cPtr_gtlChar::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlChar::setter_setValue (GALGAS_char inValue
                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlChar * p = (cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    p->mProperty_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlChar::setter_setValue (GALGAS_char inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                          Pointer class for @gtlChar class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlChar::cPtr_gtlChar (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_char & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlChar::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlChar ;
}

void cPtr_gtlChar::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlChar:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlChar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlChar (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlChar type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlChar ("gtlChar",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlChar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlChar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlChar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlChar GALGAS_gtlChar::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlChar result ;
  const GALGAS_gtlChar * p = (const GALGAS_gtlChar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlChar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlChar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_gtlInt::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlInt * p = (const cPtr_gtlInt *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlInt) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_meta.objectCompare (p->mProperty_meta) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_gtlInt::objectCompare (const GALGAS_gtlInt & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt::GALGAS_gtlInt (void) :
GALGAS_gtlData () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bigint::constructor_zero (HERE)
                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt::GALGAS_gtlInt (const cPtr_gtlInt * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlInt) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_bigint & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlInt result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlInt (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_gtlInt::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_bigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlInt * p = (const cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint cPtr_gtlInt::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_gtlInt::setter_setValue (GALGAS_bigint inValue
                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlInt * p = (cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    p->mProperty_value = inValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cPtr_gtlInt::setter_setValue (GALGAS_bigint inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                           Pointer class for @gtlInt class                                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_gtlInt::cPtr_gtlInt (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_bigint & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_gtlInt::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInt ;
}

void cPtr_gtlInt::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlInt:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_gtlInt::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlInt (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @gtlInt type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInt ("gtlInt",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_gtlInt::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInt ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_gtlInt::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInt (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_gtlInt GALGAS_gtlInt::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlInt result ;
  const GALGAS_gtlInt * p = (const GALGAS_gtlInt *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlInt *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInt", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

