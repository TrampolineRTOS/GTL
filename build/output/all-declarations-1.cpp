#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@string loadCommandFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_loadCommandFile (const GALGAS_string inObject,
                                      GALGAS_gtlContext & ioArgument_context,
                                      GALGAS_gtlData & ioArgument_vars,
                                      GALGAS_library & ioArgument_lib,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_string temp_1 = inObject ;
    test_0 = temp_1.getter_fileExists (SOURCE_FILE ("gtl_debugger.galgas", 70)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_string temp_2 = inObject ;
      inCompiler->printMessage (GALGAS_string ("loading file ").add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 71)) ;
      const GALGAS_string temp_3 = inObject ;
      GALGAS_stringlist var_commands_2684 = GALGAS_string::constructor_stringWithContentsOfFile (temp_3, inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 72)).getter_componentsSeparatedByString (GALGAS_string ("\n") COMMA_SOURCE_FILE ("gtl_debugger.galgas", 73)) ;
      GALGAS_string var_whatInFile_2792 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringlist enumerator_2817 (var_commands_2684, kENUMERATION_UP) ;
      while (enumerator_2817.hasCurrentObject ()) {
        var_whatInFile_2792.plusAssign_operation(enumerator_2817.current_mValue (HERE).getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 77)) ;
        enumerator_2817.gotoNextObject () ;
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_whatInFile_2792.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          cEnumerator_stringlist enumerator_2950 (var_commands_2684, kENUMERATION_UP) ;
          while (enumerator_2950.hasCurrentObject ()) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsNotEqual, enumerator_2950.current_mValue (HERE).getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger.galgas", 82)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                GALGAS_gtlInstruction var_command_3135 ;
                var_command_3135.drop () ;
                cGrammar_gtl_5F_debugger_5F_grammar::_performSourceStringParsing_ (inCompiler, enumerator_2950.current_mValue (HERE), GALGAS_string ("Debugger command"), var_command_3135  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 83)) ;
                inCompiler->printMessage (ioArgument_context.readProperty_debuggerContext ().readProperty_instructionColor ().add_operation (ioArgument_context.readProperty_debuggerContext ().readProperty_instructionFace (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 85))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 85)) ;
                callExtensionMethod_display ((cPtr_gtlInstruction *) var_command_3135.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 87)) ;
                inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 88))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 88)) ;
                inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 89)) ;
                GALGAS_string var_result_3362 = GALGAS_string::makeEmptyString () ;
                callExtensionMethod_execute ((cPtr_gtlInstruction *) var_command_3135.ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, var_result_3362, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 91)) ;
              }
            }
            enumerator_2950.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_string temp_6 = inObject ;
        inCompiler->printMessage (GALGAS_string ("No command in ").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95)).add_operation (GALGAS_string (" file\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 95)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@gtlBreakpointList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_gtlBreakpointList : public cCollectionElement {
  public: GALGAS_gtlBreakpointList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpoint & in_breakpoint
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpointList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_gtlBreakpointList::cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpoint & in_breakpoint
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_breakpoint) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_gtlBreakpointList::cCollectionElement_gtlBreakpointList (const GALGAS_gtlBreakpointList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_breakpoint) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_gtlBreakpointList::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_gtlBreakpointList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_gtlBreakpointList (mObject.mProperty_breakpoint COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_gtlBreakpointList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "breakpoint" ":" ;
  mObject.mProperty_breakpoint.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_gtlBreakpointList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_gtlBreakpointList * operand = (cCollectionElement_gtlBreakpointList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_gtlBreakpointList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList::GALGAS_gtlBreakpointList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList::GALGAS_gtlBreakpointList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlBreakpointList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_gtlBreakpoint & in_breakpoint
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlBreakpointList * p = nullptr ;
  macroMyNew (p, cCollectionElement_gtlBreakpointList (in_breakpoint COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::addAssign_operation (const GALGAS_gtlBreakpoint & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_gtlBreakpointList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_append (const GALGAS_gtlBreakpoint inOperand0,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_gtlBreakpointList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_insertAtIndex (const GALGAS_gtlBreakpoint inOperand0,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_gtlBreakpointList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_removeAtIndex (GALGAS_gtlBreakpoint & outOperand0,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
        outOperand0 = p->mObject.mProperty_breakpoint ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_popFirst (GALGAS_gtlBreakpoint & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_popLast (GALGAS_gtlBreakpoint & outOperand0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::method_first (GALGAS_gtlBreakpoint & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::method_last (GALGAS_gtlBreakpoint & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    outOperand0 = p->mObject.mProperty_breakpoint ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_gtlBreakpointList result = GALGAS_gtlBreakpointList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::plusAssign_operation (const GALGAS_gtlBreakpointList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList::setter_setBreakpointAtIndex (GALGAS_gtlBreakpoint inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_breakpoint = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint GALGAS_gtlBreakpointList::getter_breakpointAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlBreakpointList * p = (cCollectionElement_gtlBreakpointList *) attributes.ptr () ;
  GALGAS_gtlBreakpoint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
    result = p->mObject.mProperty_breakpoint ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_gtlBreakpointList::cEnumerator_gtlBreakpointList (const GALGAS_gtlBreakpointList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element cEnumerator_gtlBreakpointList::current (LOCATION_ARGS) const {
  const cCollectionElement_gtlBreakpointList * p = (const cCollectionElement_gtlBreakpointList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint cEnumerator_gtlBreakpointList::current_breakpoint (LOCATION_ARGS) const {
  const cCollectionElement_gtlBreakpointList * p = (const cCollectionElement_gtlBreakpointList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlBreakpointList) ;
  return p->mObject.mProperty_breakpoint ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointList ("gtlBreakpointList",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_gtlBreakpointList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList result ;
  const GALGAS_gtlBreakpointList * p = (const GALGAS_gtlBreakpointList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@gtlInstructionListContextStack' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_gtlInstructionListContextStack : public cCollectionElement {
  public: GALGAS_gtlInstructionListContextStack_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_gtlInstructionListContextStack (const GALGAS_uint & in_nextInstructionIndex,
                                                             const GALGAS_gtlInstructionList & in_instructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_gtlInstructionListContextStack (const GALGAS_gtlInstructionListContextStack_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_gtlInstructionListContextStack::cCollectionElement_gtlInstructionListContextStack (const GALGAS_uint & in_nextInstructionIndex,
                                                                                                      const GALGAS_gtlInstructionList & in_instructionList
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_nextInstructionIndex, in_instructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_gtlInstructionListContextStack::cCollectionElement_gtlInstructionListContextStack (const GALGAS_gtlInstructionListContextStack_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_nextInstructionIndex, inElement.mProperty_instructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_gtlInstructionListContextStack::isValid (void) const {
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_gtlInstructionListContextStack::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_gtlInstructionListContextStack (mObject.mProperty_nextInstructionIndex, mObject.mProperty_instructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_gtlInstructionListContextStack::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_gtlInstructionListContextStack * operand = (cCollectionElement_gtlInstructionListContextStack *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_gtlInstructionListContextStack) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack::GALGAS_gtlInstructionListContextStack (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack::GALGAS_gtlInstructionListContextStack (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlInstructionListContextStack  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_uint & in_nextInstructionIndex,
                                                                       const GALGAS_gtlInstructionList & in_instructionList
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlInstructionListContextStack * p = nullptr ;
  macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (in_nextInstructionIndex,
                                                                    in_instructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::addAssign_operation (const GALGAS_uint & inOperand0,
                                                                 const GALGAS_gtlInstructionList & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_append (const GALGAS_uint inOperand0,
                                                           const GALGAS_gtlInstructionList inOperand1,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_insertAtIndex (const GALGAS_uint inOperand0,
                                                                  const GALGAS_gtlInstructionList inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_gtlInstructionListContextStack (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_removeAtIndex (GALGAS_uint & outOperand0,
                                                                  GALGAS_gtlInstructionList & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
        outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
        outOperand1 = p->mObject.mProperty_instructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_popFirst (GALGAS_uint & outOperand0,
                                                             GALGAS_gtlInstructionList & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_popLast (GALGAS_uint & outOperand0,
                                                            GALGAS_gtlInstructionList & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::method_first (GALGAS_uint & outOperand0,
                                                          GALGAS_gtlInstructionList & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::method_last (GALGAS_uint & outOperand0,
                                                         GALGAS_gtlInstructionList & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    outOperand0 = p->mObject.mProperty_nextInstructionIndex ;
    outOperand1 = p->mObject.mProperty_instructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_gtlInstructionListContextStack result = GALGAS_gtlInstructionListContextStack::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::plusAssign_operation (const GALGAS_gtlInstructionListContextStack inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_setNextInstructionIndexAtIndex (GALGAS_uint inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_nextInstructionIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_gtlInstructionListContextStack::getter_nextInstructionIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    result = p->mObject.mProperty_nextInstructionIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack::setter_setInstructionListAtIndex (GALGAS_gtlInstructionList inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_instructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList GALGAS_gtlInstructionListContextStack::getter_instructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_gtlInstructionListContextStack * p = (cCollectionElement_gtlInstructionListContextStack *) attributes.ptr () ;
  GALGAS_gtlInstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
    result = p->mObject.mProperty_instructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_gtlInstructionListContextStack::cEnumerator_gtlInstructionListContextStack (const GALGAS_gtlInstructionListContextStack & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element cEnumerator_gtlInstructionListContextStack::current (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_gtlInstructionListContextStack::current_nextInstructionIndex (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject.mProperty_nextInstructionIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList cEnumerator_gtlInstructionListContextStack::current_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_gtlInstructionListContextStack * p = (const cCollectionElement_gtlInstructionListContextStack *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_gtlInstructionListContextStack) ;
  return p->mObject.mProperty_instructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlInstructionListContextStack generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionListContextStack ("gtlInstructionListContextStack",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlInstructionListContextStack::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionListContextStack ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlInstructionListContextStack::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionListContextStack (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_gtlInstructionListContextStack::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack result ;
  const GALGAS_gtlInstructionListContextStack * p = (const GALGAS_gtlInstructionListContextStack *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlInstructionListContextStack *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionListContextStack", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_debugCommandInput::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_debugCommandInput * p = (const cPtr_debugCommandInput *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_debugCommandInput) ;
  if (kOperandEqual == result) {
    result = mProperty_history.objectCompare (p->mProperty_history) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput::GALGAS_debugCommandInput (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput GALGAS_debugCommandInput::constructor_default (LOCATION_ARGS) {
  return GALGAS_debugCommandInput::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput::GALGAS_debugCommandInput (const cPtr_debugCommandInput * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_debugCommandInput) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput GALGAS_debugCommandInput::constructor_new (const GALGAS_stringlist & inAttribute_history
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_debugCommandInput result ;
  if (inAttribute_history.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_debugCommandInput (inAttribute_history COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_debugCommandInput::readProperty_history (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    const cPtr_debugCommandInput * p = (const cPtr_debugCommandInput *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debugCommandInput) ;
    return p->mProperty_history ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_debugCommandInput::getter_history (UNUSED_LOCATION_ARGS) const {
  return mProperty_history ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debugCommandInput::setter_setHistory (GALGAS_stringlist inValue
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debugCommandInput * p = (cPtr_debugCommandInput *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debugCommandInput) ;
    p->mProperty_history = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debugCommandInput::setter_setHistory (GALGAS_stringlist inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_history = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @debugCommandInput class
//----------------------------------------------------------------------------------------------------------------------

cPtr_debugCommandInput::cPtr_debugCommandInput (const GALGAS_stringlist & in_history
                                                COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_history (in_history) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_debugCommandInput::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debugCommandInput ;
}

void cPtr_debugCommandInput::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@debugCommandInput:" ;
  mProperty_history.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_debugCommandInput::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_debugCommandInput (mProperty_history COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @debugCommandInput generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_debugCommandInput ("debugCommandInput",
                                          nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_debugCommandInput::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debugCommandInput ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_debugCommandInput::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_debugCommandInput (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput GALGAS_debugCommandInput::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_debugCommandInput result ;
  const GALGAS_debugCommandInput * p = (const GALGAS_debugCommandInput *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_debugCommandInput *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("debugCommandInput", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint::GALGAS_gtlBreakpoint (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint GALGAS_gtlBreakpoint::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpoint::constructor_new (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE)
                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint::GALGAS_gtlBreakpoint (const cPtr_gtlBreakpoint * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpoint) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlBreakpoint::readProperty_fileName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    return p->mProperty_fileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlBreakpoint::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_gtlBreakpoint::readProperty_lineNum (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    return p->mProperty_lineNum ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_gtlBreakpoint::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  return mProperty_lineNum ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlBreakpoint::readProperty_signature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlBreakpoint * p = (const cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    return p->mProperty_signature ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlBreakpoint::getter_signature (UNUSED_LOCATION_ARGS) const {
  return mProperty_signature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpoint::setter_setFileName (GALGAS_string inValue
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpoint * p = (cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    p->mProperty_fileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpoint::setter_setFileName (GALGAS_string inValue
                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_fileName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpoint::setter_setLineNum (GALGAS_uint inValue
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpoint * p = (cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    p->mProperty_lineNum = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpoint::setter_setLineNum (GALGAS_uint inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_lineNum = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpoint::setter_setSignature (GALGAS_string inValue
                                                COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpoint * p = (cPtr_gtlBreakpoint *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpoint) ;
    p->mProperty_signature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpoint::setter_setSignature (GALGAS_string inValue
                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_signature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBreakpoint class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBreakpoint::cPtr_gtlBreakpoint (const GALGAS_string & in_fileName,
                                        const GALGAS_uint & in_lineNum,
                                        const GALGAS_string & in_signature
                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_fileName (in_fileName),
mProperty_lineNum (in_lineNum),
mProperty_signature (in_signature) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBreakpoint::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBreakpoint (mProperty_fileName, mProperty_lineNum, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpoint generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpoint ("gtlBreakpoint",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpoint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpoint ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpoint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpoint (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpoint GALGAS_gtlBreakpoint::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpoint result ;
  const GALGAS_gtlBreakpoint * p = (const GALGAS_gtlBreakpoint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpoint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpoint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@gtlVarPath stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlVarPath & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_gtlVarPath temp_0 = inObject ;
  result_result = callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) temp_0.getter_itemAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 653)).ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 653)) ;
  const GALGAS_gtlVarPath temp_1 = inObject ;
  cEnumerator_gtlVarPath enumerator_19873 (temp_1.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 654)), kENUMERATION_UP) ;
  while (enumerator_19873.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_stringRepresentation ((const cPtr_gtlVarItem *) enumerator_19873.current_item (HERE).ptr (), GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)), inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 655)) ;
    enumerator_19873.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlVarItem stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlVarItem * inObject,
                                                        const GALGAS_string in_concatString,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_stringRepresentation (in_concatString, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@gtlExpressionList stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlExpressionList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionList temp_0 = inObject ;
  cEnumerator_gtlExpressionList enumerator_32813 (temp_0, kENUMERATION_UP) ;
  while (enumerator_32813.hasCurrentObject ()) {
    result_result = result_result.add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_32813.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1071)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1071)) ;
    if (enumerator_32813.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1073)) ;
    }
    enumerator_32813.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@gtlExpressionMap mapRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mapRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_33107 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33107.hasCurrentObject ()) {
    result_result = result_result.add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)).add_operation (enumerator_33107.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)).add_operation (GALGAS_string ("\": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_33107.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1083)) ;
    if (enumerator_33107.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1085)) ;
    }
    enumerator_33107.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@gtlExpressionMap structRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_structRepresentation (const GALGAS_gtlExpressionMap & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlExpressionMap temp_0 = inObject ;
  cEnumerator_gtlExpressionMap enumerator_33426 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33426.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_33426.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)).add_operation (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_33426.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1095)) ;
    if (enumerator_33426.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1097)) ;
    }
    enumerator_33426.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@gtlArgumentList stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_gtlArgumentList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_gtlArgumentList temp_0 = inObject ;
  cEnumerator_gtlArgumentList enumerator_33742 (temp_0, kENUMERATION_UP) ;
  while (enumerator_33742.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_33742.current_name (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1107)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_33742.current_typed (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_result = result_result.add_operation (GALGAS_string (" : @"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1109)).add_operation (extensionGetter_typeName (enumerator_33742.current_type (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1109)) ;
      }
    }
    if (enumerator_33742.hasNextObject ()) {
      result_result = result_result.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1112)) ;
    }
    enumerator_33742.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@sortingKeyList stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_sortingKeyList & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_sortingKeyList temp_0 = inObject ;
  cEnumerator_sortingKeyList enumerator_34272 (temp_0, kENUMERATION_UP) ;
  while (enumerator_34272.hasCurrentObject ()) {
    result_result = result_result.add_operation (enumerator_34272.current_key (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1129)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1129)).add_operation (extensionGetter_stringRepresentation (enumerator_34272.current_order (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1129)) ;
    if (enumerator_34272.hasNextObject ()) {
      result_result = GALGAS_string (", ") ;
    }
    enumerator_34272.gotoNextObject () ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlInstruction shortLocation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlInstruction::getter_shortLocation (C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = this->mProperty_where.getter_file (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1139)).getter_lastPathComponent (SOURCE_FILE ("gtl_debugger.galgas", 1139)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1139)).add_operation (this->mProperty_where.getter_endLine (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1139)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 1139)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1139)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_shortLocation (const cPtr_gtlInstruction * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_shortLocation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlInstruction displayWithLocation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlInstruction::method_displayWithLocation (const GALGAS_debuggerContext constinArgument_context,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_gtlInstruction temp_0 = this ;
  inCompiler->printMessage (callExtensionGetter_shortLocation ((const cPtr_gtlInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1146)).add_operation (GALGAS_string (" > "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1146))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1146)) ;
  inCompiler->printMessage (constinArgument_context.readProperty_instructionColor ().add_operation (constinArgument_context.readProperty_instructionFace (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1147))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1147)) ;
  const GALGAS_gtlInstruction temp_1 = this ;
  callExtensionMethod_display ((cPtr_gtlInstruction *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1148)) ;
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1149)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1149))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 1149)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_displayWithLocation (cPtr_gtlInstruction * inObject,
                                              const GALGAS_debuggerContext constin_context,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    inObject->method_displayWithLocation  (constin_context, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@gtlInstruction display'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_display (cPtr_gtlInstruction * inObject,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlInstruction) ;
    inObject->method_display (inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlInstruction mayExecuteWithoutError'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlInstruction::getter_mayExecuteWithoutError (const GALGAS_gtlContext /* constinArgument_exeContext */,
                                                                const GALGAS_gtlData /* constinArgument_context */,
                                                                const GALGAS_library /* constinArgument_lib */,
                                                                C_Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_may ; // Returned variable
  result_may = GALGAS_bool (true) ;
//---
  return result_may ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_mayExecuteWithoutError (const cPtr_gtlInstruction * inObject,
                                                        const GALGAS_gtlContext in_exeContext,
                                                        const GALGAS_gtlData in_context,
                                                        const GALGAS_library in_lib,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_mayExecuteWithoutError (in_exeContext, in_context, in_lib, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStepInstruction::GALGAS_gtlStepInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlStepInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStepInstruction::GALGAS_gtlStepInstruction (const cPtr_gtlStepInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlStepInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlStepInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlStepInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlStepInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlStepInstruction::cPtr_gtlStepInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlStepInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlStepInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlStepInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlStepInstruction ("gtlStepInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlStepInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStepInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlStepInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlStepInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStepInstruction GALGAS_gtlStepInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStepInstruction result ;
  const GALGAS_gtlStepInstruction * p = (const GALGAS_gtlStepInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlStepInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlStepInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstInstruction::GALGAS_gtlDoInstInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstInstruction::GALGAS_gtlDoInstInstruction (const cPtr_gtlDoInstInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoInstInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstruction GALGAS_gtlDoInstInstruction::readProperty_instructionToDo (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlInstruction () ;
  }else{
    const cPtr_gtlDoInstInstruction * p = (const cPtr_gtlDoInstInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoInstInstruction) ;
    return p->mProperty_instructionToDo ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstruction cPtr_gtlDoInstInstruction::getter_instructionToDo (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionToDo ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlDoInstInstruction::setter_setInstructionToDo (GALGAS_gtlInstruction inValue
                                                             COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlDoInstInstruction * p = (cPtr_gtlDoInstInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoInstInstruction) ;
    p->mProperty_instructionToDo = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlDoInstInstruction::setter_setInstructionToDo (GALGAS_gtlInstruction inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionToDo = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlDoInstInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlDoInstInstruction::cPtr_gtlDoInstInstruction (const GALGAS_location & in_where,
                                                      const GALGAS_string & in_signature,
                                                      const GALGAS_gtlInstruction & in_instructionToDo
                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_instructionToDo (in_instructionToDo) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlDoInstInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlDoInstInstruction (mProperty_where, mProperty_signature, mProperty_instructionToDo COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlDoInstInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoInstInstruction ("gtlDoInstInstruction",
                                             & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlDoInstInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlDoInstInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoInstInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstInstruction GALGAS_gtlDoInstInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstInstruction result ;
  const GALGAS_gtlDoInstInstruction * p = (const GALGAS_gtlDoInstInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlDoInstInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoInstInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotAllInstruction::GALGAS_gtlDoNotAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoNotAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_string::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotAllInstruction::GALGAS_gtlDoNotAllInstruction (const cPtr_gtlDoNotAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoNotAllInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_string & inAttribute_signature
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoNotAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlDoNotAllInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlDoNotAllInstruction::cPtr_gtlDoNotAllInstruction (const GALGAS_location & in_where,
                                                          const GALGAS_string & in_signature
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlDoNotAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlDoNotAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlDoNotAllInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ("gtlDoNotAllInstruction",
                                               & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlDoNotAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotAllInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlDoNotAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoNotAllInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotAllInstruction GALGAS_gtlDoNotAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotAllInstruction result ;
  const GALGAS_gtlDoNotAllInstruction * p = (const GALGAS_gtlDoNotAllInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlDoNotAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoNotAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstruction::GALGAS_gtlDoInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_string::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstruction::GALGAS_gtlDoInstruction (const cPtr_gtlDoInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_string & inAttribute_signature
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlDoInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlDoInstruction::cPtr_gtlDoInstruction (const GALGAS_location & in_where,
                                              const GALGAS_string & in_signature
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlDoInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlDoInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlDoInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoInstruction ("gtlDoInstruction",
                                         & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlDoInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlDoInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoInstruction GALGAS_gtlDoInstruction::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoInstruction result ;
  const GALGAS_gtlDoInstruction * p = (const GALGAS_gtlDoInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlDoInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContinueInstruction::GALGAS_gtlContinueInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlContinueInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_string::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContinueInstruction::GALGAS_gtlContinueInstruction (const cPtr_gtlContinueInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlContinueInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                              const GALGAS_string & inAttribute_signature
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlContinueInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlContinueInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlContinueInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlContinueInstruction::cPtr_gtlContinueInstruction (const GALGAS_location & in_where,
                                                          const GALGAS_string & in_signature
                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlContinueInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlContinueInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlContinueInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlContinueInstruction ("gtlContinueInstruction",
                                               & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlContinueInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContinueInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlContinueInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlContinueInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContinueInstruction GALGAS_gtlContinueInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlContinueInstruction result ;
  const GALGAS_gtlContinueInstruction * p = (const GALGAS_gtlContinueInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlContinueInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlContinueInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointInstruction::GALGAS_gtlBreakpointInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointInstruction GALGAS_gtlBreakpointInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_uint::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointInstruction::GALGAS_gtlBreakpointInstruction (const cPtr_gtlBreakpointInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlBreakpointInstruction::readProperty_fileName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlBreakpointInstruction * p = (const cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    return p->mProperty_fileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlBreakpointInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_gtlBreakpointInstruction::readProperty_lineNum (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    const cPtr_gtlBreakpointInstruction * p = (const cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    return p->mProperty_lineNum ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_gtlBreakpointInstruction::getter_lineNum (UNUSED_LOCATION_ARGS) const {
  return mProperty_lineNum ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointInstruction::setter_setFileName (GALGAS_string inValue
                                                          COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpointInstruction * p = (cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    p->mProperty_fileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpointInstruction::setter_setFileName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_fileName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointInstruction::setter_setLineNum (GALGAS_uint inValue
                                                         COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpointInstruction * p = (cPtr_gtlBreakpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointInstruction) ;
    p->mProperty_lineNum = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpointInstruction::setter_setLineNum (GALGAS_uint inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_lineNum = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBreakpointInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBreakpointInstruction::cPtr_gtlBreakpointInstruction (const GALGAS_location & in_where,
                                                              const GALGAS_string & in_signature,
                                                              const GALGAS_string & in_fileName,
                                                              const GALGAS_uint & in_lineNum
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_fileName (in_fileName),
mProperty_lineNum (in_lineNum) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBreakpointInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBreakpointInstruction (mProperty_where, mProperty_signature, mProperty_fileName, mProperty_lineNum COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointInstruction ("gtlBreakpointInstruction",
                                                 & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointInstruction GALGAS_gtlBreakpointInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointInstruction result ;
  const GALGAS_gtlBreakpointInstruction * p = (const GALGAS_gtlBreakpointInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointListInstruction::GALGAS_gtlBreakpointListInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointListInstruction::GALGAS_gtlBreakpointListInstruction (const cPtr_gtlBreakpointListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointListInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointListInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointListInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBreakpointListInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBreakpointListInstruction::cPtr_gtlBreakpointListInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBreakpointListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBreakpointListInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointListInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ("gtlBreakpointListInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointListInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointListInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointListInstruction GALGAS_gtlBreakpointListInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointListInstruction result ;
  const GALGAS_gtlBreakpointListInstruction * p = (const GALGAS_gtlBreakpointListInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteInstruction::GALGAS_gtlBreakpointDeleteInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteInstruction GALGAS_gtlBreakpointDeleteInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointDeleteInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_lbigint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteInstruction::GALGAS_gtlBreakpointDeleteInstruction (const cPtr_gtlBreakpointDeleteInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointDeleteInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_gtlBreakpointDeleteInstruction::readProperty_numToDelete (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    const cPtr_gtlBreakpointDeleteInstruction * p = (const cPtr_gtlBreakpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointDeleteInstruction) ;
    return p->mProperty_numToDelete ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cPtr_gtlBreakpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mProperty_numToDelete ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointDeleteInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBreakpointDeleteInstruction * p = (cPtr_gtlBreakpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBreakpointDeleteInstruction) ;
    p->mProperty_numToDelete = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBreakpointDeleteInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_numToDelete = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBreakpointDeleteInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBreakpointDeleteInstruction::cPtr_gtlBreakpointDeleteInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_lbigint & in_numToDelete
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_numToDelete (in_numToDelete) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBreakpointDeleteInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBreakpointDeleteInstruction (mProperty_where, mProperty_signature, mProperty_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointDeleteInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ("gtlBreakpointDeleteInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointDeleteInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointDeleteInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointDeleteInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteInstruction GALGAS_gtlBreakpointDeleteInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteInstruction result ;
  const GALGAS_gtlBreakpointDeleteInstruction * p = (const GALGAS_gtlBreakpointDeleteInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointDeleteInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointDeleteInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteAllInstruction::GALGAS_gtlBreakpointDeleteAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteAllInstruction::GALGAS_gtlBreakpointDeleteAllInstruction (const cPtr_gtlBreakpointDeleteAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBreakpointDeleteAllInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                                    const GALGAS_string & inAttribute_signature
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBreakpointDeleteAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBreakpointDeleteAllInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBreakpointDeleteAllInstruction::cPtr_gtlBreakpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                                                const GALGAS_string & in_signature
                                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBreakpointDeleteAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBreakpointDeleteAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointDeleteAllInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ("gtlBreakpointDeleteAllInstruction",
                                                          & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointDeleteAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointDeleteAllInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointDeleteAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointDeleteAllInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointDeleteAllInstruction GALGAS_gtlBreakpointDeleteAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointDeleteAllInstruction result ;
  const GALGAS_gtlBreakpointDeleteAllInstruction * p = (const GALGAS_gtlBreakpointDeleteAllInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointDeleteAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointDeleteAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointListInstruction::GALGAS_gtlWatchpointListInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                               GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointListInstruction::GALGAS_gtlWatchpointListInstruction (const cPtr_gtlWatchpointListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointListInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                          const GALGAS_string & inAttribute_signature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointListInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointListInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlWatchpointListInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlWatchpointListInstruction::cPtr_gtlWatchpointListInstruction (const GALGAS_location & in_where,
                                                                      const GALGAS_string & in_signature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlWatchpointListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlWatchpointListInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlWatchpointListInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ("gtlWatchpointListInstruction",
                                                     & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlWatchpointListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointListInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlWatchpointListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointListInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointListInstruction GALGAS_gtlWatchpointListInstruction::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointListInstruction result ;
  const GALGAS_gtlWatchpointListInstruction * p = (const GALGAS_gtlWatchpointListInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlWatchpointListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteInstruction::GALGAS_gtlWatchpointDeleteInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteInstruction GALGAS_gtlWatchpointDeleteInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointDeleteInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_lbigint::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteInstruction::GALGAS_gtlWatchpointDeleteInstruction (const cPtr_gtlWatchpointDeleteInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointDeleteInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_gtlWatchpointDeleteInstruction::readProperty_numToDelete (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    const cPtr_gtlWatchpointDeleteInstruction * p = (const cPtr_gtlWatchpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointDeleteInstruction) ;
    return p->mProperty_numToDelete ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cPtr_gtlWatchpointDeleteInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mProperty_numToDelete ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlWatchpointDeleteInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlWatchpointDeleteInstruction * p = (cPtr_gtlWatchpointDeleteInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointDeleteInstruction) ;
    p->mProperty_numToDelete = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlWatchpointDeleteInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_numToDelete = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlWatchpointDeleteInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlWatchpointDeleteInstruction::cPtr_gtlWatchpointDeleteInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_lbigint & in_numToDelete
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_numToDelete (in_numToDelete) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlWatchpointDeleteInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlWatchpointDeleteInstruction (mProperty_where, mProperty_signature, mProperty_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlWatchpointDeleteInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ("gtlWatchpointDeleteInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlWatchpointDeleteInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlWatchpointDeleteInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointDeleteInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteInstruction GALGAS_gtlWatchpointDeleteInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteInstruction result ;
  const GALGAS_gtlWatchpointDeleteInstruction * p = (const GALGAS_gtlWatchpointDeleteInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlWatchpointDeleteInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointDeleteInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteAllInstruction::GALGAS_gtlWatchpointDeleteAllInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteAllInstruction::GALGAS_gtlWatchpointDeleteAllInstruction (const cPtr_gtlWatchpointDeleteAllInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointDeleteAllInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                                    const GALGAS_string & inAttribute_signature
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteAllInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointDeleteAllInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlWatchpointDeleteAllInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlWatchpointDeleteAllInstruction::cPtr_gtlWatchpointDeleteAllInstruction (const GALGAS_location & in_where,
                                                                                const GALGAS_string & in_signature
                                                                                COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlWatchpointDeleteAllInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlWatchpointDeleteAllInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlWatchpointDeleteAllInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ("gtlWatchpointDeleteAllInstruction",
                                                          & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlWatchpointDeleteAllInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointDeleteAllInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlWatchpointDeleteAllInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointDeleteAllInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointDeleteAllInstruction GALGAS_gtlWatchpointDeleteAllInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointDeleteAllInstruction result ;
  const GALGAS_gtlWatchpointDeleteAllInstruction * p = (const GALGAS_gtlWatchpointDeleteAllInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlWatchpointDeleteAllInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointDeleteAllInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListInstruction::GALGAS_gtlListInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListInstruction GALGAS_gtlListInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlListInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_uint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListInstruction::GALGAS_gtlListInstruction (const cPtr_gtlListInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlListInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_gtlListInstruction::readProperty_window (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    const cPtr_gtlListInstruction * p = (const cPtr_gtlListInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListInstruction) ;
    return p->mProperty_window ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_gtlListInstruction::getter_window (UNUSED_LOCATION_ARGS) const {
  return mProperty_window ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlListInstruction::setter_setWindow (GALGAS_uint inValue
                                                  COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlListInstruction * p = (cPtr_gtlListInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListInstruction) ;
    p->mProperty_window = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlListInstruction::setter_setWindow (GALGAS_uint inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_window = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlListInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlListInstruction::cPtr_gtlListInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature,
                                                  const GALGAS_uint & in_window
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_window (in_window) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlListInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlListInstruction (mProperty_where, mProperty_signature, mProperty_window COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlListInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlListInstruction ("gtlListInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlListInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlListInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlListInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListInstruction GALGAS_gtlListInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlListInstruction result ;
  const GALGAS_gtlListInstruction * p = (const GALGAS_gtlListInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlListInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlListInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHistoryInstruction::GALGAS_gtlHistoryInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlHistoryInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                        GALGAS_string::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHistoryInstruction::GALGAS_gtlHistoryInstruction (const cPtr_gtlHistoryInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlHistoryInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                            const GALGAS_string & inAttribute_signature
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlHistoryInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlHistoryInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlHistoryInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlHistoryInstruction::cPtr_gtlHistoryInstruction (const GALGAS_location & in_where,
                                                        const GALGAS_string & in_signature
                                                        COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlHistoryInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlHistoryInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlHistoryInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlHistoryInstruction ("gtlHistoryInstruction",
                                              & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlHistoryInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHistoryInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlHistoryInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlHistoryInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHistoryInstruction GALGAS_gtlHistoryInstruction::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlHistoryInstruction result ;
  const GALGAS_gtlHistoryInstruction * p = (const GALGAS_gtlHistoryInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlHistoryInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlHistoryInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLoadInstruction::GALGAS_gtlLoadInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLoadInstruction GALGAS_gtlLoadInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLoadInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLoadInstruction::GALGAS_gtlLoadInstruction (const cPtr_gtlLoadInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLoadInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlLoadInstruction::readProperty_fileName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlLoadInstruction * p = (const cPtr_gtlLoadInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoadInstruction) ;
    return p->mProperty_fileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlLoadInstruction::getter_fileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_fileName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLoadInstruction::setter_setFileName (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLoadInstruction * p = (cPtr_gtlLoadInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLoadInstruction) ;
    p->mProperty_fileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLoadInstruction::setter_setFileName (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_fileName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLoadInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLoadInstruction::cPtr_gtlLoadInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature,
                                                  const GALGAS_string & in_fileName
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_fileName (in_fileName) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLoadInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlLoadInstruction (mProperty_where, mProperty_signature, mProperty_fileName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlLoadInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLoadInstruction ("gtlLoadInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLoadInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLoadInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLoadInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLoadInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLoadInstruction GALGAS_gtlLoadInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlLoadInstruction result ;
  const GALGAS_gtlLoadInstruction * p = (const GALGAS_gtlLoadInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlLoadInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLoadInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHelpInstruction::GALGAS_gtlHelpInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlHelpInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_string::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHelpInstruction::GALGAS_gtlHelpInstruction (const cPtr_gtlHelpInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlHelpInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                      const GALGAS_string & inAttribute_signature
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlHelpInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlHelpInstruction (inAttribute_where, inAttribute_signature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlHelpInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlHelpInstruction::cPtr_gtlHelpInstruction (const GALGAS_location & in_where,
                                                  const GALGAS_string & in_signature
                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlHelpInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlHelpInstruction (mProperty_where, mProperty_signature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlHelpInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlHelpInstruction ("gtlHelpInstruction",
                                           & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlHelpInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlHelpInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlHelpInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlHelpInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlHelpInstruction GALGAS_gtlHelpInstruction::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlHelpInstruction result ;
  const GALGAS_gtlHelpInstruction * p = (const GALGAS_gtlHelpInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlHelpInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlHelpInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debugCommandInput getCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debugCommandInput_getCommand> gExtensionModifierTable_debugCommandInput_getCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debugCommandInput_getCommand inModifier) {
  gExtensionModifierTable_debugCommandInput_getCommand.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getCommand (cPtr_debugCommandInput * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_command.drop () ;
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_debugCommandInput) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debugCommandInput_getCommand f = nullptr ;
    if (classIndex < gExtensionModifierTable_debugCommandInput_getCommand.count ()) {
      f = gExtensionModifierTable_debugCommandInput_getCommand (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_debugCommandInput_getCommand.count ()) {
           f = gExtensionModifierTable_debugCommandInput_getCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debugCommandInput_getCommand.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, out_command, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debugCommandInput_getCommand (cPtr_debugCommandInput * inObject,
                                                          GALGAS_string & outArgument_command,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debugCommandInput * object = inObject ;
  macroValidSharedObject (object, cPtr_debugCommandInput) ;
  outArgument_command = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_savedCommand_833 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_historyIndex_859 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_char var_inputChar_884 = GALGAS_char (TO_UNICODE (13)) ;
  GALGAS_uint var_cursorPos_909 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_uint var_escapeState_931 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger_input.galgas", 42)).isValid ()) {
    uint32_t variant_952 = GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger_input.galgas", 42)).uintValue () ;
    bool loop_952 = true ;
    while (loop_952) {
        var_inputChar_884 = GALGAS_char::constructor_unicodeCharacterFromRawKeyboard (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 43)) ;
      loop_952 = GALGAS_bool (kIsNotEqual, var_inputChar_884.objectCompare (GALGAS_char (TO_UNICODE (13)))).isValid () ;
      if (loop_952) {
        loop_952 = GALGAS_bool (kIsNotEqual, var_inputChar_884.objectCompare (GALGAS_char (TO_UNICODE (13)))).boolValue () ;
      }
      if (loop_952 && (0 == variant_952)) {
        loop_952 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_debugger_input.galgas", 42)) ;
      }
      if (loop_952) {
        variant_952 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsEqual, var_escapeState_931.objectCompare (GALGAS_uint (uint32_t (1U)))).operator_and (GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 45)).objectCompare (GALGAS_uint (uint32_t (91U)))) COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 45)).boolEnum () ;
          if (kBoolTrue == test_0) {
            var_escapeState_931 = GALGAS_uint (uint32_t (2U)) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsEqual, var_escapeState_931.objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                test_2 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 49)).objectCompare (GALGAS_uint (uint32_t (68U)))).boolEnum () ;
                if (kBoolTrue == test_2) {
                  enumGalgasBool test_3 = kBoolTrue ;
                  if (kBoolTrue == test_3) {
                    test_3 = GALGAS_bool (kIsStrictSup, var_cursorPos_909.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                    if (kBoolTrue == test_3) {
                      var_cursorPos_909.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 52)) ;
                      inCompiler->printMessage (GALGAS_string ("[1D")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 53)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_2) {
                enumGalgasBool test_4 = kBoolTrue ;
                if (kBoolTrue == test_4) {
                  test_4 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 55)).objectCompare (GALGAS_uint (uint32_t (67U)))).boolEnum () ;
                  if (kBoolTrue == test_4) {
                    enumGalgasBool test_5 = kBoolTrue ;
                    if (kBoolTrue == test_5) {
                      test_5 = GALGAS_bool (kIsStrictInf, var_cursorPos_909.objectCompare (outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 57)))).boolEnum () ;
                      if (kBoolTrue == test_5) {
                        var_cursorPos_909.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 58)) ;
                        inCompiler->printMessage (GALGAS_string ("[1C")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 59)) ;
                      }
                    }
                  }
                }
                if (kBoolFalse == test_4) {
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 61)).objectCompare (GALGAS_uint (uint32_t (65U)))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = GALGAS_bool (kIsEqual, var_historyIndex_859.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          var_savedCommand_833 = outArgument_command ;
                        }
                      }
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = GALGAS_bool (kIsStrictInf, var_historyIndex_859.objectCompare (object->mProperty_history.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 66)))).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          enumGalgasBool test_9 = kBoolTrue ;
                          if (kBoolTrue == test_9) {
                            test_9 = GALGAS_bool (kIsStrictSup, var_cursorPos_909.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                            if (kBoolTrue == test_9) {
                              inCompiler->printMessage (GALGAS_string ("[").add_operation (var_cursorPos_909.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 68)) ;
                            }
                          }
                          inCompiler->printMessage (GALGAS_string ("[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 70)) ;
                          outArgument_command = object->mProperty_history.getter_mValueAtIndex (var_historyIndex_859, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 71)) ;
                          inCompiler->printMessage (outArgument_command  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 72)) ;
                          var_cursorPos_909 = outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 73)) ;
                          var_historyIndex_859.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 74)) ;
                        }
                      }
                    }
                  }
                  if (kBoolFalse == test_6) {
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 76)).objectCompare (GALGAS_uint (uint32_t (66U)))).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        enumGalgasBool test_11 = kBoolTrue ;
                        if (kBoolTrue == test_11) {
                          test_11 = GALGAS_bool (kIsStrictSup, var_historyIndex_859.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                          if (kBoolTrue == test_11) {
                            enumGalgasBool test_12 = kBoolTrue ;
                            if (kBoolTrue == test_12) {
                              test_12 = GALGAS_bool (kIsStrictSup, var_cursorPos_909.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                              if (kBoolTrue == test_12) {
                                inCompiler->printMessage (GALGAS_string ("[").add_operation (var_cursorPos_909.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 80)) ;
                              }
                            }
                            inCompiler->printMessage (GALGAS_string ("[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 82)) ;
                            var_historyIndex_859.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 83)) ;
                            enumGalgasBool test_13 = kBoolTrue ;
                            if (kBoolTrue == test_13) {
                              test_13 = GALGAS_bool (kIsEqual, var_historyIndex_859.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                              if (kBoolTrue == test_13) {
                                outArgument_command = var_savedCommand_833 ;
                              }
                            }
                            if (kBoolFalse == test_13) {
                              outArgument_command = object->mProperty_history.getter_mValueAtIndex (var_historyIndex_859.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 87)) ;
                            }
                            inCompiler->printMessage (outArgument_command  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 89)) ;
                            var_cursorPos_909 = outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 90)) ;
                          }
                        }
                      }
                    }
                  }
                }
              }
              var_escapeState_931 = GALGAS_uint (uint32_t (0U)) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 95)).objectCompare (GALGAS_uint (uint32_t (127U)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsStrictSup, var_cursorPos_909.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    var_cursorPos_909.decrement_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 98)) ;
                    {
                    GALGAS_char joker_2684 ; // Joker input parameter
                    outArgument_command.setter_removeCharacterAtIndex (joker_2684, var_cursorPos_909, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 99)) ;
                    }
                    inCompiler->printMessage (GALGAS_string ("[1D[K")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 100)) ;
                    GALGAS_uint var_remainingChars_2757 = outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 101)).substract_operation (var_cursorPos_909, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 101)) ;
                    enumGalgasBool test_16 = kBoolTrue ;
                    if (kBoolTrue == test_16) {
                      test_16 = GALGAS_bool (kIsStrictSup, var_remainingChars_2757.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                      if (kBoolTrue == test_16) {
                        inCompiler->printMessage (outArgument_command.getter_rightSubString (var_remainingChars_2757 COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 103))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 103)) ;
                        inCompiler->printMessage (GALGAS_string ("[").add_operation (var_remainingChars_2757.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 104)) ;
                      }
                    }
                  }
                }
                inCompiler->printMessage (var_inputChar_884.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 107))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 107)) ;
              }
            }
            if (kBoolFalse == test_14) {
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (kIsEqual, var_inputChar_884.getter_uint (SOURCE_FILE ("gtl_debugger_input.galgas", 108)).objectCompare (GALGAS_uint (uint32_t (27U)))).boolEnum () ;
                if (kBoolTrue == test_17) {
                  var_escapeState_931 = GALGAS_uint (uint32_t (1U)) ;
                }
              }
              if (kBoolFalse == test_17) {
                enumGalgasBool test_18 = kBoolTrue ;
                if (kBoolTrue == test_18) {
                  test_18 = GALGAS_bool (kIsNotEqual, var_inputChar_884.objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
                  if (kBoolTrue == test_18) {
                    enumGalgasBool test_19 = kBoolTrue ;
                    if (kBoolTrue == test_19) {
                      test_19 = GALGAS_bool (kIsEqual, var_cursorPos_909.objectCompare (outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 112)))).boolEnum () ;
                      if (kBoolTrue == test_19) {
                        outArgument_command = outArgument_command.add_operation (var_inputChar_884.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 113)) ;
                        inCompiler->printMessage (var_inputChar_884.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 114))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 114)) ;
                        var_cursorPos_909.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 115)) ;
                      }
                    }
                    if (kBoolFalse == test_19) {
                      {
                      outArgument_command.setter_insertCharacterAtIndex (var_inputChar_884, var_cursorPos_909, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 117)) ;
                      }
                      inCompiler->printMessage (var_inputChar_884.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 118))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 118)) ;
                      var_cursorPos_909.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 119)) ;
                      GALGAS_uint var_remainingChars_3441 = outArgument_command.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 120)).substract_operation (var_cursorPos_909, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 120)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = GALGAS_bool (kIsStrictSup, var_remainingChars_3441.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          inCompiler->printMessage (outArgument_command.getter_rightSubString (var_remainingChars_3441 COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 122))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 122)) ;
                          inCompiler->printMessage (GALGAS_string ("[").add_operation (var_remainingChars_3441.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123)).add_operation (GALGAS_string ("D"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 123)) ;
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
  inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 143)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (kIsNotEqual, outArgument_command.getter_stringByTrimmingWhiteSpaces (SOURCE_FILE ("gtl_debugger_input.galgas", 144)).objectCompare (GALGAS_string ("hist"))).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      object->mProperty_history.setter_insertAtIndex (outArgument_command, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 145)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debugCommandInput_getCommand (void) {
  enterExtensionSetter_getCommand (kTypeDescriptor_GALGAS_debugCommandInput.mSlotID,
                                   extensionSetter_debugCommandInput_getCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debugCommandInput_getCommand (void) {
  gExtensionModifierTable_debugCommandInput_getCommand.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debugCommandInput_getCommand (defineExtensionSetter_debugCommandInput_getCommand,
                                                         freeExtensionModifier_debugCommandInput_getCommand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debugCommandInput listHistory'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_debugCommandInput::method_listHistory (C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, this->mProperty_history.getter_count (SOURCE_FILE ("gtl_debugger_input.galgas", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("Command history:\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 152)) ;
      cEnumerator_stringlist enumerator_4325 (this->mProperty_history, kENUMERATION_UP) ;
      GALGAS_uint index_4320 ((uint32_t) 0) ;
      while (enumerator_4325.hasCurrentObject ()) {
        inCompiler->printMessage (index_4320.getter_string (SOURCE_FILE ("gtl_debugger_input.galgas", 154)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (4U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (enumerator_4325.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154))  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 154)) ;
        enumerator_4325.gotoNextObject () ;
        index_4320.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 153)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("Command history empty.\n")  COMMA_SOURCE_FILE ("gtl_debugger_input.galgas", 157)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listHistory (cPtr_debugCommandInput * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_debugCommandInput) ;
    inObject->method_listHistory  (inCompiler COMMA_THERE) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  switch (select_gtl_5F_debugger_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 43)) ;
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  switch (select_gtl_5F_debugger_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 43)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 55)) ;
  outArgument_instruction = GALGAS_gtlHelpInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 57)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 66)) ;
  outArgument_instruction = GALGAS_gtlStepInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 68)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 77)) ;
  GALGAS_lstring var_fileName_1771 ;
  switch (select_gtl_5F_debugger_5F_parser_1 (inCompiler)) {
  case 1: {
    var_fileName_1771 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 80)) ;
  } break ;
  case 2: {
    var_fileName_1771 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlLoadInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 85)), GALGAS_string::makeEmptyString (), var_fileName_1771.readProperty_string ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 84)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 77)) ;
  switch (select_gtl_5F_debugger_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 77)) ;
  switch (select_gtl_5F_debugger_5F_parser_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 80)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 82)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 95)) ;
  outArgument_instruction = GALGAS_gtlHistoryInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 97)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 106)) ;
  switch (select_gtl_5F_debugger_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 108)) ;
    switch (select_gtl_5F_debugger_5F_parser_3 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_index_2386 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 110)) ;
      outArgument_instruction = GALGAS_gtlBreakpointDeleteInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 112)), GALGAS_string::makeEmptyString (), var_index_2386  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 111)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 117)) ;
      outArgument_instruction = GALGAS_gtlBreakpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 119)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 118)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    switch (select_gtl_5F_debugger_5F_parser_4 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_fileName_2679 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 126)) ;
      GALGAS_lstring var_fileExtension_2731 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 128)) ;
      GALGAS_lbigint var_lineNum_2807 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 129)) ;
      outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 131)), GALGAS_string::makeEmptyString (), var_fileName_2679.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 133)).add_operation (var_fileExtension_2731.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 133)), var_lineNum_2807.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 134))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 130)) ;
    } break ;
    case 2: {
      GALGAS_lbigint var_lineNum_3036 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 137)) ;
      outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 139)), GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString (), var_lineNum_3036.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 142))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 138)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    GALGAS_lstring var_fileNameAndLineNum_3209 = inCompiler->synthetizedAttribute_a_5F_string () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 146)) ;
    GALGAS_stringlist var_components_3248 = var_fileNameAndLineNum_3209.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (":") COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 147)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_components_3248.getter_count (SOURCE_FILE ("gtl_debugger_parser.galgas", 148)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_fileName_3379 = var_components_3248.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 149)) ;
        GALGAS_string var_lineNum_3438 = var_components_3248.getter_mValueAtIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 150)) ;
        outArgument_instruction = GALGAS_gtlBreakpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 152)), GALGAS_string::makeEmptyString (), var_fileName_3379, var_lineNum_3438.getter_decimalUnsignedNumber (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 155))  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 151)) ;
      }
    }
    if (kBoolFalse == test_0) {
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
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 106)) ;
  switch (select_gtl_5F_debugger_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 108)) ;
    switch (select_gtl_5F_debugger_5F_parser_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    switch (select_gtl_5F_debugger_5F_parser_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 129)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 137)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 146)) ;
  } break ;
  case 4: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 106)) ;
  switch (select_gtl_5F_debugger_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 108)) ;
    switch (select_gtl_5F_debugger_5F_parser_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 110)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 117)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    switch (select_gtl_5F_debugger_5F_parser_4 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 125)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 129)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 137)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 146)) ;
  } break ;
  case 4: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 172)) ;
  switch (select_gtl_5F_debugger_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 174)) ;
    switch (select_gtl_5F_debugger_5F_parser_6 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_index_4037 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 176)) ;
      outArgument_instruction = GALGAS_gtlWatchpointDeleteInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 178)), GALGAS_string::makeEmptyString (), var_index_4037  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 177)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 183)) ;
      outArgument_instruction = GALGAS_gtlWatchpointDeleteAllInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 185)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 184)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 190)) ;
    GALGAS_gtlExpression var_watchExpression_4334 ;
    nt_gtl_5F_expression_ (var_watchExpression_4334, inCompiler) ;
    outArgument_instruction = GALGAS_gtlWatchpointInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 193)), GALGAS_string::makeEmptyString (), var_watchExpression_4334  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 192)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 197)) ;
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
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 172)) ;
  switch (select_gtl_5F_debugger_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 174)) ;
    switch (select_gtl_5F_debugger_5F_parser_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 176)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 183)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 190)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 197)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 172)) ;
  switch (select_gtl_5F_debugger_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 174)) ;
    switch (select_gtl_5F_debugger_5F_parser_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 176)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 183)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 190)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 197)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 211)) ;
  switch (select_gtl_5F_debugger_5F_parser_7 (inCompiler)) {
  case 1: {
    GALGAS_gtlInstruction var_instructionToStepDo_4766 ;
    nt_gtl_5F_step_5F_do_5F_command_ (var_instructionToStepDo_4766, inCompiler) ;
    outArgument_instruction = GALGAS_gtlDoInstInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 215)), GALGAS_string::makeEmptyString (), var_instructionToStepDo_4766  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 214)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 220)) ;
    switch (select_gtl_5F_debugger_5F_parser_8 (inCompiler)) {
    case 1: {
      GALGAS_lbigint var_num_4966 = inCompiler->synthetizedAttribute_intValue () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 222)) ;
      outArgument_instruction = GALGAS_gtlDoNotInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 224)), GALGAS_string::makeEmptyString (), var_num_4966  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 223)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 229)) ;
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
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 211)) ;
  switch (select_gtl_5F_debugger_5F_parser_7 (inCompiler)) {
  case 1: {
    nt_gtl_5F_step_5F_do_5F_command_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 220)) ;
    switch (select_gtl_5F_debugger_5F_parser_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 222)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 229)) ;
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

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 211)) ;
  switch (select_gtl_5F_debugger_5F_parser_7 (inCompiler)) {
  case 1: {
    nt_gtl_5F_step_5F_do_5F_command_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 220)) ;
    switch (select_gtl_5F_debugger_5F_parser_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 222)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 229)) ;
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

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 257)) ;
  GALGAS_gtlVarPath var_variable_5664 ;
  nt_gtl_5F_variable_ (var_variable_5664, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 260)) ;
    GALGAS_gtlExpression var_expression_5732 ;
    nt_gtl_5F_expression_ (var_expression_5732, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 263)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_5732  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 262)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 269)) ;
    GALGAS_gtlExpression var_expression_5906 ;
    nt_gtl_5F_expression_ (var_expression_5906, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAddInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 272)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_5906  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 271)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 278)) ;
    GALGAS_gtlExpression var_expression_6082 ;
    nt_gtl_5F_expression_ (var_expression_6082, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetSubstractInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 281)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6082  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 280)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 287)) ;
    GALGAS_gtlExpression var_expression_6264 ;
    nt_gtl_5F_expression_ (var_expression_6264, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetMultiplyInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 290)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6264  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 289)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 296)) ;
    GALGAS_gtlExpression var_expression_6445 ;
    nt_gtl_5F_expression_ (var_expression_6445, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetDivideInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 299)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6445  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 298)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 305)) ;
    GALGAS_gtlExpression var_expression_6626 ;
    nt_gtl_5F_expression_ (var_expression_6626, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetModuloInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 308)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6626  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 307)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 314)) ;
    GALGAS_gtlExpression var_expression_6806 ;
    nt_gtl_5F_expression_ (var_expression_6806, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftLeftInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 317)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6806  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 316)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 323)) ;
    GALGAS_gtlExpression var_expression_6989 ;
    nt_gtl_5F_expression_ (var_expression_6989, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftRightInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 326)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_6989  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 325)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 332)) ;
    GALGAS_gtlExpression var_expression_7172 ;
    nt_gtl_5F_expression_ (var_expression_7172, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAndInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 335)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_7172  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 334)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 341)) ;
    GALGAS_gtlExpression var_expression_7348 ;
    nt_gtl_5F_expression_ (var_expression_7348, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetOrInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 344)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_7348  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 343)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 350)) ;
    GALGAS_gtlExpression var_expression_7523 ;
    nt_gtl_5F_expression_ (var_expression_7523, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetXorInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 353)), GALGAS_string::makeEmptyString (), var_variable_5664, var_expression_7523  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 352)) ;
  } break ;
  case 12: {
    outArgument_instruction = GALGAS_gtlLetUnconstructedInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 360)), GALGAS_string::makeEmptyString (), var_variable_5664  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 359)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 257)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 260)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 269)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 278)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 287)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 296)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 305)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 314)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 323)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 332)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 341)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 350)) ;
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

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 257)) ;
  nt_gtl_5F_variable_indexing (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 260)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 269)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 278)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 287)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 296)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 305)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 314)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 323)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 332)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 341)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 350)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
  } break ;
  case 12: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                        C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 371)) ;
  GALGAS_gtlVarPath var_variable_7943 ;
  nt_gtl_5F_variable_ (var_variable_7943, inCompiler) ;
  outArgument_instruction = GALGAS_gtlUnletInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 374)), GALGAS_string::makeEmptyString (), var_variable_7943  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 373)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 371)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 371)) ;
  nt_gtl_5F_variable_indexing (inCompiler) ;
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

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_step_5F_do_5F_command_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 391)) ;
  outArgument_instruction = GALGAS_gtlVariablesInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 393)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 392)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 391)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 391)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 403)) ;
  GALGAS_gtlVarPath var_variable_8639 ;
  nt_gtl_5F_variable_ (var_variable_8639, inCompiler) ;
  outArgument_instruction = GALGAS_gtlDisplayStatementInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 406)), GALGAS_string::makeEmptyString (), var_variable_8639  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 405)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 403)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 403)) ;
  nt_gtl_5F_variable_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 416)) ;
  GALGAS_gtlExpression var_expression_8934 ;
  nt_gtl_5F_expression_ (var_expression_8934, inCompiler) ;
  outArgument_instruction = GALGAS_gtlPrintStatementInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 419)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), var_expression_8934  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 418)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 416)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 416)) ;
  nt_gtl_5F_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 430)) ;
  GALGAS_uint var_window_9206 = GALGAS_uint (uint32_t (5U)) ;
  switch (select_gtl_5F_debugger_5F_parser_10 (inCompiler)) {
  case 1: {
    GALGAS_lbigint var_num_9277 = inCompiler->synthetizedAttribute_intValue () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 433)) ;
    var_window_9206 = var_num_9277.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 434)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, var_window_9206.objectCompare (GALGAS_uint (uint32_t (10U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_window_9206 = GALGAS_uint (uint32_t (10U)) ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlListInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 439)), GALGAS_string::makeEmptyString (), var_window_9206  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 438)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 430)) ;
  switch (select_gtl_5F_debugger_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 433)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 430)) ;
  switch (select_gtl_5F_debugger_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 433)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                          C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlThenElsifStatementList var_thenElsifList_9753 = GALGAS_gtlThenElsifStatementList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 451)) ;
  GALGAS_gtlInstructionList var_elseList_9802 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 452)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  GALGAS_location var_where_9850 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_gtlExpression var_condition_9914 ;
    nt_gtl_5F_expression_ (var_condition_9914, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 457)) ;
    GALGAS_gtlInstructionList var_instructionList_9991 ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_ (var_instructionList_9991, inCompiler) ;
    var_thenElsifList_9753.addAssign_operation (var_condition_9914, var_instructionList_9991  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 460)) ;
    if (select_gtl_5F_debugger_5F_parser_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 462)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_gtl_5F_debugger_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 466)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_ (var_elseList_9802, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 470)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 471)) ;
  outArgument_instruction = GALGAS_gtlIfStatementInstruction::constructor_new (var_where_9850, function_signature (var_where_9850, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 474)), var_thenElsifList_9753, var_elseList_9802  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 473)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 457)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (inCompiler) ;
    if (select_gtl_5F_debugger_5F_parser_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 462)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_gtl_5F_debugger_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 466)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 470)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 471)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 454)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 457)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_indexing (inCompiler) ;
    if (select_gtl_5F_debugger_5F_parser_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 462)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_gtl_5F_debugger_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 466)) ;
    nt_gtl_5F_step_5F_do_5F_command_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 470)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_ (GALGAS_gtlInstructionList & outArgument_instructionList,
                                                                                                                  C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_instructionList.drop () ; // Release 'out' argument
  outArgument_instructionList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_parser.galgas", 484)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_parser_13 (inCompiler) == 2) {
      GALGAS_gtlInstruction var_instruction_10708 ;
      nt_gtl_5F_step_5F_do_5F_command_ (var_instruction_10708, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_10708  COMMA_SOURCE_FILE ("gtl_debugger_parser.galgas", 489)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_parser_13 (inCompiler) == 2) {
      nt_gtl_5F_step_5F_do_5F_command_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_parser::rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_parser_13 (inCompiler) == 2) {
      nt_gtl_5F_step_5F_do_5F_command_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      GALGAS_location var_opLocation_1114 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      GALGAS_gtlExpression var_rightSon_1177 ;
      nt_gtl_5F_relation_5F_term_ (var_rightSon_1177, inCompiler) ;
      outArgument_expression = GALGAS_gtlOrExpression::constructor_new (var_opLocation_1114, outArgument_expression, var_rightSon_1177  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      GALGAS_location var_opLocation_1294 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      GALGAS_gtlExpression var_rightSon_1357 ;
      nt_gtl_5F_relation_5F_term_ (var_rightSon_1357, inCompiler) ;
      outArgument_expression = GALGAS_gtlXorExpression::constructor_new (var_opLocation_1294, outArgument_expression, var_rightSon_1357  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 45)) ;
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      nt_gtl_5F_relation_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
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

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_relation_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 39)) ;
      nt_gtl_5F_relation_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 43)) ;
      nt_gtl_5F_relation_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                                C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  nt_gtl_5F_relation_5F_factor_ (outArgument_expression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_expression_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      GALGAS_location var_opLocation_1829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      GALGAS_gtlExpression var_rightSon_1894 ;
      nt_gtl_5F_relation_5F_factor_ (var_rightSon_1894, inCompiler) ;
      outArgument_expression = GALGAS_gtlAndExpression::constructor_new (var_opLocation_1829, outArgument_expression, var_rightSon_1894  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 61)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_expression_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      nt_gtl_5F_relation_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_gtl_5F_debugger_5F_expression_5F_parser_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 59)) ;
      nt_gtl_5F_relation_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    GALGAS_location var_opLocation_2368 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    GALGAS_gtlExpression var_rightSon_2435 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2435, inCompiler) ;
    outArgument_expression = GALGAS_gtlEqualExpression::constructor_new (var_opLocation_2368, outArgument_expression, var_rightSon_2435  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 77)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    GALGAS_location var_opLocation_2563 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    GALGAS_gtlExpression var_rightSon_2630 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2630, inCompiler) ;
    outArgument_expression = GALGAS_gtlNotEqualExpression::constructor_new (var_opLocation_2563, outArgument_expression, var_rightSon_2630  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 83)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    GALGAS_location var_opLocation_2761 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    GALGAS_gtlExpression var_rightSon_2828 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_2828, inCompiler) ;
    outArgument_expression = GALGAS_gtlLowerOrEqualExpression::constructor_new (var_opLocation_2761, outArgument_expression, var_rightSon_2828  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 89)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    GALGAS_location var_opLocation_2963 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    GALGAS_gtlExpression var_rightSon_3030 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_3030, inCompiler) ;
    outArgument_expression = GALGAS_gtlGreaterOrEqualExpression::constructor_new (var_opLocation_2963, outArgument_expression, var_rightSon_3030  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 95)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    GALGAS_location var_opLocation_3166 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    GALGAS_gtlExpression var_rightSon_3233 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_3233, inCompiler) ;
    outArgument_expression = GALGAS_gtlGreaterThanExpression::constructor_new (var_opLocation_3166, outArgument_expression, var_rightSon_3233  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 101)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    GALGAS_location var_opLocation_3366 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    GALGAS_gtlExpression var_rightSon_3433 ;
    nt_gtl_5F_simple_5F_expression_ (var_rightSon_3433, inCompiler) ;
    outArgument_expression = GALGAS_gtlLowerThanExpression::constructor_new (var_opLocation_3366, outArgument_expression, var_rightSon_3433  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 107)) ;
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    nt_gtl_5F_simple_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 75)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 81)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 87)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 93)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 99)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 105)) ;
    nt_gtl_5F_simple_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      GALGAS_location var_opLocation_3916 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      GALGAS_gtlExpression var_rightSon_3970 ;
      nt_gtl_5F_term_ (var_rightSon_3970, inCompiler) ;
      outArgument_expression = GALGAS_gtlShiftLeftExpression::constructor_new (var_opLocation_3916, outArgument_expression, var_rightSon_3970  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 125)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      GALGAS_location var_opLocation_4106 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      GALGAS_gtlExpression var_rightSon_4160 ;
      nt_gtl_5F_term_ (var_rightSon_4160, inCompiler) ;
      outArgument_expression = GALGAS_gtlShiftRightExpression::constructor_new (var_opLocation_4106, outArgument_expression, var_rightSon_4160  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 131)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      GALGAS_location var_opLocation_4296 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      GALGAS_gtlExpression var_rightSon_4350 ;
      nt_gtl_5F_term_ (var_rightSon_4350, inCompiler) ;
      outArgument_expression = GALGAS_gtlAddExpression::constructor_new (var_opLocation_4296, outArgument_expression, var_rightSon_4350  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 137)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      GALGAS_location var_opLocation_4479 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("+")) ;
          inCompiler->emitSemanticWarning (var_opLocation_4479, GALGAS_string ("'.' operator is deprecated"), fixItArray2  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 143)) ;
        }
      }
      GALGAS_gtlExpression var_rightSon_4673 ;
      nt_gtl_5F_term_ (var_rightSon_4673, inCompiler) ;
      outArgument_expression = GALGAS_gtlAddExpression::constructor_new (var_opLocation_4479, outArgument_expression, var_rightSon_4673  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 146)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      GALGAS_location var_opLocation_4802 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      GALGAS_gtlExpression var_rightSon_4856 ;
      nt_gtl_5F_term_ (var_rightSon_4856, inCompiler) ;
      outArgument_expression = GALGAS_gtlSubstractExpression::constructor_new (var_opLocation_4802, outArgument_expression, var_rightSon_4856  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 152)) ;
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      nt_gtl_5F_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
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

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 123)) ;
      nt_gtl_5F_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 129)) ;
      nt_gtl_5F_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 135)) ;
      nt_gtl_5F_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 141)) ;
      nt_gtl_5F_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 150)) ;
      nt_gtl_5F_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      GALGAS_location var_opLocation_5327 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      GALGAS_gtlExpression var_rightSon_5383 ;
      nt_gtl_5F_factor_ (var_rightSon_5383, inCompiler) ;
      outArgument_expression = GALGAS_gtlMultiplyExpression::constructor_new (var_opLocation_5327, outArgument_expression, var_rightSon_5383  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 170)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      GALGAS_location var_opLocation_5517 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      GALGAS_gtlExpression var_rightSon_5573 ;
      nt_gtl_5F_factor_ (var_rightSon_5573, inCompiler) ;
      outArgument_expression = GALGAS_gtlDivideExpression::constructor_new (var_opLocation_5517, outArgument_expression, var_rightSon_5573  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 176)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      GALGAS_location var_opLocation_5707 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      GALGAS_gtlExpression var_rightSon_5763 ;
      nt_gtl_5F_factor_ (var_rightSon_5763, inCompiler) ;
      outArgument_expression = GALGAS_gtlModulusExpression::constructor_new (var_opLocation_5707, outArgument_expression, var_rightSon_5763  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 182)) ;
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
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      nt_gtl_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      nt_gtl_5F_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
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

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 168)) ;
      nt_gtl_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 174)) ;
      nt_gtl_5F_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 180)) ;
      nt_gtl_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  GALGAS_location var_opLocation_6187 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  GALGAS_gtlExpression var_factorExpression_6245 ;
  nt_gtl_5F_expression_ (var_factorExpression_6245, inCompiler) ;
  outArgument_expression = GALGAS_gtlParenthesizedExpression::constructor_new (var_opLocation_6187, var_factorExpression_6245  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 197)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 201)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 195)) ;
  nt_gtl_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 201)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  GALGAS_location var_opLocation_6679 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  GALGAS_gtlExpression var_notExpression_6733 ;
  nt_gtl_5F_factor_ (var_notExpression_6733, inCompiler) ;
  outArgument_expression = GALGAS_gtlNotExpression::constructor_new (var_opLocation_6679, var_notExpression_6733  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 213)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 211)) ;
  nt_gtl_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  GALGAS_location var_opLocation_7133 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  GALGAS_gtlExpression var_notExpression_7187 ;
  nt_gtl_5F_factor_ (var_notExpression_7187, inCompiler) ;
  outArgument_expression = GALGAS_gtlNotExpression::constructor_new (var_opLocation_7133, var_notExpression_7187  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 225)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 223)) ;
  nt_gtl_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  GALGAS_location var_opLocation_7587 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  GALGAS_gtlExpression var_minusExpression_7641 ;
  nt_gtl_5F_factor_ (var_minusExpression_7641, inCompiler) ;
  outArgument_expression = GALGAS_gtlMinusExpression::constructor_new (var_opLocation_7587, var_minusExpression_7641  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 235)) ;
  nt_gtl_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                      C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  GALGAS_location var_opLocation_8047 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  GALGAS_gtlExpression var_plusExpression_8101 ;
  nt_gtl_5F_factor_ (var_plusExpression_8101, inCompiler) ;
  outArgument_expression = GALGAS_gtlPlusExpression::constructor_new (var_opLocation_8047, var_plusExpression_8101  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  nt_gtl_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 247)) ;
  nt_gtl_5F_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  GALGAS_location var_opLocation_8506 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (var_opLocation_8506, GALGAS_gtlBool::constructor_new (var_opLocation_8506, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 261)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 261))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 272)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 274))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 273)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 272)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInteger_9373 = inCompiler->synthetizedAttribute_intValue () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 285)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287)), var_literalInteger_9373.readProperty_bigint ()  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 287))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 285)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 285)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalFloat_9830 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 298)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), GALGAS_gtlFloat::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300)), var_literalFloat_9830.readProperty_double ()  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 300))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 299)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 298)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 298)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lstring var_literalString_10277 = inCompiler->synthetizedAttribute_a_5F_string () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 311)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), GALGAS_gtlString::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313)), var_literalString_10277.readProperty_string ()  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 313))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 312)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 311)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 311)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_10729 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 324)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), GALGAS_gtlChar::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326)), var_literalChar_10729.readProperty_char ()  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 326))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 325)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 324)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 324)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 338)) ;
  GALGAS_gtlExpression var_target_11272 ;
  nt_gtl_5F_expression_ (var_target_11272, inCompiler) ;
  GALGAS_lstring var_getterName_11308 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 340)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, GALGAS_string ("stringByCapitalizingFirstCharacter").objectCompare (var_getterName_11308.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("capitalized")) ;
          inCompiler->emitSemanticWarning (var_getterName_11308.readProperty_location (), GALGAS_string ("stringByCapitalizingFirstCharacter is deprecated"), fixItArray2  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 343)) ;
        }
      }
    }
  }
  GALGAS_gtlExpressionList var_argumentList_11587 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 347)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 350)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GALGAS_gtlExpression var_argument_11689 ;
      nt_gtl_5F_expression_ (var_argument_11689, inCompiler) ;
      var_argumentList_11587.addAssign_operation (var_argument_11689  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 353)) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 355)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 358)) ;
  outArgument_expression = GALGAS_gtlGetterCallExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 360)), var_target_11272, var_getterName_11308, var_argumentList_11587  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 338)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 340)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 350)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 355)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 358)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 338)) ;
  nt_gtl_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 340)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 350)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_indexing (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_6 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 355)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 358)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_gtlVarPath var_path_12045 ;
  nt_gtl_5F_variable_ (var_path_12045, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
    outArgument_expression = GALGAS_gtlVarRef::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 374)), var_path_12045  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 374)) ;
  } break ;
  case 2: {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, var_path_12045.getter_count (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 376)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 377)), GALGAS_string ("illegal function name"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 377)) ;
      }
    }
    GALGAS_gtlExpressionList var_functionArguments_12218 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 379)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 380)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_8 (inCompiler)) {
    case 1: {
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GALGAS_gtlExpression var_expression_12326 ;
        nt_gtl_5F_expression_ (var_expression_12326, inCompiler) ;
        var_functionArguments_12218.addAssign_operation (var_expression_12326  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 384)) ;
        if (select_gtl_5F_debugger_5F_expression_5F_parser_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 386)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 389)) ;
    GALGAS_lstring var_functionName_12448 = extensionGetter_pathAsFunctionName (var_path_12045, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 390)) ;
    outArgument_expression = GALGAS_gtlFunctionCallExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 392)), var_functionName_12448, var_functionArguments_12218  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 391)) ;
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 380)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_8 (inCompiler)) {
    case 1: {
      bool repeatFlag_0 = true ;
      while (repeatFlag_0) {
        nt_gtl_5F_expression_parse (inCompiler) ;
        if (select_gtl_5F_debugger_5F_expression_5F_parser_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 386)) ;
        }else{
          repeatFlag_0 = false ;
        }
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 389)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  nt_gtl_5F_variable_indexing (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 380)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_8 (inCompiler)) {
    case 1: {
      bool repeatFlag_0 = true ;
      while (repeatFlag_0) {
        nt_gtl_5F_expression_indexing (inCompiler) ;
        if (select_gtl_5F_debugger_5F_expression_5F_parser_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 386)) ;
        }else{
          repeatFlag_0 = false ;
        }
      }
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 389)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 404)) ;
  GALGAS_gtlVarPath var_path_12788 ;
  nt_gtl_5F_variable_ (var_path_12788, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 406)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 407)) ;
    GALGAS_gtlExpression var_defaultExpression_12865 ;
    nt_gtl_5F_expression_ (var_defaultExpression_12865, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 409)) ;
    outArgument_expression = GALGAS_gtlExistsDefaultExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 411)), var_path_12788, var_defaultExpression_12865  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 410)) ;
  } break ;
  case 2: {
    outArgument_expression = GALGAS_gtlExistsExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 414)), var_path_12788  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 414)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 404)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 406)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 407)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 409)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 404)) ;
  nt_gtl_5F_variable_indexing (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 406)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 407)) ;
    nt_gtl_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 409)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 423)) ;
  GALGAS_gtlVarPath var_path_13235 ;
  nt_gtl_5F_variable_ (var_path_13235, inCompiler) ;
  outArgument_expression = GALGAS_gtlTypeOfExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 424)), var_path_13235  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 424)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 423)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 423)) ;
  nt_gtl_5F_variable_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 432)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 434)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 436)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 437)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 435))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 433)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 432)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 432)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 448)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 450)), GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 452)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 453)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 451))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 449)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 448)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 448)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  GALGAS_lstring var_enumValue_13996 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 464)) ;
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 466)), GALGAS_gtlEnum::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 468)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 469)), var_enumValue_13996.readProperty_string ()  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 467))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 465)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 464)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  GALGAS_lstring var_typeName_14303 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  GALGAS_string var_name_14326 = var_typeName_14303.readProperty_string () ;
  GALGAS_gtlType var_type_14366 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("int"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 484)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 484)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("float"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 486)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 486)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 488)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlString)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 488)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("bool"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 490)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 490)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("struct"))).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 492)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 492)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("list"))).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 494)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlList)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 494)) ;
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("map"))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 496)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 496)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("enum"))).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 498)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 498)) ;
                  }
                }
                if (kBoolFalse == test_7) {
                  enumGalgasBool test_8 = kBoolTrue ;
                  if (kBoolTrue == test_8) {
                    test_8 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("type"))).boolEnum () ;
                    if (kBoolTrue == test_8) {
                      var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 500)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlType)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 500)) ;
                    }
                  }
                  if (kBoolFalse == test_8) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("set"))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 502)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 502)) ;
                      }
                    }
                    if (kBoolFalse == test_9) {
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("char"))).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 504)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 504)) ;
                        }
                      }
                      if (kBoolFalse == test_10) {
                        enumGalgasBool test_11 = kBoolTrue ;
                        if (kBoolTrue == test_11) {
                          test_11 = GALGAS_bool (kIsEqual, var_name_14326.objectCompare (GALGAS_string ("unconstructed"))).boolEnum () ;
                          if (kBoolTrue == test_11) {
                            var_type_14366 = GALGAS_gtlType::constructor_new (var_typeName_14303.readProperty_location (), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 506)), GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed)  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 506)) ;
                          }
                        }
                        if (kBoolFalse == test_11) {
                          TC_Array <C_FixItDescription> fixItArray12 ;
                          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)), var_name_14326.add_operation (GALGAS_string (" does not name a type"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)), fixItArray12  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 507)) ;
                          var_type_14366.drop () ; // Release error dropped variable
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
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (var_typeName_14303.readProperty_location (), var_type_14366  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 509)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 480)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 517)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@( )")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 519)), GALGAS_string ("emptylist is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 519)) ;
    }
  }
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 522)), GALGAS_gtlList::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 524)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 525)), GALGAS_list::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 526))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 523))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 521)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 517)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 536)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@[ ]")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 538)), GALGAS_string ("emptymap is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 538)) ;
    }
  }
  outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 541)), GALGAS_gtlMap::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 543)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 544)), GALGAS_gtlVarMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 545))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 542))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 540)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 536)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 536)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 555)) ;
  GALGAS_gtlExpression var_data_16685 ;
  nt_gtl_5F_expression_ (var_data_16685, inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 558)) ;
    GALGAS_lstring var_key_16739 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 559)) ;
    outArgument_expression = GALGAS_gtlMapOfListExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 561)), var_data_16685, var_key_16739  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 560)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 566)) ;
    outArgument_expression = GALGAS_gtlMapOfStructExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 568)), var_data_16685  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 567)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 555)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 558)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 559)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 566)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 555)) ;
  nt_gtl_5F_expression_indexing (inCompiler) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 558)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 559)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 566)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 579)) ;
  GALGAS_gtlExpression var_data_17118 ;
  nt_gtl_5F_expression_ (var_data_17118, inCompiler) ;
  outArgument_expression = GALGAS_gtlListOfExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 581)), var_data_17118  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 581)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 582)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 579)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 582)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 579)) ;
  nt_gtl_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 582)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 590)) ;
  GALGAS_gtlExpressionList var_expressionList_17350 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 591)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_12 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_gtlExpression var_listItem_17441 ;
      nt_gtl_5F_expression_ (var_listItem_17441, inCompiler) ;
      var_expressionList_17350.addAssign_operation (var_listItem_17441  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 595)) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 596)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 600)) ;
  outArgument_expression = GALGAS_gtlLiteralListExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 601)), var_expressionList_17350  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 601)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 590)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_12 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 596)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 600)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 590)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_12 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_indexing (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_13 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 596)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 600)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 609)) ;
  GALGAS_gtlExpressionMap var_expressionMap_17756 = GALGAS_gtlExpressionMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 610)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_14 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_key_17832 = inCompiler->synthetizedAttribute_a_5F_string () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 613)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 614)) ;
      GALGAS_gtlExpression var_mapItem_17889 ;
      nt_gtl_5F_expression_ (var_mapItem_17889, inCompiler) ;
      {
      var_expressionMap_17756.setter_put (var_key_17832, var_mapItem_17889, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 616)) ;
      }
      if (select_gtl_5F_debugger_5F_expression_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 617)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 621)) ;
  outArgument_expression = GALGAS_gtlLiteralMapExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 622)), var_expressionMap_17756  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 622)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 609)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_14 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 613)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 614)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 617)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 621)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 609)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_14 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 613)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 614)) ;
      nt_gtl_5F_expression_indexing (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 617)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 621)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 630)) ;
  GALGAS_gtlExpressionMap var_expressionMap_18209 = GALGAS_gtlExpressionMap::constructor_emptyMap (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 631)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_16 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_fieldName_18288 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 634)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 635)) ;
      GALGAS_gtlExpression var_structField_18351 ;
      nt_gtl_5F_expression_ (var_structField_18351, inCompiler) ;
      {
      var_expressionMap_18209.setter_put (var_fieldName_18288, var_structField_18351, inCompiler COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 637)) ;
      }
      if (select_gtl_5F_debugger_5F_expression_5F_parser_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 638)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 642)) ;
  outArgument_expression = GALGAS_gtlLiteralStructExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 643)), var_expressionMap_18209  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 643)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 630)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_16 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 634)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 635)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 638)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 642)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 630)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_16 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 634)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 635)) ;
      nt_gtl_5F_expression_indexing (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 638)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 642)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_ (GALGAS_gtlExpression & outArgument_expression,
                                                                                                                       C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 651)) ;
  GALGAS_gtlExpressionList var_expressionList_18689 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 652)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_18 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_gtlExpression var_setElement_18780 ;
      nt_gtl_5F_expression_ (var_setElement_18780, inCompiler) ;
      var_expressionList_18689.addAssign_operation (var_setElement_18780  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 656)) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 657)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 661)) ;
  outArgument_expression = GALGAS_gtlLiteralSetExpression::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 662)), var_expressionList_18689  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 662)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 651)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_18 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 657)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 661)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 651)) ;
  switch (select_gtl_5F_debugger_5F_expression_5F_parser_18 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_indexing (inCompiler) ;
      if (select_gtl_5F_debugger_5F_expression_5F_parser_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 657)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_ (GALGAS_gtlVarPath & outArgument_path,
                                                                                                                         C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  outArgument_path.drop () ; // Release 'out' argument
  outArgument_path = GALGAS_gtlVarPath::constructor_emptyList (SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 670)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_19124 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 672)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 674)) ;
      GALGAS_gtlExpression var_expression_19201 ;
      nt_gtl_5F_expression_ (var_expression_19201, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 676)) ;
      outArgument_path.addAssign_operation (GALGAS_gtlVarItemCollection::constructor_new (var_variableName_19124, var_expression_19201  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 677))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 677)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 679)) ;
        GALGAS_gtlExpression var_expression_19363 ;
        nt_gtl_5F_expression_ (var_expression_19363, inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 681)) ;
        outArgument_path.addAssign_operation (GALGAS_gtlVarItemSubCollection::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682)), var_expression_19363  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 682)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          if (select_gtl_5F_debugger_5F_expression_5F_parser_23 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 685)) ;
            GALGAS_gtlExpression var_expression_19545 ;
            nt_gtl_5F_expression_ (var_expression_19545, inCompiler) ;
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 687)) ;
            outArgument_path.addAssign_operation (GALGAS_gtlVarItemSubCollection::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688)), var_expression_19545  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 688)) ;
          }else{
            repeatFlag_1 = false ;
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
      outArgument_path.addAssign_operation (GALGAS_gtlVarItemField::constructor_new (var_variableName_19124  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 693))  COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 693)) ;
    } break ;
    default:
      break ;
    }
    if (select_gtl_5F_debugger_5F_expression_5F_parser_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 696)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 672)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 674)) ;
      nt_gtl_5F_expression_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 676)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 679)) ;
        nt_gtl_5F_expression_parse (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 681)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          if (select_gtl_5F_debugger_5F_expression_5F_parser_23 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 685)) ;
            nt_gtl_5F_expression_parse (inCompiler) ;
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 687)) ;
          }else{
            repeatFlag_1 = false ;
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
    if (select_gtl_5F_debugger_5F_expression_5F_parser_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 696)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_debugger_5F_expression_5F_parser::rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_indexing (C_Lexique_gtl_5F_debugger_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 672)) ;
    switch (select_gtl_5F_debugger_5F_expression_5F_parser_21 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 674)) ;
      nt_gtl_5F_expression_indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 676)) ;
      switch (select_gtl_5F_debugger_5F_expression_5F_parser_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 679)) ;
        nt_gtl_5F_expression_indexing (inCompiler) ;
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 681)) ;
        bool repeatFlag_1 = true ;
        while (repeatFlag_1) {
          if (select_gtl_5F_debugger_5F_expression_5F_parser_23 (inCompiler) == 2) {
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 685)) ;
            nt_gtl_5F_expression_indexing (inCompiler) ;
            inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 687)) ;
          }else{
            repeatFlag_1 = false ;
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
    if (select_gtl_5F_debugger_5F_expression_5F_parser_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_ COMMA_SOURCE_FILE ("gtl_debugger_expression_parser.galgas", 696)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (void) :
mProperty_type () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTypedArgumentList_2D_element::~ GALGAS_gtlTypedArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTypedArgumentList_2D_element::GALGAS_gtlTypedArgumentList_2D_element (const GALGAS_type & inOperand0) :
mProperty_type (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::constructor_new (const GALGAS_type & in_type 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  if (in_type.isValid ()) {
    result = GALGAS_gtlTypedArgumentList_2D_element (in_type) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlTypedArgumentList_2D_element::objectCompare (const GALGAS_gtlTypedArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlTypedArgumentList_2D_element::isValid (void) const {
  return mProperty_type.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlTypedArgumentList_2D_element::drop (void) {
  mProperty_type.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlTypedArgumentList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ("gtlTypedArgumentList-element",
                                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlTypedArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTypedArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlTypedArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTypedArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTypedArgumentList_2D_element GALGAS_gtlTypedArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlTypedArgumentList_2D_element result ;
  const GALGAS_gtlTypedArgumentList_2D_element * p = (const GALGAS_gtlTypedArgumentList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlTypedArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTypedArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (void) :
mProperty_instruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList_2D_element::~ GALGAS_gtlInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList_2D_element::GALGAS_gtlInstructionList_2D_element (const GALGAS_gtlInstruction & inOperand0) :
mProperty_instruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::constructor_new (const GALGAS_gtlInstruction & in_instruction 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  if (in_instruction.isValid ()) {
    result = GALGAS_gtlInstructionList_2D_element (in_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlInstructionList_2D_element::objectCompare (const GALGAS_gtlInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_instruction.objectCompare (inOperand.mProperty_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlInstructionList_2D_element::isValid (void) const {
  return mProperty_instruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionList_2D_element::drop (void) {
  mProperty_instruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlInstructionList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ("gtlInstructionList-element",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList_2D_element GALGAS_gtlInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionList_2D_element result ;
  const GALGAS_gtlInstructionList_2D_element * p = (const GALGAS_gtlInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (void) :
mProperty_item () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath_2D_element::~ GALGAS_gtlVarPath_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath_2D_element::GALGAS_gtlVarPath_2D_element (const GALGAS_gtlVarItem & inOperand0) :
mProperty_item (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::constructor_new (const GALGAS_gtlVarItem & in_item 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  if (in_item.isValid ()) {
    result = GALGAS_gtlVarPath_2D_element (in_item) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlVarPath_2D_element::objectCompare (const GALGAS_gtlVarPath_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_item.objectCompare (inOperand.mProperty_item) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlVarPath_2D_element::isValid (void) const {
  return mProperty_item.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlVarPath_2D_element::drop (void) {
  mProperty_item.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlVarPath-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarPath_2D_element ("gtlVarPath-element",
                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlVarPath_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarPath_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlVarPath_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarPath_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath_2D_element GALGAS_gtlVarPath_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlVarPath_2D_element result ;
  const GALGAS_gtlVarPath_2D_element * p = (const GALGAS_gtlVarPath_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlVarPath_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlVarPath-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (void) :
mProperty_nextInstructionIndex (),
mProperty_instructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element::~ GALGAS_gtlInstructionListContextStack_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element::GALGAS_gtlInstructionListContextStack_2D_element (const GALGAS_uint & inOperand0,
                                                                                                    const GALGAS_gtlInstructionList & inOperand1) :
mProperty_nextInstructionIndex (inOperand0),
mProperty_instructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlInstructionListContextStack_2D_element (GALGAS_uint::constructor_default (HERE),
                                                           GALGAS_gtlInstructionList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::constructor_new (const GALGAS_uint & in_nextInstructionIndex,
                                                                                                                    const GALGAS_gtlInstructionList & in_instructionList 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  if (in_nextInstructionIndex.isValid () && in_instructionList.isValid ()) {
    result = GALGAS_gtlInstructionListContextStack_2D_element (in_nextInstructionIndex, in_instructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlInstructionListContextStack_2D_element::isValid (void) const {
  return mProperty_nextInstructionIndex.isValid () && mProperty_instructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInstructionListContextStack_2D_element::drop (void) {
  mProperty_nextInstructionIndex.drop () ;
  mProperty_instructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlInstructionListContextStack-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ("gtlInstructionListContextStack-element",
                                                                  nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlInstructionListContextStack_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInstructionListContextStack_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlInstructionListContextStack_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInstructionListContextStack_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack_2D_element GALGAS_gtlInstructionListContextStack_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlInstructionListContextStack_2D_element result ;
  const GALGAS_gtlInstructionListContextStack_2D_element * p = (const GALGAS_gtlInstructionListContextStack_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlInstructionListContextStack_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInstructionListContextStack-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (void) :
mProperty_breakpoint () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element::~ GALGAS_gtlBreakpointList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element::GALGAS_gtlBreakpointList_2D_element (const GALGAS_gtlBreakpoint & inOperand0) :
mProperty_breakpoint (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlBreakpointList_2D_element (GALGAS_gtlBreakpoint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::constructor_new (const GALGAS_gtlBreakpoint & in_breakpoint 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  if (in_breakpoint.isValid ()) {
    result = GALGAS_gtlBreakpointList_2D_element (in_breakpoint) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlBreakpointList_2D_element::objectCompare (const GALGAS_gtlBreakpointList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_breakpoint.objectCompare (inOperand.mProperty_breakpoint) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlBreakpointList_2D_element::isValid (void) const {
  return mProperty_breakpoint.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBreakpointList_2D_element::drop (void) {
  mProperty_breakpoint.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBreakpointList-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ("gtlBreakpointList-element",
                                                     nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBreakpointList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBreakpointList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBreakpointList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBreakpointList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList_2D_element GALGAS_gtlBreakpointList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlBreakpointList_2D_element result ;
  const GALGAS_gtlBreakpointList_2D_element * p = (const GALGAS_gtlBreakpointList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBreakpointList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBreakpointList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext::GALGAS_debuggerContext (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext::GALGAS_debuggerContext (const cPtr_debuggerContext * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_debuggerContext) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_debuggerContext::readProperty_debugActive (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_debugActive ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_debuggerContext::getter_debugActive (UNUSED_LOCATION_ARGS) const {
  return mProperty_debugActive ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_debuggerContext::readProperty_breakOnNext (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_breakOnNext ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_debuggerContext::getter_breakOnNext (UNUSED_LOCATION_ARGS) const {
  return mProperty_breakOnNext ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_debuggerContext::readProperty_loopOnCommand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_loopOnCommand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_debuggerContext::getter_loopOnCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_loopOnCommand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_promptColor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_promptColor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_promptColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_promptColor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_promptFace (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_promptFace ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_promptFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_promptFace ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_instructionColor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_instructionColor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_instructionColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionColor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_instructionFace (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_instructionFace ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_instructionFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionFace ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_outputColor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_outputColor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_outputColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_outputColor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_outputFace (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_outputFace ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_outputFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_outputFace ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_warningColor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_warningColor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_warningColor (UNUSED_LOCATION_ARGS) const {
  return mProperty_warningColor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_debuggerContext::readProperty_warningFace (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_warningFace ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_debuggerContext::getter_warningFace (UNUSED_LOCATION_ARGS) const {
  return mProperty_warningFace ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_debuggerContext::readProperty_executeDebuggerCommand (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_executeDebuggerCommand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_debuggerContext::getter_executeDebuggerCommand (UNUSED_LOCATION_ARGS) const {
  return mProperty_executeDebuggerCommand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList GALGAS_debuggerContext::readProperty_doList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlInstructionList () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_doList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList cPtr_debuggerContext::getter_doList (UNUSED_LOCATION_ARGS) const {
  return mProperty_doList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList GALGAS_debuggerContext::readProperty_breakpoints (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlBreakpointList () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_breakpoints ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBreakpointList cPtr_debuggerContext::getter_breakpoints (UNUSED_LOCATION_ARGS) const {
  return mProperty_breakpoints ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList GALGAS_debuggerContext::readProperty_watchpoints (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlExpressionList () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_watchpoints ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList cPtr_debuggerContext::getter_watchpoints (UNUSED_LOCATION_ARGS) const {
  return mProperty_watchpoints ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_debuggerContext::readProperty_nextInstructionIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_nextInstructionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_debuggerContext::getter_nextInstructionIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_nextInstructionIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList GALGAS_debuggerContext::readProperty_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlInstructionList () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_instructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList cPtr_debuggerContext::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack GALGAS_debuggerContext::readProperty_contextStack (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlInstructionListContextStack () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_contextStack ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionListContextStack cPtr_debuggerContext::getter_contextStack (UNUSED_LOCATION_ARGS) const {
  return mProperty_contextStack ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput GALGAS_debuggerContext::readProperty_commandInput (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_debugCommandInput () ;
  }else{
    const cPtr_debuggerContext * p = (const cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    return p->mProperty_commandInput ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debugCommandInput cPtr_debuggerContext::getter_commandInput (UNUSED_LOCATION_ARGS) const {
  return mProperty_commandInput ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_debugActive = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setDebugActive (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_debugActive = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_breakOnNext = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setBreakOnNext (GALGAS_bool inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_breakOnNext = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setLoopOnCommand (GALGAS_bool inValue
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_loopOnCommand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setLoopOnCommand (GALGAS_bool inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_loopOnCommand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_promptColor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setPromptColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_promptColor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_promptFace = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setPromptFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_promptFace = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_instructionColor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setInstructionColor (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionColor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                        COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_instructionFace = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setInstructionFace (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionFace = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_outputColor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setOutputColor (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_outputColor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_outputFace = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setOutputFace (GALGAS_string inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_outputFace = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setWarningColor (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_warningColor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setWarningColor (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_warningColor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setWarningFace (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_warningFace = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setWarningFace (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_warningFace = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setExecuteDebuggerCommand (GALGAS_bool inValue
                                                               COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_executeDebuggerCommand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setExecuteDebuggerCommand (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_executeDebuggerCommand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setDoList (GALGAS_gtlInstructionList inValue
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_doList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setDoList (GALGAS_gtlInstructionList inValue
                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_doList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setBreakpoints (GALGAS_gtlBreakpointList inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_breakpoints = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setBreakpoints (GALGAS_gtlBreakpointList inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_breakpoints = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setWatchpoints (GALGAS_gtlExpressionList inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_watchpoints = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setWatchpoints (GALGAS_gtlExpressionList inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_watchpoints = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setNextInstructionIndex (GALGAS_uint inValue
                                                             COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_nextInstructionIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setNextInstructionIndex (GALGAS_uint inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_nextInstructionIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setInstructionList (GALGAS_gtlInstructionList inValue
                                                        COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_instructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setInstructionList (GALGAS_gtlInstructionList inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_instructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setContextStack (GALGAS_gtlInstructionListContextStack inValue
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_contextStack = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setContextStack (GALGAS_gtlInstructionListContextStack inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_contextStack = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_debuggerContext::setter_setCommandInput (GALGAS_debugCommandInput inValue
                                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_debuggerContext * p = (cPtr_debuggerContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_debuggerContext) ;
    p->mProperty_commandInput = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_debuggerContext::setter_setCommandInput (GALGAS_debugCommandInput inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_commandInput = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @debuggerContext class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_debuggerContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_debuggerContext (mProperty_debugActive, mProperty_breakOnNext, mProperty_loopOnCommand, mProperty_promptColor, mProperty_promptFace, mProperty_instructionColor, mProperty_instructionFace, mProperty_outputColor, mProperty_outputFace, mProperty_warningColor, mProperty_warningFace, mProperty_executeDebuggerCommand, mProperty_doList, mProperty_breakpoints, mProperty_watchpoints, mProperty_nextInstructionIndex, mProperty_instructionList, mProperty_contextStack, mProperty_commandInput COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @debuggerContext generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_debuggerContext ("debuggerContext",
                                        nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_debuggerContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_debuggerContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_debuggerContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_debuggerContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext GALGAS_debuggerContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_debuggerContext result ;
  const GALGAS_debuggerContext * p = (const GALGAS_debuggerContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_debuggerContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("debuggerContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData::GALGAS_gtlData (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData::GALGAS_gtlData (const cPtr_gtlData * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlData) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_gtlData::readProperty_where (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    return p->mProperty_where ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_gtlData::getter_where (UNUSED_LOCATION_ARGS) const {
  return mProperty_where ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlData::readProperty_meta (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    const cPtr_gtlData * p = (const cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    return p->mProperty_meta ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_gtlData::getter_meta (UNUSED_LOCATION_ARGS) const {
  return mProperty_meta ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlData::setter_setWhere (GALGAS_location inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mProperty_where = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlData::setter_setWhere (GALGAS_location inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_where = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlData::setter_setMeta (GALGAS_lstring inValue
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlData * p = (cPtr_gtlData *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlData) ;
    p->mProperty_meta = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlData::setter_setMeta (GALGAS_lstring inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_meta = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlData class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlData::cPtr_gtlData (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta
                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_where (in_where),
mProperty_meta (in_meta) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlData generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlData ("gtlData",
                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlData::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlData ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlData::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlData (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData GALGAS_gtlData::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  const GALGAS_gtlData * p = (const GALGAS_gtlData *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlData *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlData", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression::GALGAS_gtlExpression (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression::GALGAS_gtlExpression (const cPtr_gtlExpression * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_gtlExpression::readProperty_where (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    const cPtr_gtlExpression * p = (const cPtr_gtlExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpression) ;
    return p->mProperty_where ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_gtlExpression::getter_where (UNUSED_LOCATION_ARGS) const {
  return mProperty_where ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpression::setter_setWhere (GALGAS_location inValue
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlExpression * p = (cPtr_gtlExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpression) ;
    p->mProperty_where = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlExpression::setter_setWhere (GALGAS_location inValue
                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_where = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlExpression::cPtr_gtlExpression (const GALGAS_location & in_where
                                        COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_where (in_where) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlExpression generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpression ("gtlExpression",
                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlExpression::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpression result ;
  const GALGAS_gtlExpression * p = (const GALGAS_gtlExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate::GALGAS_gtlTemplate (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate GALGAS_gtlTemplate::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlTemplate::constructor_new (GALGAS_string::constructor_default (HERE),
                                              GALGAS_gtlInstructionList::constructor_emptyList (HERE)
                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate::GALGAS_gtlTemplate (const cPtr_gtlTemplate * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlTemplate) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate GALGAS_gtlTemplate::constructor_new (const GALGAS_string & inAttribute_path,
                                                        const GALGAS_gtlInstructionList & inAttribute_program
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplate result ;
  if (inAttribute_path.isValid () && inAttribute_program.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlTemplate (inAttribute_path, inAttribute_program COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlTemplate::readProperty_path (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlTemplate * p = (const cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    return p->mProperty_path ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlTemplate::getter_path (UNUSED_LOCATION_ARGS) const {
  return mProperty_path ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList GALGAS_gtlTemplate::readProperty_program (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlInstructionList () ;
  }else{
    const cPtr_gtlTemplate * p = (const cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    return p->mProperty_program ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList cPtr_gtlTemplate::getter_program (UNUSED_LOCATION_ARGS) const {
  return mProperty_program ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlTemplate::setter_setPath (GALGAS_string inValue
                                         COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlTemplate * p = (cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    p->mProperty_path = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlTemplate::setter_setPath (GALGAS_string inValue
                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_path = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlTemplate::setter_setProgram (GALGAS_gtlInstructionList inValue
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlTemplate * p = (cPtr_gtlTemplate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlTemplate) ;
    p->mProperty_program = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlTemplate::setter_setProgram (GALGAS_gtlInstructionList inValue
                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_program = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlTemplate class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlTemplate::cPtr_gtlTemplate (const GALGAS_string & in_path,
                                    const GALGAS_gtlInstructionList & in_program
                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_path (in_path),
mProperty_program (in_program) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlTemplate::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlTemplate (mProperty_path, mProperty_program COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlTemplate generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTemplate ("gtlTemplate",
                                    nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlTemplate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplate ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlTemplate::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTemplate (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate GALGAS_gtlTemplate::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlTemplate result ;
  const GALGAS_gtlTemplate * p = (const GALGAS_gtlTemplate *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlTemplate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlTemplate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlTemplate execute'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlTemplate::method_execute (GALGAS_gtlContext & ioArgument_context,
                                       GALGAS_gtlData & ioArgument_vars,
                                       GALGAS_library & ioArgument_lib,
                                       GALGAS_string & ioArgument_outputString,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_execute (this->mProperty_program, ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 269)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_execute (cPtr_gtlTemplate * inObject,
                                  GALGAS_gtlContext & io_context,
                                  GALGAS_gtlData & io_vars,
                                  GALGAS_library & io_lib,
                                  GALGAS_string & io_outputString,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlTemplate) ;
    inObject->method_execute  (io_context, io_vars, io_lib, io_outputString, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_library::GALGAS_library (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_library GALGAS_library::constructor_default (LOCATION_ARGS) {
  return GALGAS_library::constructor_new (GALGAS_gtlFuncMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlGetterMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlSetterMap::constructor_emptyMap (HERE),
                                          GALGAS_gtlTemplateMap::constructor_emptyMap (HERE),
                                          GALGAS_stringset::constructor_emptySet (HERE)
                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_library::GALGAS_library (const cPtr_library * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_library) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap GALGAS_library::readProperty_funcMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlFuncMap () ;
  }else{
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    return p->mProperty_funcMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap cPtr_library::getter_funcMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_funcMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap GALGAS_library::readProperty_getterMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlGetterMap () ;
  }else{
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    return p->mProperty_getterMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap cPtr_library::getter_getterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_getterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap GALGAS_library::readProperty_setterMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlSetterMap () ;
  }else{
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    return p->mProperty_setterMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap cPtr_library::getter_setterMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_setterMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap GALGAS_library::readProperty_templateMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlTemplateMap () ;
  }else{
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    return p->mProperty_templateMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap cPtr_library::getter_templateMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_templateMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_library::readProperty_doneImports (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    const cPtr_library * p = (const cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    return p->mProperty_doneImports ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cPtr_library::getter_doneImports (UNUSED_LOCATION_ARGS) const {
  return mProperty_doneImports ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_library::setter_setFuncMap (GALGAS_gtlFuncMap inValue
                                        COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_library * p = (cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    p->mProperty_funcMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_library::setter_setFuncMap (GALGAS_gtlFuncMap inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_funcMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_library::setter_setGetterMap (GALGAS_gtlGetterMap inValue
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_library * p = (cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    p->mProperty_getterMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_library::setter_setGetterMap (GALGAS_gtlGetterMap inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_getterMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_library::setter_setSetterMap (GALGAS_gtlSetterMap inValue
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_library * p = (cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    p->mProperty_setterMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_library::setter_setSetterMap (GALGAS_gtlSetterMap inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_setterMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_library::setter_setTemplateMap (GALGAS_gtlTemplateMap inValue
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_library * p = (cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    p->mProperty_templateMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_library::setter_setTemplateMap (GALGAS_gtlTemplateMap inValue
                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_templateMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_library::setter_setDoneImports (GALGAS_stringset inValue
                                            COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_library * p = (cPtr_library *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_library) ;
    p->mProperty_doneImports = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_library::setter_setDoneImports (GALGAS_stringset inValue
                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_doneImports = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @library class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_library::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_library (mProperty_funcMap, mProperty_getterMap, mProperty_setterMap, mProperty_templateMap, mProperty_doneImports COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @library generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_library ("library",
                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_library::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_library ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_library::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_library (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_library GALGAS_library::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_library result ;
  const GALGAS_library * p = (const GALGAS_library *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_library *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("library", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library functionExists'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_library::getter_functionExists (const GALGAS_lstring constinArgument_name,
                                                 C_Compiler */* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_exists ; // Returned variable
  result_exists = this->mProperty_funcMap.getter_hasKey (constinArgument_name.readProperty_string () COMMA_SOURCE_FILE ("gtl_types.galgas", 330)) ;
//---
  return result_exists ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_functionExists (const cPtr_library * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_functionExists (in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getFunction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFunction cPtr_library::getter_getFunction (const GALGAS_lstring constinArgument_name,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlFunction result_aFunction ; // Returned variable
  this->mProperty_funcMap.method_get (constinArgument_name, result_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 337)) ;
//---
  return result_aFunction ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFunction callExtensionGetter_getFunction (const cPtr_library * inObject,
                                                    const GALGAS_lstring in_name,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlFunction result ;
  if (nullptr != inObject) {
    result = inObject->getter_getFunction (in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putFunction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_library_putFunction> gExtensionModifierTable_library_putFunction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putFunction (const int32_t inClassIndex,
                                       extensionSetterSignature_library_putFunction inModifier) {
  gExtensionModifierTable_library_putFunction.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putFunction (cPtr_library * inObject,
                                      const GALGAS_lstring constin_name,
                                      const GALGAS_gtlFunction constin_aFunction,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putFunction f = nullptr ;
    if (classIndex < gExtensionModifierTable_library_putFunction.count ()) {
      f = gExtensionModifierTable_library_putFunction (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putFunction.count ()) {
           f = gExtensionModifierTable_library_putFunction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putFunction.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aFunction, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_library_putFunction (cPtr_library * inObject,
                                                 const GALGAS_lstring constinArgument_name,
                                                 const GALGAS_gtlFunction constinArgument_aFunction,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_funcMap.setter_put (constinArgument_name, constinArgument_aFunction, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 344)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_library_putFunction (void) {
  enterExtensionSetter_putFunction (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_putFunction) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_library_putFunction (void) {
  gExtensionModifierTable_library_putFunction.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_library_putFunction (defineExtensionSetter_library_putFunction,
                                                freeExtensionModifier_library_putFunction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getterExists'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_library::getter_getterExists (const GALGAS_string constinArgument_type,
                                               const GALGAS_lstring constinArgument_name,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_exists ; // Returned variable
  result_exists = this->mProperty_getterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 352)) COMMA_SOURCE_FILE ("gtl_types.galgas", 352)) ;
//---
  return result_exists ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_getterExists (const cPtr_library * inObject,
                                              const GALGAS_string in_type,
                                              const GALGAS_lstring in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_getterExists (in_type, in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getGetter'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetter cPtr_library::getter_getGetter (const GALGAS_string constinArgument_type,
                                                 const GALGAS_lstring constinArgument_name,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlGetter result_aGetter ; // Returned variable
  this->mProperty_getterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 360)), constinArgument_name.readProperty_location ()  COMMA_SOURCE_FILE ("gtl_types.galgas", 360)), result_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 360)) ;
//---
  return result_aGetter ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetter callExtensionGetter_getGetter (const cPtr_library * inObject,
                                                const GALGAS_string in_type,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlGetter result ;
  if (nullptr != inObject) {
    result = inObject->getter_getGetter (in_type, in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putGetter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_library_putGetter> gExtensionModifierTable_library_putGetter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putGetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putGetter inModifier) {
  gExtensionModifierTable_library_putGetter.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putGetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlGetter constin_aGetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putGetter f = nullptr ;
    if (classIndex < gExtensionModifierTable_library_putGetter.count ()) {
      f = gExtensionModifierTable_library_putGetter (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putGetter.count ()) {
           f = gExtensionModifierTable_library_putGetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putGetter.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aGetter, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_library_putGetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlGetter constinArgument_aGetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_getterMap.setter_put (constinArgument_name, constinArgument_aGetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 367)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_library_putGetter (void) {
  enterExtensionSetter_putGetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putGetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_library_putGetter (void) {
  gExtensionModifierTable_library_putGetter.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_library_putGetter (defineExtensionSetter_library_putGetter,
                                              freeExtensionModifier_library_putGetter) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library setterExists'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_library::getter_setterExists (const GALGAS_string constinArgument_type,
                                               const GALGAS_lstring constinArgument_name,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_exists ; // Returned variable
  result_exists = this->mProperty_setterMap.getter_hasKey (constinArgument_type.add_operation (constinArgument_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 375)) COMMA_SOURCE_FILE ("gtl_types.galgas", 375)) ;
//---
  return result_exists ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_setterExists (const cPtr_library * inObject,
                                              const GALGAS_string in_type,
                                              const GALGAS_lstring in_name,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_setterExists (in_type, in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library getSetter'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetter cPtr_library::getter_getSetter (const GALGAS_string constinArgument_type,
                                                 const GALGAS_lstring constinArgument_name,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlSetter result_aSetter ; // Returned variable
  this->mProperty_setterMap.method_get (GALGAS_lstring::constructor_new (constinArgument_type.add_operation (constinArgument_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 383)), constinArgument_name.readProperty_location ()  COMMA_SOURCE_FILE ("gtl_types.galgas", 383)), result_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 383)) ;
//---
  return result_aSetter ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetter callExtensionGetter_getSetter (const cPtr_library * inObject,
                                                const GALGAS_string in_type,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlSetter result ;
  if (nullptr != inObject) {
    result = inObject->getter_getSetter (in_type, in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library putSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_library_putSetter> gExtensionModifierTable_library_putSetter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_putSetter (const int32_t inClassIndex,
                                     extensionSetterSignature_library_putSetter inModifier) {
  gExtensionModifierTable_library_putSetter.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_putSetter (cPtr_library * inObject,
                                    const GALGAS_lstring constin_name,
                                    const GALGAS_gtlSetter constin_aSetter,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_putSetter f = nullptr ;
    if (classIndex < gExtensionModifierTable_library_putSetter.count ()) {
      f = gExtensionModifierTable_library_putSetter (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_putSetter.count ()) {
           f = gExtensionModifierTable_library_putSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_putSetter.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_aSetter, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_library_putSetter (cPtr_library * inObject,
                                               const GALGAS_lstring constinArgument_name,
                                               const GALGAS_gtlSetter constinArgument_aSetter,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  {
  object->mProperty_setterMap.setter_put (constinArgument_name, constinArgument_aSetter, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 390)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_library_putSetter (void) {
  enterExtensionSetter_putSetter (kTypeDescriptor_GALGAS_library.mSlotID,
                                  extensionSetter_library_putSetter) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_library_putSetter (void) {
  gExtensionModifierTable_library_putSetter.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_library_putSetter (defineExtensionSetter_library_putSetter,
                                              freeExtensionModifier_library_putSetter) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@library hasImport'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_library::getter_hasImport (const GALGAS_string constinArgument_importPath,
                                            C_Compiler */* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = this->mProperty_doneImports.getter_hasKey (constinArgument_importPath COMMA_SOURCE_FILE ("gtl_types.galgas", 397)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_hasImport (const cPtr_library * inObject,
                                           const GALGAS_string in_importPath,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasImport (in_importPath, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library doImport'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_library_doImport> gExtensionModifierTable_library_doImport ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_doImport (const int32_t inClassIndex,
                                    extensionSetterSignature_library_doImport inModifier) {
  gExtensionModifierTable_library_doImport.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_doImport (cPtr_library * inObject,
                                   const GALGAS_string constin_importPath,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_doImport f = nullptr ;
    if (classIndex < gExtensionModifierTable_library_doImport.count ()) {
      f = gExtensionModifierTable_library_doImport (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_doImport.count ()) {
           f = gExtensionModifierTable_library_doImport (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_doImport.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_importPath, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_library_doImport (cPtr_library * inObject,
                                              const GALGAS_string constinArgument_importPath,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_library * object = inObject ;
  macroValidSharedObject (object, cPtr_library) ;
  object->mProperty_doneImports.addAssign_operation (constinArgument_importPath  COMMA_SOURCE_FILE ("gtl_types.galgas", 403)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_library_doImport (void) {
  enterExtensionSetter_doImport (kTypeDescriptor_GALGAS_library.mSlotID,
                                 extensionSetter_library_doImport) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_library_doImport (void) {
  gExtensionModifierTable_library_doImport.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_library_doImport (defineExtensionSetter_library_doImport,
                                             freeExtensionModifier_library_doImport) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@library getTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_library_getTemplate> gExtensionModifierTable_library_getTemplate ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getTemplate (const int32_t inClassIndex,
                                       extensionSetterSignature_library_getTemplate inModifier) {
  gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_library) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_library_getTemplate f = nullptr ;
    if (classIndex < gExtensionModifierTable_library_getTemplate.count ()) {
      f = gExtensionModifierTable_library_getTemplate (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_library_getTemplate.count ()) {
           f = gExtensionModifierTable_library_getTemplate (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_library_getTemplate.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_context, in_path, in_ifExists, io_lib, out_found, out_result, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
  extensionSetter_getTemplate (object->mProperty_templateMap, constinArgument_context, inArgument_path, inArgument_ifExists, ioArgument_lib, outArgument_found, outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 415)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_library_getTemplate (void) {
  enterExtensionSetter_getTemplate (kTypeDescriptor_GALGAS_library.mSlotID,
                                    extensionSetter_library_getTemplate) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_library_getTemplate (void) {
  gExtensionModifierTable_library_getTemplate.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_library_getTemplate (defineExtensionSetter_library_getTemplate,
                                                freeExtensionModifier_library_getTemplate) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@type typeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typeName (const GALGAS_type & inObject,
                                        C_Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_typeName ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_type temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_typeName = GALGAS_string ("int") ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_type temp_3 = inObject ;
      test_2 = GALGAS_bool (kIsEqual, temp_3.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_typeName = GALGAS_string ("char") ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_type temp_5 = inObject ;
        test_4 = GALGAS_bool (kIsEqual, temp_5.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result_typeName = GALGAS_string ("float") ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          const GALGAS_type temp_7 = inObject ;
          test_6 = GALGAS_bool (kIsEqual, temp_7.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlString))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result_typeName = GALGAS_string ("string") ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_type temp_9 = inObject ;
            test_8 = GALGAS_bool (kIsEqual, temp_9.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool))).boolEnum () ;
            if (kBoolTrue == test_8) {
              result_typeName = GALGAS_string ("bool") ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              const GALGAS_type temp_11 = inObject ;
              test_10 = GALGAS_bool (kIsEqual, temp_11.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct))).boolEnum () ;
              if (kBoolTrue == test_10) {
                result_typeName = GALGAS_string ("struct") ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                const GALGAS_type temp_13 = inObject ;
                test_12 = GALGAS_bool (kIsEqual, temp_13.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlList))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  result_typeName = GALGAS_string ("list") ;
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  const GALGAS_type temp_15 = inObject ;
                  test_14 = GALGAS_bool (kIsEqual, temp_15.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    result_typeName = GALGAS_string ("map") ;
                  }
                }
                if (kBoolFalse == test_14) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    const GALGAS_type temp_17 = inObject ;
                    test_16 = GALGAS_bool (kIsEqual, temp_17.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlType))).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      result_typeName = GALGAS_string ("type") ;
                    }
                  }
                  if (kBoolFalse == test_16) {
                    enumGalgasBool test_18 = kBoolTrue ;
                    if (kBoolTrue == test_18) {
                      const GALGAS_type temp_19 = inObject ;
                      test_18 = GALGAS_bool (kIsEqual, temp_19.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum))).boolEnum () ;
                      if (kBoolTrue == test_18) {
                        result_typeName = GALGAS_string ("enum") ;
                      }
                    }
                    if (kBoolFalse == test_18) {
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        const GALGAS_type temp_21 = inObject ;
                        test_20 = GALGAS_bool (kIsEqual, temp_21.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet))).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          result_typeName = GALGAS_string ("set") ;
                        }
                      }
                      if (kBoolFalse == test_20) {
                        enumGalgasBool test_22 = kBoolTrue ;
                        if (kBoolTrue == test_22) {
                          const GALGAS_type temp_23 = inObject ;
                          test_22 = GALGAS_bool (kIsEqual, temp_23.objectCompare (GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed))).boolEnum () ;
                          if (kBoolTrue == test_22) {
                            result_typeName = GALGAS_string ("unconstructed") ;
                          }
                        }
                        if (kBoolFalse == test_22) {
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lstring gtlType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_type extensionGetter_gtlType (const GALGAS_lstring & inObject,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_type result_type ; // Returned variable
  const GALGAS_lstring temp_0 = inObject ;
  GALGAS_string var_typeName_2291 = temp_0.readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("int"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlInt) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlChar) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("float"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlFloat) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlString) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("bool"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlBool) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("struct"))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlStruct) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("list"))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlList) ;
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("map"))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlMap) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("type"))).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlType) ;
                    }
                  }
                  if (kBoolFalse == test_9) {
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("enum"))).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlEnum) ;
                      }
                    }
                    if (kBoolFalse == test_10) {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("set"))).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlSet) ;
                        }
                      }
                      if (kBoolFalse == test_11) {
                        enumGalgasBool test_12 = kBoolTrue ;
                        if (kBoolTrue == test_12) {
                          test_12 = GALGAS_bool (kIsEqual, var_typeName_2291.objectCompare (GALGAS_string ("unconstructed"))).boolEnum () ;
                          if (kBoolTrue == test_12) {
                            result_type = GALGAS_type (& kTypeDescriptor_GALGAS_gtlUnconstructed) ;
                          }
                        }
                        if (kBoolFalse == test_12) {
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




//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData location'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_gtlData::getter_location (C_Compiler */* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_location result_result ; // Returned variable
  result_result = this->mProperty_where ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_location callExtensionGetter_location (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
  if (nullptr != inObject) {
    result = inObject->getter_location (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData desc'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_desc (const cPtr_gtlData * inObject,
                                        const GALGAS_uint in_tab,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_desc (in_tab, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_string (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_string (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData lstring'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_lstring (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
  if (nullptr != inObject) {
    result = inObject->getter_lstring (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData bool'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_bool (const cPtr_gtlData * inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_bool (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData int'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint callExtensionGetter_int (const cPtr_gtlData * inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
  if (nullptr != inObject) {
    result = inObject->getter_int (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData float'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_double callExtensionGetter_float (const cPtr_gtlData * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_double result ;
  if (nullptr != inObject) {
    result = inObject->getter_float (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData plusOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_plusOp (const cPtr_gtlData * inObject,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_plusOp (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData minusOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_minusOp (const cPtr_gtlData * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_minusOp (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData notOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_notOp (const cPtr_gtlData * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_notOp (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData addOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_addOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_addOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData subOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_subOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_subOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData mulOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_mulOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_mulOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData divOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_divOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_divOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData modOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_modOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_modOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData andOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_andOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_andOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData orOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_orOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_orOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData xorOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_xorOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_xorOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData slOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_slOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_slOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData srOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_srOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_srOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData neqOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_neqOp (const cPtr_gtlData * inObject,
                                          const GALGAS_gtlData in_right,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_neqOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData eqOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_eqOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_eqOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData ltOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_ltOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_ltOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData leOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_leOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_leOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData gtOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_gtOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_gtOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData geOp'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_geOp (const cPtr_gtlData * inObject,
                                         const GALGAS_gtlData in_right,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_geOp (in_right, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData embeddedType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_type callExtensionGetter_embeddedType (const cPtr_gtlData * inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_type result ;
  if (nullptr != inObject) {
    result = inObject->getter_embeddedType (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@gtlData addMyValue'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_addMyValue (cPtr_gtlData * inObject,
                                     GALGAS_objectlist & io_objectList,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    inObject->method_addMyValue (io_objectList, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData performGetter'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_performGetter (const cPtr_gtlData * inObject,
                                                  const GALGAS_lstring in_methodName,
                                                  const GALGAS_gtlDataList in_arguments,
                                                  const GALGAS_gtlContext in_context,
                                                  const GALGAS_library in_lib,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_performGetter (in_methodName, in_arguments, in_context, in_lib, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension setter '@gtlData performSetter'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_performSetter> gExtensionModifierTable_gtlData_performSetter ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_performSetter (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_performSetter inModifier) {
  gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_performSetter (void) {
  gExtensionModifierTable_gtlData_performSetter.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_performSetter (nullptr,
                                                  freeExtensionModifier_gtlData_performSetter) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_performSetter (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_methodName,
                                        const GALGAS_gtlDataList constin_arguments,
                                        const GALGAS_gtlContext constin_context,
                                        const GALGAS_library constin_lib,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_performSetter f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_performSetter.count ()) {
      f = gExtensionModifierTable_gtlData_performSetter (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_performSetter.count ()) {
           f = gExtensionModifierTable_gtlData_performSetter (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_performSetter.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_methodName, constin_arguments, constin_context, constin_lib, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData structField'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlData::method_structField (const GALGAS_lstring constinArgument_name,
                                       GALGAS_gtlData & outArgument_result,
                                       GALGAS_bool & outArgument_found,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 256)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 256)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 256)) ;
  outArgument_result.drop () ; // Release error dropped variable
  outArgument_found.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_structField (cPtr_gtlData * inObject,
                                      const GALGAS_lstring constin_name,
                                      GALGAS_gtlData & out_result,
                                      GALGAS_bool & out_found,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  out_found.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    inObject->method_structField  (constin_name, out_result, out_found, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData resultField'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData cPtr_gtlData::getter_resultField (const GALGAS_lstring constinArgument_name,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlData result_result ; // Returned variable
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 263)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 263)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 263)) ;
  result_result.drop () ; // Release error dropped variable
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData callExtensionGetter_resultField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlData result ;
  if (nullptr != inObject) {
    result = inObject->getter_resultField (in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setStructField'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructField> gExtensionModifierTable_gtlData_setStructField ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setStructField (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setStructField inModifier) {
  gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setStructField (cPtr_gtlData * inObject,
                                         const GALGAS_lstring constin_name,
                                         const GALGAS_gtlData constin_data,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setStructField f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructField.count ()) {
      f = gExtensionModifierTable_gtlData_setStructField (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructField.count ()) {
           f = gExtensionModifierTable_gtlData_setStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructField.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_setStructField (cPtr_gtlData * inObject,
                                                    const GALGAS_lstring constinArgument_name,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 271)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 271)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 271)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_setStructField (void) {
  enterExtensionSetter_setStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setStructField) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_setStructField (void) {
  gExtensionModifierTable_gtlData_setStructField.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_setStructField (defineExtensionSetter_gtlData_setStructField,
                                                   freeExtensionModifier_gtlData_setStructField) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setStructFieldAtLevel'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_setStructFieldAtLevel> gExtensionModifierTable_gtlData_setStructFieldAtLevel ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setStructFieldAtLevel (const int32_t inClassIndex,
                                                 extensionSetterSignature_gtlData_setStructFieldAtLevel inModifier) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setStructFieldAtLevel (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constin_name,
                                                const GALGAS_gtlData constin_data,
                                                const GALGAS_uint constin_level,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setStructFieldAtLevel f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
      f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setStructFieldAtLevel.count ()) {
           f = gExtensionModifierTable_gtlData_setStructFieldAtLevel (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setStructFieldAtLevel.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, constin_level, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 280)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 280)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 280)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_setStructFieldAtLevel (void) {
  enterExtensionSetter_setStructFieldAtLevel (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                              extensionSetter_gtlData_setStructFieldAtLevel) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_setStructFieldAtLevel (void) {
  gExtensionModifierTable_gtlData_setStructFieldAtLevel.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_setStructFieldAtLevel (defineExtensionSetter_gtlData_setStructFieldAtLevel,
                                                          freeExtensionModifier_gtlData_setStructFieldAtLevel) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteStructField'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteStructField> gExtensionModifierTable_gtlData_deleteStructField ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStructField (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteStructField inModifier) {
  gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStructField (cPtr_gtlData * inObject,
                                            const GALGAS_lstring constin_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteStructField f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
      f = gExtensionModifierTable_gtlData_deleteStructField (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteStructField.count ()) {
           f = gExtensionModifierTable_gtlData_deleteStructField (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteStructField.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_deleteStructField (cPtr_gtlData * inObject,
                                                       const GALGAS_lstring constinArgument_name,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 286)).add_operation (GALGAS_string (" is not a struct"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 286)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 286)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_deleteStructField (void) {
  enterExtensionSetter_deleteStructField (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteStructField) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_deleteStructField (void) {
  gExtensionModifierTable_gtlData_deleteStructField.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_deleteStructField (defineExtensionSetter_gtlData_deleteStructField,
                                                      freeExtensionModifier_gtlData_deleteStructField) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasStructField'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlData::getter_hasStructField (const GALGAS_lstring /* constinArgument_name */,
                                                 C_Compiler */* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_hasStructField (const cPtr_gtlData * inObject,
                                                const GALGAS_lstring in_name,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasStructField (in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData overrideMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct cPtr_gtlData::getter_overrideMap (C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlStruct result_mapOverriden ; // Returned variable
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 299)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 299)) ;
  result_mapOverriden.drop () ; // Release error dropped variable
//---
  return result_mapOverriden ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct callExtensionGetter_overrideMap (const cPtr_gtlData * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  if (nullptr != inObject) {
    result = inObject->getter_overrideMap (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData overriddenMap'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct cPtr_gtlData::getter_overriddenMap (C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlStruct result_overriddenMap ; // Returned variable
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 305)), GALGAS_string ("INTERNAL ERROR : a variable map should be a @gtlStruct"), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 305)) ;
  result_overriddenMap.drop () ; // Release error dropped variable
//---
  return result_overriddenMap ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct callExtensionGetter_overriddenMap (const cPtr_gtlData * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  if (nullptr != inObject) {
    result = inObject->getter_overriddenMap (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData mapItem'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlData::method_mapItem (const GALGAS_lstring constinArgument_name,
                                   GALGAS_gtlData & outArgument_result,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 312)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 312)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 312)) ;
  outArgument_result.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_mapItem (cPtr_gtlData * inObject,
                                  const GALGAS_lstring constin_name,
                                  GALGAS_gtlData & out_result,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    inObject->method_mapItem  (constin_name, out_result, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlData::getter_hasMapItem (const GALGAS_lstring /* constinArgument_name */,
                                             C_Compiler */* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_hasMapItem (const cPtr_gtlData * inObject,
                                            const GALGAS_lstring in_name,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasMapItem (in_name, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_setMapItem> gExtensionModifierTable_gtlData_setMapItem ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setMapItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_setMapItem inModifier) {
  gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setMapItem (cPtr_gtlData * inObject,
                                     const GALGAS_lstring constin_name,
                                     const GALGAS_gtlData constin_data,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setMapItem f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_setMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_setMapItem (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_setMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setMapItem.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, constin_data, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_setMapItem (cPtr_gtlData * inObject,
                                                const GALGAS_lstring constinArgument_name,
                                                const GALGAS_gtlData /* constinArgument_data */,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 326)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 326)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 326)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_setMapItem (void) {
  enterExtensionSetter_setMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_setMapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_setMapItem (void) {
  gExtensionModifierTable_gtlData_setMapItem.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_setMapItem (defineExtensionSetter_gtlData_setMapItem,
                                               freeExtensionModifier_gtlData_setMapItem) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteMapItem'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteMapItem> gExtensionModifierTable_gtlData_deleteMapItem ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteMapItem (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlData_deleteMapItem inModifier) {
  gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteMapItem (cPtr_gtlData * inObject,
                                        const GALGAS_lstring constin_name,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteMapItem f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
      f = gExtensionModifierTable_gtlData_deleteMapItem (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteMapItem.count ()) {
           f = gExtensionModifierTable_gtlData_deleteMapItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteMapItem.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_name, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_deleteMapItem (cPtr_gtlData * inObject,
                                                   const GALGAS_lstring constinArgument_name,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (constinArgument_name.readProperty_location (), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 332)).add_operation (GALGAS_string (" is not a map"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 332)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 332)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_deleteMapItem (void) {
  enterExtensionSetter_deleteMapItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                      extensionSetter_gtlData_deleteMapItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_deleteMapItem (void) {
  gExtensionModifierTable_gtlData_deleteMapItem.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_deleteMapItem (defineExtensionSetter_gtlData_deleteMapItem,
                                                  freeExtensionModifier_gtlData_deleteMapItem) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlData itemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlData::method_itemAtIndex (GALGAS_gtlData & outArgument_result,
                                       const GALGAS_gtlInt constinArgument_index,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_gtlData temp_0 = this ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 339)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 339)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 339)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 339)) ;
  outArgument_result.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_itemAtIndex (cPtr_gtlData * inObject,
                                      GALGAS_gtlData & out_result,
                                      const GALGAS_gtlInt constin_index,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_result.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    inObject->method_itemAtIndex  (out_result, constin_index, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlData hasItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlData::getter_hasItemAtIndex (const GALGAS_gtlInt /* constinArgument_index */,
                                                 C_Compiler */* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_hasItemAtIndex (const cPtr_gtlData * inObject,
                                                const GALGAS_gtlInt in_index,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasItemAtIndex (in_index, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData setItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_setItemAtIndex> gExtensionModifierTable_gtlData_setItemAtIndex ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setItemAtIndex (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlData_setItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setItemAtIndex (cPtr_gtlData * inObject,
                                         const GALGAS_gtlData constin_data,
                                         const GALGAS_gtlInt constin_index,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_setItemAtIndex f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_setItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_setItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_setItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_setItemAtIndex.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_data, constin_index, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_setItemAtIndex (cPtr_gtlData * inObject,
                                                    const GALGAS_gtlData /* constinArgument_data */,
                                                    const GALGAS_gtlInt constinArgument_index,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 353)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 353)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 353)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 353)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_setItemAtIndex (void) {
  enterExtensionSetter_setItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                       extensionSetter_gtlData_setItemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_setItemAtIndex (void) {
  gExtensionModifierTable_gtlData_setItemAtIndex.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_setItemAtIndex (defineExtensionSetter_gtlData_setItemAtIndex,
                                                   freeExtensionModifier_gtlData_setItemAtIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData deleteItemAtIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_deleteItemAtIndex> gExtensionModifierTable_gtlData_deleteItemAtIndex ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteItemAtIndex (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlData_deleteItemAtIndex inModifier) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteItemAtIndex (cPtr_gtlData * inObject,
                                            const GALGAS_gtlInt constin_index,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_deleteItemAtIndex f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
      f = gExtensionModifierTable_gtlData_deleteItemAtIndex (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_deleteItemAtIndex.count ()) {
           f = gExtensionModifierTable_gtlData_deleteItemAtIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_deleteItemAtIndex.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_index, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_deleteItemAtIndex (cPtr_gtlData * inObject,
                                                       const GALGAS_gtlInt constinArgument_index,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlInt *) constinArgument_index.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 359)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_deleteItemAtIndex (void) {
  enterExtensionSetter_deleteItemAtIndex (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                          extensionSetter_gtlData_deleteItemAtIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_deleteItemAtIndex (void) {
  gExtensionModifierTable_gtlData_deleteItemAtIndex.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_deleteItemAtIndex (defineExtensionSetter_gtlData_deleteItemAtIndex,
                                                      freeExtensionModifier_gtlData_deleteItemAtIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlData appendItem'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlData_appendItem> gExtensionModifierTable_gtlData_appendItem ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendItem (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlData_appendItem inModifier) {
  gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (inClassIndex, inModifier, nullptr COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendItem (cPtr_gtlData * inObject,
                                     const GALGAS_gtlData constin_item,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlData_appendItem f = nullptr ;
    if (classIndex < gExtensionModifierTable_gtlData_appendItem.count ()) {
      f = gExtensionModifierTable_gtlData_appendItem (classIndex COMMA_HERE) ;
    }
    if (nullptr == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((nullptr == f) && (nullptr != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlData_appendItem.count ()) {
           f = gExtensionModifierTable_gtlData_appendItem (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlData_appendItem.forceObjectAtIndex (classIndex, f, nullptr COMMA_HERE) ;
    }
    f (inObject, constin_item, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlData_appendItem (cPtr_gtlData * inObject,
                                                const GALGAS_gtlData constinArgument_item,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlData * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlData) ;
  const GALGAS_gtlData temp_0 = object ;
  TC_Array <C_FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (callExtensionGetter_location ((const cPtr_gtlData *) constinArgument_item.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 365)), GALGAS_string ("a ").add_operation (extensionGetter_typeName (temp_0.getter_dynamicType (SOURCE_FILE ("gtl_data_types.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 365)).add_operation (GALGAS_string (" is not a list"), inCompiler COMMA_SOURCE_FILE ("gtl_data_types.galgas", 365)), fixItArray1  COMMA_SOURCE_FILE ("gtl_data_types.galgas", 365)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlData_appendItem (void) {
  enterExtensionSetter_appendItem (kTypeDescriptor_GALGAS_gtlData.mSlotID,
                                   extensionSetter_gtlData_appendItem) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlData_appendItem (void) {
  gExtensionModifierTable_gtlData_appendItem.removeAll () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlData_appendItem (defineExtensionSetter_gtlData_appendItem,
                                               freeExtensionModifier_gtlData_appendItem) ;

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlUnconstructed::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)
                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlUnconstructed::GALGAS_gtlUnconstructed (const cPtr_gtlUnconstructed * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlUnconstructed) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::constructor_new (const GALGAS_location & inAttribute_where,
                                                                  const GALGAS_lstring & inAttribute_meta
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlUnconstructed (inAttribute_where, inAttribute_meta COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlUnconstructed class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlUnconstructed::cPtr_gtlUnconstructed (const GALGAS_location & in_where,
                                              const GALGAS_lstring & in_meta
                                              COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlUnconstructed::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlUnconstructed (mProperty_where, mProperty_meta COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlUnconstructed generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlUnconstructed ("gtlUnconstructed",
                                         & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlUnconstructed::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlUnconstructed ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlUnconstructed::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlUnconstructed (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlUnconstructed GALGAS_gtlUnconstructed::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlUnconstructed result ;
  const GALGAS_gtlUnconstructed * p = (const GALGAS_gtlUnconstructed *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlUnconstructed *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlUnconstructed", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlType::GALGAS_gtlType (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlType::GALGAS_gtlType (const cPtr_gtlType * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlType) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_type GALGAS_gtlType::readProperty_type (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_type () ;
  }else{
    const cPtr_gtlType * p = (const cPtr_gtlType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlType) ;
    return p->mProperty_type ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_type cPtr_gtlType::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlType::setter_setType (GALGAS_type inValue
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlType * p = (cPtr_gtlType *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlType) ;
    p->mProperty_type = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlType::setter_setType (GALGAS_type inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_type = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlType class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlType::cPtr_gtlType (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_type & in_type
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_type (in_type) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlType::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlType (mProperty_where, mProperty_meta, mProperty_type COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlType generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlType ("gtlType",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlType GALGAS_gtlType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlType result ;
  const GALGAS_gtlType * p = (const GALGAS_gtlType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlEnum::GALGAS_gtlEnum (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlEnum GALGAS_gtlEnum::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlEnum::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlEnum::GALGAS_gtlEnum (const cPtr_gtlEnum * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlEnum) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlEnum::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlEnum * p = (const cPtr_gtlEnum *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlEnum) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlEnum::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlEnum::setter_setValue (GALGAS_string inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlEnum * p = (cPtr_gtlEnum *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlEnum) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlEnum::setter_setValue (GALGAS_string inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlEnum class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlEnum::cPtr_gtlEnum (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_string & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlEnum::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlEnum (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlEnum generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlEnum ("gtlEnum",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlEnum ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlEnum (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlEnum GALGAS_gtlEnum::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlEnum result ;
  const GALGAS_gtlEnum * p = (const GALGAS_gtlEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlChar::GALGAS_gtlChar (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlChar GALGAS_gtlChar::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlChar::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_char::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlChar::GALGAS_gtlChar (const cPtr_gtlChar * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlChar) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_gtlChar::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_char () ;
  }else{
    const cPtr_gtlChar * p = (const cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_char cPtr_gtlChar::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlChar::setter_setValue (GALGAS_char inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlChar * p = (cPtr_gtlChar *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlChar) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlChar::setter_setValue (GALGAS_char inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlChar class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlChar::cPtr_gtlChar (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_char & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlChar::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlChar (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlChar generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlChar ("gtlChar",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlChar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlChar ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlChar::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlChar (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlChar GALGAS_gtlChar::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlChar result ;
  const GALGAS_gtlChar * p = (const GALGAS_gtlChar *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlChar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlChar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInt::GALGAS_gtlInt (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInt GALGAS_gtlInt::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_bigint::constructor_zero (HERE)
                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInt::GALGAS_gtlInt (const cPtr_gtlInt * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlInt) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_gtlInt::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    const cPtr_gtlInt * p = (const cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bigint cPtr_gtlInt::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlInt::setter_setValue (GALGAS_bigint inValue
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlInt * p = (cPtr_gtlInt *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlInt) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlInt::setter_setValue (GALGAS_bigint inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlInt class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlInt::cPtr_gtlInt (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_bigint & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlInt::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlInt (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlInt generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlInt ("gtlInt",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlInt::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlInt ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlInt::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlInt (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInt GALGAS_gtlInt::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlInt result ;
  const GALGAS_gtlInt * p = (const GALGAS_gtlInt *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlInt *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlInt", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlFloat::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlFloat * p = (const cPtr_gtlFloat *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlFloat) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlFloat::objectCompare (const GALGAS_gtlFloat & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFloat::GALGAS_gtlFloat (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFloat GALGAS_gtlFloat::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlFloat::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_double::constructor_default (HERE)
                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFloat::GALGAS_gtlFloat (const cPtr_gtlFloat * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlFloat) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFloat GALGAS_gtlFloat::constructor_new (const GALGAS_location & inAttribute_where,
                                                  const GALGAS_lstring & inAttribute_meta,
                                                  const GALGAS_double & inAttribute_value
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlFloat result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlFloat (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_gtlFloat::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_double () ;
  }else{
    const cPtr_gtlFloat * p = (const cPtr_gtlFloat *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFloat) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_double cPtr_gtlFloat::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlFloat::setter_setValue (GALGAS_double inValue
                                       COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlFloat * p = (cPtr_gtlFloat *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlFloat) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlFloat::setter_setValue (GALGAS_double inValue
                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlFloat class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlFloat::cPtr_gtlFloat (const GALGAS_location & in_where,
                              const GALGAS_lstring & in_meta,
                              const GALGAS_double & in_value
                              COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlFloat::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFloat ;
}

void cPtr_gtlFloat::description (C_String & ioString,
                                 const int32_t inIndentation) const {
  ioString << "[@gtlFloat:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlFloat::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlFloat (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlFloat generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFloat ("gtlFloat",
                                 & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlFloat::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFloat ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlFloat::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFloat (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFloat GALGAS_gtlFloat::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlFloat result ;
  const GALGAS_gtlFloat * p = (const GALGAS_gtlFloat *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlFloat *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlFloat", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlString::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlString * p = (const cPtr_gtlString *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlString) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlString::objectCompare (const GALGAS_gtlString & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlString::GALGAS_gtlString (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlString GALGAS_gtlString::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlString::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE)
                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlString::GALGAS_gtlString (const cPtr_gtlString * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlString) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlString GALGAS_gtlString::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_meta,
                                                    const GALGAS_string & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlString result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlString (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlString::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    const cPtr_gtlString * p = (const cPtr_gtlString *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlString) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlString::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlString::setter_setValue (GALGAS_string inValue
                                        COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlString * p = (cPtr_gtlString *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlString) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlString::setter_setValue (GALGAS_string inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlString class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlString::cPtr_gtlString (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_meta,
                                const GALGAS_string & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlString::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlString ;
}

void cPtr_gtlString::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlString:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlString::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlString (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlString generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlString ("gtlString",
                                  & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlString::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlString ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlString::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlString (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlString GALGAS_gtlString::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlString result ;
  const GALGAS_gtlString * p = (const GALGAS_gtlString *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlString *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlString", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlBool::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlBool * p = (const cPtr_gtlBool *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlBool) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlBool::objectCompare (const GALGAS_gtlBool & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBool::GALGAS_gtlBool (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBool GALGAS_gtlBool::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlBool::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_bool::constructor_default (HERE)
                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBool::GALGAS_gtlBool (const cPtr_gtlBool * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlBool) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBool GALGAS_gtlBool::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_bool & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlBool result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlBool (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_gtlBool::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    const cPtr_gtlBool * p = (const cPtr_gtlBool *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBool) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlBool::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlBool::setter_setValue (GALGAS_bool inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlBool * p = (cPtr_gtlBool *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlBool) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlBool::setter_setValue (GALGAS_bool inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlBool class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlBool::cPtr_gtlBool (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_bool & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlBool::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBool ;
}

void cPtr_gtlBool::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlBool:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlBool::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlBool (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlBool generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlBool ("gtlBool",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlBool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlBool ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlBool::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlBool (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlBool GALGAS_gtlBool::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlBool result ;
  const GALGAS_gtlBool * p = (const GALGAS_gtlBool *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlBool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlBool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlSet::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlSet * p = (const cPtr_gtlSet *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlSet) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlSet::objectCompare (const GALGAS_gtlSet & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSet::GALGAS_gtlSet (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSet GALGAS_gtlSet::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlSet::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_lstringset::constructor_emptyMap (HERE)
                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSet::GALGAS_gtlSet (const cPtr_gtlSet * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlSet) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSet GALGAS_gtlSet::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_lstringset & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlSet result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlSet (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset GALGAS_gtlSet::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringset () ;
  }else{
    const cPtr_gtlSet * p = (const cPtr_gtlSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSet) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset cPtr_gtlSet::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlSet::setter_setValue (GALGAS_lstringset inValue
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlSet * p = (cPtr_gtlSet *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlSet) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlSet::setter_setValue (GALGAS_lstringset inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlSet class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlSet::cPtr_gtlSet (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_lstringset & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlSet::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSet ;
}

void cPtr_gtlSet::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlSet:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlSet::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlSet (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlSet generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSet ("gtlSet",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlSet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSet ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlSet::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSet (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSet GALGAS_gtlSet::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlSet result ;
  const GALGAS_gtlSet * p = (const GALGAS_gtlSet *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlSet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlSet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlStruct::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlStruct * p = (const cPtr_gtlStruct *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlStruct) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlStruct::objectCompare (const GALGAS_gtlStruct & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct::GALGAS_gtlStruct (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct GALGAS_gtlStruct::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlStruct::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                            GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_gtlVarMap::constructor_emptyMap (HERE)
                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct::GALGAS_gtlStruct (const cPtr_gtlStruct * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlStruct) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct GALGAS_gtlStruct::constructor_new (const GALGAS_location & inAttribute_where,
                                                    const GALGAS_lstring & inAttribute_meta,
                                                    const GALGAS_gtlVarMap & inAttribute_value
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlStruct (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap GALGAS_gtlStruct::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlVarMap () ;
  }else{
    const cPtr_gtlStruct * p = (const cPtr_gtlStruct *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlStruct) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap cPtr_gtlStruct::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlStruct::setter_setValue (GALGAS_gtlVarMap inValue
                                        COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlStruct * p = (cPtr_gtlStruct *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlStruct) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlStruct::setter_setValue (GALGAS_gtlVarMap inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlStruct class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlStruct::cPtr_gtlStruct (const GALGAS_location & in_where,
                                const GALGAS_lstring & in_meta,
                                const GALGAS_gtlVarMap & in_value
                                COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlStruct::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStruct ;
}

void cPtr_gtlStruct::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "[@gtlStruct:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlStruct::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlStruct (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlStruct generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlStruct ("gtlStruct",
                                  & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlStruct GALGAS_gtlStruct::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlStruct result ;
  const GALGAS_gtlStruct * p = (const GALGAS_gtlStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlList::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlList * p = (const cPtr_gtlList *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlList) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlList::objectCompare (const GALGAS_gtlList & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlList::GALGAS_gtlList (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlList GALGAS_gtlList::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlList::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_list::constructor_emptyList (HERE)
                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlList::GALGAS_gtlList (const cPtr_gtlList * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlList) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlList GALGAS_gtlList::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_list & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlList result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlList (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list GALGAS_gtlList::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_list () ;
  }else{
    const cPtr_gtlList * p = (const cPtr_gtlList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlList) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list cPtr_gtlList::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlList::setter_setValue (GALGAS_list inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlList * p = (cPtr_gtlList *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlList) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlList::setter_setValue (GALGAS_list inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlList class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlList::cPtr_gtlList (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_list & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlList::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlList ;
}

void cPtr_gtlList::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlList:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlList::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlList (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlList ("gtlList",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlList GALGAS_gtlList::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlList result ;
  const GALGAS_gtlList * p = (const GALGAS_gtlList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlMap::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlMap * p = (const cPtr_gtlMap *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlMap) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlMap::objectCompare (const GALGAS_gtlMap & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlMap::GALGAS_gtlMap (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlMap GALGAS_gtlMap::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlMap::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                         GALGAS_lstring::constructor_default (HERE),
                                         GALGAS_gtlVarMap::constructor_emptyMap (HERE)
                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlMap::GALGAS_gtlMap (const cPtr_gtlMap * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlMap) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlMap GALGAS_gtlMap::constructor_new (const GALGAS_location & inAttribute_where,
                                              const GALGAS_lstring & inAttribute_meta,
                                              const GALGAS_gtlVarMap & inAttribute_value
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlMap result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlMap (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap GALGAS_gtlMap::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlVarMap () ;
  }else{
    const cPtr_gtlMap * p = (const cPtr_gtlMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMap) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap cPtr_gtlMap::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlMap::setter_setValue (GALGAS_gtlVarMap inValue
                                     COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlMap * p = (cPtr_gtlMap *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlMap) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlMap::setter_setValue (GALGAS_gtlVarMap inValue
                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlMap class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlMap::cPtr_gtlMap (const GALGAS_location & in_where,
                          const GALGAS_lstring & in_meta,
                          const GALGAS_gtlVarMap & in_value
                          COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlMap::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMap ;
}

void cPtr_gtlMap::description (C_String & ioString,
                               const int32_t inIndentation) const {
  ioString << "[@gtlMap:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlMap::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlMap (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlMap ("gtlMap",
                               & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlMap GALGAS_gtlMap::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlMap result ;
  const GALGAS_gtlMap * p = (const GALGAS_gtlMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlExpr::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlExpr * p = (const cPtr_gtlExpr *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlExpr) ;
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

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlExpr::objectCompare (const GALGAS_gtlExpr & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpr::GALGAS_gtlExpr (void) :
GALGAS_gtlData () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpr::GALGAS_gtlExpr (const cPtr_gtlExpr * inSourcePtr) :
GALGAS_gtlData (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlExpr) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpr GALGAS_gtlExpr::constructor_new (const GALGAS_location & inAttribute_where,
                                                const GALGAS_lstring & inAttribute_meta,
                                                const GALGAS_gtlExpression & inAttribute_value
                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpr result ;
  if (inAttribute_where.isValid () && inAttribute_meta.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlExpr (inAttribute_where, inAttribute_meta, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlExpr::readProperty_value (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlExpression () ;
  }else{
    const cPtr_gtlExpr * p = (const cPtr_gtlExpr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpr) ;
    return p->mProperty_value ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression cPtr_gtlExpr::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpr::setter_setValue (GALGAS_gtlExpression inValue
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlExpr * p = (cPtr_gtlExpr *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlExpr) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlExpr::setter_setValue (GALGAS_gtlExpression inValue
                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlExpr class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlExpr::cPtr_gtlExpr (const GALGAS_location & in_where,
                            const GALGAS_lstring & in_meta,
                            const GALGAS_gtlExpression & in_value
                            COMMA_LOCATION_ARGS) :
cPtr_gtlData (in_where, in_meta COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlExpr::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpr ;
}

void cPtr_gtlExpr::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "[@gtlExpr:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_meta.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlExpr::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlExpr (mProperty_where, mProperty_meta, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlExpr generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpr ("gtlExpr",
                                & kTypeDescriptor_GALGAS_gtlData) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlExpr::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpr ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlExpr::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpr (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpr GALGAS_gtlExpr::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlExpr result ;
  const GALGAS_gtlExpr * p = (const GALGAS_gtlExpr *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlExpr *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlExpr", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlLetUnconstructedInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLetUnconstructedInstruction * p = (const cPtr_gtlLetUnconstructedInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLetUnconstructedInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_lValue.objectCompare (p->mProperty_lValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlLetUnconstructedInstruction::objectCompare (const GALGAS_gtlLetUnconstructedInstruction & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLetUnconstructedInstruction::GALGAS_gtlLetUnconstructedInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLetUnconstructedInstruction GALGAS_gtlLetUnconstructedInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLetUnconstructedInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_gtlVarPath::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLetUnconstructedInstruction::GALGAS_gtlLetUnconstructedInstruction (const cPtr_gtlLetUnconstructedInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLetUnconstructedInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLetUnconstructedInstruction GALGAS_gtlLetUnconstructedInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                              const GALGAS_string & inAttribute_signature,
                                                                                              const GALGAS_gtlVarPath & inAttribute_lValue
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLetUnconstructedInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_lValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLetUnconstructedInstruction (inAttribute_where, inAttribute_signature, inAttribute_lValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath GALGAS_gtlLetUnconstructedInstruction::readProperty_lValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlVarPath () ;
  }else{
    const cPtr_gtlLetUnconstructedInstruction * p = (const cPtr_gtlLetUnconstructedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLetUnconstructedInstruction) ;
    return p->mProperty_lValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarPath cPtr_gtlLetUnconstructedInstruction::getter_lValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_lValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLetUnconstructedInstruction::setter_setLValue (GALGAS_gtlVarPath inValue
                                                              COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLetUnconstructedInstruction * p = (cPtr_gtlLetUnconstructedInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLetUnconstructedInstruction) ;
    p->mProperty_lValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLetUnconstructedInstruction::setter_setLValue (GALGAS_gtlVarPath inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_lValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLetUnconstructedInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLetUnconstructedInstruction::cPtr_gtlLetUnconstructedInstruction (const GALGAS_location & in_where,
                                                                          const GALGAS_string & in_signature,
                                                                          const GALGAS_gtlVarPath & in_lValue
                                                                          COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_lValue (in_lValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlLetUnconstructedInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction ;
}

void cPtr_gtlLetUnconstructedInstruction::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@gtlLetUnconstructedInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_lValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLetUnconstructedInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_gtlLetUnconstructedInstruction (mProperty_where, mProperty_signature, mProperty_lValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlLetUnconstructedInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction ("gtlLetUnconstructedInstruction",
                                                       & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLetUnconstructedInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLetUnconstructedInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLetUnconstructedInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLetUnconstructedInstruction GALGAS_gtlLetUnconstructedInstruction::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_gtlLetUnconstructedInstruction result ;
  const GALGAS_gtlLetUnconstructedInstruction * p = (const GALGAS_gtlLetUnconstructedInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlLetUnconstructedInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLetUnconstructedInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_gtlAssignInstruction::objectCompare (const GALGAS_gtlAssignInstruction & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlAssignInstruction::GALGAS_gtlAssignInstruction (void) :
GALGAS_gtlLetUnconstructedInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlAssignInstruction::GALGAS_gtlAssignInstruction (const cPtr_gtlAssignInstruction * inSourcePtr) :
GALGAS_gtlLetUnconstructedInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlAssignInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlAssignInstruction::readProperty_rValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_gtlExpression () ;
  }else{
    const cPtr_gtlAssignInstruction * p = (const cPtr_gtlAssignInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlAssignInstruction) ;
    return p->mProperty_rValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression cPtr_gtlAssignInstruction::getter_rValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_rValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlAssignInstruction::setter_setRValue (GALGAS_gtlExpression inValue
                                                    COMMA_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlAssignInstruction * p = (cPtr_gtlAssignInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlAssignInstruction) ;
    p->mProperty_rValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlAssignInstruction::setter_setRValue (GALGAS_gtlExpression inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_rValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlAssignInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlAssignInstruction::cPtr_gtlAssignInstruction (const GALGAS_location & in_where,
                                                      const GALGAS_string & in_signature,
                                                      const GALGAS_gtlVarPath & in_lValue,
                                                      const GALGAS_gtlExpression & in_rValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_gtlLetUnconstructedInstruction (in_where, in_signature, in_lValue COMMA_THERE),
mProperty_rValue (in_rValue) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @gtlAssignInstruction generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlAssignInstruction ("gtlAssignInstruction",
                                             & kTypeDescriptor_GALGAS_gtlLetUnconstructedInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlAssignInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlAssignInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlAssignInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlAssignInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlAssignInstruction GALGAS_gtlAssignInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlAssignInstruction result ;
  const GALGAS_gtlAssignInstruction * p = (const GALGAS_gtlAssignInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_gtlAssignInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlAssignInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

