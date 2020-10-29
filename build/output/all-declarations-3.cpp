#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlListOfExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlListOfExpression * p = (const cPtr_gtlListOfExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlListOfExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_expression.objectCompare (p->mProperty_expression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlListOfExpression::objectCompare (const GALGAS_gtlListOfExpression & inOperand) const {
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

GALGAS_gtlListOfExpression::GALGAS_gtlListOfExpression (void) :
GALGAS_gtlExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListOfExpression::GALGAS_gtlListOfExpression (const cPtr_gtlListOfExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlListOfExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListOfExpression GALGAS_gtlListOfExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_gtlExpression & inAttribute_expression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlListOfExpression result ;
  if (inAttribute_where.isValid () && inAttribute_expression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlListOfExpression (inAttribute_where, inAttribute_expression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlListOfExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlListOfExpression * p = (const cPtr_gtlListOfExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListOfExpression) ;
    result = p->mProperty_expression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression cPtr_gtlListOfExpression::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_expression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlListOfExpression::setter_setExpression (GALGAS_gtlExpression inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlListOfExpression * p = (cPtr_gtlListOfExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlListOfExpression) ;
    p->mProperty_expression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlListOfExpression::setter_setExpression (GALGAS_gtlExpression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_expression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlListOfExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlListOfExpression::cPtr_gtlListOfExpression (const GALGAS_location & in_where,
                                                    const GALGAS_gtlExpression & in_expression
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mProperty_expression (in_expression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlListOfExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListOfExpression ;
}

void cPtr_gtlListOfExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlListOfExpression:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlListOfExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlListOfExpression (mProperty_where, mProperty_expression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlListOfExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlListOfExpression ("gtlListOfExpression",
                                            & kTypeDescriptor_GALGAS_gtlExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlListOfExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlListOfExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlListOfExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlListOfExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlListOfExpression GALGAS_gtlListOfExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlListOfExpression result ;
  const GALGAS_gtlListOfExpression * p = (const GALGAS_gtlListOfExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlListOfExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlListOfExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlLiteralStructExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralStructExpression * p = (const cPtr_gtlLiteralStructExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralStructExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlLiteralStructExpression::objectCompare (const GALGAS_gtlLiteralStructExpression & inOperand) const {
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

GALGAS_gtlLiteralStructExpression::GALGAS_gtlLiteralStructExpression (void) :
GALGAS_gtlExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralStructExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_gtlExpressionMap::constructor_emptyMap (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralStructExpression::GALGAS_gtlLiteralStructExpression (const cPtr_gtlLiteralStructExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralStructExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                      const GALGAS_gtlExpressionMap & inAttribute_value
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralStructExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralStructExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap GALGAS_gtlLiteralStructExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralStructExpression * p = (const cPtr_gtlLiteralStructExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralStructExpression) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap cPtr_gtlLiteralStructExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLiteralStructExpression::setter_setValue (GALGAS_gtlExpressionMap inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLiteralStructExpression * p = (cPtr_gtlLiteralStructExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralStructExpression) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLiteralStructExpression::setter_setValue (GALGAS_gtlExpressionMap inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLiteralStructExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLiteralStructExpression::cPtr_gtlLiteralStructExpression (const GALGAS_location & in_where,
                                                                  const GALGAS_gtlExpressionMap & in_value
                                                                  COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlLiteralStructExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralStructExpression ;
}

void cPtr_gtlLiteralStructExpression::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@gtlLiteralStructExpression:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLiteralStructExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralStructExpression (mProperty_where, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlLiteralStructExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralStructExpression ("gtlLiteralStructExpression",
                                                   & kTypeDescriptor_GALGAS_gtlExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLiteralStructExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralStructExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLiteralStructExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralStructExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralStructExpression GALGAS_gtlLiteralStructExpression::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralStructExpression result ;
  const GALGAS_gtlLiteralStructExpression * p = (const GALGAS_gtlLiteralStructExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralStructExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralStructExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlLiteralMapExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralMapExpression * p = (const cPtr_gtlLiteralMapExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralMapExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlLiteralMapExpression::objectCompare (const GALGAS_gtlLiteralMapExpression & inOperand) const {
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

GALGAS_gtlLiteralMapExpression::GALGAS_gtlLiteralMapExpression (void) :
GALGAS_gtlExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralMapExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_gtlExpressionMap::constructor_emptyMap (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralMapExpression::GALGAS_gtlLiteralMapExpression (const cPtr_gtlLiteralMapExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralMapExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpressionMap & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralMapExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralMapExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap GALGAS_gtlLiteralMapExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralMapExpression * p = (const cPtr_gtlLiteralMapExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralMapExpression) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap cPtr_gtlLiteralMapExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLiteralMapExpression::setter_setValue (GALGAS_gtlExpressionMap inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLiteralMapExpression * p = (cPtr_gtlLiteralMapExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralMapExpression) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLiteralMapExpression::setter_setValue (GALGAS_gtlExpressionMap inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLiteralMapExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLiteralMapExpression::cPtr_gtlLiteralMapExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpressionMap & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlLiteralMapExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralMapExpression ;
}

void cPtr_gtlLiteralMapExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlLiteralMapExpression:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLiteralMapExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralMapExpression (mProperty_where, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlLiteralMapExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralMapExpression ("gtlLiteralMapExpression",
                                                & kTypeDescriptor_GALGAS_gtlExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLiteralMapExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralMapExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLiteralMapExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralMapExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralMapExpression GALGAS_gtlLiteralMapExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralMapExpression result ;
  const GALGAS_gtlLiteralMapExpression * p = (const GALGAS_gtlLiteralMapExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralMapExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralMapExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlLiteralListExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralListExpression * p = (const cPtr_gtlLiteralListExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralListExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlLiteralListExpression::objectCompare (const GALGAS_gtlLiteralListExpression & inOperand) const {
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

GALGAS_gtlLiteralListExpression::GALGAS_gtlLiteralListExpression (void) :
GALGAS_gtlExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralListExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                           GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralListExpression::GALGAS_gtlLiteralListExpression (const cPtr_gtlLiteralListExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralListExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_gtlExpressionList & inAttribute_value
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralListExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralListExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList GALGAS_gtlLiteralListExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralListExpression * p = (const cPtr_gtlLiteralListExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralListExpression) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList cPtr_gtlLiteralListExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLiteralListExpression::setter_setValue (GALGAS_gtlExpressionList inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLiteralListExpression * p = (cPtr_gtlLiteralListExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralListExpression) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLiteralListExpression::setter_setValue (GALGAS_gtlExpressionList inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLiteralListExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLiteralListExpression::cPtr_gtlLiteralListExpression (const GALGAS_location & in_where,
                                                              const GALGAS_gtlExpressionList & in_value
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlLiteralListExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralListExpression ;
}

void cPtr_gtlLiteralListExpression::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlLiteralListExpression:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLiteralListExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralListExpression (mProperty_where, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlLiteralListExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralListExpression ("gtlLiteralListExpression",
                                                 & kTypeDescriptor_GALGAS_gtlExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLiteralListExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralListExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLiteralListExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralListExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralListExpression GALGAS_gtlLiteralListExpression::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralListExpression result ;
  const GALGAS_gtlLiteralListExpression * p = (const GALGAS_gtlLiteralListExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralListExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralListExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlLiteralSetExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlLiteralSetExpression * p = (const cPtr_gtlLiteralSetExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlLiteralSetExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_value.objectCompare (p->mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlLiteralSetExpression::objectCompare (const GALGAS_gtlLiteralSetExpression & inOperand) const {
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

GALGAS_gtlLiteralSetExpression::GALGAS_gtlLiteralSetExpression (void) :
GALGAS_gtlExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlLiteralSetExpression::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_gtlExpressionList::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralSetExpression::GALGAS_gtlLiteralSetExpression (const cPtr_gtlLiteralSetExpression * inSourcePtr) :
GALGAS_gtlExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlLiteralSetExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                const GALGAS_gtlExpressionList & inAttribute_value
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralSetExpression result ;
  if (inAttribute_where.isValid () && inAttribute_value.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlLiteralSetExpression (inAttribute_where, inAttribute_value COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList GALGAS_gtlLiteralSetExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpressionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlLiteralSetExpression * p = (const cPtr_gtlLiteralSetExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralSetExpression) ;
    result = p->mProperty_value ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList cPtr_gtlLiteralSetExpression::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlLiteralSetExpression::setter_setValue (GALGAS_gtlExpressionList inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlLiteralSetExpression * p = (cPtr_gtlLiteralSetExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlLiteralSetExpression) ;
    p->mProperty_value = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlLiteralSetExpression::setter_setValue (GALGAS_gtlExpressionList inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_value = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlLiteralSetExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlLiteralSetExpression::cPtr_gtlLiteralSetExpression (const GALGAS_location & in_where,
                                                            const GALGAS_gtlExpressionList & in_value
                                                            COMMA_LOCATION_ARGS) :
cPtr_gtlExpression (in_where COMMA_THERE),
mProperty_value (in_value) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlLiteralSetExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralSetExpression ;
}

void cPtr_gtlLiteralSetExpression::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@gtlLiteralSetExpression:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_value.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlLiteralSetExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlLiteralSetExpression (mProperty_where, mProperty_value COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlLiteralSetExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlLiteralSetExpression ("gtlLiteralSetExpression",
                                                & kTypeDescriptor_GALGAS_gtlExpression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlLiteralSetExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlLiteralSetExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlLiteralSetExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlLiteralSetExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlLiteralSetExpression GALGAS_gtlLiteralSetExpression::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_gtlLiteralSetExpression result ;
  const GALGAS_gtlLiteralSetExpression * p = (const GALGAS_gtlLiteralSetExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlLiteralSetExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlLiteralSetExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext appendInstructionToStepDo'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_appendInstructionToStepDo> gExtensionModifierTable_debuggerContext_appendInstructionToStepDo ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_debuggerContext_appendInstructionToStepDo inModifier) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_appendInstructionToStepDo f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
      f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.count ()) {
           f = gExtensionModifierTable_debuggerContext_appendInstructionToStepDo (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_instruction, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_appendInstructionToStepDo (cPtr_debuggerContext * inObject,
                                                                       GALGAS_gtlInstruction inArgument_instruction,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_doList.addAssign_operation (inArgument_instruction  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 130)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_appendInstructionToStepDo (void) {
  enterExtensionSetter_appendInstructionToStepDo (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                  extensionSetter_debuggerContext_appendInstructionToStepDo) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_appendInstructionToStepDo (void) {
  gExtensionModifierTable_debuggerContext_appendInstructionToStepDo.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_appendInstructionToStepDo (defineExtensionSetter_debuggerContext_appendInstructionToStepDo,
                                                                      freeExtensionModifier_debuggerContext_appendInstructionToStepDo) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteStepDoInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteStepDoInstruction> gExtensionModifierTable_debuggerContext_deleteStepDoInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_debuggerContext_deleteStepDoInstruction inModifier) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteStepDoInstruction f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteStepDoInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteStepDoInstruction (cPtr_debuggerContext * inObject,
                                                                     const GALGAS_lbigint constinArgument_numToDelete,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 137)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 137)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 137)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numToDeleteUInt_5231 = constinArgument_numToDelete.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 138)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_5231.objectCompare (object->mProperty_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 139)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlInstruction var_instruction_5357 ;
          {
          object->mProperty_doList.setter_removeAtIndex (var_instruction_5357, var_numToDeleteUInt_5231, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 140)) ;
          }
          inCompiler->printMessage (GALGAS_string ("Command: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 141)) ;
          inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 142))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 142)) ;
          callExtensionMethod_display ((const cPtr_gtlInstruction *) var_instruction_5357.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 143)) ;
          inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 144))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 144)) ;
          inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 145)) ;
        }
      }
      if (kBoolFalse == test_1) {
        inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 147)) ;
        inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 148)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 148)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 151))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 151)) ;
    inCompiler->printMessage (GALGAS_string ("no do command at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 152)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 152)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteStepDoInstruction (void) {
  enterExtensionSetter_deleteStepDoInstruction (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                extensionSetter_debuggerContext_deleteStepDoInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteStepDoInstruction (void) {
  gExtensionModifierTable_debuggerContext_deleteStepDoInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteStepDoInstruction (defineExtensionSetter_debuggerContext_deleteStepDoInstruction,
                                                                    freeExtensionModifier_debuggerContext_deleteStepDoInstruction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions> gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllStepDoInstructions (const int32_t inClassIndex,
                                                       extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllStepDoInstructions (cPtr_debuggerContext * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllStepDoInstructions f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteAllStepDoInstructions (cPtr_debuggerContext * inObject,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_doList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 159)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteAllStepDoInstructions (void) {
  enterExtensionSetter_deleteAllStepDoInstructions (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                                    extensionSetter_debuggerContext_deleteAllStepDoInstructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteAllStepDoInstructions (void) {
  gExtensionModifierTable_debuggerContext_deleteAllStepDoInstructions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteAllStepDoInstructions (defineExtensionSetter_debuggerContext_deleteAllStepDoInstructions,
                                                                        freeExtensionModifier_debuggerContext_deleteAllStepDoInstructions) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listStepDoInstructions> gExtensionMethodTable_debuggerContext_listStepDoInstructions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_debuggerContext_listStepDoInstructions inMethod) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listStepDoInstructions f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
      f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listStepDoInstructions.count ()) {
           f = gExtensionMethodTable_debuggerContext_listStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_debuggerContext_listStepDoInstructions (const cPtr_debuggerContext * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_doList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("Step do commands:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 166)) ;
      cEnumerator_gtlInstructionList enumerator_6191 (object->mProperty_doList, kENUMERATION_UP) ;
      GALGAS_uint index_6167 ((uint32_t) 0) ;
      while (enumerator_6191.hasCurrentObject ()) {
        inCompiler->printMessage (index_6167.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 168)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 168)) ;
        inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 169))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 169)) ;
        callExtensionMethod_display ((const cPtr_gtlInstruction *) enumerator_6191.current_instruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 170)) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 171)) ;
        inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 172))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 172)) ;
        enumerator_6191.gotoNextObject () ;
        index_6167.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 167)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No step do commands\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 175)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  enterExtensionMethod_listStepDoInstructions (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                               extensionMethod_debuggerContext_listStepDoInstructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_debuggerContext_listStepDoInstructions (void) {
  gExtensionMethodTable_debuggerContext_listStepDoInstructions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_debuggerContext_listStepDoInstructions (defineExtensionMethod_debuggerContext_listStepDoInstructions,
                                                                   freeExtensionMethod_debuggerContext_listStepDoInstructions) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext setBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_setBreakpoint> gExtensionModifierTable_debuggerContext_setBreakpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setBreakpoint (cPtr_debuggerContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_setBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_setBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_setBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_setBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_setBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_fileName, constin_lineNum, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_setBreakpoint (cPtr_debuggerContext * inObject,
                                                           const GALGAS_string constinArgument_fileName,
                                                           const GALGAS_uint constinArgument_lineNum,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_string var_signature_6650 = constinArgument_fileName.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 184)).add_operation (constinArgument_lineNum.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 184)).getter_md_35_ (SOURCE_FILE ("gtl_debugger.galgas", 184)) ;
  GALGAS_bool var_notThere_6700 = GALGAS_bool (true) ;
  cEnumerator_gtlBreakpointList enumerator_6733 (object->mProperty_breakpoints, kENUMERATION_UP) ;
  while (enumerator_6733.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_6733.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 187)).objectCompare (var_signature_6650)).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_notThere_6700 = GALGAS_bool (false) ;
      }
    }
    enumerator_6733.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_notThere_6700.boolEnum () ;
    if (kBoolTrue == test_1) {
      object->mProperty_breakpoints.addAssign_operation (GALGAS_gtlBreakpoint::constructor_new (constinArgument_fileName, constinArgument_lineNum, var_signature_6650  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 192))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 192)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_setBreakpoint (void) {
  enterExtensionSetter_setBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                      extensionSetter_debuggerContext_setBreakpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_setBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_setBreakpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_setBreakpoint (defineExtensionSetter_debuggerContext_setBreakpoint,
                                                          freeExtensionModifier_debuggerContext_setBreakpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listBreakpoints> gExtensionMethodTable_debuggerContext_listBreakpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listBreakpoints inMethod) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listBreakpoints (const cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listBreakpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
      f = gExtensionMethodTable_debuggerContext_listBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listBreakpoints.count ()) {
           f = gExtensionMethodTable_debuggerContext_listBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_debuggerContext_listBreakpoints (const cPtr_debuggerContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 199)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("Breakpoints:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 200)) ;
      cEnumerator_gtlBreakpointList enumerator_7133 (object->mProperty_breakpoints, kENUMERATION_UP) ;
      GALGAS_uint index_7113 ((uint32_t) 0) ;
      while (enumerator_7133.hasCurrentObject ()) {
        inCompiler->printMessage (index_7113.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 202)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 202)) ;
        inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 203)) ;
        inCompiler->printMessage (enumerator_7133.current_breakpoint (HERE).getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 204)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204)).add_operation (enumerator_7133.current_breakpoint (HERE).getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 204)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 204)) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 205)) ;
        inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 206))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 206)) ;
        enumerator_7133.gotoNextObject () ;
        index_7113.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 201)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No breakpoint\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 209)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_debuggerContext_listBreakpoints (void) {
  enterExtensionMethod_listBreakpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                        extensionMethod_debuggerContext_listBreakpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_debuggerContext_listBreakpoints (void) {
  gExtensionMethodTable_debuggerContext_listBreakpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_debuggerContext_listBreakpoints (defineExtensionMethod_debuggerContext_listBreakpoints,
                                                            freeExtensionMethod_debuggerContext_listBreakpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteBreakpoint> gExtensionModifierTable_debuggerContext_deleteBreakpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteBreakpoint inModifier) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteBreakpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteBreakpoint (cPtr_debuggerContext * inObject,
                                                              const GALGAS_lbigint constinArgument_numToDelete,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 217)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 217)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 217)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numToDeleteUInt_7676 = constinArgument_numToDelete.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 218)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_7676.objectCompare (object->mProperty_breakpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 219)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlBreakpoint var_bp_7802 ;
          {
          object->mProperty_breakpoints.setter_removeAtIndex (var_bp_7802, var_numToDeleteUInt_7676, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 220)) ;
          }
          inCompiler->printMessage (GALGAS_string ("Breakpoint: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 221)) ;
          inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 222)) ;
          inCompiler->printMessage (var_bp_7802.getter_fileName (SOURCE_FILE ("gtl_debugger.galgas", 223)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223)).add_operation (var_bp_7802.getter_lineNum (SOURCE_FILE ("gtl_debugger.galgas", 223)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 223)) ;
          inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 224)) ;
          inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 225)) ;
        }
      }
      if (kBoolFalse == test_1) {
        inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 227)) ;
        inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 228)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 228)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 231)) ;
    inCompiler->printMessage (GALGAS_string ("no breakpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 232)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 232)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteBreakpoint (void) {
  enterExtensionSetter_deleteBreakpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                         extensionSetter_debuggerContext_deleteBreakpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteBreakpoint (void) {
  gExtensionModifierTable_debuggerContext_deleteBreakpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteBreakpoint (defineExtensionSetter_debuggerContext_deleteBreakpoint,
                                                             freeExtensionModifier_debuggerContext_deleteBreakpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllBreakpoints> gExtensionModifierTable_debuggerContext_deleteAllBreakpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllBreakpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllBreakpoints inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllBreakpoints (cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllBreakpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteAllBreakpoints (cPtr_debuggerContext * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_breakpoints = GALGAS_gtlBreakpointList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 239)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteAllBreakpoints (void) {
  enterExtensionSetter_deleteAllBreakpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                             extensionSetter_debuggerContext_deleteAllBreakpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteAllBreakpoints (void) {
  gExtensionModifierTable_debuggerContext_deleteAllBreakpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteAllBreakpoints (defineExtensionSetter_debuggerContext_deleteAllBreakpoints,
                                                                 freeExtensionModifier_debuggerContext_deleteAllBreakpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext setWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_setWatchpoint> gExtensionModifierTable_debuggerContext_setWatchpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setWatchpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_debuggerContext_setWatchpoint inModifier) {
  gExtensionModifierTable_debuggerContext_setWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setWatchpoint (cPtr_debuggerContext * inObject,
                                        const GALGAS_gtlExpression constin_watchExpression,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_setWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_setWatchpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_setWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_setWatchpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_setWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_setWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_watchExpression, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_setWatchpoint (cPtr_debuggerContext * inObject,
                                                           const GALGAS_gtlExpression constinArgument_watchExpression,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_watchpoints.addAssign_operation (constinArgument_watchExpression  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 246)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_setWatchpoint (void) {
  enterExtensionSetter_setWatchpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                      extensionSetter_debuggerContext_setWatchpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_setWatchpoint (void) {
  gExtensionModifierTable_debuggerContext_setWatchpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_setWatchpoint (defineExtensionSetter_debuggerContext_setWatchpoint,
                                                          freeExtensionModifier_debuggerContext_setWatchpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext listWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_debuggerContext_listWatchpoints> gExtensionMethodTable_debuggerContext_listWatchpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listWatchpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_debuggerContext_listWatchpoints inMethod) {
  gExtensionMethodTable_debuggerContext_listWatchpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listWatchpoints (const cPtr_debuggerContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_listWatchpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_listWatchpoints.count ()) {
      f = gExtensionMethodTable_debuggerContext_listWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_listWatchpoints.count ()) {
           f = gExtensionMethodTable_debuggerContext_listWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_listWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_debuggerContext_listWatchpoints (const cPtr_debuggerContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_watchpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 252)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("Watchpoints:\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 253)) ;
      cEnumerator_gtlExpressionList enumerator_8842 (object->mProperty_watchpoints, kENUMERATION_UP) ;
      GALGAS_uint index_8822 ((uint32_t) 0) ;
      while (enumerator_8842.hasCurrentObject ()) {
        inCompiler->printMessage (index_8822.getter_string (SOURCE_FILE ("gtl_debugger.galgas", 255)).getter_stringByLeftPadding (GALGAS_uint ((uint32_t) 4U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 255)) ;
        inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 256))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 256)) ;
        inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_8842.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 257))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 257)) ;
        inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 258)) ;
        inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 259)) ;
        enumerator_8842.gotoNextObject () ;
        index_8822.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 254)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (GALGAS_string ("No Watchpoint\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 262)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_debuggerContext_listWatchpoints (void) {
  enterExtensionMethod_listWatchpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                        extensionMethod_debuggerContext_listWatchpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_debuggerContext_listWatchpoints (void) {
  gExtensionMethodTable_debuggerContext_listWatchpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_debuggerContext_listWatchpoints (defineExtensionMethod_debuggerContext_listWatchpoints,
                                                            freeExtensionMethod_debuggerContext_listWatchpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteWatchpoint> gExtensionModifierTable_debuggerContext_deleteWatchpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteWatchpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_debuggerContext_deleteWatchpoint inModifier) {
  gExtensionModifierTable_debuggerContext_deleteWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteWatchpoint (cPtr_debuggerContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteWatchpoint.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteWatchpoint.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteWatchpoint (cPtr_debuggerContext * inObject,
                                                              const GALGAS_lbigint constinArgument_numToDelete,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsInfOrEqual, constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 270)).objectCompare (GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_debugger.galgas", 270)).getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 270)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_numToDeleteUInt_9352 = constinArgument_numToDelete.getter_bigint (HERE).getter_uint (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 271)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictInf, var_numToDeleteUInt_9352.objectCompare (object->mProperty_watchpoints.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 272)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_gtlExpression var_wp_9478 ;
          {
          object->mProperty_watchpoints.setter_removeAtIndex (var_wp_9478, var_numToDeleteUInt_9352, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 273)) ;
          }
          inCompiler->printMessage (GALGAS_string ("Watchpoint: ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 274)) ;
          inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 275))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 275)) ;
          inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) var_wp_9478.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 276))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 276)) ;
          inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 277)) ;
          inCompiler->printMessage (GALGAS_string (" deleted\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 278)) ;
        }
      }
      if (kBoolFalse == test_1) {
        inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 280))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 280)) ;
        inCompiler->printMessage (GALGAS_string ("no watchpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 281)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 281)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    inCompiler->printMessage (object->mProperty_warningColor.add_operation (object->mProperty_warningFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 284)) ;
    inCompiler->printMessage (GALGAS_string ("no watchpoint at this index: ").add_operation (constinArgument_numToDelete.getter_bigint (SOURCE_FILE ("gtl_debugger.galgas", 285)).getter_string (SOURCE_FILE ("gtl_debugger.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 285)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteWatchpoint (void) {
  enterExtensionSetter_deleteWatchpoint (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                         extensionSetter_debuggerContext_deleteWatchpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteWatchpoint (void) {
  gExtensionModifierTable_debuggerContext_deleteWatchpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteWatchpoint (defineExtensionSetter_debuggerContext_deleteWatchpoint,
                                                             freeExtensionModifier_debuggerContext_deleteWatchpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext deleteAllWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_deleteAllWatchpoints> gExtensionModifierTable_debuggerContext_deleteAllWatchpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllWatchpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_debuggerContext_deleteAllWatchpoints inModifier) {
  gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllWatchpoints (cPtr_debuggerContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_deleteAllWatchpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.count ()) {
      f = gExtensionModifierTable_debuggerContext_deleteAllWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.count ()) {
           f = gExtensionModifierTable_debuggerContext_deleteAllWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_deleteAllWatchpoints (cPtr_debuggerContext * inObject,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_watchpoints = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_debugger.galgas", 292)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_deleteAllWatchpoints (void) {
  enterExtensionSetter_deleteAllWatchpoints (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                             extensionSetter_debuggerContext_deleteAllWatchpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_deleteAllWatchpoints (void) {
  gExtensionModifierTable_debuggerContext_deleteAllWatchpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_deleteAllWatchpoints (defineExtensionSetter_debuggerContext_deleteAllWatchpoints,
                                                                 freeExtensionModifier_debuggerContext_deleteAllWatchpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@debuggerContext breakOn'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_debuggerContext_breakOn> gExtensionGetterTable_debuggerContext_breakOn ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_breakOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_breakOn inGetter) {
  gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_breakOn (const cPtr_debuggerContext * inObject,
                                         const GALGAS_gtlInstruction in_instruction,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_debuggerContext_breakOn f = NULL ;
    if (classIndex < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
      f = gExtensionGetterTable_debuggerContext_breakOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_debuggerContext_breakOn.count ()) {
           f = gExtensionGetterTable_debuggerContext_breakOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_debuggerContext_breakOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_instruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_debuggerContext_breakOn (const cPtr_debuggerContext * inObject,
                                                            const GALGAS_gtlInstruction constinArgument_instruction,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOn ; // Returned variable
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  result_breakOn = GALGAS_bool (false) ;
  cEnumerator_gtlBreakpointList enumerator_10311 (object->mProperty_breakpoints, kENUMERATION_UP) ;
  while (enumerator_10311.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, constinArgument_instruction.getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 302)).objectCompare (enumerator_10311.current_breakpoint (HERE).getter_signature (SOURCE_FILE ("gtl_debugger.galgas", 302)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_breakOn = GALGAS_bool (true) ;
      }
    }
    enumerator_10311.gotoNextObject () ;
  }
//---
  return result_breakOn ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_debuggerContext_breakOn (void) {
  enterExtensionGetter_breakOn (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                extensionGetter_debuggerContext_breakOn) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_debuggerContext_breakOn (void) {
  gExtensionGetterTable_debuggerContext_breakOn.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_debuggerContext_breakOn (defineExtensionGetter_debuggerContext_breakOn,
                                                    freeExtensionGetter_debuggerContext_breakOn) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@debuggerContext watchOn'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_debuggerContext_watchOn> gExtensionGetterTable_debuggerContext_watchOn ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_watchOn (const int32_t inClassIndex,
                                   enterExtensionGetter_debuggerContext_watchOn inGetter) {
  gExtensionGetterTable_debuggerContext_watchOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_watchOn (const cPtr_debuggerContext * inObject,
                                         const GALGAS_gtlContext in_context,
                                         const GALGAS_gtlData in_vars,
                                         const GALGAS_library in_lib,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_debuggerContext_watchOn f = NULL ;
    if (classIndex < gExtensionGetterTable_debuggerContext_watchOn.count ()) {
      f = gExtensionGetterTable_debuggerContext_watchOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_debuggerContext_watchOn.count ()) {
           f = gExtensionGetterTable_debuggerContext_watchOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_debuggerContext_watchOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_context, in_vars, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_debuggerContext_watchOn (const cPtr_debuggerContext * inObject,
                                                            const GALGAS_gtlContext constinArgument_context,
                                                            const GALGAS_gtlData constinArgument_vars,
                                                            const GALGAS_library constinArgument_lib,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_watchOn ; // Returned variable
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  result_watchOn = GALGAS_bool (false) ;
  cEnumerator_gtlExpressionList enumerator_10656 (object->mProperty_watchpoints, kENUMERATION_UP) ;
  while (enumerator_10656.hasCurrentObject ()) {
    GALGAS_gtlData var_watchResult_10684 = callExtensionGetter_eval ((const cPtr_gtlExpression *) enumerator_10656.current_expression (HERE).ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 317)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (var_watchResult_10684.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_gtlBool).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_gtlBool temp_1 ;
        if (var_watchResult_10684.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_gtlBool *> (var_watchResult_10684.ptr ())) {
            temp_1 = (cPtr_gtlBool *) var_watchResult_10684.ptr () ;
          }else{
            inCompiler->castError ("gtlBool", var_watchResult_10684.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("gtl_debugger.galgas", 319)) ;
          }
        }
        GALGAS_bool var_matchWatch_10778 = temp_1.getter_value (SOURCE_FILE ("gtl_debugger.galgas", 319)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_matchWatch_10778.boolEnum () ;
          if (kBoolTrue == test_2) {
            inCompiler->printMessage (object->mProperty_outputColor.add_operation (object->mProperty_outputFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 321))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 321)) ;
            inCompiler->printMessage (GALGAS_string ("match ")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 322)) ;
            inCompiler->printMessage (object->mProperty_instructionColor.add_operation (object->mProperty_instructionFace, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 323))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 323)) ;
            inCompiler->printMessage (callExtensionGetter_stringRepresentation ((const cPtr_gtlExpression *) enumerator_10656.current_expression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 324))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 324)) ;
            inCompiler->printMessage (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 325)) ;
            inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 326)) ;
            result_watchOn = GALGAS_bool (true) ;
          }
        }
      }
    }
    enumerator_10656.gotoNextObject () ;
  }
//---
  return result_watchOn ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_debuggerContext_watchOn (void) {
  enterExtensionGetter_watchOn (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                extensionGetter_debuggerContext_watchOn) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_debuggerContext_watchOn (void) {
  gExtensionGetterTable_debuggerContext_watchOn.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_debuggerContext_watchOn (defineExtensionGetter_debuggerContext_watchOn,
                                                    freeExtensionGetter_debuggerContext_watchOn) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@debuggerContext hereWeAre'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_debuggerContext_hereWeAre> gExtensionMethodTable_debuggerContext_hereWeAre ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_debuggerContext_hereWeAre inMethod) {
  gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_hereWeAre (const cPtr_debuggerContext * inObject,
                                    const GALGAS_uint constin_window,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_debuggerContext_hereWeAre f = NULL ;
    if (classIndex < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
      f = gExtensionMethodTable_debuggerContext_hereWeAre (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_debuggerContext_hereWeAre.count ()) {
           f = gExtensionMethodTable_debuggerContext_hereWeAre (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_debuggerContext_hereWeAre.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_window, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_debuggerContext_hereWeAre (const cPtr_debuggerContext * inObject,
                                                       const GALGAS_uint constinArgument_window,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  GALGAS_uint var_indentation_11247 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_gtlInstructionListContextStack enumerator_11318 (object->mProperty_contextStack.getter_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 338)), kENUMERATION_UP) ;
  while (enumerator_11318.hasCurrentObject ()) {
    inCompiler->printMessage (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_11247  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 339))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 339)) ;
    const GALGAS_debuggerContext temp_0 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_11318.current_instructionList (HERE).getter_instructionAtIndex (enumerator_11318.current_nextInstructionIndex (HERE), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)).ptr (), temp_0, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 340)) ;
    var_indentation_11247 = var_indentation_11247.add_operation (GALGAS_uint ((uint32_t) 4U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 341)) ;
    enumerator_11318.gotoNextObject () ;
  }
  GALGAS_string var_identationString_11536 = GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (32)), var_indentation_11247  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 344)) ;
  GALGAS_uint var_startIndex_11610 ;
  GALGAS_uint var_displayLength_11632 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsSupOrEqual, object->mProperty_nextInstructionIndex.objectCompare (constinArgument_window)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_startIndex_11610 = object->mProperty_nextInstructionIndex.substract_operation (constinArgument_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 349)) ;
    }
  }
  if (kBoolFalse == test_1) {
    var_startIndex_11610 = GALGAS_uint ((uint32_t) 0U) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictInf, var_startIndex_11610.add_operation (constinArgument_window.multiply_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 353)).objectCompare (object->mProperty_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 353)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_displayLength_11632 = GALGAS_uint ((uint32_t) 2U).multiply_operation (constinArgument_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 354)) ;
    }
  }
  if (kBoolFalse == test_2) {
    var_displayLength_11632 = object->mProperty_instructionList.getter_length (SOURCE_FILE ("gtl_debugger.galgas", 356)).substract_operation (var_startIndex_11610, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 356)) ;
  }
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 358))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 358)) ;
  cEnumerator_gtlInstructionList enumerator_12040 (object->mProperty_instructionList.getter_subListWithRange (GALGAS_range::constructor_new (var_startIndex_11610, var_displayLength_11632  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 360)), kENUMERATION_UP) ;
  GALGAS_uint index_11941 ((uint32_t) 0) ;
  while (enumerator_12040.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, index_11941.add_operation (var_startIndex_11610, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 363)).objectCompare (object->mProperty_nextInstructionIndex)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->printMessage (function_red (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)).add_operation (function_bold (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 364)) ;
        inCompiler->printMessage (var_identationString_11536.add_operation (GALGAS_string (">>> "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 365))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 365)) ;
        inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 366))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 366)) ;
      }
    }
    if (kBoolFalse == test_3) {
      inCompiler->printMessage (var_identationString_11536.add_operation (GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 368))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 368)) ;
    }
    const GALGAS_debuggerContext temp_4 = object ;
    callExtensionMethod_displayWithLocation ((const cPtr_gtlInstruction *) enumerator_12040.current_instruction (HERE).ptr (), temp_4, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 370)) ;
    enumerator_12040.gotoNextObject () ;
    index_11941.increment_operation (inCompiler  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 359)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_debuggerContext_hereWeAre (void) {
  enterExtensionMethod_hereWeAre (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                  extensionMethod_debuggerContext_hereWeAre) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_debuggerContext_hereWeAre (void) {
  gExtensionMethodTable_debuggerContext_hereWeAre.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_debuggerContext_hereWeAre (defineExtensionMethod_debuggerContext_hereWeAre,
                                                      freeExtensionMethod_debuggerContext_hereWeAre) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext pushInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_pushInstructionList> gExtensionModifierTable_debuggerContext_pushInstructionList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_pushInstructionList (const int32_t inClassIndex,
                                               extensionSetterSignature_debuggerContext_pushInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_pushInstructionList (cPtr_debuggerContext * inObject,
                                              const GALGAS_gtlInstructionList constin_instructions,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_pushInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_pushInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_pushInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_pushInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_pushInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_instructions, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_pushInstructionList (cPtr_debuggerContext * inObject,
                                                                 const GALGAS_gtlInstructionList constinArgument_instructions,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  object->mProperty_contextStack.addAssign_operation (object->mProperty_nextInstructionIndex, object->mProperty_instructionList  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 379)) ;
  object->mProperty_nextInstructionIndex = GALGAS_uint ((uint32_t) 0U) ;
  object->mProperty_instructionList = constinArgument_instructions ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_pushInstructionList (void) {
  enterExtensionSetter_pushInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                            extensionSetter_debuggerContext_pushInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_pushInstructionList (void) {
  gExtensionModifierTable_debuggerContext_pushInstructionList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_pushInstructionList (defineExtensionSetter_debuggerContext_pushInstructionList,
                                                                freeExtensionModifier_debuggerContext_pushInstructionList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext popInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_popInstructionList> gExtensionModifierTable_debuggerContext_popInstructionList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_popInstructionList (const int32_t inClassIndex,
                                              extensionSetterSignature_debuggerContext_popInstructionList inModifier) {
  gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_popInstructionList (cPtr_debuggerContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_popInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
      f = gExtensionModifierTable_debuggerContext_popInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_popInstructionList.count ()) {
           f = gExtensionModifierTable_debuggerContext_popInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_popInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_popInstructionList (cPtr_debuggerContext * inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  {
  object->mProperty_contextStack.setter_popLast (object->mProperty_nextInstructionIndex, object->mProperty_instructionList, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 386)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_popInstructionList (void) {
  enterExtensionSetter_popInstructionList (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                           extensionSetter_debuggerContext_popInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_popInstructionList (void) {
  gExtensionModifierTable_debuggerContext_popInstructionList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_popInstructionList (defineExtensionSetter_debuggerContext_popInstructionList,
                                                               freeExtensionModifier_debuggerContext_popInstructionList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@debuggerContext getCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_debuggerContext_getCommand> gExtensionModifierTable_debuggerContext_getCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_debuggerContext_getCommand inModifier) {
  gExtensionModifierTable_debuggerContext_getCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getCommand (cPtr_debuggerContext * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_command.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_debuggerContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_debuggerContext_getCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_debuggerContext_getCommand.count ()) {
      f = gExtensionModifierTable_debuggerContext_getCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_debuggerContext_getCommand.count ()) {
           f = gExtensionModifierTable_debuggerContext_getCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_debuggerContext_getCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, out_command, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_debuggerContext_getCommand (cPtr_debuggerContext * inObject,
                                                        GALGAS_string & outArgument_command,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_debuggerContext * object = inObject ;
  macroValidSharedObject (object, cPtr_debuggerContext) ;
  {
  object->mProperty_commandInput.insulate (HERE) ;
  cPtr_debugCommandInput * ptr_12866 = (cPtr_debugCommandInput *) object->mProperty_commandInput.ptr () ;
  callExtensionSetter_getCommand ((cPtr_debugCommandInput *) ptr_12866, outArgument_command, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 393)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_debuggerContext_getCommand (void) {
  enterExtensionSetter_getCommand (kTypeDescriptor_GALGAS_debuggerContext.mSlotID,
                                   extensionSetter_debuggerContext_getCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_debuggerContext_getCommand (void) {
  gExtensionModifierTable_debuggerContext_getCommand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_debuggerContext_getCommand (defineExtensionSetter_debuggerContext_getCommand,
                                                       freeExtensionModifier_debuggerContext_getCommand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlExpression stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlExpression_stringRepresentation> gExtensionGetterTable_gtlExpression_stringRepresentation ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlExpression_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlExpression_stringRepresentation (void) {
  gExtensionGetterTable_gtlExpression_stringRepresentation.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlExpression_stringRepresentation (NULL,
                                                               freeExtensionGetter_gtlExpression_stringRepresentation) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlExpression * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlExpression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlExpression_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlExpression_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlExpression_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlExpression_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlExpression_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@gtlData stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlData_stringRepresentation> gExtensionGetterTable_gtlData_stringRepresentation ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_stringRepresentation (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlData_stringRepresentation inGetter) {
  gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlData_stringRepresentation (void) {
  gExtensionGetterTable_gtlData_stringRepresentation.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlData_stringRepresentation (NULL,
                                                         freeExtensionGetter_gtlData_stringRepresentation) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_stringRepresentation (const cPtr_gtlData * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlData) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlData_stringRepresentation f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
      f = gExtensionGetterTable_gtlData_stringRepresentation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlData_stringRepresentation.count ()) {
           f = gExtensionGetterTable_gtlData_stringRepresentation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlData_stringRepresentation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lsint stringRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_stringRepresentation (const GALGAS_lsint & inObject,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lsint temp_0 = inObject ;
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictInf, GALGAS_sint ((int32_t) 0L).objectCompare (temp_0.getter_sint (SOURCE_FILE ("gtl_debugger.galgas", 1126)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("<") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string (">") ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlDoNotInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlDoNotInstruction * p = (const cPtr_gtlDoNotInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlDoNotInstruction) ;
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


typeComparisonResult GALGAS_gtlDoNotInstruction::objectCompare (const GALGAS_gtlDoNotInstruction & inOperand) const {
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

GALGAS_gtlDoNotInstruction::GALGAS_gtlDoNotInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlDoNotInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_lbigint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotInstruction::GALGAS_gtlDoNotInstruction (const cPtr_gtlDoNotInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlDoNotInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                        const GALGAS_string & inAttribute_signature,
                                                                        const GALGAS_lbigint & inAttribute_numToDelete
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_numToDelete.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlDoNotInstruction (inAttribute_where, inAttribute_signature, inAttribute_numToDelete COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_gtlDoNotInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbigint result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlDoNotInstruction * p = (const cPtr_gtlDoNotInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoNotInstruction) ;
    result = p->mProperty_numToDelete ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint cPtr_gtlDoNotInstruction::getter_numToDelete (UNUSED_LOCATION_ARGS) const {
  return mProperty_numToDelete ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlDoNotInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlDoNotInstruction * p = (cPtr_gtlDoNotInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlDoNotInstruction) ;
    p->mProperty_numToDelete = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlDoNotInstruction::setter_setNumToDelete (GALGAS_lbigint inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_numToDelete = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlDoNotInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlDoNotInstruction::cPtr_gtlDoNotInstruction (const GALGAS_location & in_where,
                                                    const GALGAS_string & in_signature,
                                                    const GALGAS_lbigint & in_numToDelete
                                                    COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_numToDelete (in_numToDelete) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlDoNotInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotInstruction ;
}

void cPtr_gtlDoNotInstruction::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@gtlDoNotInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_numToDelete.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlDoNotInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlDoNotInstruction (mProperty_where, mProperty_signature, mProperty_numToDelete COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlDoNotInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDoNotInstruction ("gtlDoNotInstruction",
                                            & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlDoNotInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDoNotInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlDoNotInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDoNotInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDoNotInstruction GALGAS_gtlDoNotInstruction::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlDoNotInstruction result ;
  const GALGAS_gtlDoNotInstruction * p = (const GALGAS_gtlDoNotInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlDoNotInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlDoNotInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlWatchpointInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlWatchpointInstruction * p = (const cPtr_gtlWatchpointInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlWatchpointInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_where.objectCompare (p->mProperty_where) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_signature.objectCompare (p->mProperty_signature) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_watchExpression.objectCompare (p->mProperty_watchExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlWatchpointInstruction::objectCompare (const GALGAS_gtlWatchpointInstruction & inOperand) const {
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

GALGAS_gtlWatchpointInstruction::GALGAS_gtlWatchpointInstruction (void) :
GALGAS_gtlInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointInstruction::GALGAS_gtlWatchpointInstruction (const cPtr_gtlWatchpointInstruction * inSourcePtr) :
GALGAS_gtlInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlWatchpointInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointInstruction GALGAS_gtlWatchpointInstruction::constructor_new (const GALGAS_location & inAttribute_where,
                                                                                  const GALGAS_string & inAttribute_signature,
                                                                                  const GALGAS_gtlExpression & inAttribute_watchExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointInstruction result ;
  if (inAttribute_where.isValid () && inAttribute_signature.isValid () && inAttribute_watchExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlWatchpointInstruction (inAttribute_where, inAttribute_signature, inAttribute_watchExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlWatchpointInstruction::getter_watchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlWatchpointInstruction * p = (const cPtr_gtlWatchpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointInstruction) ;
    result = p->mProperty_watchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression cPtr_gtlWatchpointInstruction::getter_watchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_watchExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlWatchpointInstruction::setter_setWatchExpression (GALGAS_gtlExpression inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlWatchpointInstruction * p = (cPtr_gtlWatchpointInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlWatchpointInstruction) ;
    p->mProperty_watchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlWatchpointInstruction::setter_setWatchExpression (GALGAS_gtlExpression inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_watchExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlWatchpointInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlWatchpointInstruction::cPtr_gtlWatchpointInstruction (const GALGAS_location & in_where,
                                                              const GALGAS_string & in_signature,
                                                              const GALGAS_gtlExpression & in_watchExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_gtlInstruction (in_where, in_signature COMMA_THERE),
mProperty_watchExpression (in_watchExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlWatchpointInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointInstruction ;
}

void cPtr_gtlWatchpointInstruction::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@gtlWatchpointInstruction:" ;
  mProperty_where.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_signature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_watchExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlWatchpointInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlWatchpointInstruction (mProperty_where, mProperty_signature, mProperty_watchExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlWatchpointInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlWatchpointInstruction ("gtlWatchpointInstruction",
                                                 & kTypeDescriptor_GALGAS_gtlInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlWatchpointInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlWatchpointInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlWatchpointInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlWatchpointInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlWatchpointInstruction GALGAS_gtlWatchpointInstruction::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_gtlWatchpointInstruction result ;
  const GALGAS_gtlWatchpointInstruction * p = (const GALGAS_gtlWatchpointInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlWatchpointInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlWatchpointInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_gtl_debugger_grammar [] = {
// At index 0 : <gtl_expression>, in file 'gtl_debugger_expression_parser.ggs', line 33
  NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 3 : <gtl_variable>, in file 'gtl_debugger_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_gtl_5F_debugger_5F_expression_5F_parser_21>
, NONTERMINAL (44) // <select_gtl_5F_debugger_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 7 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 37
, NONTERMINAL (10) // <select_gtl_5F_debugger_5F_parser_0>
, END_PRODUCTION
// At index 9 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 52
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help) // $help$
, END_PRODUCTION
// At index 11 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 63
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step) // $step$
, END_PRODUCTION
// At index 13 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 74
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load) // $load$
, NONTERMINAL (11) // <select_gtl_5F_debugger_5F_parser_1>
, END_PRODUCTION
// At index 16 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 92
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist) // $hist$
, END_PRODUCTION
// At index 18 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 103
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break) // $break$
, NONTERMINAL (12) // <select_gtl_5F_debugger_5F_parser_2>
, END_PRODUCTION
// At index 21 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 169
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch) // $watch$
, NONTERMINAL (15) // <select_gtl_5F_debugger_5F_parser_5>
, END_PRODUCTION
// At index 24 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 207
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do) // $do$
, NONTERMINAL (17) // <select_gtl_5F_debugger_5F_parser_7>
, END_PRODUCTION
// At index 27 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 244
, END_PRODUCTION
// At index 28 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 254
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let) // $let$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (19) // <select_gtl_5F_debugger_5F_parser_9>
, END_PRODUCTION
// At index 32 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 35 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 381
, NONTERMINAL (3) // <gtl_step_do_command>
, END_PRODUCTION
// At index 37 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 388
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 39 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 400
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display) // $display$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 42 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 413
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 45 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 427
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list) // $list$
, NONTERMINAL (20) // <select_gtl_5F_debugger_5F_parser_10>
, END_PRODUCTION
// At index 48 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 448
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, NONTERMINAL (21) // <select_gtl_5F_debugger_5F_parser_11>
, NONTERMINAL (22) // <select_gtl_5F_debugger_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 57 : <gtl_step_do_command_list>, in file 'gtl_debugger_parser.ggs', line 481
, NONTERMINAL (23) // <select_gtl_5F_debugger_5F_parser_13>
, END_PRODUCTION
// At index 59 : <gtl_relation_term>, in file 'gtl_debugger_expression_parser.ggs', line 53
, NONTERMINAL (6) // <gtl_relation_factor>
, NONTERMINAL (25) // <select_gtl_5F_debugger_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 62 : <gtl_relation_factor>, in file 'gtl_debugger_expression_parser.ggs', line 69
, NONTERMINAL (7) // <gtl_simple_expression>
, NONTERMINAL (26) // <select_gtl_5F_debugger_5F_expression_5F_parser_2>
, END_PRODUCTION
// At index 65 : <gtl_simple_expression>, in file 'gtl_debugger_expression_parser.ggs', line 117
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 68 : <gtl_term>, in file 'gtl_debugger_expression_parser.ggs', line 162
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 71 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 192
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 75 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 78 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 220
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 81 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 84 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 244
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (9) // <gtl_factor>
, END_PRODUCTION
// At index 87 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes) // $yes$
, END_PRODUCTION
// At index 89 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 269
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no) // $no$
, END_PRODUCTION
// At index 91 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 282
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 93 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 295
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double) // $literal_double$
, END_PRODUCTION
// At index 95 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 308
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 97 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 321
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char) // $literal_char$
, END_PRODUCTION
// At index 99 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 335
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (29) // <select_gtl_5F_debugger_5F_expression_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 105 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 369
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (31) // <select_gtl_5F_debugger_5F_expression_5F_parser_7>
, END_PRODUCTION
// At index 108 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 401
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (34) // <select_gtl_5F_debugger_5F_expression_5F_parser_10>
, END_PRODUCTION
// At index 112 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 420
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof) // $typeof$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 115 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 429
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 117 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 445
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 119 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 461
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum) // $literal_enum$
, END_PRODUCTION
// At index 121 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 477
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 124 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 514
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist) // $emptylist$
, END_PRODUCTION
// At index 126 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 533
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap) // $emptymap$
, END_PRODUCTION
// At index 128 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 552
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof) // $mapof$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (35) // <select_gtl_5F_debugger_5F_expression_5F_parser_11>
, END_PRODUCTION
// At index 132 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 576
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof) // $listof$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 136 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 587
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_) // $@($
, NONTERMINAL (36) // <select_gtl_5F_debugger_5F_expression_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 140 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 606
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_) // $@[$
, NONTERMINAL (38) // <select_gtl_5F_debugger_5F_expression_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 144 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 627
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_) // $@{$
, NONTERMINAL (40) // <select_gtl_5F_debugger_5F_expression_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 148 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 648
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_) // $@!$
, NONTERMINAL (42) // <select_gtl_5F_debugger_5F_expression_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_) // $!$
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 152 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont) // $cont$
, END_PRODUCTION
// At index 154 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue) // $continue$
, END_PRODUCTION
// At index 156 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 158 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 160 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (13) // <select_gtl_5F_debugger_5F_parser_3>
, END_PRODUCTION
// At index 163 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, NONTERMINAL (14) // <select_gtl_5F_debugger_5F_parser_4>
, END_PRODUCTION
// At index 165 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 167 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
, END_PRODUCTION
// At index 168 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 170 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 172 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) // $.$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 178 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 180 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (16) // <select_gtl_5F_debugger_5F_parser_6>
, END_PRODUCTION
// At index 183 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 187 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
, END_PRODUCTION
// At index 188 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 190 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 192 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, NONTERMINAL (3) // <gtl_step_do_command>
, END_PRODUCTION
// At index 194 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not) // $not$
, NONTERMINAL (18) // <select_gtl_5F_debugger_5F_parser_8>
, END_PRODUCTION
// At index 197 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
, END_PRODUCTION
// At index 198 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 200 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all) // $all$
, END_PRODUCTION
// At index 202 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 205 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 208 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 211 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 214 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 217 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 220 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 223 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 226 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 229 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 232 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 235 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
, END_PRODUCTION
// At index 236 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 238 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
, END_PRODUCTION
// At index 239 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
, END_PRODUCTION
// At index 240 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then) // $then$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, NONTERMINAL (21) // <select_gtl_5F_debugger_5F_parser_11>
, END_PRODUCTION
// At index 246 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else) // $else$
, NONTERMINAL (4) // <gtl_step_do_command_list>
, END_PRODUCTION
// At index 249 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
, END_PRODUCTION
// At index 250 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
, END_PRODUCTION
// At index 251 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
, NONTERMINAL (3) // <gtl_step_do_command>
, NONTERMINAL (23) // <select_gtl_5F_debugger_5F_parser_13>
, END_PRODUCTION
// At index 254 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 255 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 259 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (5) // <gtl_relation_term>
, NONTERMINAL (24) // <select_gtl_5F_debugger_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 263 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 264 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (6) // <gtl_relation_factor>
, NONTERMINAL (25) // <select_gtl_5F_debugger_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 268 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 269 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 272 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 275 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 278 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 281 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 284 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (7) // <gtl_simple_expression>
, END_PRODUCTION
// At index 287 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 288 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 292 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 296 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 300 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 304 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (8) // <gtl_term>
, NONTERMINAL (27) // <select_gtl_5F_debugger_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 308 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 309 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 313 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 317 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (9) // <gtl_factor>
, NONTERMINAL (28) // <select_gtl_5F_debugger_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 321 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 322 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_debugger_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 326 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 327 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_debugger_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 331 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 332 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (32) // <select_gtl_5F_debugger_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 336 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_debugger_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 339 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 340 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 341 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_debugger_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 345 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 350 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 351 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 354 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 356 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (37) // <select_gtl_5F_debugger_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 359 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 360 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 361 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (37) // <select_gtl_5F_debugger_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 365 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (39) // <select_gtl_5F_debugger_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 370 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 371 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 372 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (39) // <select_gtl_5F_debugger_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 378 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_debugger_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 383 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 384 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 385 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (41) // <select_gtl_5F_debugger_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 391 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (43) // <select_gtl_5F_debugger_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 394 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 395 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 396 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (43) // <select_gtl_5F_debugger_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 400 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
, END_PRODUCTION
// At index 401 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (45) // <select_gtl_5F_debugger_5F_expression_5F_parser_21>
, NONTERMINAL (44) // <select_gtl_5F_debugger_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 406 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (46) // <select_gtl_5F_debugger_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 411 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
, END_PRODUCTION
// At index 412 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (47) // <select_gtl_5F_debugger_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 417 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
, END_PRODUCTION
// At index 418 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
, END_PRODUCTION
// At index 419 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (47) // <select_gtl_5F_debugger_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 424 : <>, in file '.ggs', line 0
, NONTERMINAL (2) // <gtl_debugger_command>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_debugger_grammar [154] = {
 {"<gtl_expression>", "gtl_debugger_expression_parser", 0}, // at index 0
 {"<gtl_variable>", "gtl_debugger_expression_parser", 3}, // at index 1
 {"<gtl_debugger_command>", "gtl_debugger_parser", 7}, // at index 2
 {"<gtl_debugger_command>", "gtl_debugger_parser", 9}, // at index 3
 {"<gtl_debugger_command>", "gtl_debugger_parser", 11}, // at index 4
 {"<gtl_debugger_command>", "gtl_debugger_parser", 13}, // at index 5
 {"<gtl_debugger_command>", "gtl_debugger_parser", 16}, // at index 6
 {"<gtl_debugger_command>", "gtl_debugger_parser", 18}, // at index 7
 {"<gtl_debugger_command>", "gtl_debugger_parser", 21}, // at index 8
 {"<gtl_debugger_command>", "gtl_debugger_parser", 24}, // at index 9
 {"<gtl_debugger_command>", "gtl_debugger_parser", 27}, // at index 10
 {"<gtl_debugger_command>", "gtl_debugger_parser", 28}, // at index 11
 {"<gtl_debugger_command>", "gtl_debugger_parser", 32}, // at index 12
 {"<gtl_debugger_command>", "gtl_debugger_parser", 35}, // at index 13
 {"<gtl_step_do_command>", "gtl_debugger_parser", 37}, // at index 14
 {"<gtl_step_do_command>", "gtl_debugger_parser", 39}, // at index 15
 {"<gtl_step_do_command>", "gtl_debugger_parser", 42}, // at index 16
 {"<gtl_step_do_command>", "gtl_debugger_parser", 45}, // at index 17
 {"<gtl_step_do_command>", "gtl_debugger_parser", 48}, // at index 18
 {"<gtl_step_do_command_list>", "gtl_debugger_parser", 57}, // at index 19
 {"<gtl_relation_term>", "gtl_debugger_expression_parser", 59}, // at index 20
 {"<gtl_relation_factor>", "gtl_debugger_expression_parser", 62}, // at index 21
 {"<gtl_simple_expression>", "gtl_debugger_expression_parser", 65}, // at index 22
 {"<gtl_term>", "gtl_debugger_expression_parser", 68}, // at index 23
 {"<gtl_factor>", "gtl_debugger_expression_parser", 71}, // at index 24
 {"<gtl_factor>", "gtl_debugger_expression_parser", 75}, // at index 25
 {"<gtl_factor>", "gtl_debugger_expression_parser", 78}, // at index 26
 {"<gtl_factor>", "gtl_debugger_expression_parser", 81}, // at index 27
 {"<gtl_factor>", "gtl_debugger_expression_parser", 84}, // at index 28
 {"<gtl_factor>", "gtl_debugger_expression_parser", 87}, // at index 29
 {"<gtl_factor>", "gtl_debugger_expression_parser", 89}, // at index 30
 {"<gtl_factor>", "gtl_debugger_expression_parser", 91}, // at index 31
 {"<gtl_factor>", "gtl_debugger_expression_parser", 93}, // at index 32
 {"<gtl_factor>", "gtl_debugger_expression_parser", 95}, // at index 33
 {"<gtl_factor>", "gtl_debugger_expression_parser", 97}, // at index 34
 {"<gtl_factor>", "gtl_debugger_expression_parser", 99}, // at index 35
 {"<gtl_factor>", "gtl_debugger_expression_parser", 105}, // at index 36
 {"<gtl_factor>", "gtl_debugger_expression_parser", 108}, // at index 37
 {"<gtl_factor>", "gtl_debugger_expression_parser", 112}, // at index 38
 {"<gtl_factor>", "gtl_debugger_expression_parser", 115}, // at index 39
 {"<gtl_factor>", "gtl_debugger_expression_parser", 117}, // at index 40
 {"<gtl_factor>", "gtl_debugger_expression_parser", 119}, // at index 41
 {"<gtl_factor>", "gtl_debugger_expression_parser", 121}, // at index 42
 {"<gtl_factor>", "gtl_debugger_expression_parser", 124}, // at index 43
 {"<gtl_factor>", "gtl_debugger_expression_parser", 126}, // at index 44
 {"<gtl_factor>", "gtl_debugger_expression_parser", 128}, // at index 45
 {"<gtl_factor>", "gtl_debugger_expression_parser", 132}, // at index 46
 {"<gtl_factor>", "gtl_debugger_expression_parser", 136}, // at index 47
 {"<gtl_factor>", "gtl_debugger_expression_parser", 140}, // at index 48
 {"<gtl_factor>", "gtl_debugger_expression_parser", 144}, // at index 49
 {"<gtl_factor>", "gtl_debugger_expression_parser", 148}, // at index 50
 {"<select_gtl_5F_debugger_5F_parser_0>", "gtl_debugger_parser", 152}, // at index 51
 {"<select_gtl_5F_debugger_5F_parser_0>", "gtl_debugger_parser", 154}, // at index 52
 {"<select_gtl_5F_debugger_5F_parser_1>", "gtl_debugger_parser", 156}, // at index 53
 {"<select_gtl_5F_debugger_5F_parser_1>", "gtl_debugger_parser", 158}, // at index 54
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 160}, // at index 55
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 163}, // at index 56
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 165}, // at index 57
 {"<select_gtl_5F_debugger_5F_parser_2>", "gtl_debugger_parser", 167}, // at index 58
 {"<select_gtl_5F_debugger_5F_parser_3>", "gtl_debugger_parser", 168}, // at index 59
 {"<select_gtl_5F_debugger_5F_parser_3>", "gtl_debugger_parser", 170}, // at index 60
 {"<select_gtl_5F_debugger_5F_parser_4>", "gtl_debugger_parser", 172}, // at index 61
 {"<select_gtl_5F_debugger_5F_parser_4>", "gtl_debugger_parser", 178}, // at index 62
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 180}, // at index 63
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 183}, // at index 64
 {"<select_gtl_5F_debugger_5F_parser_5>", "gtl_debugger_parser", 187}, // at index 65
 {"<select_gtl_5F_debugger_5F_parser_6>", "gtl_debugger_parser", 188}, // at index 66
 {"<select_gtl_5F_debugger_5F_parser_6>", "gtl_debugger_parser", 190}, // at index 67
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 192}, // at index 68
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 194}, // at index 69
 {"<select_gtl_5F_debugger_5F_parser_7>", "gtl_debugger_parser", 197}, // at index 70
 {"<select_gtl_5F_debugger_5F_parser_8>", "gtl_debugger_parser", 198}, // at index 71
 {"<select_gtl_5F_debugger_5F_parser_8>", "gtl_debugger_parser", 200}, // at index 72
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 202}, // at index 73
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 205}, // at index 74
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 208}, // at index 75
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 211}, // at index 76
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 214}, // at index 77
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 217}, // at index 78
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 220}, // at index 79
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 223}, // at index 80
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 226}, // at index 81
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 229}, // at index 82
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 232}, // at index 83
 {"<select_gtl_5F_debugger_5F_parser_9>", "gtl_debugger_parser", 235}, // at index 84
 {"<select_gtl_5F_debugger_5F_parser_10>", "gtl_debugger_parser", 236}, // at index 85
 {"<select_gtl_5F_debugger_5F_parser_10>", "gtl_debugger_parser", 238}, // at index 86
 {"<select_gtl_5F_debugger_5F_parser_11>", "gtl_debugger_parser", 239}, // at index 87
 {"<select_gtl_5F_debugger_5F_parser_11>", "gtl_debugger_parser", 240}, // at index 88
 {"<select_gtl_5F_debugger_5F_parser_12>", "gtl_debugger_parser", 246}, // at index 89
 {"<select_gtl_5F_debugger_5F_parser_12>", "gtl_debugger_parser", 249}, // at index 90
 {"<select_gtl_5F_debugger_5F_parser_13>", "gtl_debugger_parser", 250}, // at index 91
 {"<select_gtl_5F_debugger_5F_parser_13>", "gtl_debugger_parser", 251}, // at index 92
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 254}, // at index 93
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 255}, // at index 94
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_0>", "gtl_debugger_expression_parser", 259}, // at index 95
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_1>", "gtl_debugger_expression_parser", 263}, // at index 96
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_1>", "gtl_debugger_expression_parser", 264}, // at index 97
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 268}, // at index 98
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 269}, // at index 99
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 272}, // at index 100
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 275}, // at index 101
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 278}, // at index 102
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 281}, // at index 103
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_2>", "gtl_debugger_expression_parser", 284}, // at index 104
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 287}, // at index 105
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 288}, // at index 106
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 292}, // at index 107
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 296}, // at index 108
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 300}, // at index 109
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_3>", "gtl_debugger_expression_parser", 304}, // at index 110
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 308}, // at index 111
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 309}, // at index 112
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 313}, // at index 113
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_4>", "gtl_debugger_expression_parser", 317}, // at index 114
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_5>", "gtl_debugger_expression_parser", 321}, // at index 115
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_5>", "gtl_debugger_expression_parser", 322}, // at index 116
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_6>", "gtl_debugger_expression_parser", 326}, // at index 117
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_6>", "gtl_debugger_expression_parser", 327}, // at index 118
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_7>", "gtl_debugger_expression_parser", 331}, // at index 119
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_7>", "gtl_debugger_expression_parser", 332}, // at index 120
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_8>", "gtl_debugger_expression_parser", 336}, // at index 121
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_8>", "gtl_debugger_expression_parser", 339}, // at index 122
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_9>", "gtl_debugger_expression_parser", 340}, // at index 123
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_9>", "gtl_debugger_expression_parser", 341}, // at index 124
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_10>", "gtl_debugger_expression_parser", 345}, // at index 125
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_10>", "gtl_debugger_expression_parser", 350}, // at index 126
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_11>", "gtl_debugger_expression_parser", 351}, // at index 127
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_11>", "gtl_debugger_expression_parser", 354}, // at index 128
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_12>", "gtl_debugger_expression_parser", 356}, // at index 129
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_12>", "gtl_debugger_expression_parser", 359}, // at index 130
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_13>", "gtl_debugger_expression_parser", 360}, // at index 131
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_13>", "gtl_debugger_expression_parser", 361}, // at index 132
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_14>", "gtl_debugger_expression_parser", 365}, // at index 133
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_14>", "gtl_debugger_expression_parser", 370}, // at index 134
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_15>", "gtl_debugger_expression_parser", 371}, // at index 135
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_15>", "gtl_debugger_expression_parser", 372}, // at index 136
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_16>", "gtl_debugger_expression_parser", 378}, // at index 137
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_16>", "gtl_debugger_expression_parser", 383}, // at index 138
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_17>", "gtl_debugger_expression_parser", 384}, // at index 139
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_17>", "gtl_debugger_expression_parser", 385}, // at index 140
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_18>", "gtl_debugger_expression_parser", 391}, // at index 141
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_18>", "gtl_debugger_expression_parser", 394}, // at index 142
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_19>", "gtl_debugger_expression_parser", 395}, // at index 143
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_19>", "gtl_debugger_expression_parser", 396}, // at index 144
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_20>", "gtl_debugger_expression_parser", 400}, // at index 145
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_20>", "gtl_debugger_expression_parser", 401}, // at index 146
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_21>", "gtl_debugger_expression_parser", 406}, // at index 147
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_21>", "gtl_debugger_expression_parser", 411}, // at index 148
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_22>", "gtl_debugger_expression_parser", 412}, // at index 149
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_22>", "gtl_debugger_expression_parser", 417}, // at index 150
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_23>", "gtl_debugger_expression_parser", 418}, // at index 151
 {"<select_gtl_5F_debugger_5F_expression_5F_parser_23>", "gtl_debugger_expression_parser", 419}, // at index 152
 {"<>", "", 424} // at index 153
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_debugger_grammar [154] = {
0, // index 0 : <gtl_expression>, in file 'gtl_debugger_expression_parser.ggs', line 33
3, // index 1 : <gtl_variable>, in file 'gtl_debugger_expression_parser.ggs', line 667
7, // index 2 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 37
9, // index 3 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 52
11, // index 4 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 63
13, // index 5 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 74
16, // index 6 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 92
18, // index 7 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 103
21, // index 8 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 169
24, // index 9 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 207
27, // index 10 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 244
28, // index 11 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 254
32, // index 12 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 368
35, // index 13 : <gtl_debugger_command>, in file 'gtl_debugger_parser.ggs', line 381
37, // index 14 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 388
39, // index 15 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 400
42, // index 16 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 413
45, // index 17 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 427
48, // index 18 : <gtl_step_do_command>, in file 'gtl_debugger_parser.ggs', line 448
57, // index 19 : <gtl_step_do_command_list>, in file 'gtl_debugger_parser.ggs', line 481
59, // index 20 : <gtl_relation_term>, in file 'gtl_debugger_expression_parser.ggs', line 53
62, // index 21 : <gtl_relation_factor>, in file 'gtl_debugger_expression_parser.ggs', line 69
65, // index 22 : <gtl_simple_expression>, in file 'gtl_debugger_expression_parser.ggs', line 117
68, // index 23 : <gtl_term>, in file 'gtl_debugger_expression_parser.ggs', line 162
71, // index 24 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 192
75, // index 25 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 208
78, // index 26 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 220
81, // index 27 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 232
84, // index 28 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 244
87, // index 29 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 256
89, // index 30 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 269
91, // index 31 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 282
93, // index 32 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 295
95, // index 33 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 308
97, // index 34 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 321
99, // index 35 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 335
105, // index 36 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 369
108, // index 37 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 401
112, // index 38 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 420
115, // index 39 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 429
117, // index 40 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 445
119, // index 41 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 461
121, // index 42 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 477
124, // index 43 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 514
126, // index 44 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 533
128, // index 45 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 552
132, // index 46 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 576
136, // index 47 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 587
140, // index 48 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 606
144, // index 49 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 627
148, // index 50 : <gtl_factor>, in file 'gtl_debugger_expression_parser.ggs', line 648
152, // index 51 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
154, // index 52 : <select_gtl_5F_debugger_5F_parser_0>, in file 'gtl_debugger_parser.ggs', line 40
156, // index 53 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
158, // index 54 : <select_gtl_5F_debugger_5F_parser_1>, in file 'gtl_debugger_parser.ggs', line 79
160, // index 55 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
163, // index 56 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
165, // index 57 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
167, // index 58 : <select_gtl_5F_debugger_5F_parser_2>, in file 'gtl_debugger_parser.ggs', line 107
168, // index 59 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
170, // index 60 : <select_gtl_5F_debugger_5F_parser_3>, in file 'gtl_debugger_parser.ggs', line 109
172, // index 61 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
178, // index 62 : <select_gtl_5F_debugger_5F_parser_4>, in file 'gtl_debugger_parser.ggs', line 124
180, // index 63 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
183, // index 64 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
187, // index 65 : <select_gtl_5F_debugger_5F_parser_5>, in file 'gtl_debugger_parser.ggs', line 173
188, // index 66 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
190, // index 67 : <select_gtl_5F_debugger_5F_parser_6>, in file 'gtl_debugger_parser.ggs', line 175
192, // index 68 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
194, // index 69 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
197, // index 70 : <select_gtl_5F_debugger_5F_parser_7>, in file 'gtl_debugger_parser.ggs', line 212
198, // index 71 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
200, // index 72 : <select_gtl_5F_debugger_5F_parser_8>, in file 'gtl_debugger_parser.ggs', line 221
202, // index 73 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
205, // index 74 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
208, // index 75 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
211, // index 76 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
214, // index 77 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
217, // index 78 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
220, // index 79 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
223, // index 80 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
226, // index 81 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
229, // index 82 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
232, // index 83 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
235, // index 84 : <select_gtl_5F_debugger_5F_parser_9>, in file 'gtl_debugger_parser.ggs', line 259
236, // index 85 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
238, // index 86 : <select_gtl_5F_debugger_5F_parser_10>, in file 'gtl_debugger_parser.ggs', line 432
239, // index 87 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
240, // index 88 : <select_gtl_5F_debugger_5F_parser_11>, in file 'gtl_debugger_parser.ggs', line 455
246, // index 89 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
249, // index 90 : <select_gtl_5F_debugger_5F_parser_12>, in file 'gtl_debugger_parser.ggs', line 465
250, // index 91 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
251, // index 92 : <select_gtl_5F_debugger_5F_parser_13>, in file 'gtl_debugger_parser.ggs', line 486
254, // index 93 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
255, // index 94 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
259, // index 95 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>, in file 'gtl_debugger_expression_parser.ggs', line 37
263, // index 96 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
264, // index 97 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>, in file 'gtl_debugger_expression_parser.ggs', line 57
268, // index 98 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
269, // index 99 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
272, // index 100 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
275, // index 101 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
278, // index 102 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
281, // index 103 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
284, // index 104 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>, in file 'gtl_debugger_expression_parser.ggs', line 73
287, // index 105 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
288, // index 106 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
292, // index 107 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
296, // index 108 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
300, // index 109 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
304, // index 110 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>, in file 'gtl_debugger_expression_parser.ggs', line 121
308, // index 111 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
309, // index 112 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
313, // index 113 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
317, // index 114 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>, in file 'gtl_debugger_expression_parser.ggs', line 166
321, // index 115 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
322, // index 116 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>, in file 'gtl_debugger_expression_parser.ggs', line 348
326, // index 117 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
327, // index 118 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>, in file 'gtl_debugger_expression_parser.ggs', line 351
331, // index 119 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
332, // index 120 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>, in file 'gtl_debugger_expression_parser.ggs', line 373
336, // index 121 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
339, // index 122 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>, in file 'gtl_debugger_expression_parser.ggs', line 381
340, // index 123 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
341, // index 124 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>, in file 'gtl_debugger_expression_parser.ggs', line 382
345, // index 125 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
350, // index 126 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>, in file 'gtl_debugger_expression_parser.ggs', line 405
351, // index 127 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
354, // index 128 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>, in file 'gtl_debugger_expression_parser.ggs', line 557
356, // index 129 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
359, // index 130 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>, in file 'gtl_debugger_expression_parser.ggs', line 592
360, // index 131 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
361, // index 132 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>, in file 'gtl_debugger_expression_parser.ggs', line 593
365, // index 133 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
370, // index 134 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>, in file 'gtl_debugger_expression_parser.ggs', line 611
371, // index 135 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
372, // index 136 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>, in file 'gtl_debugger_expression_parser.ggs', line 612
378, // index 137 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
383, // index 138 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>, in file 'gtl_debugger_expression_parser.ggs', line 632
384, // index 139 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
385, // index 140 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>, in file 'gtl_debugger_expression_parser.ggs', line 633
391, // index 141 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
394, // index 142 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>, in file 'gtl_debugger_expression_parser.ggs', line 653
395, // index 143 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
396, // index 144 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>, in file 'gtl_debugger_expression_parser.ggs', line 654
400, // index 145 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
401, // index 146 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>, in file 'gtl_debugger_expression_parser.ggs', line 671
406, // index 147 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
411, // index 148 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>, in file 'gtl_debugger_expression_parser.ggs', line 673
412, // index 149 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
417, // index 150 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>, in file 'gtl_debugger_expression_parser.ggs', line 678
418, // index 151 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
419, // index 152 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>, in file 'gtl_debugger_expression_parser.ggs', line 683
424 // index 153 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_gtl_debugger_grammar [50] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_debugger_command>
14, // at 3 : <gtl_step_do_command>
19, // at 4 : <gtl_step_do_command_list>
20, // at 5 : <gtl_relation_term>
21, // at 6 : <gtl_relation_factor>
22, // at 7 : <gtl_simple_expression>
23, // at 8 : <gtl_term>
24, // at 9 : <gtl_factor>
51, // at 10 : <select_gtl_5F_debugger_5F_parser_0>
53, // at 11 : <select_gtl_5F_debugger_5F_parser_1>
55, // at 12 : <select_gtl_5F_debugger_5F_parser_2>
59, // at 13 : <select_gtl_5F_debugger_5F_parser_3>
61, // at 14 : <select_gtl_5F_debugger_5F_parser_4>
63, // at 15 : <select_gtl_5F_debugger_5F_parser_5>
66, // at 16 : <select_gtl_5F_debugger_5F_parser_6>
68, // at 17 : <select_gtl_5F_debugger_5F_parser_7>
71, // at 18 : <select_gtl_5F_debugger_5F_parser_8>
73, // at 19 : <select_gtl_5F_debugger_5F_parser_9>
85, // at 20 : <select_gtl_5F_debugger_5F_parser_10>
87, // at 21 : <select_gtl_5F_debugger_5F_parser_11>
89, // at 22 : <select_gtl_5F_debugger_5F_parser_12>
91, // at 23 : <select_gtl_5F_debugger_5F_parser_13>
93, // at 24 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
96, // at 25 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
98, // at 26 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
105, // at 27 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
111, // at 28 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
115, // at 29 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
117, // at 30 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
119, // at 31 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
121, // at 32 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
123, // at 33 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
125, // at 34 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
127, // at 35 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
129, // at 36 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
131, // at 37 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
133, // at 38 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
135, // at 39 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
137, // at 40 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
139, // at 41 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
141, // at 42 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
143, // at 43 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
145, // at 44 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
147, // at 45 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
149, // at 46 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
151, // at 47 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
153, // at 48 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_gtl_debugger_grammar [] = {
// At index 0 : <gtl_expression> only one production, no choice
  -1,
// At index 1 : <gtl_variable> only one production, no choice
  -1,
// At index 2 : <gtl_debugger_command>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_help, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_step, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_load, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_hist, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_break, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_watch, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_do, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_let, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_unlet, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 12
  -1,
// At index 32 : <gtl_step_do_command>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 5
  -1,
// At index 43 : <gtl_step_do_command_list> only one production, no choice
  -1,
// At index 44 : <gtl_relation_term> only one production, no choice
  -1,
// At index 45 : <gtl_relation_factor> only one production, no choice
  -1,
// At index 46 : <gtl_simple_expression> only one production, no choice
  -1,
// At index 47 : <gtl_term> only one production, no choice
  -1,
// At index 48 : <gtl_factor>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 12
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 13
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, -1, // Choice 14
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, -1, // Choice 15
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, -1, // Choice 16
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, -1, // Choice 17
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, -1, // Choice 18
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, -1, // Choice 19
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, -1, // Choice 20
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, -1, // Choice 21
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, -1, // Choice 22
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, -1, // Choice 23
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, -1, // Choice 24
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, -1, // Choice 25
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, -1, // Choice 26
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 27
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 103 : <select_gtl_5F_debugger_5F_parser_0>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_cont, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_continue, -1, // Choice 2
  -1,
// At index 108 : <select_gtl_5F_debugger_5F_parser_1>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 2
  -1,
// At index 113 : <select_gtl_5F_debugger_5F_parser_2>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 4
  -1,
// At index 123 : <select_gtl_5F_debugger_5F_parser_3>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 128 : <select_gtl_5F_debugger_5F_parser_4>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 2
  -1,
// At index 133 : <select_gtl_5F_debugger_5F_parser_5>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 3
  -1,
// At index 140 : <select_gtl_5F_debugger_5F_parser_6>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 145 : <select_gtl_5F_debugger_5F_parser_7>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 3
  -1,
// At index 156 : <select_gtl_5F_debugger_5F_parser_8>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_all, -1, // Choice 2
  -1,
// At index 161 : <select_gtl_5F_debugger_5F_parser_9>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, -1, // Choice 7
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, -1, // Choice 8
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, -1, // Choice 9
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, -1, // Choice 10
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, -1, // Choice 11
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 12
  -1,
// At index 186 : <select_gtl_5F_debugger_5F_parser_10>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 199 : <select_gtl_5F_debugger_5F_parser_11>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 205 : <select_gtl_5F_debugger_5F_parser_12>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 210 : <select_gtl_5F_debugger_5F_parser_13>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, -1, // Choice 2
  -1,
// At index 221 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 244 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 267 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 301 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 339 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 378 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 383 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 388 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 426 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 457 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 462 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 500 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 505 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 536 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 541 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 546 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 551 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 556 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 561 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_string, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_not, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_yes, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_no, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_exists, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_true, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_false, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_listof, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__40__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 592 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 597 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 648 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 700 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 752 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_debugger_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__28_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__29_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_variables, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_display, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_print, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_list, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_if, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_then, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_else, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_end, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__26_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_mod, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_default, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_by, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__21_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_debugger_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_debugger_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 804 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_gtl_debugger_grammar [50] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_debugger_command>
32, // at 3 : <gtl_step_do_command>
43, // at 4 : <gtl_step_do_command_list>
44, // at 5 : <gtl_relation_term>
45, // at 6 : <gtl_relation_factor>
46, // at 7 : <gtl_simple_expression>
47, // at 8 : <gtl_term>
48, // at 9 : <gtl_factor>
103, // at 10 : <select_gtl_5F_debugger_5F_parser_0>
108, // at 11 : <select_gtl_5F_debugger_5F_parser_1>
113, // at 12 : <select_gtl_5F_debugger_5F_parser_2>
123, // at 13 : <select_gtl_5F_debugger_5F_parser_3>
128, // at 14 : <select_gtl_5F_debugger_5F_parser_4>
133, // at 15 : <select_gtl_5F_debugger_5F_parser_5>
140, // at 16 : <select_gtl_5F_debugger_5F_parser_6>
145, // at 17 : <select_gtl_5F_debugger_5F_parser_7>
156, // at 18 : <select_gtl_5F_debugger_5F_parser_8>
161, // at 19 : <select_gtl_5F_debugger_5F_parser_9>
186, // at 20 : <select_gtl_5F_debugger_5F_parser_10>
199, // at 21 : <select_gtl_5F_debugger_5F_parser_11>
205, // at 22 : <select_gtl_5F_debugger_5F_parser_12>
210, // at 23 : <select_gtl_5F_debugger_5F_parser_13>
221, // at 24 : <select_gtl_5F_debugger_5F_expression_5F_parser_0>
244, // at 25 : <select_gtl_5F_debugger_5F_expression_5F_parser_1>
267, // at 26 : <select_gtl_5F_debugger_5F_expression_5F_parser_2>
301, // at 27 : <select_gtl_5F_debugger_5F_expression_5F_parser_3>
339, // at 28 : <select_gtl_5F_debugger_5F_expression_5F_parser_4>
378, // at 29 : <select_gtl_5F_debugger_5F_expression_5F_parser_5>
383, // at 30 : <select_gtl_5F_debugger_5F_expression_5F_parser_6>
388, // at 31 : <select_gtl_5F_debugger_5F_expression_5F_parser_7>
426, // at 32 : <select_gtl_5F_debugger_5F_expression_5F_parser_8>
457, // at 33 : <select_gtl_5F_debugger_5F_expression_5F_parser_9>
462, // at 34 : <select_gtl_5F_debugger_5F_expression_5F_parser_10>
500, // at 35 : <select_gtl_5F_debugger_5F_expression_5F_parser_11>
505, // at 36 : <select_gtl_5F_debugger_5F_expression_5F_parser_12>
536, // at 37 : <select_gtl_5F_debugger_5F_expression_5F_parser_13>
541, // at 38 : <select_gtl_5F_debugger_5F_expression_5F_parser_14>
546, // at 39 : <select_gtl_5F_debugger_5F_expression_5F_parser_15>
551, // at 40 : <select_gtl_5F_debugger_5F_expression_5F_parser_16>
556, // at 41 : <select_gtl_5F_debugger_5F_expression_5F_parser_17>
561, // at 42 : <select_gtl_5F_debugger_5F_expression_5F_parser_18>
592, // at 43 : <select_gtl_5F_debugger_5F_expression_5F_parser_19>
597, // at 44 : <select_gtl_5F_debugger_5F_expression_5F_parser_20>
648, // at 45 : <select_gtl_5F_debugger_5F_expression_5F_parser_21>
700, // at 46 : <select_gtl_5F_debugger_5F_expression_5F_parser_22>
752, // at 47 : <select_gtl_5F_debugger_5F_expression_5F_parser_23>
804, // at 48 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_expression' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_expression_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_variable' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_variable_i32_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_debugger_command' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_debugger_5F_command_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_debugger_5F_command_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i0_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i1_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i2_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i3_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i4_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i5_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i6_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i7_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i8_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i9_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i10_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_debugger_5F_command_i11_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_gtl_5F_debugger_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                    gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlInstruction &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                                      gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_gtl_5F_debugger_5F_grammar grammar ;
        grammar.nt_gtl_5F_debugger_5F_command_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlInstruction &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_gtl_5F_debugger_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_debugger_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_gtl_debugger_grammar, gProductionNames_gtl_debugger_grammar, gProductionIndexes_gtl_debugger_grammar,
                                                    gFirstProductionIndexes_gtl_debugger_grammar, gDecision_gtl_debugger_grammar, gDecisionIndexes_gtl_debugger_grammar, 424) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_gtl_5F_debugger_5F_grammar grammar ;
      grammar.nt_gtl_5F_debugger_5F_command_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_step_do_command' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i12_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i13_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i14_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i15_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_i16_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'gtl_step_do_command_list' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_5F_list_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_step_5F_do_5F_command_5F_list_ (GALGAS_gtlInstructionList & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_parser_gtl_5F_step_5F_do_5F_command_5F_list_i17_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_relation_term' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_relation_factor' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'gtl_term' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_term_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_term_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_factor' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_parse(inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_parse(inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_parse(inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_parse(inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_parse(inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_parse(inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_parse(inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_parse(inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_parse(inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_parse(inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_parse(inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_parse(inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_parse(inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_parse(inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_parse(inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_debugger_5F_grammar::nt_gtl_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i8_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i9_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i10_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i11_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i12_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i13_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i14_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i15_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i16_(parameter_1, inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i20_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i21_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i22_(parameter_1, inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i23_(parameter_1, inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i24_(parameter_1, inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i25_(parameter_1, inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i26_(parameter_1, inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i27_(parameter_1, inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i28_(parameter_1, inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i29_(parameter_1, inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i30_(parameter_1, inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_debugger_5F_expression_5F_parser_gtl_5F_factor_i31_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_0' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_0 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_1' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_1 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_2' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_2 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_3' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_3 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_4' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_4 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_5' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_5 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_6' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_6 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_7' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_7 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_8' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_8 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                       'select_gtl_5F_debugger_5F_parser_9' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_9 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_10' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_10 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_11' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_11 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_12' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_12 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_debugger_5F_parser_13' added non terminal implementation                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_parser_13 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_0' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_1' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_2' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_3' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_4' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_5' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_6' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_7' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_8' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                'select_gtl_5F_debugger_5F_expression_5F_parser_9' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_10' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_11' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_12' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_13' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_14' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_15' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_16' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_17' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_18' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_19' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_20' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_21' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_22' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//               'select_gtl_5F_debugger_5F_expression_5F_parser_23' added non terminal implementation                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_debugger_5F_grammar::select_gtl_5F_debugger_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_debugger_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (void) :
mProperty_data () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList_2D_element::~ GALGAS_gtlDataList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList_2D_element::GALGAS_gtlDataList_2D_element (const GALGAS_gtlData & inOperand0) :
mProperty_data (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList_2D_element GALGAS_gtlDataList_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlDataList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlDataList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlDataList_2D_element::objectCompare (const GALGAS_gtlDataList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_data.objectCompare (inOperand.mProperty_data) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlDataList_2D_element::isValid (void) const {
  return mProperty_data.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlDataList_2D_element::drop (void) {
  mProperty_data.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlDataList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @gtlDataList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_data.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData GALGAS_gtlDataList_2D_element::getter_data (UNUSED_LOCATION_ARGS) const {
  return mProperty_data ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlDataList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlDataList_2D_element ("gtlDataList-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlDataList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlDataList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlDataList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlDataList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (void) :
mProperty_lkey (),
mProperty_value () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap_2D_element::~ GALGAS_gtlVarMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap_2D_element::GALGAS_gtlVarMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_gtlData & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_value (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlVarMap_2D_element GALGAS_gtlVarMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_gtlData & inOperand1 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlVarMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlVarMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlVarMap_2D_element::objectCompare (const GALGAS_gtlVarMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlVarMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_value.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlVarMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_value.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlVarMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlVarMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlVarMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData GALGAS_gtlVarMap_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlVarMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlVarMap_2D_element ("gtlVarMap-element",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlVarMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlVarMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlVarMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlVarMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (void) :
mProperty_lkey (),
mProperty_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap_2D_element::~ GALGAS_gtlExpressionMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap_2D_element::GALGAS_gtlExpressionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_gtlExpression & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_expression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionMap_2D_element GALGAS_gtlExpressionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_gtlExpression & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlExpressionMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlExpressionMap_2D_element::objectCompare (const GALGAS_gtlExpressionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlExpressionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_expression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpressionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_expression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpressionMap_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlExpressionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlExpressionMap_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_expression ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlExpressionMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ("gtlExpressionMap-element",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlExpressionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlExpressionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (void) :
mProperty_lkey (),
mProperty_aTemplate () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap_2D_element::~ GALGAS_gtlTemplateMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap_2D_element::GALGAS_gtlTemplateMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_gtlTemplate & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_aTemplate (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlTemplateMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_gtlTemplate::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplateMap_2D_element GALGAS_gtlTemplateMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_gtlTemplate & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlTemplateMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlTemplateMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlTemplateMap_2D_element::objectCompare (const GALGAS_gtlTemplateMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_aTemplate.objectCompare (inOperand.mProperty_aTemplate) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlTemplateMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_aTemplate.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlTemplateMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_aTemplate.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlTemplateMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @gtlTemplateMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_aTemplate.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlTemplateMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlTemplate GALGAS_gtlTemplateMap_2D_element::getter_aTemplate (UNUSED_LOCATION_ARGS) const {
  return mProperty_aTemplate ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlTemplateMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ("gtlTemplateMap-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlTemplateMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlTemplateMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlTemplateMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlTemplateMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list_2D_element::GALGAS_list_2D_element (void) :
mProperty_value () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list_2D_element::~ GALGAS_list_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list_2D_element::GALGAS_list_2D_element (const GALGAS_gtlData & inOperand0) :
mProperty_value (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_list_2D_element GALGAS_list_2D_element::constructor_new (const GALGAS_gtlData & inOperand0 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_list_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_list_2D_element::objectCompare (const GALGAS_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_value.objectCompare (inOperand.mProperty_value) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_list_2D_element::isValid (void) const {
  return mProperty_value.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_list_2D_element::drop (void) {
  mProperty_value.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_list_2D_element::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlData GALGAS_list_2D_element::getter_value (UNUSED_LOCATION_ARGS) const {
  return mProperty_value ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@list-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_list_2D_element ("list-element",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_list_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_list_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element::GALGAS_lstringset_2D_element (void) :
mProperty_lkey () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element::~ GALGAS_lstringset_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element::GALGAS_lstringset_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element GALGAS_lstringset_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringset_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element GALGAS_lstringset_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringset_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lstringset_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lstringset_2D_element::objectCompare (const GALGAS_lstringset_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lstringset_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lstringset_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lstringset_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @lstringset-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lstringset_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@lstringset-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringset_2D_element ("lstringset-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lstringset_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringset_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lstringset_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringset_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringset_2D_element GALGAS_lstringset_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lstringset_2D_element result ;
  const GALGAS_lstringset_2D_element * p = (const GALGAS_lstringset_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringset_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringset-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (void) :
mProperty_condition (),
mProperty_instructionList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlThenElsifStatementList_2D_element::~ GALGAS_gtlThenElsifStatementList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlThenElsifStatementList_2D_element::GALGAS_gtlThenElsifStatementList_2D_element (const GALGAS_gtlExpression & inOperand0,
                                                                                          const GALGAS_gtlInstructionList & inOperand1) :
mProperty_condition (inOperand0),
mProperty_instructionList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlThenElsifStatementList_2D_element GALGAS_gtlThenElsifStatementList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0,
                                                                                                          const GALGAS_gtlInstructionList & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlThenElsifStatementList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlThenElsifStatementList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlThenElsifStatementList_2D_element::objectCompare (const GALGAS_gtlThenElsifStatementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_condition.objectCompare (inOperand.mProperty_condition) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_instructionList.objectCompare (inOperand.mProperty_instructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlThenElsifStatementList_2D_element::isValid (void) const {
  return mProperty_condition.isValid () && mProperty_instructionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlThenElsifStatementList_2D_element::drop (void) {
  mProperty_condition.drop () ;
  mProperty_instructionList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlThenElsifStatementList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @gtlThenElsifStatementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_condition.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlThenElsifStatementList_2D_element::getter_condition (UNUSED_LOCATION_ARGS) const {
  return mProperty_condition ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlInstructionList GALGAS_gtlThenElsifStatementList_2D_element::getter_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_instructionList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlThenElsifStatementList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ("gtlThenElsifStatementList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlThenElsifStatementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlThenElsifStatementList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlThenElsifStatementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlThenElsifStatementList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (void) :
mProperty_key (),
mProperty_order () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element::~ GALGAS_sortingKeyList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element::GALGAS_sortingKeyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lsint & inOperand1) :
mProperty_key (inOperand0),
mProperty_order (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_sortingKeyList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lsint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortingKeyList_2D_element GALGAS_sortingKeyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lsint & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sortingKeyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sortingKeyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortingKeyList_2D_element::objectCompare (const GALGAS_sortingKeyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_order.objectCompare (inOperand.mProperty_order) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_sortingKeyList_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_order.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_order.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sortingKeyList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @sortingKeyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_order.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortingKeyList_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mProperty_key ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint GALGAS_sortingKeyList_2D_element::getter_order (UNUSED_LOCATION_ARGS) const {
  return mProperty_order ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@sortingKeyList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortingKeyList_2D_element ("sortingKeyList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortingKeyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortingKeyList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortingKeyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortingKeyList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (void) :
mProperty_typed (),
mProperty_type (),
mProperty_name () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlArgumentList_2D_element::~ GALGAS_gtlArgumentList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlArgumentList_2D_element::GALGAS_gtlArgumentList_2D_element (const GALGAS_bool & inOperand0,
                                                                      const GALGAS_type & inOperand1,
                                                                      const GALGAS_lstring & inOperand2) :
mProperty_typed (inOperand0),
mProperty_type (inOperand1),
mProperty_name (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlArgumentList_2D_element::objectCompare (const GALGAS_gtlArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_typed.objectCompare (inOperand.mProperty_typed) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlArgumentList_2D_element::isValid (void) const {
  return mProperty_typed.isValid () && mProperty_type.isValid () && mProperty_name.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlArgumentList_2D_element::drop (void) {
  mProperty_typed.drop () ;
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlArgumentList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @gtlArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_typed.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_gtlArgumentList_2D_element::getter_typed (UNUSED_LOCATION_ARGS) const {
  return mProperty_typed ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_type GALGAS_gtlArgumentList_2D_element::getter_type (UNUSED_LOCATION_ARGS) const {
  return mProperty_type ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlArgumentList_2D_element::getter_name (UNUSED_LOCATION_ARGS) const {
  return mProperty_name ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlArgumentList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ("gtlArgumentList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlArgumentList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (void) :
mProperty_lkey (),
mProperty_procedure () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcMap_2D_element::~ GALGAS_gtlProcMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcMap_2D_element::GALGAS_gtlProcMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlProcedure & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_procedure (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlProcMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlProcedure::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcMap_2D_element GALGAS_gtlProcMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlProcedure & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlProcMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlProcMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlProcMap_2D_element::objectCompare (const GALGAS_gtlProcMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_procedure.objectCompare (inOperand.mProperty_procedure) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlProcMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_procedure.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlProcMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_procedure.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlProcMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlProcMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_procedure.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlProcMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlProcedure GALGAS_gtlProcMap_2D_element::getter_procedure (UNUSED_LOCATION_ARGS) const {
  return mProperty_procedure ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlProcMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlProcMap_2D_element ("gtlProcMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlProcMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlProcMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlProcMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlProcMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (void) :
mProperty_lkey (),
mProperty_function () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap_2D_element::~ GALGAS_gtlFuncMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap_2D_element::GALGAS_gtlFuncMap_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_gtlFunction & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_function (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_gtlFuncMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_gtlFunction::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFuncMap_2D_element GALGAS_gtlFuncMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_gtlFunction & inOperand1 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlFuncMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlFuncMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlFuncMap_2D_element::objectCompare (const GALGAS_gtlFuncMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_function.objectCompare (inOperand.mProperty_function) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlFuncMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_function.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlFuncMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_function.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlFuncMap_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @gtlFuncMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_function.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlFuncMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlFunction GALGAS_gtlFuncMap_2D_element::getter_function (UNUSED_LOCATION_ARGS) const {
  return mProperty_function ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlFuncMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ("gtlFuncMap-element",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlFuncMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlFuncMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlFuncMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlFuncMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_theGetter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap_2D_element::~ GALGAS_gtlGetterMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap_2D_element::GALGAS_gtlGetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlGetter & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_theGetter (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetterMap_2D_element GALGAS_gtlGetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlGetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlGetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlGetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlGetterMap_2D_element::objectCompare (const GALGAS_gtlGetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_theGetter.objectCompare (inOperand.mProperty_theGetter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlGetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_theGetter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlGetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_theGetter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlGetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlGetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_theGetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlGetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlGetter GALGAS_gtlGetterMap_2D_element::getter_theGetter (UNUSED_LOCATION_ARGS) const {
  return mProperty_theGetter ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlGetterMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ("gtlGetterMap-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlGetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlGetterMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlGetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlGetterMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (void) :
mProperty_lkey (),
mProperty_theSetter () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap_2D_element::~ GALGAS_gtlSetterMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap_2D_element::GALGAS_gtlSetterMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_gtlSetter & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_theSetter (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetterMap_2D_element GALGAS_gtlSetterMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_gtlSetter & inOperand1 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlSetterMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_gtlSetterMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlSetterMap_2D_element::objectCompare (const GALGAS_gtlSetterMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_theSetter.objectCompare (inOperand.mProperty_theSetter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlSetterMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_theSetter.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlSetterMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_theSetter.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlSetterMap_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @gtlSetterMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_theSetter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlSetterMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlSetter GALGAS_gtlSetterMap_2D_element::getter_theSetter (UNUSED_LOCATION_ARGS) const {
  return mProperty_theSetter ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlSetterMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ("gtlSetterMap-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlSetterMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlSetterMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlSetterMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlSetterMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (void) :
mProperty_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList_2D_element::~ GALGAS_gtlExpressionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList_2D_element::GALGAS_gtlExpressionList_2D_element (const GALGAS_gtlExpression & inOperand0) :
mProperty_expression (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpressionList_2D_element GALGAS_gtlExpressionList_2D_element::constructor_new (const GALGAS_gtlExpression & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_gtlExpressionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_gtlExpressionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_gtlExpressionList_2D_element::objectCompare (const GALGAS_gtlExpressionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_gtlExpressionList_2D_element::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpressionList_2D_element::drop (void) {
  mProperty_expression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlExpressionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @gtlExpressionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlExpression GALGAS_gtlExpressionList_2D_element::getter_expression (UNUSED_LOCATION_ARGS) const {
  return mProperty_expression ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@gtlExpressionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ("gtlExpressionList-element",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlExpressionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlExpressionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlExpressionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlExpressionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_gtlContext::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_gtlContext * p = (const cPtr_gtlContext *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_gtlContext) ;
  if (kOperandEqual == result) {
    result = mProperty_prefix.objectCompare (p->mProperty_prefix) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_path.objectCompare (p->mProperty_path) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_templateDirectory.objectCompare (p->mProperty_templateDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_userTemplateDirectory.objectCompare (p->mProperty_userTemplateDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_templateExtension.objectCompare (p->mProperty_templateExtension) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_importPath.objectCompare (p->mProperty_importPath) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_inputVars.objectCompare (p->mProperty_inputVars) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_propagateError.objectCompare (p->mProperty_propagateError) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_debuggerContext.objectCompare (p->mProperty_debuggerContext) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_gtlContext::objectCompare (const GALGAS_gtlContext & inOperand) const {
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

GALGAS_gtlContext::GALGAS_gtlContext (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContext GALGAS_gtlContext::constructor_default (LOCATION_ARGS) {
  return GALGAS_gtlContext::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_string::constructor_default (HERE),
                                             GALGAS_stringlist::constructor_emptyList (HERE),
                                             GALGAS_gtlDataList::constructor_emptyList (HERE),
                                             GALGAS_bool::constructor_default (HERE),
                                             GALGAS_debuggerContext::constructor_default (HERE)
                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContext::GALGAS_gtlContext (const cPtr_gtlContext * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_gtlContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContext GALGAS_gtlContext::constructor_new (const GALGAS_lstring & inAttribute_prefix,
                                                      const GALGAS_string & inAttribute_path,
                                                      const GALGAS_string & inAttribute_templateDirectory,
                                                      const GALGAS_string & inAttribute_userTemplateDirectory,
                                                      const GALGAS_string & inAttribute_templateExtension,
                                                      const GALGAS_stringlist & inAttribute_importPath,
                                                      const GALGAS_gtlDataList & inAttribute_inputVars,
                                                      const GALGAS_bool & inAttribute_propagateError,
                                                      const GALGAS_debuggerContext & inAttribute_debuggerContext
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_gtlContext result ;
  if (inAttribute_prefix.isValid () && inAttribute_path.isValid () && inAttribute_templateDirectory.isValid () && inAttribute_userTemplateDirectory.isValid () && inAttribute_templateExtension.isValid () && inAttribute_importPath.isValid () && inAttribute_inputVars.isValid () && inAttribute_propagateError.isValid () && inAttribute_debuggerContext.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_gtlContext (inAttribute_prefix, inAttribute_path, inAttribute_templateDirectory, inAttribute_userTemplateDirectory, inAttribute_templateExtension, inAttribute_importPath, inAttribute_inputVars, inAttribute_propagateError, inAttribute_debuggerContext COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_gtlContext::getter_prefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_prefix ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_gtlContext::getter_prefix (UNUSED_LOCATION_ARGS) const {
  return mProperty_prefix ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlContext::getter_path (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_path ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlContext::getter_path (UNUSED_LOCATION_ARGS) const {
  return mProperty_path ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlContext::getter_templateDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_templateDirectory ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlContext::getter_templateDirectory (UNUSED_LOCATION_ARGS) const {
  return mProperty_templateDirectory ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlContext::getter_userTemplateDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_userTemplateDirectory ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlContext::getter_userTemplateDirectory (UNUSED_LOCATION_ARGS) const {
  return mProperty_userTemplateDirectory ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_gtlContext::getter_templateExtension (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_templateExtension ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_gtlContext::getter_templateExtension (UNUSED_LOCATION_ARGS) const {
  return mProperty_templateExtension ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_gtlContext::getter_importPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_importPath ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_gtlContext::getter_importPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_importPath ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList GALGAS_gtlContext::getter_inputVars (UNUSED_LOCATION_ARGS) const {
  GALGAS_gtlDataList result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_inputVars ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlDataList cPtr_gtlContext::getter_inputVars (UNUSED_LOCATION_ARGS) const {
  return mProperty_inputVars ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_gtlContext::getter_propagateError (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_propagateError ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_gtlContext::getter_propagateError (UNUSED_LOCATION_ARGS) const {
  return mProperty_propagateError ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext GALGAS_gtlContext::getter_debuggerContext (UNUSED_LOCATION_ARGS) const {
  GALGAS_debuggerContext result ;
  if (NULL != mObjectPtr) {
    const cPtr_gtlContext * p = (const cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    result = p->mProperty_debuggerContext ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_debuggerContext cPtr_gtlContext::getter_debuggerContext (UNUSED_LOCATION_ARGS) const {
  return mProperty_debuggerContext ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setPrefix (GALGAS_lstring inValue
                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_prefix = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setPrefix (GALGAS_lstring inValue
                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_prefix = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setPath (GALGAS_string inValue
                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_path = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setPath (GALGAS_string inValue
                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_path = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setTemplateDirectory (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_templateDirectory = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setTemplateDirectory (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_templateDirectory = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setUserTemplateDirectory (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_userTemplateDirectory = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setUserTemplateDirectory (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_userTemplateDirectory = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setTemplateExtension (GALGAS_string inValue
                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_templateExtension = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setTemplateExtension (GALGAS_string inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_templateExtension = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setImportPath (GALGAS_stringlist inValue
                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_importPath = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setImportPath (GALGAS_stringlist inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_importPath = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setInputVars (GALGAS_gtlDataList inValue
                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_inputVars = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setInputVars (GALGAS_gtlDataList inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_inputVars = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setPropagateError (GALGAS_bool inValue
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_propagateError = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setPropagateError (GALGAS_bool inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_propagateError = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_gtlContext::setter_setDebuggerContext (GALGAS_debuggerContext inValue
                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_gtlContext * p = (cPtr_gtlContext *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_gtlContext) ;
    p->mProperty_debuggerContext = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_gtlContext::setter_setDebuggerContext (GALGAS_debuggerContext inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_debuggerContext = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @gtlContext class
//----------------------------------------------------------------------------------------------------------------------

cPtr_gtlContext::cPtr_gtlContext (const GALGAS_lstring & in_prefix,
                                  const GALGAS_string & in_path,
                                  const GALGAS_string & in_templateDirectory,
                                  const GALGAS_string & in_userTemplateDirectory,
                                  const GALGAS_string & in_templateExtension,
                                  const GALGAS_stringlist & in_importPath,
                                  const GALGAS_gtlDataList & in_inputVars,
                                  const GALGAS_bool & in_propagateError,
                                  const GALGAS_debuggerContext & in_debuggerContext
                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_prefix (in_prefix),
mProperty_path (in_path),
mProperty_templateDirectory (in_templateDirectory),
mProperty_userTemplateDirectory (in_userTemplateDirectory),
mProperty_templateExtension (in_templateExtension),
mProperty_importPath (in_importPath),
mProperty_inputVars (in_inputVars),
mProperty_propagateError (in_propagateError),
mProperty_debuggerContext (in_debuggerContext) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_gtlContext::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContext ;
}

void cPtr_gtlContext::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "[@gtlContext:" ;
  mProperty_prefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_path.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_templateDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_userTemplateDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_templateExtension.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_importPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_inputVars.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_propagateError.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_debuggerContext.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_gtlContext::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_gtlContext (mProperty_prefix, mProperty_path, mProperty_templateDirectory, mProperty_userTemplateDirectory, mProperty_templateExtension, mProperty_importPath, mProperty_inputVars, mProperty_propagateError, mProperty_debuggerContext COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@gtlContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_gtlContext ("gtlContext",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_gtlContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gtlContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_gtlContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_gtlContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_gtlContext GALGAS_gtlContext::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_gtlContext result ;
  const GALGAS_gtlContext * p = (const GALGAS_gtlContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_gtlContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gtlContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext addModulePath'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_addModulePath> gExtensionModifierTable_gtlContext_addModulePath ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_addModulePath (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_addModulePath inModifier) {
  gExtensionModifierTable_gtlContext_addModulePath.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_addModulePath (cPtr_gtlContext * inObject,
                                                      const GALGAS_string constinArgument_rootPath,
                                                      const GALGAS_string constinArgument_modulePath,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  GALGAS_string var_normalizedModulePath_1594 = constinArgument_modulePath.getter_absolutePathFromPath (constinArgument_rootPath COMMA_SOURCE_FILE ("gtl_types.galgas", 63)).getter_stringByStandardizingPath (SOURCE_FILE ("gtl_types.galgas", 63)) ;
  object->mProperty_importPath.addAssign_operation (var_normalizedModulePath_1594  COMMA_SOURCE_FILE ("gtl_types.galgas", 64)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_addModulePath (void) {
  enterExtensionSetter_addModulePath (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionSetter_gtlContext_addModulePath) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_addModulePath (void) {
  gExtensionModifierTable_gtlContext_addModulePath.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_addModulePath (defineExtensionSetter_gtlContext_addModulePath,
                                                     freeExtensionModifier_gtlContext_addModulePath) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext addInputVariable'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_addInputVariable> gExtensionModifierTable_gtlContext_addInputVariable ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_addInputVariable (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_addInputVariable inModifier) {
  gExtensionModifierTable_gtlContext_addInputVariable.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_addInputVariable (cPtr_gtlContext * inObject,
                                                         GALGAS_gtlData inArgument_inputVariable,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  object->mProperty_inputVars.addAssign_operation (inArgument_inputVariable  COMMA_SOURCE_FILE ("gtl_types.galgas", 70)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_addInputVariable (void) {
  enterExtensionSetter_addInputVariable (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_addInputVariable) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_addInputVariable (void) {
  gExtensionModifierTable_gtlContext_addInputVariable.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_addInputVariable (defineExtensionSetter_gtlContext_addInputVariable,
                                                        freeExtensionModifier_gtlContext_addInputVariable) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext popFirstInputArg'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_popFirstInputArg> gExtensionModifierTable_gtlContext_popFirstInputArg ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_popFirstInputArg (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_popFirstInputArg inModifier) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_popFirstInputArg (cPtr_gtlContext * inObject,
                                                         GALGAS_location inArgument_where,
                                                         GALGAS_gtlData & outArgument_result,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_inputVars.getter_length (SOURCE_FILE ("gtl_types.galgas", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      object->mProperty_inputVars.setter_popFirst (outArgument_result, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 78)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (inArgument_where, GALGAS_string ("No input argument available"), fixItArray1  COMMA_SOURCE_FILE ("gtl_types.galgas", 80)) ;
    outArgument_result.drop () ; // Release error dropped variable
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_popFirstInputArg (void) {
  enterExtensionSetter_popFirstInputArg (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_popFirstInputArg) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_popFirstInputArg (void) {
  gExtensionModifierTable_gtlContext_popFirstInputArg.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_popFirstInputArg (defineExtensionSetter_gtlContext_popFirstInputArg,
                                                        freeExtensionModifier_gtlContext_popFirstInputArg) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext fullPrefix'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_fullPrefix> gExtensionGetterTable_gtlContext_fullPrefix ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_fullPrefix (const int32_t inClassIndex,
                                      enterExtensionGetter_gtlContext_fullPrefix inGetter) {
  gExtensionGetterTable_gtlContext_fullPrefix.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_fullPrefix (const cPtr_gtlContext * inObject,
                                               const GALGAS_gtlData in_vars,
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

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_lstring extensionGetter_gtlContext_fullPrefix (const cPtr_gtlContext * inObject,
                                                             const GALGAS_gtlData /* constinArgument_vars */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_full ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_full = object->mProperty_prefix ;
//---
  return result_full ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_fullPrefix (void) {
  enterExtensionGetter_fullPrefix (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                   extensionGetter_gtlContext_fullPrefix) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_fullPrefix (void) {
  gExtensionGetterTable_gtlContext_fullPrefix.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_fullPrefix (defineExtensionGetter_gtlContext_fullPrefix,
                                                  freeExtensionGetter_gtlContext_fullPrefix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext fullTemplateFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_fullTemplateFileName> gExtensionGetterTable_gtlContext_fullTemplateFileName ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_fullTemplateFileName (const int32_t inClassIndex,
                                                enterExtensionGetter_gtlContext_fullTemplateFileName inGetter) {
  gExtensionGetterTable_gtlContext_fullTemplateFileName.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_gtlContext var_copy_2534 = temp_0 ;
  const GALGAS_gtlContext temp_1 = object ;
  GALGAS_lstring var_fullPref_2561 = callExtensionGetter_fullPrefix ((const cPtr_gtlContext *) temp_1.ptr (), inArgument_vars, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 110)) ;
  GALGAS_bool var_found_2604 = GALGAS_bool (false) ;
  GALGAS_string var_prefixedTemplatePath_2643 ;
  GALGAS_string var_hierarchicalPath_2670 ;
  GALGAS_string var_rootPath_2689 ;
  var_prefixedTemplatePath_2643 = extensionGetter_stringByAppendingPath (object->mProperty_userTemplateDirectory, var_fullPref_2561.getter_string (SOURCE_FILE ("gtl_types.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 121)) ;
  var_hierarchicalPath_2670 = object->mProperty_path ;
  var_rootPath_2689 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2643, inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 123)) ;
  if (var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 128)).isValid ()) {
    uint32_t variant_2986 = var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 128)).uintValue () ;
    bool loop_2986 = true ;
    while (loop_2986) {
        GALGAS_string var_fullPath_3037 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2643, var_hierarchicalPath_2670, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 131)), inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 129)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_fullPath_3037.getter_fileExists (SOURCE_FILE ("gtl_types.galgas", 136)).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_rootPath_2689 = var_fullPath_3037 ;
            var_found_2604 = GALGAS_bool (true) ;
          }
        }
      GALGAS_bool test_3 = var_found_2604.operator_not (SOURCE_FILE ("gtl_types.galgas", 143)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = GALGAS_bool (kIsStrictSup, var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      }
      loop_2986 = test_3.isValid () ;
      if (loop_2986) {
        loop_2986 = test_3.boolValue () ;
      }
      if (loop_2986 && (0 == variant_2986)) {
        loop_2986 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_types.galgas", 128)) ;
      }
      if (loop_2986) {
        variant_2986 -- ;
        var_hierarchicalPath_2670 = var_hierarchicalPath_2670.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_types.galgas", 144)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_found_2604.operator_not (SOURCE_FILE ("gtl_types.galgas", 147)).boolEnum () ;
    if (kBoolTrue == test_4) {
      var_prefixedTemplatePath_2643 = extensionGetter_stringByAppendingPath (object->mProperty_templateDirectory, var_fullPref_2561.getter_string (SOURCE_FILE ("gtl_types.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 152)) ;
      var_hierarchicalPath_2670 = object->mProperty_path ;
      var_rootPath_2689 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2643, inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 154)) ;
      if (var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 160)).isValid ()) {
        uint32_t variant_3867 = var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 160)).uintValue () ;
        bool loop_3867 = true ;
        while (loop_3867) {
            GALGAS_string var_fullPath_3920 = function_pathWithExtension (inArgument_context, extensionGetter_stringByAppendingPath (extensionGetter_stringByAppendingPath (var_prefixedTemplatePath_2643, var_hierarchicalPath_2670, inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 163)), inArgument_simpleName.getter_string (SOURCE_FILE ("gtl_types.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("gtl_types.galgas", 161)) ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_fullPath_3920.getter_fileExists (SOURCE_FILE ("gtl_types.galgas", 168)).boolEnum () ;
              if (kBoolTrue == test_5) {
                var_rootPath_2689 = var_fullPath_3920 ;
                var_found_2604 = GALGAS_bool (true) ;
              }
            }
          GALGAS_bool test_6 = var_found_2604.operator_not (SOURCE_FILE ("gtl_types.galgas", 175)) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsStrictSup, var_hierarchicalPath_2670.getter_length (SOURCE_FILE ("gtl_types.galgas", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
          }
          loop_3867 = test_6.isValid () ;
          if (loop_3867) {
            loop_3867 = test_6.boolValue () ;
          }
          if (loop_3867 && (0 == variant_3867)) {
            loop_3867 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("gtl_types.galgas", 160)) ;
          }
          if (loop_3867) {
            variant_3867 -- ;
            var_hierarchicalPath_2670 = var_hierarchicalPath_2670.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("gtl_types.galgas", 176)) ;
          }
        }
      }
    }
  }
  result_fullName = GALGAS_lstring::constructor_new (var_rootPath_2689, inArgument_simpleName.getter_location (SOURCE_FILE ("gtl_types.galgas", 182))  COMMA_SOURCE_FILE ("gtl_types.galgas", 180)) ;
//---
  return result_fullName ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_fullTemplateFileName (void) {
  enterExtensionGetter_fullTemplateFileName (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                             extensionGetter_gtlContext_fullTemplateFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_fullTemplateFileName (void) {
  gExtensionGetterTable_gtlContext_fullTemplateFileName.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_fullTemplateFileName (defineExtensionGetter_gtlContext_fullTemplateFileName,
                                                            freeExtensionGetter_gtlContext_fullTemplateFileName) ;



//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_ (GALGAS_gtlContext inArgument_context,
                                                                           GALGAS_library & ioArgument_lib,
                                                                           GALGAS_gtlInstructionList & outArgument_program,
                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_program.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_parser_0 (inCompiler)) {
    case 2: {
      nt_gtl_5F_import_ (inArgument_context, ioArgument_lib, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_gtl_5F_template_5F_instruction_5F_list_ (outArgument_program, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_parser_0 (inCompiler)) {
    case 2: {
      nt_gtl_5F_import_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_ (GALGAS_gtlInstructionList & outArgument_instructionList,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instructionList.drop () ; // Release 'out' argument
  outArgument_instructionList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_string var_templateString_1561 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 68)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_templateString_1561.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_instructionList.addAssign_operation (GALGAS_gtlTemplateStringInstruction::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 72)), GALGAS_string::makeEmptyString (), var_templateString_1561  COMMA_SOURCE_FILE ("gtl_parser.galgas", 71))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 70)) ;
      }
    }
    switch (select_gtl_5F_parser_1 (inCompiler)) {
    case 2: {
      GALGAS_gtlInstruction var_instruction_1848 ;
      nt_gtl_5F_template_5F_instruction_ (var_instruction_1848, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_1848  COMMA_SOURCE_FILE ("gtl_parser.galgas", 79)) ;
    } break ;
    case 3: {
      GALGAS_gtlInstruction var_instruction_1950 ;
      nt_gtl_5F_simple_5F_instruction_ (var_instruction_1950, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_1950  COMMA_SOURCE_FILE ("gtl_parser.galgas", 82)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_parser_1 (inCompiler)) {
    case 2: {
      nt_gtl_5F_template_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_gtl_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 92)) ;
  GALGAS_location var_where_2282 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 92)) ;
  GALGAS_gtlExpression var_expression_2336 ;
  nt_gtl_5F_expression_ (var_expression_2336, inCompiler) ;
  outArgument_instruction = GALGAS_gtlEmitInstruction::constructor_new (var_where_2282, function_signature (var_where_2282, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 97)), var_expression_2336  COMMA_SOURCE_FILE ("gtl_parser.galgas", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__21_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 92)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_bool var_isExecutable_2770 = GALGAS_bool (false) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_write COMMA_SOURCE_FILE ("gtl_parser.galgas", 111)) ;
  GALGAS_location var_where_2804 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_parser.galgas", 111)) ;
  switch (select_gtl_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_executable COMMA_SOURCE_FILE ("gtl_parser.galgas", 112)) ;
    var_isExecutable_2770 = GALGAS_bool (true) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  GALGAS_gtlExpression var_fileName_2910 ;
  nt_gtl_5F_expression_ (var_fileName_2910, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 114)) ;
  GALGAS_gtlInstructionList var_instructionList_2987 ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_instructionList_2987, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_write COMMA_SOURCE_FILE ("gtl_parser.galgas", 116)) ;
  outArgument_instruction = GALGAS_gtlWriteToInstruction::constructor_new (var_where_2804, function_signature (var_where_2804, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 120)), var_fileName_2910, var_isExecutable_2770, var_instructionList_2987  COMMA_SOURCE_FILE ("gtl_parser.galgas", 118)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_write COMMA_SOURCE_FILE ("gtl_parser.galgas", 111)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_parser.galgas", 111)) ;
  switch (select_gtl_5F_parser_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_executable COMMA_SOURCE_FILE ("gtl_parser.galgas", 112)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 114)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 116)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_write COMMA_SOURCE_FILE ("gtl_parser.galgas", 116)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_prefix_3307 ;
  GALGAS_bool var_ifExists_3324 = GALGAS_bool (false) ;
  GALGAS_gtlInstructionList var_instructionList_3370 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 132)) ;
  GALGAS_gtlExpression var_fileName_3409 ;
  GALGAS_gtlExpressionList var_templateArguments_3448 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 134)) ;
  GALGAS_bool var_globalTemplate_3484 = GALGAS_bool (true) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_template COMMA_SOURCE_FILE ("gtl_parser.galgas", 137)) ;
  GALGAS_location var_where_3523 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 137)) ;
  switch (select_gtl_5F_parser_3 (inCompiler)) {
  case 1: {
    var_globalTemplate_3484 = GALGAS_bool (false) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 140)) ;
    switch (select_gtl_5F_parser_4 (inCompiler)) {
    case 1: {
      bool repeatFlag_0 = true ;
      while (repeatFlag_0) {
        GALGAS_gtlExpression var_expression_3651 ;
        nt_gtl_5F_expression_ (var_expression_3651, inCompiler) ;
        var_templateArguments_3448.addAssign_operation (var_expression_3651  COMMA_SOURCE_FILE ("gtl_parser.galgas", 144)) ;
        switch (select_gtl_5F_parser_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 146)) ;
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 149)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 153)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_exists COMMA_SOURCE_FILE ("gtl_parser.galgas", 153)) ;
    var_ifExists_3324 = GALGAS_bool (true) ;
    nt_gtl_5F_file_5F_name_ (var_fileName_3409, inCompiler) ;
    switch (select_gtl_5F_parser_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 157)) ;
      var_prefix_3307 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 157)) ;
    } break ;
    case 2: {
      var_prefix_3307 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 158))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 158)) ;
    } break ;
    default:
      break ;
    }
    switch (select_gtl_5F_parser_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_or COMMA_SOURCE_FILE ("gtl_parser.galgas", 160)) ;
      nt_gtl_5F_template_5F_instruction_5F_list_ (var_instructionList_3370, inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 162)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_template COMMA_SOURCE_FILE ("gtl_parser.galgas", 162)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_gtl_5F_file_5F_name_ (var_fileName_3409, inCompiler) ;
    switch (select_gtl_5F_parser_9 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 167)) ;
      var_prefix_3307 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 167)) ;
    } break ;
    case 2: {
      var_prefix_3307 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 168))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 168)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  outArgument_instruction = GALGAS_gtlTemplateInstruction::constructor_new (var_where_3523, function_signature (var_where_3523, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 172)), var_prefix_3307, var_fileName_3409, var_ifExists_3324, var_globalTemplate_3484, var_templateArguments_3448, var_instructionList_3370  COMMA_SOURCE_FILE ("gtl_parser.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_template COMMA_SOURCE_FILE ("gtl_parser.galgas", 137)) ;
  switch (select_gtl_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 140)) ;
    switch (select_gtl_5F_parser_4 (inCompiler)) {
    case 1: {
      bool repeatFlag_0 = true ;
      while (repeatFlag_0) {
        nt_gtl_5F_expression_parse (inCompiler) ;
        switch (select_gtl_5F_parser_5 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 146)) ;
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
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 149)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 153)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_exists COMMA_SOURCE_FILE ("gtl_parser.galgas", 153)) ;
    nt_gtl_5F_file_5F_name_parse (inCompiler) ;
    switch (select_gtl_5F_parser_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 157)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 157)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    switch (select_gtl_5F_parser_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_or COMMA_SOURCE_FILE ("gtl_parser.galgas", 160)) ;
      nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 162)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_template COMMA_SOURCE_FILE ("gtl_parser.galgas", 162)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    nt_gtl_5F_file_5F_name_parse (inCompiler) ;
    switch (select_gtl_5F_parser_9 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 167)) ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 167)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 185)) ;
  GALGAS_location var_where_4525 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 185)) ;
  GALGAS_gtlVarPath var_columnConstantName_4586 ;
  nt_gtl_5F_variable_ (var_columnConstantName_4586, inCompiler) ;
  outArgument_instruction = GALGAS_gtlGetColumnInstruction::constructor_new (var_where_4525, function_signature (var_where_4525, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 190)), var_columnConstantName_4586  COMMA_SOURCE_FILE ("gtl_parser.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3F_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 185)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlThenElsifStatementList var_thenElsifList_4887 = GALGAS_gtlThenElsifStatementList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 198)) ;
  GALGAS_gtlInstructionList var_elseList_4931 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 199)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 201)) ;
  GALGAS_location var_where_4970 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_gtlExpression var_condition_5034 ;
    nt_gtl_5F_expression_ (var_condition_5034, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_parser.galgas", 204)) ;
    GALGAS_gtlInstructionList var_instructionList_5118 ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_instructionList_5118, inCompiler) ;
    var_thenElsifList_4887.addAssign_operation (var_condition_5034, var_instructionList_5118  COMMA_SOURCE_FILE ("gtl_parser.galgas", 207)) ;
    switch (select_gtl_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_parser.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_parser.galgas", 213)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_elseList_4931, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 218)) ;
  outArgument_instruction = GALGAS_gtlIfStatementInstruction::constructor_new (var_where_4970, function_signature (var_where_4970, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 222)), var_thenElsifList_4887, var_elseList_4931  COMMA_SOURCE_FILE ("gtl_parser.galgas", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 201)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_parser.galgas", 204)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_gtl_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_parser.galgas", 209)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_parser.galgas", 213)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_parser.galgas", 218)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_beforeList_5601 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 230)) ;
  GALGAS_gtlInstructionList var_doList_5643 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 231)) ;
  GALGAS_gtlInstructionList var_betweenList_5690 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 232)) ;
  GALGAS_gtlInstructionList var_afterList_5735 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 233)) ;
  GALGAS_lstring var_indexName_5769 ;
  GALGAS_lstring var_variableName_5793 ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_parser.galgas", 237)) ;
  GALGAS_location var_where_5824 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 237)) ;
  GALGAS_lstring var_keyName_5869 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 238)) ;
  switch (select_gtl_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 240)) ;
    var_variableName_5793 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 240)) ;
  } break ;
  case 2: {
    var_variableName_5793 = var_keyName_5869 ;
    var_keyName_5869 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), var_where_5824  COMMA_SOURCE_FILE ("gtl_parser.galgas", 243)) ;
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
    var_indexName_5769 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
  } break ;
  case 2: {
    var_indexName_5769 = GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 248))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 248)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 250)) ;
  GALGAS_gtlExpression var_iterable_6133 ;
  nt_gtl_5F_expression_ (var_iterable_6133, inCompiler) ;
  switch (select_gtl_5F_parser_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_parser.galgas", 254)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_beforeList_5601, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 258)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_doList_5643, inCompiler) ;
  switch (select_gtl_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 262)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_betweenList_5690, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_parser.galgas", 267)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_afterList_5735, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_parser.galgas", 272)) ;
  outArgument_instruction = GALGAS_gtlForeachStatementInstruction::constructor_new (var_where_5824, function_signature (var_where_5824, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 276)), var_keyName_5869, var_variableName_5793, var_indexName_5769, var_iterable_6133, var_beforeList_5601, var_betweenList_5690, var_afterList_5735, var_doList_5643  COMMA_SOURCE_FILE ("gtl_parser.galgas", 274)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_parser.galgas", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 238)) ;
  switch (select_gtl_5F_parser_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 240)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 240)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 246)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 250)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_parser_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_parser.galgas", 254)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 258)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 262)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_parser.galgas", 267)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_parser.galgas", 272)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_doList_6906 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 291)) ;
  GALGAS_gtlInstructionList var_betweenList_6953 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 292)) ;
  GALGAS_gtlExpressionList var_iterable_6997 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 293)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_parser.galgas", 295)) ;
  GALGAS_location var_where_7036 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 295)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("foreach var in @( expression, ..., expression )")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 297)), GALGAS_string ("for var in expression, ..., expression is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_parser.galgas", 297)) ;
    }
  }
  GALGAS_lstring var_variableName_7293 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 300)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 301)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_gtlExpression var_expression_7357 ;
    nt_gtl_5F_expression_ (var_expression_7357, inCompiler) ;
    var_iterable_6997.addAssign_operation (var_expression_7357  COMMA_SOURCE_FILE ("gtl_parser.galgas", 304)) ;
    switch (select_gtl_5F_parser_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 306)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 309)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_doList_6906, inCompiler) ;
  switch (select_gtl_5F_parser_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 313)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_betweenList_6953, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_parser.galgas", 318)) ;
  outArgument_instruction = GALGAS_gtlForStatementInstruction::constructor_new (var_where_7036, function_signature (var_where_7036, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 322)), var_variableName_7293, var_iterable_6997, var_betweenList_6953, var_doList_6906  COMMA_SOURCE_FILE ("gtl_parser.galgas", 320)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_parser.galgas", 295)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 300)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_parser.galgas", 301)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    switch (select_gtl_5F_parser_17 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 306)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 309)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_parser_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 313)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 317)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_parser.galgas", 318)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_beforeList_7922 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 333)) ;
  GALGAS_gtlInstructionList var_betweenList_7969 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 334)) ;
  GALGAS_gtlInstructionList var_afterList_8014 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_parser.galgas", 335)) ;
  GALGAS_sint_36__34_ var_direction_8047 = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_parser.galgas", 338)) ;
  GALGAS_location var_where_8081 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 338)) ;
  GALGAS_gtlExpression var_step_8112 = GALGAS_gtlTerminal::constructor_new (var_where_8081, GALGAS_gtlInt::constructor_new (var_where_8081, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 341)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 341))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 341))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 340)) ;
  GALGAS_lstring var_variableName_8237 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 344)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_parser.galgas", 345)) ;
  GALGAS_gtlExpression var_start_8287 ;
  nt_gtl_5F_expression_ (var_start_8287, inCompiler) ;
  switch (select_gtl_5F_parser_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_up COMMA_SOURCE_FILE ("gtl_parser.galgas", 349)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_down COMMA_SOURCE_FILE ("gtl_parser.galgas", 351)) ;
    var_direction_8047 = GALGAS_sint_36__34_ ((int64_t) 1LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 351)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_parser.galgas", 353)) ;
  GALGAS_gtlExpression var_stop_8397 ;
  nt_gtl_5F_expression_ (var_stop_8397, inCompiler) ;
  switch (select_gtl_5F_parser_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_parser.galgas", 356)) ;
    nt_gtl_5F_expression_ (var_step_8112, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_parser.galgas", 361)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_beforeList_7922, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 365)) ;
  GALGAS_gtlInstructionList var_doList_8633 ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_doList_8633, inCompiler) ;
  switch (select_gtl_5F_parser_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 369)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_betweenList_7969, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_parser.galgas", 374)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_ (var_afterList_8014, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 378)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_parser.galgas", 379)) ;
  outArgument_instruction = GALGAS_gtlLoopStatementInstruction::constructor_new (var_where_8081, function_signature (var_where_8081, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 383)), var_variableName_8237, var_start_8287, var_stop_8397, var_step_8112, var_direction_8047, var_beforeList_7922, var_betweenList_7969, var_afterList_8014, var_doList_8633  COMMA_SOURCE_FILE ("gtl_parser.galgas", 381)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_parser.galgas", 338)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 344)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_parser.galgas", 345)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_parser_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_up COMMA_SOURCE_FILE ("gtl_parser.galgas", 349)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_down COMMA_SOURCE_FILE ("gtl_parser.galgas", 351)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_parser.galgas", 353)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_parser_20 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_parser.galgas", 356)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_parser.galgas", 361)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 365)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_parser_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_parser.galgas", 369)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_parser_23 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_parser.galgas", 374)) ;
    nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 378)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_parser.galgas", 379)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                    C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlExpression var_limit_9234 ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_parser.galgas", 401)) ;
  GALGAS_location var_where_9264 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 401)) ;
  switch (select_gtl_5F_parser_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 403)) ;
    nt_gtl_5F_expression_ (var_limit_9234, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 405)) ;
  } break ;
  case 2: {
    var_limit_9234 = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 408)), GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 408)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 408)), GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_parser.galgas", 408)).getter_bigint (SOURCE_FILE ("gtl_parser.galgas", 408))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 408))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 407)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_gtlInstructionList var_continueList_9515 ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_continueList_9515, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_while COMMA_SOURCE_FILE ("gtl_parser.galgas", 412)) ;
  GALGAS_gtlExpression var_condition_9570 ;
  nt_gtl_5F_expression_ (var_condition_9570, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 414)) ;
  GALGAS_gtlInstructionList var_doList_9639 ;
  nt_gtl_5F_template_5F_instruction_5F_list_ (var_doList_9639, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 416)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_parser.galgas", 417)) ;
  outArgument_instruction = GALGAS_gtlRepeatStatementInstruction::constructor_new (var_where_9264, function_signature (var_where_9264, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 421)), var_limit_9234, var_condition_9570, var_continueList_9515, var_doList_9639  COMMA_SOURCE_FILE ("gtl_parser.galgas", 419)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_parser.galgas", 401)) ;
  switch (select_gtl_5F_parser_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 403)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_parser.galgas", 405)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_while COMMA_SOURCE_FILE ("gtl_parser.galgas", 412)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_parser.galgas", 414)) ;
  nt_gtl_5F_template_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_parser.galgas", 416)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_parser.galgas", 417)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                    C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_input COMMA_SOURCE_FILE ("gtl_parser.galgas", 432)) ;
  GALGAS_location var_where_9980 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 432)) ;
  GALGAS_gtlArgumentList var_arguments_10038 ;
  nt_gtl_5F_argument_5F_list_ (var_arguments_10038, inCompiler) ;
  outArgument_instruction = GALGAS_gtlInputStatementInstruction::constructor_new (var_where_9980, function_signature (var_where_9980, inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 437)), var_arguments_10038  COMMA_SOURCE_FILE ("gtl_parser.galgas", 435)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_input COMMA_SOURCE_FILE ("gtl_parser.galgas", 432)) ;
  nt_gtl_5F_argument_5F_list_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_ (GALGAS_gtlExpression & outArgument_expression,
                                                                         C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_expression.drop () ; // Release 'out' argument
  switch (select_gtl_5F_parser_25 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_fileName_10330 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 447)) ;
    outArgument_expression = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_parser.galgas", 449)), GALGAS_gtlString::constructor_new (var_fileName_10330.getter_location (SOURCE_FILE ("gtl_parser.galgas", 450)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_parser.galgas", 450)), var_fileName_10330.getter_string (SOURCE_FILE ("gtl_parser.galgas", 450))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 449))  COMMA_SOURCE_FILE ("gtl_parser.galgas", 448)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_parser.galgas", 454)) ;
    nt_gtl_5F_expression_ (outArgument_expression, inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_parser::rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  switch (select_gtl_5F_parser_25 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_parser.galgas", 447)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_parser.galgas", 454)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_let COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 43)) ;
  GALGAS_location var_where_1050 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 43)) ;
  GALGAS_gtlVarPath var_variable_1097 ;
  nt_gtl_5F_variable_ (var_variable_1097, inCompiler) ;
  switch (select_gtl_5F_instruction_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 46)) ;
    GALGAS_gtlExpression var_expression_1163 ;
    nt_gtl_5F_expression_ (var_expression_1163, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 50)), var_variable_1097, var_expression_1163  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 48)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 55)) ;
    GALGAS_gtlExpression var_expression_1348 ;
    nt_gtl_5F_expression_ (var_expression_1348, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAddInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 59)), var_variable_1097, var_expression_1348  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 57)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 64)) ;
    GALGAS_gtlExpression var_expression_1535 ;
    nt_gtl_5F_expression_ (var_expression_1535, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetSubstractInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 68)), var_variable_1097, var_expression_1535  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 66)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 73)) ;
    GALGAS_gtlExpression var_expression_1728 ;
    nt_gtl_5F_expression_ (var_expression_1728, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetMultiplyInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 77)), var_variable_1097, var_expression_1728  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 75)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 82)) ;
    GALGAS_gtlExpression var_expression_1920 ;
    nt_gtl_5F_expression_ (var_expression_1920, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetDivideInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 86)), var_variable_1097, var_expression_1920  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 84)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_mod_3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 91)) ;
    GALGAS_gtlExpression var_expression_2112 ;
    nt_gtl_5F_expression_ (var_expression_2112, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetModuloInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 95)), var_variable_1097, var_expression_2112  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 93)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 100)) ;
    GALGAS_gtlExpression var_expression_2303 ;
    nt_gtl_5F_expression_ (var_expression_2303, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftLeftInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 104)), var_variable_1097, var_expression_2303  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 102)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 109)) ;
    GALGAS_gtlExpression var_expression_2497 ;
    nt_gtl_5F_expression_ (var_expression_2497, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetShiftRightInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 113)), var_variable_1097, var_expression_2497  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 111)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__26__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 118)) ;
    GALGAS_gtlExpression var_expression_2691 ;
    nt_gtl_5F_expression_ (var_expression_2691, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetAndInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 122)), var_variable_1097, var_expression_2691  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 120)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__7C__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 127)) ;
    GALGAS_gtlExpression var_expression_2878 ;
    nt_gtl_5F_expression_ (var_expression_2878, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetOrInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 131)), var_variable_1097, var_expression_2878  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 129)) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5E__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 136)) ;
    GALGAS_gtlExpression var_expression_3064 ;
    nt_gtl_5F_expression_ (var_expression_3064, inCompiler) ;
    outArgument_instruction = GALGAS_gtlLetXorInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 140)), var_variable_1097, var_expression_3064  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 138)) ;
  } break ;
  case 12: {
    outArgument_instruction = GALGAS_gtlLetUnconstructedInstruction::constructor_new (var_where_1050, function_signature (var_where_1050, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 147)), var_variable_1097  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 145)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_let COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 43)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_instruction_5F_parser_0 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 46)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 55)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 64)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 73)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 82)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_mod_3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 91)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 100)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 109)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__26__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 118)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__7C__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 127)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5E__3D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 136)) ;
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

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_unlet COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 157)) ;
  GALGAS_location var_where_3487 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 157)) ;
  GALGAS_gtlVarPath var_variable_3534 ;
  nt_gtl_5F_variable_ (var_variable_3534, inCompiler) ;
  outArgument_instruction = GALGAS_gtlUnletInstruction::constructor_new (var_where_3487, function_signature (var_where_3487, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 161)), var_variable_3534  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_unlet COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 157)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_error COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 170)) ;
  GALGAS_location var_where_3801 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 170)) ;
  GALGAS_gtlVarPath var_variable_3856 ;
  GALGAS_bool var_hereInstead_3875 ;
  nt_gtl_5F_variable_5F_or_5F_here_ (var_variable_3856, var_hereInstead_3875, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 172)) ;
  GALGAS_gtlExpression var_expression_3927 ;
  nt_gtl_5F_expression_ (var_expression_3927, inCompiler) ;
  outArgument_instruction = GALGAS_gtlErrorStatementInstruction::constructor_new (var_where_3801, function_signature (var_where_3801, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 177)), var_variable_3856, var_hereInstead_3875, var_expression_3927  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 175)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_error COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 170)) ;
  nt_gtl_5F_variable_5F_or_5F_here_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 172)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_warning COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 188)) ;
  GALGAS_location var_where_4241 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 188)) ;
  GALGAS_gtlVarPath var_variable_4296 ;
  GALGAS_bool var_hereInstead_4315 ;
  nt_gtl_5F_variable_5F_or_5F_here_ (var_variable_4296, var_hereInstead_4315, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 190)) ;
  GALGAS_gtlExpression var_expression_4367 ;
  nt_gtl_5F_expression_ (var_expression_4367, inCompiler) ;
  outArgument_instruction = GALGAS_gtlWarningStatementInstruction::constructor_new (var_where_4241, function_signature (var_where_4241, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 195)), var_variable_4296, var_hereInstead_4315, var_expression_4367  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 193)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_warning COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 188)) ;
  nt_gtl_5F_variable_5F_or_5F_here_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 190)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_print COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 206)) ;
  GALGAS_location var_where_4679 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 206)) ;
  GALGAS_gtlExpression var_expression_4733 ;
  nt_gtl_5F_expression_ (var_expression_4733, inCompiler) ;
  outArgument_instruction = GALGAS_gtlPrintStatementInstruction::constructor_new (var_where_4679, function_signature (var_where_4679, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 211)), GALGAS_bool (false), var_expression_4733  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_print COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 206)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_println COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 221)) ;
  GALGAS_location var_where_5025 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 221)) ;
  switch (select_gtl_5F_instruction_5F_parser_1 (inCompiler)) {
  case 1: {
    GALGAS_gtlExpression var_expression_5090 ;
    nt_gtl_5F_expression_ (var_expression_5090, inCompiler) ;
    outArgument_instruction = GALGAS_gtlPrintStatementInstruction::constructor_new (var_where_5025, function_signature (var_where_5025, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 226)), GALGAS_bool (true), var_expression_5090  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 224)) ;
  } break ;
  case 2: {
    outArgument_instruction = GALGAS_gtlPrintStatementInstruction::constructor_new (var_where_5025, function_signature (var_where_5025, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 233)), GALGAS_bool (true), GALGAS_gtlTerminal::constructor_new (var_where_5025, GALGAS_gtlString::constructor_new (var_where_5025, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 235)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 235))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 235))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 231)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_println COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 221)) ;
  switch (select_gtl_5F_instruction_5F_parser_1 (inCompiler)) {
  case 1: {
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_seed COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 244)) ;
  GALGAS_location var_where_5597 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 244)) ;
  switch (select_gtl_5F_instruction_5F_parser_2 (inCompiler)) {
  case 1: {
    GALGAS_gtlExpression var_expression_5662 ;
    nt_gtl_5F_expression_ (var_expression_5662, inCompiler) ;
    outArgument_instruction = GALGAS_gtlSetRandomSeedStatementInstruction::constructor_new (var_where_5597, function_signature (var_where_5597, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 249)), GALGAS_bool (true), var_expression_5662  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 247)) ;
  } break ;
  case 2: {
    outArgument_instruction = GALGAS_gtlSetRandomSeedStatementInstruction::constructor_new (var_where_5597, function_signature (var_where_5597, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 256)), GALGAS_bool (false), GALGAS_gtlEmptyExpression::constructor_new (var_where_5597  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 258))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 254)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_seed COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 244)) ;
  switch (select_gtl_5F_instruction_5F_parser_2 (inCompiler)) {
  case 1: {
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_display COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 267)) ;
  GALGAS_location var_where_6144 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 267)) ;
  GALGAS_gtlVarPath var_variable_6194 ;
  nt_gtl_5F_variable_ (var_variable_6194, inCompiler) ;
  outArgument_instruction = GALGAS_gtlDisplayStatementInstruction::constructor_new (var_where_6144, function_signature (var_where_6144, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 273)), var_variable_6194  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 271)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_display COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 267)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_sort COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 282)) ;
  GALGAS_location var_where_6472 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 282)) ;
  GALGAS_gtlVarPath var_variable_6519 ;
  nt_gtl_5F_variable_ (var_variable_6519, inCompiler) ;
  switch (select_gtl_5F_instruction_5F_parser_3 (inCompiler)) {
  case 1: {
    GALGAS_sortingKeyList var_sortList_6557 = GALGAS_sortingKeyList::constructor_emptyList (SOURCE_FILE ("gtl_instruction_parser.galgas", 285)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_by COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 286)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_key_6627 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 288)) ;
      GALGAS_lsint var_order_6667 ;
      nt_gtl_5F_sorting_5F_order_ (var_order_6667, inCompiler) ;
      var_sortList_6557.addAssign_operation (var_key_6627, var_order_6667  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 290)) ;
      switch (select_gtl_5F_instruction_5F_parser_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 291)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    outArgument_instruction = GALGAS_gtlSortStatementStructInstruction::constructor_new (var_where_6472, function_signature (var_where_6472, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 295)), var_variable_6519, var_sortList_6557  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 293)) ;
  } break ;
  case 2: {
    GALGAS_lsint var_order_6903 ;
    nt_gtl_5F_sorting_5F_order_ (var_order_6903, inCompiler) ;
    outArgument_instruction = GALGAS_gtlSortStatementInstruction::constructor_new (var_where_6472, function_signature (var_where_6472, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 304)), var_variable_6519, var_order_6903  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 302)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_sort COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 282)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  switch (select_gtl_5F_instruction_5F_parser_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_by COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 286)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 288)) ;
      nt_gtl_5F_sorting_5F_order_parse (inCompiler) ;
      switch (select_gtl_5F_instruction_5F_parser_4 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 291)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  case 2: {
    nt_gtl_5F_sorting_5F_order_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                               C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_tab COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 315)) ;
  GALGAS_location var_where_7210 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 315)) ;
  GALGAS_gtlExpression var_expression_7264 ;
  nt_gtl_5F_expression_ (var_expression_7264, inCompiler) ;
  outArgument_instruction = GALGAS_gtlTabStatementInstruction::constructor_new (var_where_7210, function_signature (var_where_7210, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 320)), var_expression_7264  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 318)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_tab COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 315)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                                C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_variables COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 329)) ;
  GALGAS_location var_where_7549 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 329)) ;
  outArgument_instruction = GALGAS_gtlVariablesInstruction::constructor_new (var_where_7549, function_signature (var_where_7549, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 332)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 330)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_variables COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 329)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                                C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_libraries COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 341)) ;
  GALGAS_location var_where_7829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 341)) ;
  outArgument_instruction = GALGAS_gtlLibrariesInstruction::constructor_new (var_where_7829, function_signature (var_where_7829, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 344))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 342)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_libraries COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 341)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i12_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                                                C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5B__21_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 352)) ;
  GALGAS_gtlVarPath var_target_8113 ;
  nt_gtl_5F_variable_ (var_target_8113, inCompiler) ;
  GALGAS_lstring var_setterName_8153 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 354)) ;
  GALGAS_location var_where_8171 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 355)) ;
  GALGAS_gtlExpressionList var_argumentList_8213 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_instruction_parser.galgas", 356)) ;
  switch (select_gtl_5F_instruction_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 359)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_gtlExpression var_argument_8307 ;
      nt_gtl_5F_expression_ (var_argument_8307, inCompiler) ;
      var_argumentList_8213.addAssign_operation (var_argument_8307  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 362)) ;
      switch (select_gtl_5F_instruction_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 364)) ;
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
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 367)) ;
  outArgument_instruction = GALGAS_gtlSetterCallInstruction::constructor_new (var_where_8171, function_signature (var_where_8171, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 370)), var_target_8113, var_setterName_8153, var_argumentList_8213  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 368)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i12_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5B__21_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 352)) ;
  nt_gtl_5F_variable_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 354)) ;
  switch (select_gtl_5F_instruction_5F_parser_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3A_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 359)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_gtl_5F_expression_parse (inCompiler) ;
      switch (select_gtl_5F_instruction_5F_parser_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 364)) ;
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
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__5D_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 367)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i13_ (GALGAS_lsint & outArgument_order,
                                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_order.drop () ; // Release 'out' argument
  switch (select_gtl_5F_instruction_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3E_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 382)) ;
    outArgument_order = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 383)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 383))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 383)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 385)) ;
    outArgument_order = GALGAS_lsint::constructor_new (GALGAS_sint ((int32_t) 1L), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 386))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 386)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i13_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  switch (select_gtl_5F_instruction_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3E_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 382)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__3C_ COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 385)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i14_ (GALGAS_gtlContext inArgument_context,
                                                                                                 GALGAS_library & ioArgument_lib,
                                                                                                 C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_import COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 395)) ;
  GALGAS_lstring var_fileName_8958 = inCompiler->synthetizedAttribute_a_5F_string () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 395)) ;
  GALGAS_string var_fullName_8977 = var_fileName_8958.getter_string (SOURCE_FILE ("gtl_instruction_parser.galgas", 396)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_fullName_8977.getter_pathExtension (SOURCE_FILE ("gtl_instruction_parser.galgas", 397)).objectCompare (GALGAS_string ("gtm"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_fullName_8977 = var_fileName_8958.getter_string (SOURCE_FILE ("gtl_instruction_parser.galgas", 398)).add_operation (GALGAS_string (".gtm"), inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 398)) ;
    }
  }
  GALGAS_bool var_found_9106 = GALGAS_bool (false) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_fullName_8977.getter_fileExists (SOURCE_FILE ("gtl_instruction_parser.galgas", 402)).operator_not (SOURCE_FILE ("gtl_instruction_parser.galgas", 402)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_stringlist enumerator_9216 (inArgument_context.getter_importPath (SOURCE_FILE ("gtl_instruction_parser.galgas", 404)), kENUMERATION_UP) ;
      while (enumerator_9216.hasCurrentObject ()) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_found_9106.operator_not (SOURCE_FILE ("gtl_instruction_parser.galgas", 405)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_string var_name_9264 = extensionGetter_stringByAppendingPath (enumerator_9216.current_mValue (HERE), var_fullName_8977, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 406)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_name_9264.getter_fileExists (SOURCE_FILE ("gtl_instruction_parser.galgas", 407)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_fullName_8977 = var_name_9264 ;
                var_found_9106 = GALGAS_bool (true) ;
              }
            }
          }
        }
        enumerator_9216.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    var_found_9106 = GALGAS_bool (true) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_found_9106.boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = callExtensionGetter_hasImport ((const cPtr_library *) ioArgument_lib.ptr (), var_fullName_8977, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 418)).operator_not (SOURCE_FILE ("gtl_instruction_parser.galgas", 418)).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          ioArgument_lib.insulate (HERE) ;
          cPtr_library * ptr_9528 = (cPtr_library *) ioArgument_lib.ptr () ;
          callExtensionSetter_doImport ((cPtr_library *) ptr_9528, var_fullName_8977, inCompiler COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 419)) ;
          }
          cGrammar_gtl_5F_module_5F_grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_fullName_8977, var_fileName_8958.getter_location (SOURCE_FILE ("gtl_instruction_parser.galgas", 421))  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 421)), inArgument_context, ioArgument_lib  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 420)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_4) {
    TC_Array <C_FixItDescription> fixItArray6 ;
    inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 424)), GALGAS_string ("module not found"), fixItArray6  COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 424)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_instruction_5F_parser::rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i14_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_import COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 395)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_string COMMA_SOURCE_FILE ("gtl_instruction_parser.galgas", 395)) ;
  inCompiler->resetTemplateString () ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_ (GALGAS_gtlInstructionList & outArgument_instructionList,
                                                                                                   C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instructionList.drop () ; // Release 'out' argument
  outArgument_instructionList = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 48)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_module_5F_parser_0 (inCompiler)) {
    case 2: {
      GALGAS_gtlInstruction var_instruction_1351 ;
      nt_gtl_5F_instruction_ (var_instruction_1351, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_1351  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 53)) ;
      GALGAS_string var_templateString_1414 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 54)) ;
    } break ;
    case 3: {
      GALGAS_gtlInstruction var_instruction_1521 ;
      nt_gtl_5F_simple_5F_instruction_ (var_instruction_1521, inCompiler) ;
      outArgument_instructionList.addAssign_operation (var_instruction_1521  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 57)) ;
      GALGAS_string var_templateString_1584 = GALGAS_string::constructor_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 58)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_5F_list_i0_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_module_5F_parser_0 (inCompiler)) {
    case 2: {
      nt_gtl_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_gtl_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_ (GALGAS_gtlContext inArgument_context,
                                                                                                         GALGAS_library & ioArgument_lib,
                                                                                                         C_Lexique_gtl_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_module_5F_parser_1 (inCompiler)) {
    case 2: {
      nt_gtl_5F_import_ (inArgument_context, ioArgument_lib, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_gtl_5F_module_5F_parser_2 (inCompiler)) {
    case 2: {
      GALGAS_gtlFunction var_aFunction_2010 ;
      nt_gtl_5F_function_ (var_aFunction_2010, inCompiler) ;
      {
      ioArgument_lib.insulate (HERE) ;
      cPtr_library * ptr_2021 = (cPtr_library *) ioArgument_lib.ptr () ;
      callExtensionSetter_putFunction ((cPtr_library *) ptr_2021, var_aFunction_2010.getter_name (SOURCE_FILE ("gtl_module_parser.galgas", 77)), var_aFunction_2010, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 77)) ;
      }
    } break ;
    case 3: {
      GALGAS_gtlGetter var_aGetter_2108 ;
      nt_gtl_5F_getter_ (var_aGetter_2108, inCompiler) ;
      {
      ioArgument_lib.insulate (HERE) ;
      cPtr_library * ptr_2119 = (cPtr_library *) ioArgument_lib.ptr () ;
      callExtensionSetter_putGetter ((cPtr_library *) ptr_2119, callExtensionGetter_typedName ((const cPtr_gtlGetter *) var_aGetter_2108.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 80)), var_aGetter_2108, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 80)) ;
      }
    } break ;
    case 4: {
      GALGAS_gtlSetter var_aSetter_2205 ;
      nt_gtl_5F_setter_ (var_aSetter_2205, inCompiler) ;
      {
      ioArgument_lib.insulate (HERE) ;
      cPtr_library * ptr_2216 = (cPtr_library *) ioArgument_lib.ptr () ;
      callExtensionSetter_putSetter ((cPtr_library *) ptr_2216, callExtensionGetter_typedName ((const cPtr_gtlSetter *) var_aSetter_2205.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 83)), var_aSetter_2205, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 83)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_module_5F_start_5F_symbol_i1_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_gtl_5F_module_5F_parser_1 (inCompiler)) {
    case 2: {
      nt_gtl_5F_import_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_gtl_5F_module_5F_parser_2 (inCompiler)) {
    case 2: {
      nt_gtl_5F_function_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_gtl_5F_getter_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_gtl_5F_setter_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_ (GALGAS_gtlFunction & outArgument_function,
                                                                                        C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_function.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_func COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 93)) ;
  GALGAS_lstring var_functionName_2546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 94)) ;
  GALGAS_location var_where_2564 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 95)) ;
  GALGAS_gtlArgumentList var_arguments_2622 ;
  nt_gtl_5F_argument_5F_list_ (var_arguments_2622, inCompiler) ;
  GALGAS_lstring var_returnVariable_2666 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 97)) ;
  GALGAS_gtlInstructionList var_instructionList_2732 ;
  nt_gtl_5F_instruction_5F_list_ (var_instructionList_2732, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_func COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 99)) ;
  outArgument_function = GALGAS_gtlFunction::constructor_new (var_where_2564, var_functionName_2546, var_arguments_2622, var_instructionList_2732, var_returnVariable_2666  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_function_i2_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_func COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 94)) ;
  nt_gtl_5F_argument_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 97)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 99)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_func COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_ (GALGAS_gtlGetter & outArgument_aGetter,
                                                                                      C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_aGetter.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_getter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 113)) ;
  GALGAS_lstring var_targetType_3123 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 113)) ;
  GALGAS_lstring var_getterName_3163 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 114)) ;
  GALGAS_location var_where_3181 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 115)) ;
  GALGAS_gtlArgumentList var_arguments_3239 ;
  nt_gtl_5F_argument_5F_list_ (var_arguments_3239, inCompiler) ;
  GALGAS_lstring var_returnVariable_3283 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 117)) ;
  GALGAS_gtlInstructionList var_instructionList_3349 ;
  nt_gtl_5F_instruction_5F_list_ (var_instructionList_3349, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_getter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 119)) ;
  outArgument_aGetter = GALGAS_gtlGetter::constructor_new (var_where_3181, var_getterName_3163, var_arguments_3239, var_instructionList_3349, var_returnVariable_3283, extensionGetter_gtlType (var_targetType_3123, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 127))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 121)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_getter_i3_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_getter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 112)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 114)) ;
  nt_gtl_5F_argument_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 117)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 119)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_getter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 119)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_ (GALGAS_gtlSetter & outArgument_aSetter,
                                                                                      C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_aSetter.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_setter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 137)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 138)) ;
  GALGAS_lstring var_targetType_3781 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 138)) ;
  GALGAS_lstring var_getterName_3821 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 139)) ;
  GALGAS_location var_where_3839 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 140)) ;
  GALGAS_gtlArgumentList var_arguments_3897 ;
  nt_gtl_5F_argument_5F_list_ (var_arguments_3897, inCompiler) ;
  GALGAS_gtlInstructionList var_instructionList_3963 ;
  nt_gtl_5F_instruction_5F_list_ (var_instructionList_3963, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_setter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 143)) ;
  outArgument_aSetter = GALGAS_gtlSetter::constructor_new (var_where_3839, var_getterName_3821, var_arguments_3897, var_instructionList_3963, extensionGetter_gtlType (var_targetType_3781, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 150))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_setter_i4_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_setter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 137)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__40_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 138)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 138)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 139)) ;
  nt_gtl_5F_argument_5F_list_parse (inCompiler) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 143)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_setter COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 143)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlThenElsifStatementList var_thenElsifList_4416 = GALGAS_gtlThenElsifStatementList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 160)) ;
  GALGAS_gtlInstructionList var_elseList_4460 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 161)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 163)) ;
  GALGAS_location var_where_4499 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_gtlExpression var_condition_4563 ;
    nt_gtl_5F_expression_ (var_condition_4563, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 166)) ;
    GALGAS_gtlInstructionList var_instructionList_4638 ;
    nt_gtl_5F_instruction_5F_list_ (var_instructionList_4638, inCompiler) ;
    var_thenElsifList_4416.addAssign_operation (var_condition_4563, var_instructionList_4638  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 169)) ;
    switch (select_gtl_5F_module_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 171)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_module_5F_parser_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 175)) ;
    nt_gtl_5F_instruction_5F_list_ (var_elseList_4460, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 180)) ;
  outArgument_instruction = GALGAS_gtlIfStatementInstruction::constructor_new (var_where_4499, function_signature (var_where_4499, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 183)), var_thenElsifList_4416, var_elseList_4460  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 182)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i5_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 163)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_then COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 166)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
    switch (select_gtl_5F_module_5F_parser_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_elsif COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 171)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_gtl_5F_module_5F_parser_4 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_else COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 175)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 179)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_if COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_beforeList_5211 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 193)) ;
  GALGAS_gtlInstructionList var_doList_5253 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 194)) ;
  GALGAS_gtlInstructionList var_betweenList_5300 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 195)) ;
  GALGAS_gtlInstructionList var_afterList_5345 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 196)) ;
  GALGAS_lstring var_indexName_5379 ;
  GALGAS_lstring var_variableName_5403 ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 200)) ;
  GALGAS_location var_where_5432 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 200)) ;
  GALGAS_lstring var_keyName_5477 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 201)) ;
  switch (select_gtl_5F_module_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 203)) ;
    var_variableName_5403 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 203)) ;
  } break ;
  case 2: {
    var_variableName_5403 = var_keyName_5477 ;
    var_keyName_5477 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), var_where_5432  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 206)) ;
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
    var_indexName_5379 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
  } break ;
  case 2: {
    var_indexName_5379 = GALGAS_lstring::constructor_new (GALGAS_string ("INDEX"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 211))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 211)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 213)) ;
  GALGAS_gtlExpression var_iterable_5741 ;
  nt_gtl_5F_expression_ (var_iterable_5741, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 217)) ;
    nt_gtl_5F_instruction_5F_list_ (var_beforeList_5211, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 221)) ;
  nt_gtl_5F_instruction_5F_list_ (var_doList_5253, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 225)) ;
    nt_gtl_5F_instruction_5F_list_ (var_betweenList_5300, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 230)) ;
    nt_gtl_5F_instruction_5F_list_ (var_afterList_5345, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 235)) ;
  outArgument_instruction = GALGAS_gtlForeachStatementInstruction::constructor_new (var_where_5432, function_signature (var_where_5432, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 239)), var_keyName_5477, var_variableName_5403, var_indexName_5379, var_iterable_5741, var_beforeList_5211, var_betweenList_5300, var_afterList_5345, var_doList_5253  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 237)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i6_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 200)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 201)) ;
  switch (select_gtl_5F_module_5F_parser_5 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 203)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 203)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 209)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 213)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 217)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 221)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_8 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 225)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 230)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_foreach COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 235)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_doList_6582 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 257)) ;
  GALGAS_gtlInstructionList var_betweenList_6629 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 258)) ;
  GALGAS_gtlExpressionList var_iterable_6673 = GALGAS_gtlExpressionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 259)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 261)) ;
  GALGAS_location var_where_6712 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 261)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_gtl_5F_options_warnDeprecated.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("foreach var in @( expression, ..., expression )")) ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 263)), GALGAS_string ("for var in expression, ..., expression is deprecated"), fixItArray1  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 263)) ;
    }
  }
  GALGAS_lstring var_variableName_6969 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 267)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_gtlExpression var_expression_7033 ;
    nt_gtl_5F_expression_ (var_expression_7033, inCompiler) ;
    var_iterable_6673.addAssign_operation (var_expression_7033  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 270)) ;
    switch (select_gtl_5F_module_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 275)) ;
  nt_gtl_5F_instruction_5F_list_ (var_doList_6582, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 279)) ;
    nt_gtl_5F_instruction_5F_list_ (var_betweenList_6629, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 284)) ;
  outArgument_instruction = GALGAS_gtlForStatementInstruction::constructor_new (var_where_6712, function_signature (var_where_6712, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 287)), var_variableName_6969, var_iterable_6673, var_betweenList_6629, var_doList_6582  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 286)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i7_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 261)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 266)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_in COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 267)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_gtl_5F_expression_parse (inCompiler) ;
    switch (select_gtl_5F_module_5F_parser_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__2C_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 272)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 275)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 279)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 283)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_for COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 284)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlInstructionList var_beforeList_7664 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 297)) ;
  GALGAS_gtlInstructionList var_betweenList_7711 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 298)) ;
  GALGAS_gtlInstructionList var_afterList_7756 = GALGAS_gtlInstructionList::constructor_emptyList (SOURCE_FILE ("gtl_module_parser.galgas", 299)) ;
  GALGAS_sint_36__34_ var_direction_7789 = GALGAS_sint_36__34_ ((int64_t) 1LL) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 302)) ;
  GALGAS_location var_where_7823 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 302)) ;
  GALGAS_gtlExpression var_step_7854 = GALGAS_gtlTerminal::constructor_new (var_where_7823, GALGAS_gtlInt::constructor_new (var_where_7823, function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 305)), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 305))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 305))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 304)) ;
  GALGAS_lstring var_variableName_7979 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 309)) ;
  GALGAS_gtlExpression var_start_8029 ;
  nt_gtl_5F_expression_ (var_start_8029, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_up COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 313)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_down COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 315)) ;
    var_direction_7789 = GALGAS_sint_36__34_ ((int64_t) 1LL).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 317)) ;
  GALGAS_gtlExpression var_stop_8139 ;
  nt_gtl_5F_expression_ (var_stop_8139, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 320)) ;
    nt_gtl_5F_expression_ (var_step_7854, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 325)) ;
    nt_gtl_5F_instruction_5F_list_ (var_beforeList_7664, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 329)) ;
  GALGAS_gtlInstructionList var_doList_8357 ;
  nt_gtl_5F_instruction_5F_list_ (var_doList_8357, inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 333)) ;
    nt_gtl_5F_instruction_5F_list_ (var_betweenList_7711, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 338)) ;
    nt_gtl_5F_instruction_5F_list_ (var_afterList_7756, inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 343)) ;
  outArgument_instruction = GALGAS_gtlLoopStatementInstruction::constructor_new (var_where_7823, function_signature (var_where_7823, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 346)), var_variableName_7979, var_start_8029, var_stop_8139, var_step_7854, var_direction_7789, var_beforeList_7664, var_betweenList_7711, var_afterList_7756, var_doList_8357  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 345)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i8_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 302)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_identifier COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 308)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_from COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 309)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_up COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 313)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_down COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 315)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_to COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 317)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_step COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 320)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_14 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_before COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 325)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 329)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_gtl_5F_module_5F_parser_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_between COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 333)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  switch (select_gtl_5F_module_5F_parser_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_after COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 338)) ;
    nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 342)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_loop COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 343)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_ (GALGAS_gtlInstruction & outArgument_instruction,
                                                                                           C_Lexique_gtl_5F_scanner * inCompiler) {
  outArgument_instruction.drop () ; // Release 'out' argument
  GALGAS_gtlExpression var_limit_9009 ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 359)) ;
  GALGAS_location var_where_9039 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 359)) ;
  switch (select_gtl_5F_module_5F_parser_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 361)) ;
    nt_gtl_5F_expression_ (var_limit_9009, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 363)) ;
  } break ;
  case 2: {
    var_limit_9009 = GALGAS_gtlTerminal::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 366)), GALGAS_gtlInt::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 367)), function_emptylstring (inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 367)), GALGAS_uint::constructor_max (SOURCE_FILE ("gtl_module_parser.galgas", 367)).getter_bigint (SOURCE_FILE ("gtl_module_parser.galgas", 367))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 367))  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 365)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_gtlInstructionList var_continueList_9287 ;
  nt_gtl_5F_instruction_5F_list_ (var_continueList_9287, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_while COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 371)) ;
  GALGAS_gtlExpression var_condition_9342 ;
  nt_gtl_5F_expression_ (var_condition_9342, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 373)) ;
  GALGAS_gtlInstructionList var_doList_9402 ;
  nt_gtl_5F_instruction_5F_list_ (var_doList_9402, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 375)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 376)) ;
  outArgument_instruction = GALGAS_gtlRepeatStatementInstruction::constructor_new (var_where_9039, function_signature (var_where_9039, inCompiler COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 379)), var_limit_9009, var_condition_9342, var_continueList_9287, var_doList_9402  COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 378)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_gtl_5F_module_5F_parser::rule_gtl_5F_module_5F_parser_gtl_5F_instruction_i9_parse (C_Lexique_gtl_5F_scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 359)) ;
  switch (select_gtl_5F_module_5F_parser_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__28_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 361)) ;
    nt_gtl_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken__29_ COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 363)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_while COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 371)) ;
  nt_gtl_5F_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_do COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 373)) ;
  nt_gtl_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_end COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 375)) ;
  inCompiler->acceptTerminal (C_Lexique_gtl_5F_scanner::kToken_repeat COMMA_SOURCE_FILE ("gtl_module_parser.galgas", 376)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setDebugger'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setDebugger> gExtensionModifierTable_gtlContext_setDebugger ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setDebugger (const int32_t inClassIndex,
                                       extensionSetterSignature_gtlContext_setDebugger inModifier) {
  gExtensionModifierTable_gtlContext_setDebugger.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setDebugger (cPtr_gtlContext * inObject,
                                                    GALGAS_bool inArgument_debugOn,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.setter_setDebugActive (inArgument_debugOn COMMA_SOURCE_FILE ("gtl_debugger.galgas", 427)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setDebugger (void) {
  enterExtensionSetter_setDebugger (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionSetter_gtlContext_setDebugger) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setDebugger (void) {
  gExtensionModifierTable_gtlContext_setDebugger.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setDebugger (defineExtensionSetter_gtlContext_setDebugger,
                                                   freeExtensionModifier_gtlContext_setDebugger) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setBreakOnNext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setBreakOnNext> gExtensionModifierTable_gtlContext_setBreakOnNext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setBreakOnNext (const int32_t inClassIndex,
                                          extensionSetterSignature_gtlContext_setBreakOnNext inModifier) {
  gExtensionModifierTable_gtlContext_setBreakOnNext.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setBreakOnNext (cPtr_gtlContext * inObject,
                                         GALGAS_bool in_break,
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
    f (inObject, in_break, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setBreakOnNext (cPtr_gtlContext * inObject,
                                                       GALGAS_bool inArgument_break,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.setter_setBreakOnNext (inArgument_break COMMA_SOURCE_FILE ("gtl_debugger.galgas", 434)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setBreakOnNext (void) {
  enterExtensionSetter_setBreakOnNext (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                       extensionSetter_gtlContext_setBreakOnNext) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setBreakOnNext (void) {
  gExtensionModifierTable_gtlContext_setBreakOnNext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setBreakOnNext (defineExtensionSetter_gtlContext_setBreakOnNext,
                                                      freeExtensionModifier_gtlContext_setBreakOnNext) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext debugActive'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_debugActive> gExtensionGetterTable_gtlContext_debugActive ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_debugActive (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_debugActive inGetter) {
  gExtensionGetterTable_gtlContext_debugActive.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlContext_debugActive (const cPtr_gtlContext * inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_debugOn ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_debugOn = object->mProperty_debuggerContext.getter_debugActive (SOURCE_FILE ("gtl_debugger.galgas", 441)) ;
//---
  return result_debugOn ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_debugActive (void) {
  enterExtensionGetter_debugActive (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_debugActive) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_debugActive (void) {
  gExtensionGetterTable_gtlContext_debugActive.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_debugActive (defineExtensionGetter_gtlContext_debugActive,
                                                   freeExtensionGetter_gtlContext_debugActive) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext breakOnNext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_breakOnNext> gExtensionGetterTable_gtlContext_breakOnNext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_breakOnNext (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_breakOnNext inGetter) {
  gExtensionGetterTable_gtlContext_breakOnNext.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlContext_breakOnNext (const cPtr_gtlContext * inObject,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOnNext ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_breakOnNext = object->mProperty_debuggerContext.getter_breakOnNext (SOURCE_FILE ("gtl_debugger.galgas", 448)) ;
//---
  return result_breakOnNext ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_breakOnNext (void) {
  enterExtensionGetter_breakOnNext (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_breakOnNext) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_breakOnNext (void) {
  gExtensionGetterTable_gtlContext_breakOnNext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_breakOnNext (defineExtensionGetter_gtlContext_breakOnNext,
                                                   freeExtensionGetter_gtlContext_breakOnNext) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext breakOn'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_breakOn> gExtensionGetterTable_gtlContext_breakOn ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_breakOn (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlContext_breakOn inGetter) {
  gExtensionGetterTable_gtlContext_breakOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_breakOn (const cPtr_gtlContext * inObject,
                                         GALGAS_gtlInstruction in_instruction,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_breakOn f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_breakOn.count ()) {
      f = gExtensionGetterTable_gtlContext_breakOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_breakOn.count ()) {
           f = gExtensionGetterTable_gtlContext_breakOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_breakOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_instruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlContext_breakOn (const cPtr_gtlContext * inObject,
                                                       GALGAS_gtlInstruction inArgument_instruction,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_breakOn ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_breakOn = callExtensionGetter_breakOn ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), inArgument_instruction, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 456)) ;
//---
  return result_breakOn ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_breakOn (void) {
  enterExtensionGetter_breakOn (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                extensionGetter_gtlContext_breakOn) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_breakOn (void) {
  gExtensionGetterTable_gtlContext_breakOn.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_breakOn (defineExtensionGetter_gtlContext_breakOn,
                                               freeExtensionGetter_gtlContext_breakOn) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext watchOn'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_watchOn> gExtensionGetterTable_gtlContext_watchOn ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_watchOn (const int32_t inClassIndex,
                                   enterExtensionGetter_gtlContext_watchOn inGetter) {
  gExtensionGetterTable_gtlContext_watchOn.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_watchOn (const cPtr_gtlContext * inObject,
                                         const GALGAS_gtlContext in_context,
                                         const GALGAS_gtlData in_vars,
                                         const GALGAS_library in_lib,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_watchOn f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_watchOn.count ()) {
      f = gExtensionGetterTable_gtlContext_watchOn (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_watchOn.count ()) {
           f = gExtensionGetterTable_gtlContext_watchOn (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_watchOn.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_context, in_vars, in_lib, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlContext_watchOn (const cPtr_gtlContext * inObject,
                                                       const GALGAS_gtlContext constinArgument_context,
                                                       const GALGAS_gtlData constinArgument_vars,
                                                       const GALGAS_library constinArgument_lib,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_watchOn ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_watchOn = callExtensionGetter_watchOn ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), constinArgument_context, constinArgument_vars, constinArgument_lib, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 466)) ;
//---
  return result_watchOn ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_watchOn (void) {
  enterExtensionGetter_watchOn (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                extensionGetter_gtlContext_watchOn) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_watchOn (void) {
  gExtensionGetterTable_gtlContext_watchOn.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_watchOn (defineExtensionGetter_gtlContext_watchOn,
                                               freeExtensionGetter_gtlContext_watchOn) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext promptStyle'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_promptStyle> gExtensionGetterTable_gtlContext_promptStyle ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_promptStyle (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_promptStyle inGetter) {
  gExtensionGetterTable_gtlContext_promptStyle.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_promptStyle (const cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_promptStyle f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_promptStyle.count ()) {
      f = gExtensionGetterTable_gtlContext_promptStyle (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_promptStyle.count ()) {
           f = gExtensionGetterTable_gtlContext_promptStyle (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_promptStyle.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlContext_promptStyle (const cPtr_gtlContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_result = object->mProperty_debuggerContext.getter_promptColor (SOURCE_FILE ("gtl_debugger.galgas", 473)).add_operation (object->mProperty_debuggerContext.getter_promptFace (SOURCE_FILE ("gtl_debugger.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 473)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_promptStyle (void) {
  enterExtensionGetter_promptStyle (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_promptStyle) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_promptStyle (void) {
  gExtensionGetterTable_gtlContext_promptStyle.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_promptStyle (defineExtensionGetter_gtlContext_promptStyle,
                                                   freeExtensionGetter_gtlContext_promptStyle) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext outputStyle'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_outputStyle> gExtensionGetterTable_gtlContext_outputStyle ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_outputStyle (const int32_t inClassIndex,
                                       enterExtensionGetter_gtlContext_outputStyle inGetter) {
  gExtensionGetterTable_gtlContext_outputStyle.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_outputStyle (const cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_outputStyle f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_outputStyle.count ()) {
      f = gExtensionGetterTable_gtlContext_outputStyle (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_outputStyle.count ()) {
           f = gExtensionGetterTable_gtlContext_outputStyle (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_outputStyle.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_gtlContext_outputStyle (const cPtr_gtlContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_result = object->mProperty_debuggerContext.getter_outputColor (SOURCE_FILE ("gtl_debugger.galgas", 480)).add_operation (object->mProperty_debuggerContext.getter_outputFace (SOURCE_FILE ("gtl_debugger.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 480)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_outputStyle (void) {
  enterExtensionGetter_outputStyle (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                    extensionGetter_gtlContext_outputStyle) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_outputStyle (void) {
  gExtensionGetterTable_gtlContext_outputStyle.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_outputStyle (defineExtensionGetter_gtlContext_outputStyle,
                                                   freeExtensionGetter_gtlContext_outputStyle) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext appendInstructionToStepDo'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_appendInstructionToStepDo> gExtensionModifierTable_gtlContext_appendInstructionToStepDo ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_appendInstructionToStepDo (const int32_t inClassIndex,
                                                     extensionSetterSignature_gtlContext_appendInstructionToStepDo inModifier) {
  gExtensionModifierTable_gtlContext_appendInstructionToStepDo.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_appendInstructionToStepDo (cPtr_gtlContext * inObject,
                                                    GALGAS_gtlInstruction in_instruction,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_appendInstructionToStepDo f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_appendInstructionToStepDo.count ()) {
      f = gExtensionModifierTable_gtlContext_appendInstructionToStepDo (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_appendInstructionToStepDo.count ()) {
           f = gExtensionModifierTable_gtlContext_appendInstructionToStepDo (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_appendInstructionToStepDo.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_instruction, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_appendInstructionToStepDo (cPtr_gtlContext * inObject,
                                                                  GALGAS_gtlInstruction inArgument_instruction,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_15158 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_appendInstructionToStepDo ((cPtr_debuggerContext *) ptr_15158, inArgument_instruction, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 487)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_appendInstructionToStepDo (void) {
  enterExtensionSetter_appendInstructionToStepDo (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                                  extensionSetter_gtlContext_appendInstructionToStepDo) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_appendInstructionToStepDo (void) {
  gExtensionModifierTable_gtlContext_appendInstructionToStepDo.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_appendInstructionToStepDo (defineExtensionSetter_gtlContext_appendInstructionToStepDo,
                                                                 freeExtensionModifier_gtlContext_appendInstructionToStepDo) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteStepDoInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteStepDoInstruction> gExtensionModifierTable_gtlContext_deleteStepDoInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteStepDoInstruction (const int32_t inClassIndex,
                                                   extensionSetterSignature_gtlContext_deleteStepDoInstruction inModifier) {
  gExtensionModifierTable_gtlContext_deleteStepDoInstruction.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteStepDoInstruction (cPtr_gtlContext * inObject,
                                                  const GALGAS_lbigint constin_numToDelete,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteStepDoInstruction f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteStepDoInstruction.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteStepDoInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteStepDoInstruction.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteStepDoInstruction (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteStepDoInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteStepDoInstruction (cPtr_gtlContext * inObject,
                                                                const GALGAS_lbigint constinArgument_numToDelete,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_15375 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteStepDoInstruction ((cPtr_debuggerContext *) ptr_15375, constinArgument_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 494)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteStepDoInstruction (void) {
  enterExtensionSetter_deleteStepDoInstruction (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                                extensionSetter_gtlContext_deleteStepDoInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteStepDoInstruction (void) {
  gExtensionModifierTable_gtlContext_deleteStepDoInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteStepDoInstruction (defineExtensionSetter_gtlContext_deleteStepDoInstruction,
                                                               freeExtensionModifier_gtlContext_deleteStepDoInstruction) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteAllStepDoInstructions> gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllStepDoInstructions (const int32_t inClassIndex,
                                                       extensionSetterSignature_gtlContext_deleteAllStepDoInstructions inModifier) {
  gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllStepDoInstructions (cPtr_gtlContext * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteAllStepDoInstructions f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteAllStepDoInstructions (cPtr_gtlContext * inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_15566 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteAllStepDoInstructions ((cPtr_debuggerContext *) ptr_15566, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 500)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteAllStepDoInstructions (void) {
  enterExtensionSetter_deleteAllStepDoInstructions (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                                    extensionSetter_gtlContext_deleteAllStepDoInstructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteAllStepDoInstructions (void) {
  gExtensionModifierTable_gtlContext_deleteAllStepDoInstructions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteAllStepDoInstructions (defineExtensionSetter_gtlContext_deleteAllStepDoInstructions,
                                                                   freeExtensionModifier_gtlContext_deleteAllStepDoInstructions) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listStepDoInstructions'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_gtlContext_listStepDoInstructions> gExtensionMethodTable_gtlContext_listStepDoInstructions ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listStepDoInstructions (const int32_t inClassIndex,
                                                  extensionMethodSignature_gtlContext_listStepDoInstructions inMethod) {
  gExtensionMethodTable_gtlContext_listStepDoInstructions.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listStepDoInstructions (const cPtr_gtlContext * inObject,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlContext_listStepDoInstructions f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlContext_listStepDoInstructions.count ()) {
      f = gExtensionMethodTable_gtlContext_listStepDoInstructions (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlContext_listStepDoInstructions.count ()) {
           f = gExtensionMethodTable_gtlContext_listStepDoInstructions (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlContext_listStepDoInstructions.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContext_listStepDoInstructions (const cPtr_gtlContext * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  callExtensionMethod_listStepDoInstructions ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 506)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContext_listStepDoInstructions (void) {
  enterExtensionMethod_listStepDoInstructions (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                               extensionMethod_gtlContext_listStepDoInstructions) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_gtlContext_listStepDoInstructions (void) {
  gExtensionMethodTable_gtlContext_listStepDoInstructions.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContext_listStepDoInstructions (defineExtensionMethod_gtlContext_listStepDoInstructions,
                                                              freeExtensionMethod_gtlContext_listStepDoInstructions) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext executeStepDoList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_executeStepDoList> gExtensionModifierTable_gtlContext_executeStepDoList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_executeStepDoList (const int32_t inClassIndex,
                                             extensionSetterSignature_gtlContext_executeStepDoList inModifier) {
  gExtensionModifierTable_gtlContext_executeStepDoList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_executeStepDoList (cPtr_gtlContext * inObject,
                                            GALGAS_gtlContext & io_context,
                                            GALGAS_gtlData & io_vars,
                                            GALGAS_library & io_lib,
                                            GALGAS_string & io_outputString,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_executeStepDoList f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_executeStepDoList.count ()) {
      f = gExtensionModifierTable_gtlContext_executeStepDoList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_executeStepDoList.count ()) {
           f = gExtensionModifierTable_gtlContext_executeStepDoList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_executeStepDoList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, io_context, io_vars, io_lib, io_outputString, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_executeStepDoList (cPtr_gtlContext * inObject,
                                                          GALGAS_gtlContext & ioArgument_context,
                                                          GALGAS_gtlData & ioArgument_vars,
                                                          GALGAS_library & ioArgument_lib,
                                                          GALGAS_string & ioArgument_outputString,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  inCompiler->printMessage (callExtensionGetter_outputStyle ((const cPtr_gtlContext *) ioArgument_context.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 516))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 516)) ;
  cEnumerator_gtlInstructionList enumerator_16061 (object->mProperty_debuggerContext.getter_doList (SOURCE_FILE ("gtl_debugger.galgas", 517)), kENUMERATION_UP) ;
  while (enumerator_16061.hasCurrentObject ()) {
    callExtensionMethod_execute ((const cPtr_gtlInstruction *) enumerator_16061.current_instruction (HERE).ptr (), ioArgument_context, ioArgument_vars, ioArgument_lib, ioArgument_outputString, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 518)) ;
    enumerator_16061.gotoNextObject () ;
  }
  inCompiler->printMessage (function_endc (inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 520))  COMMA_SOURCE_FILE ("gtl_debugger.galgas", 520)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_executeStepDoList (void) {
  enterExtensionSetter_executeStepDoList (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                          extensionSetter_gtlContext_executeStepDoList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_executeStepDoList (void) {
  gExtensionModifierTable_gtlContext_executeStepDoList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_executeStepDoList (defineExtensionSetter_gtlContext_executeStepDoList,
                                                         freeExtensionModifier_gtlContext_executeStepDoList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setBreakpoint> gExtensionModifierTable_gtlContext_setBreakpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setBreakpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_setBreakpoint inModifier) {
  gExtensionModifierTable_gtlContext_setBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setBreakpoint (cPtr_gtlContext * inObject,
                                        const GALGAS_string constin_fileName,
                                        const GALGAS_uint constin_lineNum,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setBreakpoint.count ()) {
      f = gExtensionModifierTable_gtlContext_setBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setBreakpoint.count ()) {
           f = gExtensionModifierTable_gtlContext_setBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_fileName, constin_lineNum, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setBreakpoint (cPtr_gtlContext * inObject,
                                                      const GALGAS_string constinArgument_fileName,
                                                      const GALGAS_uint constinArgument_lineNum,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_16338 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_setBreakpoint ((cPtr_debuggerContext *) ptr_16338, constinArgument_fileName, constinArgument_lineNum, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 528)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setBreakpoint (void) {
  enterExtensionSetter_setBreakpoint (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionSetter_gtlContext_setBreakpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setBreakpoint (void) {
  gExtensionModifierTable_gtlContext_setBreakpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setBreakpoint (defineExtensionSetter_gtlContext_setBreakpoint,
                                                     freeExtensionModifier_gtlContext_setBreakpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_gtlContext_listBreakpoints> gExtensionMethodTable_gtlContext_listBreakpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listBreakpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_gtlContext_listBreakpoints inMethod) {
  gExtensionMethodTable_gtlContext_listBreakpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listBreakpoints (const cPtr_gtlContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlContext_listBreakpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlContext_listBreakpoints.count ()) {
      f = gExtensionMethodTable_gtlContext_listBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlContext_listBreakpoints.count ()) {
           f = gExtensionMethodTable_gtlContext_listBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlContext_listBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContext_listBreakpoints (const cPtr_gtlContext * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  callExtensionMethod_listBreakpoints ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 534)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContext_listBreakpoints (void) {
  enterExtensionMethod_listBreakpoints (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                        extensionMethod_gtlContext_listBreakpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_gtlContext_listBreakpoints (void) {
  gExtensionMethodTable_gtlContext_listBreakpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContext_listBreakpoints (defineExtensionMethod_gtlContext_listBreakpoints,
                                                       freeExtensionMethod_gtlContext_listBreakpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteBreakpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteBreakpoint> gExtensionModifierTable_gtlContext_deleteBreakpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteBreakpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_deleteBreakpoint inModifier) {
  gExtensionModifierTable_gtlContext_deleteBreakpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteBreakpoint (cPtr_gtlContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteBreakpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteBreakpoint.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteBreakpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteBreakpoint.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteBreakpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteBreakpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteBreakpoint (cPtr_gtlContext * inObject,
                                                         const GALGAS_lbigint constinArgument_numToDelete,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_16699 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteBreakpoint ((cPtr_debuggerContext *) ptr_16699, constinArgument_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 541)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteBreakpoint (void) {
  enterExtensionSetter_deleteBreakpoint (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_deleteBreakpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteBreakpoint (void) {
  gExtensionModifierTable_gtlContext_deleteBreakpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteBreakpoint (defineExtensionSetter_gtlContext_deleteBreakpoint,
                                                        freeExtensionModifier_gtlContext_deleteBreakpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllBreakpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteAllBreakpoints> gExtensionModifierTable_gtlContext_deleteAllBreakpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllBreakpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_gtlContext_deleteAllBreakpoints inModifier) {
  gExtensionModifierTable_gtlContext_deleteAllBreakpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllBreakpoints (cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteAllBreakpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteAllBreakpoints.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteAllBreakpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteAllBreakpoints.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteAllBreakpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteAllBreakpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteAllBreakpoints (cPtr_gtlContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_16876 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteAllBreakpoints ((cPtr_debuggerContext *) ptr_16876, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 547)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteAllBreakpoints (void) {
  enterExtensionSetter_deleteAllBreakpoints (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                             extensionSetter_gtlContext_deleteAllBreakpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteAllBreakpoints (void) {
  gExtensionModifierTable_gtlContext_deleteAllBreakpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteAllBreakpoints (defineExtensionSetter_gtlContext_deleteAllBreakpoints,
                                                            freeExtensionModifier_gtlContext_deleteAllBreakpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setWatchpoint> gExtensionModifierTable_gtlContext_setWatchpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setWatchpoint (const int32_t inClassIndex,
                                         extensionSetterSignature_gtlContext_setWatchpoint inModifier) {
  gExtensionModifierTable_gtlContext_setWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setWatchpoint (cPtr_gtlContext * inObject,
                                        const GALGAS_gtlExpression constin_watchExpression,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setWatchpoint.count ()) {
      f = gExtensionModifierTable_gtlContext_setWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setWatchpoint.count ()) {
           f = gExtensionModifierTable_gtlContext_setWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_watchExpression, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setWatchpoint (cPtr_gtlContext * inObject,
                                                      const GALGAS_gtlExpression constinArgument_watchExpression,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_17075 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_setWatchpoint ((cPtr_debuggerContext *) ptr_17075, constinArgument_watchExpression, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 554)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setWatchpoint (void) {
  enterExtensionSetter_setWatchpoint (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionSetter_gtlContext_setWatchpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setWatchpoint (void) {
  gExtensionModifierTable_gtlContext_setWatchpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setWatchpoint (defineExtensionSetter_gtlContext_setWatchpoint,
                                                     freeExtensionModifier_gtlContext_setWatchpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext listWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_gtlContext_listWatchpoints> gExtensionMethodTable_gtlContext_listWatchpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_listWatchpoints (const int32_t inClassIndex,
                                           extensionMethodSignature_gtlContext_listWatchpoints inMethod) {
  gExtensionMethodTable_gtlContext_listWatchpoints.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_listWatchpoints (const cPtr_gtlContext * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlContext_listWatchpoints f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlContext_listWatchpoints.count ()) {
      f = gExtensionMethodTable_gtlContext_listWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlContext_listWatchpoints.count ()) {
           f = gExtensionMethodTable_gtlContext_listWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlContext_listWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContext_listWatchpoints (const cPtr_gtlContext * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  callExtensionMethod_listWatchpoints ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 560)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContext_listWatchpoints (void) {
  enterExtensionMethod_listWatchpoints (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                        extensionMethod_gtlContext_listWatchpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_gtlContext_listWatchpoints (void) {
  gExtensionMethodTable_gtlContext_listWatchpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContext_listWatchpoints (defineExtensionMethod_gtlContext_listWatchpoints,
                                                       freeExtensionMethod_gtlContext_listWatchpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteWatchpoint'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteWatchpoint> gExtensionModifierTable_gtlContext_deleteWatchpoint ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteWatchpoint (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_deleteWatchpoint inModifier) {
  gExtensionModifierTable_gtlContext_deleteWatchpoint.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteWatchpoint (cPtr_gtlContext * inObject,
                                           const GALGAS_lbigint constin_numToDelete,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteWatchpoint f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteWatchpoint.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteWatchpoint (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteWatchpoint.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteWatchpoint (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteWatchpoint.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_numToDelete, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteWatchpoint (cPtr_gtlContext * inObject,
                                                         const GALGAS_lbigint constinArgument_numToDelete,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_17434 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteWatchpoint ((cPtr_debuggerContext *) ptr_17434, constinArgument_numToDelete, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 567)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteWatchpoint (void) {
  enterExtensionSetter_deleteWatchpoint (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_deleteWatchpoint) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteWatchpoint (void) {
  gExtensionModifierTable_gtlContext_deleteWatchpoint.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteWatchpoint (defineExtensionSetter_gtlContext_deleteWatchpoint,
                                                        freeExtensionModifier_gtlContext_deleteWatchpoint) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext deleteAllWatchpoints'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_deleteAllWatchpoints> gExtensionModifierTable_gtlContext_deleteAllWatchpoints ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_deleteAllWatchpoints (const int32_t inClassIndex,
                                                extensionSetterSignature_gtlContext_deleteAllWatchpoints inModifier) {
  gExtensionModifierTable_gtlContext_deleteAllWatchpoints.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_deleteAllWatchpoints (cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_deleteAllWatchpoints f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_deleteAllWatchpoints.count ()) {
      f = gExtensionModifierTable_gtlContext_deleteAllWatchpoints (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_deleteAllWatchpoints.count ()) {
           f = gExtensionModifierTable_gtlContext_deleteAllWatchpoints (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_deleteAllWatchpoints.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_deleteAllWatchpoints (cPtr_gtlContext * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_17611 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_deleteAllWatchpoints ((cPtr_debuggerContext *) ptr_17611, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 573)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_deleteAllWatchpoints (void) {
  enterExtensionSetter_deleteAllWatchpoints (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                             extensionSetter_gtlContext_deleteAllWatchpoints) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_deleteAllWatchpoints (void) {
  gExtensionModifierTable_gtlContext_deleteAllWatchpoints.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_deleteAllWatchpoints (defineExtensionSetter_gtlContext_deleteAllWatchpoints,
                                                            freeExtensionModifier_gtlContext_deleteAllWatchpoints) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setLoopOnCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setLoopOnCommand> gExtensionModifierTable_gtlContext_setLoopOnCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setLoopOnCommand (const int32_t inClassIndex,
                                            extensionSetterSignature_gtlContext_setLoopOnCommand inModifier) {
  gExtensionModifierTable_gtlContext_setLoopOnCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setLoopOnCommand (cPtr_gtlContext * inObject,
                                           GALGAS_bool in_loopOnCommand,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setLoopOnCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setLoopOnCommand.count ()) {
      f = gExtensionModifierTable_gtlContext_setLoopOnCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setLoopOnCommand.count ()) {
           f = gExtensionModifierTable_gtlContext_setLoopOnCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setLoopOnCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_loopOnCommand, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setLoopOnCommand (cPtr_gtlContext * inObject,
                                                         GALGAS_bool inArgument_loopOnCommand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.setter_setLoopOnCommand (inArgument_loopOnCommand COMMA_SOURCE_FILE ("gtl_debugger.galgas", 580)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setLoopOnCommand (void) {
  enterExtensionSetter_setLoopOnCommand (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                         extensionSetter_gtlContext_setLoopOnCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setLoopOnCommand (void) {
  gExtensionModifierTable_gtlContext_setLoopOnCommand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setLoopOnCommand (defineExtensionSetter_gtlContext_setLoopOnCommand,
                                                        freeExtensionModifier_gtlContext_setLoopOnCommand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@gtlContext loopOnCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_gtlContext_loopOnCommand> gExtensionGetterTable_gtlContext_loopOnCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_loopOnCommand (const int32_t inClassIndex,
                                         enterExtensionGetter_gtlContext_loopOnCommand inGetter) {
  gExtensionGetterTable_gtlContext_loopOnCommand.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_loopOnCommand (const cPtr_gtlContext * inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_gtlContext_loopOnCommand f = NULL ;
    if (classIndex < gExtensionGetterTable_gtlContext_loopOnCommand.count ()) {
      f = gExtensionGetterTable_gtlContext_loopOnCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_gtlContext_loopOnCommand.count ()) {
           f = gExtensionGetterTable_gtlContext_loopOnCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_gtlContext_loopOnCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_gtlContext_loopOnCommand (const cPtr_gtlContext * inObject,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_loopOnCommand ; // Returned variable
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  result_loopOnCommand = object->mProperty_debuggerContext.getter_loopOnCommand (SOURCE_FILE ("gtl_debugger.galgas", 587)) ;
//---
  return result_loopOnCommand ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_gtlContext_loopOnCommand (void) {
  enterExtensionGetter_loopOnCommand (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                      extensionGetter_gtlContext_loopOnCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_gtlContext_loopOnCommand (void) {
  gExtensionGetterTable_gtlContext_loopOnCommand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_gtlContext_loopOnCommand (defineExtensionGetter_gtlContext_loopOnCommand,
                                                     freeExtensionGetter_gtlContext_loopOnCommand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@gtlContext hereWeAre'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_gtlContext_hereWeAre> gExtensionMethodTable_gtlContext_hereWeAre ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_hereWeAre (const int32_t inClassIndex,
                                     extensionMethodSignature_gtlContext_hereWeAre inMethod) {
  gExtensionMethodTable_gtlContext_hereWeAre.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_hereWeAre (const cPtr_gtlContext * inObject,
                                    const GALGAS_uint constin_window,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_gtlContext_hereWeAre f = NULL ;
    if (classIndex < gExtensionMethodTable_gtlContext_hereWeAre.count ()) {
      f = gExtensionMethodTable_gtlContext_hereWeAre (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_gtlContext_hereWeAre.count ()) {
           f = gExtensionMethodTable_gtlContext_hereWeAre (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_gtlContext_hereWeAre.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_window, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_gtlContext_hereWeAre (const cPtr_gtlContext * inObject,
                                                  const GALGAS_uint constinArgument_window,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  callExtensionMethod_hereWeAre ((const cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr (), constinArgument_window, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 594)) ;
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_gtlContext_hereWeAre (void) {
  enterExtensionMethod_hereWeAre (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                  extensionMethod_gtlContext_hereWeAre) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_gtlContext_hereWeAre (void) {
  gExtensionMethodTable_gtlContext_hereWeAre.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_gtlContext_hereWeAre (defineExtensionMethod_gtlContext_hereWeAre,
                                                 freeExtensionMethod_gtlContext_hereWeAre) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext pushInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_pushInstructionList> gExtensionModifierTable_gtlContext_pushInstructionList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_pushInstructionList (const int32_t inClassIndex,
                                               extensionSetterSignature_gtlContext_pushInstructionList inModifier) {
  gExtensionModifierTable_gtlContext_pushInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_pushInstructionList (cPtr_gtlContext * inObject,
                                              const GALGAS_gtlInstructionList constin_instructionList,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_pushInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_pushInstructionList.count ()) {
      f = gExtensionModifierTable_gtlContext_pushInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_pushInstructionList.count ()) {
           f = gExtensionModifierTable_gtlContext_pushInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_pushInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, constin_instructionList, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_pushInstructionList (cPtr_gtlContext * inObject,
                                                            const GALGAS_gtlInstructionList constinArgument_instructionList,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_18383 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_pushInstructionList ((cPtr_debuggerContext *) ptr_18383, constinArgument_instructionList, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 601)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_pushInstructionList (void) {
  enterExtensionSetter_pushInstructionList (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                            extensionSetter_gtlContext_pushInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_pushInstructionList (void) {
  gExtensionModifierTable_gtlContext_pushInstructionList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_pushInstructionList (defineExtensionSetter_gtlContext_pushInstructionList,
                                                           freeExtensionModifier_gtlContext_pushInstructionList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext popInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_popInstructionList> gExtensionModifierTable_gtlContext_popInstructionList ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_popInstructionList (const int32_t inClassIndex,
                                              extensionSetterSignature_gtlContext_popInstructionList inModifier) {
  gExtensionModifierTable_gtlContext_popInstructionList.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_popInstructionList (cPtr_gtlContext * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_popInstructionList f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_popInstructionList.count ()) {
      f = gExtensionModifierTable_gtlContext_popInstructionList (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_popInstructionList.count ()) {
           f = gExtensionModifierTable_gtlContext_popInstructionList (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_popInstructionList.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_popInstructionList (cPtr_gtlContext * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_18565 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_popInstructionList ((cPtr_debuggerContext *) ptr_18565, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 607)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_popInstructionList (void) {
  enterExtensionSetter_popInstructionList (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                           extensionSetter_gtlContext_popInstructionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_popInstructionList (void) {
  gExtensionModifierTable_gtlContext_popInstructionList.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_popInstructionList (defineExtensionSetter_gtlContext_popInstructionList,
                                                          freeExtensionModifier_gtlContext_popInstructionList) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setNextInstructionIndex'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setNextInstructionIndex> gExtensionModifierTable_gtlContext_setNextInstructionIndex ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setNextInstructionIndex (const int32_t inClassIndex,
                                                   extensionSetterSignature_gtlContext_setNextInstructionIndex inModifier) {
  gExtensionModifierTable_gtlContext_setNextInstructionIndex.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setNextInstructionIndex (cPtr_gtlContext * inObject,
                                                  GALGAS_uint in_index,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setNextInstructionIndex f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setNextInstructionIndex.count ()) {
      f = gExtensionModifierTable_gtlContext_setNextInstructionIndex (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setNextInstructionIndex.count ()) {
           f = gExtensionModifierTable_gtlContext_setNextInstructionIndex (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setNextInstructionIndex.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_index, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setNextInstructionIndex (cPtr_gtlContext * inObject,
                                                                GALGAS_uint inArgument_index,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.setter_setNextInstructionIndex (inArgument_index COMMA_SOURCE_FILE ("gtl_debugger.galgas", 614)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setNextInstructionIndex (void) {
  enterExtensionSetter_setNextInstructionIndex (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                                extensionSetter_gtlContext_setNextInstructionIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setNextInstructionIndex (void) {
  gExtensionModifierTable_gtlContext_setNextInstructionIndex.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setNextInstructionIndex (defineExtensionSetter_gtlContext_setNextInstructionIndex,
                                                               freeExtensionModifier_gtlContext_setNextInstructionIndex) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext setExecuteDebuggerCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_setExecuteDebuggerCommand> gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_setExecuteDebuggerCommand (const int32_t inClassIndex,
                                                     extensionSetterSignature_gtlContext_setExecuteDebuggerCommand inModifier) {
  gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_setExecuteDebuggerCommand (cPtr_gtlContext * inObject,
                                                    GALGAS_bool in_debuggerCommand,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_setExecuteDebuggerCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand.count ()) {
      f = gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand.count ()) {
           f = gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, in_debuggerCommand, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_setExecuteDebuggerCommand (cPtr_gtlContext * inObject,
                                                                  GALGAS_bool inArgument_debuggerCommand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.setter_setExecuteDebuggerCommand (inArgument_debuggerCommand COMMA_SOURCE_FILE ("gtl_debugger.galgas", 621)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_setExecuteDebuggerCommand (void) {
  enterExtensionSetter_setExecuteDebuggerCommand (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                                  extensionSetter_gtlContext_setExecuteDebuggerCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_setExecuteDebuggerCommand (void) {
  gExtensionModifierTable_gtlContext_setExecuteDebuggerCommand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_setExecuteDebuggerCommand (defineExtensionSetter_gtlContext_setExecuteDebuggerCommand,
                                                                 freeExtensionModifier_gtlContext_setExecuteDebuggerCommand) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension setter '@gtlContext getCommand'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionSetterSignature_gtlContext_getCommand> gExtensionModifierTable_gtlContext_getCommand ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionSetter_getCommand (const int32_t inClassIndex,
                                      extensionSetterSignature_gtlContext_getCommand inModifier) {
  gExtensionModifierTable_gtlContext_getCommand.forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionSetter_getCommand (cPtr_gtlContext * inObject,
                                     GALGAS_string & out_command,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_command.drop () ;
//--- Find setter
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_gtlContext) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionSetterSignature_gtlContext_getCommand f = NULL ;
    if (classIndex < gExtensionModifierTable_gtlContext_getCommand.count ()) {
      f = gExtensionModifierTable_gtlContext_getCommand (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionModifierTable_gtlContext_getCommand.count ()) {
           f = gExtensionModifierTable_gtlContext_getCommand (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionModifierTable_gtlContext_getCommand.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    f (inObject, out_command, inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionSetter_gtlContext_getCommand (cPtr_gtlContext * inObject,
                                                   GALGAS_string & outArgument_command,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cPtr_gtlContext * object = inObject ;
  macroValidSharedObject (object, cPtr_gtlContext) ;
  {
  object->mProperty_debuggerContext.insulate (HERE) ;
  cPtr_debuggerContext * ptr_19156 = (cPtr_debuggerContext *) object->mProperty_debuggerContext.ptr () ;
  callExtensionSetter_getCommand ((cPtr_debuggerContext *) ptr_19156, outArgument_command, inCompiler COMMA_SOURCE_FILE ("gtl_debugger.galgas", 628)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionSetter_gtlContext_getCommand (void) {
  enterExtensionSetter_getCommand (kTypeDescriptor_GALGAS_gtlContext.mSlotID,
                                   extensionSetter_gtlContext_getCommand) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionModifier_gtlContext_getCommand (void) {
  gExtensionModifierTable_gtlContext_getCommand.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gSetter_gtlContext_getCommand (defineExtensionSetter_gtlContext_getCommand,
                                                  freeExtensionModifier_gtlContext_getCommand) ;

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   L L ( 1 )    P R O D U C T I O N    R U L E S                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

#define TERMINAL(t)     ((t)+1)
#define NONTERMINAL(nt) ((-nt)-1)
#define END_PRODUCTION  (0)

static const int16_t gProductions_gtl_grammar [] = {
// At index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
  NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 3 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 687
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 7 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 722
, NONTERMINAL (66) // <select_gtl_5F_expression_5F_parser_24>
, END_PRODUCTION
// At index 9 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 391
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_import) // $import$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_let) // $let$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (70) // <select_gtl_5F_instruction_5F_parser_0>
, END_PRODUCTION
// At index 16 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_unlet) // $unlet$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 19 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_error) // $error$
, NONTERMINAL (2) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 24 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_warning) // $warning$
, NONTERMINAL (2) // <gtl_variable_or_here>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 29 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_print) // $print$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 32 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_println) // $println$
, NONTERMINAL (71) // <select_gtl_5F_instruction_5F_parser_1>
, END_PRODUCTION
// At index 35 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_seed) // $seed$
, NONTERMINAL (72) // <select_gtl_5F_instruction_5F_parser_2>
, END_PRODUCTION
// At index 38 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 264
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_display) // $display$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 41 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 279
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_sort) // $sort$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (73) // <select_gtl_5F_instruction_5F_parser_3>
, END_PRODUCTION
// At index 45 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 312
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_tab) // $tab$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 48 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 326
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_variables) // $variables$
, END_PRODUCTION
// At index 50 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 338
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_libraries) // $libraries$
, END_PRODUCTION
// At index 52 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 349
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B__21_) // $[!$
, NONTERMINAL (1) // <gtl_variable>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (75) // <select_gtl_5F_instruction_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 58 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 736
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (67) // <select_gtl_5F_expression_5F_parser_25>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 62 : <gtl_start_symbol>, in file 'gtl_parser.ggs', line 50
, NONTERMINAL (16) // <select_gtl_5F_parser_0>
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 65 : <gtl_template_instruction_list>, in file 'gtl_parser.ggs', line 63
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 67 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 90
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21_) // $!$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 70 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 108
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_write) // $write$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_to) // $to$
, NONTERMINAL (18) // <select_gtl_5F_parser_2>
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_write) // $write$
, END_PRODUCTION
// At index 79 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 128
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_template) // $template$
, NONTERMINAL (19) // <select_gtl_5F_parser_3>
, NONTERMINAL (22) // <select_gtl_5F_parser_6>
, END_PRODUCTION
// At index 83 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 183
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3F_) // $?$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 86 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 196
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (26) // <select_gtl_5F_parser_10>
, NONTERMINAL (27) // <select_gtl_5F_parser_11>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, END_PRODUCTION
// At index 95 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 228
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (28) // <select_gtl_5F_parser_12>
, NONTERMINAL (29) // <select_gtl_5F_parser_13>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (30) // <select_gtl_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (31) // <select_gtl_5F_parser_15>
, NONTERMINAL (32) // <select_gtl_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_foreach) // $foreach$
, END_PRODUCTION
// At index 109 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 289
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_parser_17>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (34) // <select_gtl_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_for) // $for$
, END_PRODUCTION
// At index 120 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 331
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_from) // $from$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (35) // <select_gtl_5F_parser_19>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_to) // $to$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (36) // <select_gtl_5F_parser_20>
, NONTERMINAL (37) // <select_gtl_5F_parser_21>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (38) // <select_gtl_5F_parser_22>
, NONTERMINAL (39) // <select_gtl_5F_parser_23>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_loop) // $loop$
, END_PRODUCTION
// At index 136 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 397
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, NONTERMINAL (40) // <select_gtl_5F_parser_24>
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_while) // $while$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_do) // $do$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_repeat) // $repeat$
, END_PRODUCTION
// At index 146 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 430
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_input) // $input$
, NONTERMINAL (5) // <gtl_argument_list>
, END_PRODUCTION
// At index 149 : <gtl_file_name>, in file 'gtl_parser.ggs', line 443
, NONTERMINAL (41) // <select_gtl_5F_parser_25>
, END_PRODUCTION
// At index 151 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
, NONTERMINAL (11) // <gtl_relation_factor>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 154 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
, NONTERMINAL (12) // <gtl_simple_expression>
, NONTERMINAL (44) // <select_gtl_5F_expression_5F_parser_2>
, END_PRODUCTION
// At index 157 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 160 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 163 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 167 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_not) // $not$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 170 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7E_) // $~$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 173 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 176 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (14) // <gtl_factor>
, END_PRODUCTION
// At index 179 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_yes) // $yes$
, END_PRODUCTION
// At index 181 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_no) // $no$
, END_PRODUCTION
// At index 183 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint) // $signed_literal_integer_bigint$
, END_PRODUCTION
// At index 185 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_double) // $literal_double$
, END_PRODUCTION
// At index 187 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, END_PRODUCTION
// At index 189 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_char) // $literal_char$
, END_PRODUCTION
// At index 191 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (47) // <select_gtl_5F_expression_5F_parser_5>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 197 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (49) // <select_gtl_5F_expression_5F_parser_7>
, END_PRODUCTION
// At index 200 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (1) // <gtl_variable>
, NONTERMINAL (52) // <select_gtl_5F_expression_5F_parser_10>
, END_PRODUCTION
// At index 204 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_typeof) // $typeof$
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 207 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_true) // $true$
, END_PRODUCTION
// At index 209 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_false) // $false$
, END_PRODUCTION
// At index 211 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum) // $literal_enum$
, END_PRODUCTION
// At index 213 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 216 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptylist) // $emptylist$
, END_PRODUCTION
// At index 218 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_emptymap) // $emptymap$
, END_PRODUCTION
// At index 220 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mapof) // $mapof$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (53) // <select_gtl_5F_expression_5F_parser_11>
, END_PRODUCTION
// At index 224 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_listof) // $listof$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 228 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__28_) // $@($
, NONTERMINAL (54) // <select_gtl_5F_expression_5F_parser_12>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 232 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__5B_) // $@[$
, NONTERMINAL (56) // <select_gtl_5F_expression_5F_parser_14>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, END_PRODUCTION
// At index 236 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__7B_) // $@{$
, NONTERMINAL (58) // <select_gtl_5F_expression_5F_parser_16>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7D_) // $}$
, END_PRODUCTION
// At index 240 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__21_) // $@!$
, NONTERMINAL (60) // <select_gtl_5F_expression_5F_parser_18>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21_) // $!$
, END_PRODUCTION
// At index 244 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 667
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40__3F_) // $@?$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3F_) // $?$
, END_PRODUCTION
// At index 248 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 678
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_) // $__VARS__$
, END_PRODUCTION
// At index 250 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 378
, NONTERMINAL (77) // <select_gtl_5F_instruction_5F_parser_7>
, END_PRODUCTION
//---- Added productions from 'select' and 'repeat' instructions
// At index 252 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
, END_PRODUCTION
// At index 253 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
, NONTERMINAL (3) // <gtl_import>
, NONTERMINAL (16) // <select_gtl_5F_parser_0>
, END_PRODUCTION
// At index 256 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, END_PRODUCTION
// At index 257 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, NONTERMINAL (8) // <gtl_template_instruction>
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 260 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
, NONTERMINAL (4) // <gtl_simple_instruction>
, NONTERMINAL (17) // <select_gtl_5F_parser_1>
, END_PRODUCTION
// At index 263 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_executable) // $executable$
, END_PRODUCTION
// At index 265 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
, END_PRODUCTION
// At index 266 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (20) // <select_gtl_5F_parser_4>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 270 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
, END_PRODUCTION
// At index 271 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (21) // <select_gtl_5F_parser_5>
, END_PRODUCTION
// At index 274 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
, END_PRODUCTION
// At index 275 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
, END_PRODUCTION
// At index 276 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (21) // <select_gtl_5F_parser_5>
, END_PRODUCTION
// At index 280 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_if) // $if$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_exists) // $exists$
, NONTERMINAL (9) // <gtl_file_name>
, NONTERMINAL (23) // <select_gtl_5F_parser_7>
, NONTERMINAL (24) // <select_gtl_5F_parser_8>
, END_PRODUCTION
// At index 286 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
, NONTERMINAL (9) // <gtl_file_name>
, NONTERMINAL (25) // <select_gtl_5F_parser_9>
, END_PRODUCTION
// At index 289 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 292 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
, END_PRODUCTION
// At index 293 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_or) // $or$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_template) // $template$
, END_PRODUCTION
// At index 298 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
, END_PRODUCTION
// At index 299 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_in) // $in$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 302 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
, END_PRODUCTION
// At index 303 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
, END_PRODUCTION
// At index 304 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_elsif) // $elsif$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_then) // $then$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, NONTERMINAL (26) // <select_gtl_5F_parser_10>
, END_PRODUCTION
// At index 310 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_else) // $else$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 313 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
, END_PRODUCTION
// At index 314 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 317 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
, END_PRODUCTION
// At index 318 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 322 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
, END_PRODUCTION
// At index 323 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 326 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
, END_PRODUCTION
// At index 327 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 330 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
, END_PRODUCTION
// At index 331 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 334 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
, END_PRODUCTION
// At index 335 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
, END_PRODUCTION
// At index 336 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (33) // <select_gtl_5F_parser_17>
, END_PRODUCTION
// At index 340 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 343 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
, END_PRODUCTION
// At index 344 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, END_PRODUCTION
// At index 345 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_up) // $up$
, END_PRODUCTION
// At index 347 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_down) // $down$
, END_PRODUCTION
// At index 349 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_step) // $step$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 352 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
, END_PRODUCTION
// At index 353 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_before) // $before$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 356 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
, END_PRODUCTION
// At index 357 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_between) // $between$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 360 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
, END_PRODUCTION
// At index 361 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_after) // $after$
, NONTERMINAL (7) // <gtl_template_instruction_list>
, END_PRODUCTION
// At index 364 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
, END_PRODUCTION
// At index 365 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 369 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
, END_PRODUCTION
// At index 370 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 372 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_from) // $from$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 375 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, END_PRODUCTION
// At index 376 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C_) // $|$
, NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 380 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E_) // $^$
, NONTERMINAL (10) // <gtl_relation_term>
, NONTERMINAL (42) // <select_gtl_5F_expression_5F_parser_0>
, END_PRODUCTION
// At index 384 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, END_PRODUCTION
// At index 385 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26_) // $&$
, NONTERMINAL (11) // <gtl_relation_factor>
, NONTERMINAL (43) // <select_gtl_5F_expression_5F_parser_1>
, END_PRODUCTION
// At index 389 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, END_PRODUCTION
// At index 390 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3D__3D_) // $==$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 393 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__21__3D_) // $!=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 396 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3D_) // $<=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 399 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3D_) // $>=$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 402 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 405 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, NONTERMINAL (12) // <gtl_simple_expression>
, END_PRODUCTION
// At index 408 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, END_PRODUCTION
// At index 409 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C_) // $<<$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 413 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E_) // $>>$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 417 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B_) // $+$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 421 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2E_) // $.$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 425 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D_) // $-$
, NONTERMINAL (13) // <gtl_term>
, NONTERMINAL (45) // <select_gtl_5F_expression_5F_parser_3>
, END_PRODUCTION
// At index 429 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, END_PRODUCTION
// At index 430 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A_) // $*$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 434 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F_) // $/$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 438 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod) // $mod$
, NONTERMINAL (14) // <gtl_factor>
, NONTERMINAL (46) // <select_gtl_5F_expression_5F_parser_4>
, END_PRODUCTION
// At index 442 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, END_PRODUCTION
// At index 443 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (48) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 447 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, END_PRODUCTION
// At index 448 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (48) // <select_gtl_5F_expression_5F_parser_6>
, END_PRODUCTION
// At index 452 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, END_PRODUCTION
// At index 453 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (50) // <select_gtl_5F_expression_5F_parser_8>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 457 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 460 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
, END_PRODUCTION
// At index 461 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, END_PRODUCTION
// At index 462 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (51) // <select_gtl_5F_expression_5F_parser_9>
, END_PRODUCTION
// At index 466 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_default) // $default$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__28_) // $($
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__29_) // $)$
, END_PRODUCTION
// At index 471 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
, END_PRODUCTION
// At index 472 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 475 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_end) // $end$
, END_PRODUCTION
// At index 477 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (55) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 480 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
, END_PRODUCTION
// At index 481 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, END_PRODUCTION
// At index 482 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (55) // <select_gtl_5F_expression_5F_parser_13>
, END_PRODUCTION
// At index 486 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (57) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 491 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
, END_PRODUCTION
// At index 492 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, END_PRODUCTION
// At index 493 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_string) // $string$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (57) // <select_gtl_5F_expression_5F_parser_15>
, END_PRODUCTION
// At index 499 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (59) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 504 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
, END_PRODUCTION
// At index 505 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, END_PRODUCTION
// At index 506 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (59) // <select_gtl_5F_expression_5F_parser_17>
, END_PRODUCTION
// At index 512 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (61) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 515 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
, END_PRODUCTION
// At index 516 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, END_PRODUCTION
// At index 517 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (61) // <select_gtl_5F_expression_5F_parser_19>
, END_PRODUCTION
// At index 521 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
, END_PRODUCTION
// At index 522 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3A_) // $::$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (63) // <select_gtl_5F_expression_5F_parser_21>
, NONTERMINAL (62) // <select_gtl_5F_expression_5F_parser_20>
, END_PRODUCTION
// At index 527 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (64) // <select_gtl_5F_expression_5F_parser_22>
, END_PRODUCTION
// At index 532 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
, END_PRODUCTION
// At index 533 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 538 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
, END_PRODUCTION
// At index 539 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
, END_PRODUCTION
// At index 540 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5B_) // $[$
, NONTERMINAL (0) // <gtl_expression>
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5D_) // $]$
, NONTERMINAL (65) // <select_gtl_5F_expression_5F_parser_23>
, END_PRODUCTION
// At index 545 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_here) // $here$
, END_PRODUCTION
// At index 547 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
, NONTERMINAL (1) // <gtl_variable>
, END_PRODUCTION
// At index 549 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 553 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
, END_PRODUCTION
// At index 554 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
, END_PRODUCTION
// At index 555 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (69) // <select_gtl_5F_expression_5F_parser_27>
, NONTERMINAL (68) // <select_gtl_5F_expression_5F_parser_26>
, END_PRODUCTION
// At index 560 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__40_) // $@$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, END_PRODUCTION
// At index 564 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
, END_PRODUCTION
// At index 565 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A__3D_) // $:=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 568 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2B__3D_) // $+=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 571 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2D__3D_) // $-=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 574 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2A__3D_) // $*=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 577 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2F__3D_) // $/=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 580 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_mod_3D_) // $mod=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 583 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_) // $<<=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 586 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_) // $>>=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 589 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__26__3D_) // $&=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 592 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__7C__3D_) // $|=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 595 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__5E__3D_) // $^=$
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 598 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
, END_PRODUCTION
// At index 599 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 601 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
, END_PRODUCTION
// At index 602 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 245
, NONTERMINAL (0) // <gtl_expression>
, END_PRODUCTION
// At index 604 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 245
, END_PRODUCTION
// At index 605 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 284
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_by) // $by$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <gtl_sorting_order>
, NONTERMINAL (74) // <select_gtl_5F_instruction_5F_parser_4>
, END_PRODUCTION
// At index 610 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 284
, NONTERMINAL (15) // <gtl_sorting_order>
, END_PRODUCTION
// At index 612 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 287
, END_PRODUCTION
// At index 613 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 287
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken_identifier) // $identifier$
, NONTERMINAL (15) // <gtl_sorting_order>
, NONTERMINAL (74) // <select_gtl_5F_instruction_5F_parser_4>
, END_PRODUCTION
// At index 618 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 357
, END_PRODUCTION
// At index 619 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 357
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3A_) // $:$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (76) // <select_gtl_5F_instruction_5F_parser_6>
, END_PRODUCTION
// At index 623 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 360
, END_PRODUCTION
// At index 624 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 360
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__2C_) // $,$
, NONTERMINAL (0) // <gtl_expression>
, NONTERMINAL (76) // <select_gtl_5F_instruction_5F_parser_6>
, END_PRODUCTION
// At index 628 : <select_gtl_5F_instruction_5F_parser_7>, in file 'gtl_instruction_parser.ggs', line 381
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3E_) // $>$
, END_PRODUCTION
// At index 630 : <select_gtl_5F_instruction_5F_parser_7>, in file 'gtl_instruction_parser.ggs', line 381
, TERMINAL (C_Lexique_gtl_5F_scanner::kToken__3C_) // $<$
, END_PRODUCTION
// At index 632 : <>, in file '.ggs', line 0
, NONTERMINAL (6) // <gtl_start_symbol>
, END_PRODUCTION
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                          P R O D U C T I O N    N A M E S                                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const cProductionNameDescriptor gProductionNames_gtl_grammar [214] = {
 {"<gtl_expression>", "gtl_expression_parser", 0}, // at index 0
 {"<gtl_variable>", "gtl_expression_parser", 3}, // at index 1
 {"<gtl_variable_or_here>", "gtl_expression_parser", 7}, // at index 2
 {"<gtl_import>", "gtl_instruction_parser", 9}, // at index 3
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 12}, // at index 4
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 16}, // at index 5
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 19}, // at index 6
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 24}, // at index 7
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 29}, // at index 8
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 32}, // at index 9
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 35}, // at index 10
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 38}, // at index 11
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 41}, // at index 12
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 45}, // at index 13
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 48}, // at index 14
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 50}, // at index 15
 {"<gtl_simple_instruction>", "gtl_instruction_parser", 52}, // at index 16
 {"<gtl_argument_list>", "gtl_expression_parser", 58}, // at index 17
 {"<gtl_start_symbol>", "gtl_parser", 62}, // at index 18
 {"<gtl_template_instruction_list>", "gtl_parser", 65}, // at index 19
 {"<gtl_template_instruction>", "gtl_parser", 67}, // at index 20
 {"<gtl_template_instruction>", "gtl_parser", 70}, // at index 21
 {"<gtl_template_instruction>", "gtl_parser", 79}, // at index 22
 {"<gtl_template_instruction>", "gtl_parser", 83}, // at index 23
 {"<gtl_template_instruction>", "gtl_parser", 86}, // at index 24
 {"<gtl_template_instruction>", "gtl_parser", 95}, // at index 25
 {"<gtl_template_instruction>", "gtl_parser", 109}, // at index 26
 {"<gtl_template_instruction>", "gtl_parser", 120}, // at index 27
 {"<gtl_template_instruction>", "gtl_parser", 136}, // at index 28
 {"<gtl_template_instruction>", "gtl_parser", 146}, // at index 29
 {"<gtl_file_name>", "gtl_parser", 149}, // at index 30
 {"<gtl_relation_term>", "gtl_expression_parser", 151}, // at index 31
 {"<gtl_relation_factor>", "gtl_expression_parser", 154}, // at index 32
 {"<gtl_simple_expression>", "gtl_expression_parser", 157}, // at index 33
 {"<gtl_term>", "gtl_expression_parser", 160}, // at index 34
 {"<gtl_factor>", "gtl_expression_parser", 163}, // at index 35
 {"<gtl_factor>", "gtl_expression_parser", 167}, // at index 36
 {"<gtl_factor>", "gtl_expression_parser", 170}, // at index 37
 {"<gtl_factor>", "gtl_expression_parser", 173}, // at index 38
 {"<gtl_factor>", "gtl_expression_parser", 176}, // at index 39
 {"<gtl_factor>", "gtl_expression_parser", 179}, // at index 40
 {"<gtl_factor>", "gtl_expression_parser", 181}, // at index 41
 {"<gtl_factor>", "gtl_expression_parser", 183}, // at index 42
 {"<gtl_factor>", "gtl_expression_parser", 185}, // at index 43
 {"<gtl_factor>", "gtl_expression_parser", 187}, // at index 44
 {"<gtl_factor>", "gtl_expression_parser", 189}, // at index 45
 {"<gtl_factor>", "gtl_expression_parser", 191}, // at index 46
 {"<gtl_factor>", "gtl_expression_parser", 197}, // at index 47
 {"<gtl_factor>", "gtl_expression_parser", 200}, // at index 48
 {"<gtl_factor>", "gtl_expression_parser", 204}, // at index 49
 {"<gtl_factor>", "gtl_expression_parser", 207}, // at index 50
 {"<gtl_factor>", "gtl_expression_parser", 209}, // at index 51
 {"<gtl_factor>", "gtl_expression_parser", 211}, // at index 52
 {"<gtl_factor>", "gtl_expression_parser", 213}, // at index 53
 {"<gtl_factor>", "gtl_expression_parser", 216}, // at index 54
 {"<gtl_factor>", "gtl_expression_parser", 218}, // at index 55
 {"<gtl_factor>", "gtl_expression_parser", 220}, // at index 56
 {"<gtl_factor>", "gtl_expression_parser", 224}, // at index 57
 {"<gtl_factor>", "gtl_expression_parser", 228}, // at index 58
 {"<gtl_factor>", "gtl_expression_parser", 232}, // at index 59
 {"<gtl_factor>", "gtl_expression_parser", 236}, // at index 60
 {"<gtl_factor>", "gtl_expression_parser", 240}, // at index 61
 {"<gtl_factor>", "gtl_expression_parser", 244}, // at index 62
 {"<gtl_factor>", "gtl_expression_parser", 248}, // at index 63
 {"<gtl_sorting_order>", "gtl_instruction_parser", 250}, // at index 64
 {"<select_gtl_5F_parser_0>", "gtl_parser", 252}, // at index 65
 {"<select_gtl_5F_parser_0>", "gtl_parser", 253}, // at index 66
 {"<select_gtl_5F_parser_1>", "gtl_parser", 256}, // at index 67
 {"<select_gtl_5F_parser_1>", "gtl_parser", 257}, // at index 68
 {"<select_gtl_5F_parser_1>", "gtl_parser", 260}, // at index 69
 {"<select_gtl_5F_parser_2>", "gtl_parser", 263}, // at index 70
 {"<select_gtl_5F_parser_2>", "gtl_parser", 265}, // at index 71
 {"<select_gtl_5F_parser_3>", "gtl_parser", 266}, // at index 72
 {"<select_gtl_5F_parser_3>", "gtl_parser", 270}, // at index 73
 {"<select_gtl_5F_parser_4>", "gtl_parser", 271}, // at index 74
 {"<select_gtl_5F_parser_4>", "gtl_parser", 274}, // at index 75
 {"<select_gtl_5F_parser_5>", "gtl_parser", 275}, // at index 76
 {"<select_gtl_5F_parser_5>", "gtl_parser", 276}, // at index 77
 {"<select_gtl_5F_parser_6>", "gtl_parser", 280}, // at index 78
 {"<select_gtl_5F_parser_6>", "gtl_parser", 286}, // at index 79
 {"<select_gtl_5F_parser_7>", "gtl_parser", 289}, // at index 80
 {"<select_gtl_5F_parser_7>", "gtl_parser", 292}, // at index 81
 {"<select_gtl_5F_parser_8>", "gtl_parser", 293}, // at index 82
 {"<select_gtl_5F_parser_8>", "gtl_parser", 298}, // at index 83
 {"<select_gtl_5F_parser_9>", "gtl_parser", 299}, // at index 84
 {"<select_gtl_5F_parser_9>", "gtl_parser", 302}, // at index 85
 {"<select_gtl_5F_parser_10>", "gtl_parser", 303}, // at index 86
 {"<select_gtl_5F_parser_10>", "gtl_parser", 304}, // at index 87
 {"<select_gtl_5F_parser_11>", "gtl_parser", 310}, // at index 88
 {"<select_gtl_5F_parser_11>", "gtl_parser", 313}, // at index 89
 {"<select_gtl_5F_parser_12>", "gtl_parser", 314}, // at index 90
 {"<select_gtl_5F_parser_12>", "gtl_parser", 317}, // at index 91
 {"<select_gtl_5F_parser_13>", "gtl_parser", 318}, // at index 92
 {"<select_gtl_5F_parser_13>", "gtl_parser", 322}, // at index 93
 {"<select_gtl_5F_parser_14>", "gtl_parser", 323}, // at index 94
 {"<select_gtl_5F_parser_14>", "gtl_parser", 326}, // at index 95
 {"<select_gtl_5F_parser_15>", "gtl_parser", 327}, // at index 96
 {"<select_gtl_5F_parser_15>", "gtl_parser", 330}, // at index 97
 {"<select_gtl_5F_parser_16>", "gtl_parser", 331}, // at index 98
 {"<select_gtl_5F_parser_16>", "gtl_parser", 334}, // at index 99
 {"<select_gtl_5F_parser_17>", "gtl_parser", 335}, // at index 100
 {"<select_gtl_5F_parser_17>", "gtl_parser", 336}, // at index 101
 {"<select_gtl_5F_parser_18>", "gtl_parser", 340}, // at index 102
 {"<select_gtl_5F_parser_18>", "gtl_parser", 343}, // at index 103
 {"<select_gtl_5F_parser_19>", "gtl_parser", 344}, // at index 104
 {"<select_gtl_5F_parser_19>", "gtl_parser", 345}, // at index 105
 {"<select_gtl_5F_parser_19>", "gtl_parser", 347}, // at index 106
 {"<select_gtl_5F_parser_20>", "gtl_parser", 349}, // at index 107
 {"<select_gtl_5F_parser_20>", "gtl_parser", 352}, // at index 108
 {"<select_gtl_5F_parser_21>", "gtl_parser", 353}, // at index 109
 {"<select_gtl_5F_parser_21>", "gtl_parser", 356}, // at index 110
 {"<select_gtl_5F_parser_22>", "gtl_parser", 357}, // at index 111
 {"<select_gtl_5F_parser_22>", "gtl_parser", 360}, // at index 112
 {"<select_gtl_5F_parser_23>", "gtl_parser", 361}, // at index 113
 {"<select_gtl_5F_parser_23>", "gtl_parser", 364}, // at index 114
 {"<select_gtl_5F_parser_24>", "gtl_parser", 365}, // at index 115
 {"<select_gtl_5F_parser_24>", "gtl_parser", 369}, // at index 116
 {"<select_gtl_5F_parser_25>", "gtl_parser", 370}, // at index 117
 {"<select_gtl_5F_parser_25>", "gtl_parser", 372}, // at index 118
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 375}, // at index 119
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 376}, // at index 120
 {"<select_gtl_5F_expression_5F_parser_0>", "gtl_expression_parser", 380}, // at index 121
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 384}, // at index 122
 {"<select_gtl_5F_expression_5F_parser_1>", "gtl_expression_parser", 385}, // at index 123
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 389}, // at index 124
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 390}, // at index 125
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 393}, // at index 126
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 396}, // at index 127
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 399}, // at index 128
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 402}, // at index 129
 {"<select_gtl_5F_expression_5F_parser_2>", "gtl_expression_parser", 405}, // at index 130
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 408}, // at index 131
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 409}, // at index 132
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 413}, // at index 133
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 417}, // at index 134
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 421}, // at index 135
 {"<select_gtl_5F_expression_5F_parser_3>", "gtl_expression_parser", 425}, // at index 136
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 429}, // at index 137
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 430}, // at index 138
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 434}, // at index 139
 {"<select_gtl_5F_expression_5F_parser_4>", "gtl_expression_parser", 438}, // at index 140
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 442}, // at index 141
 {"<select_gtl_5F_expression_5F_parser_5>", "gtl_expression_parser", 443}, // at index 142
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 447}, // at index 143
 {"<select_gtl_5F_expression_5F_parser_6>", "gtl_expression_parser", 448}, // at index 144
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 452}, // at index 145
 {"<select_gtl_5F_expression_5F_parser_7>", "gtl_expression_parser", 453}, // at index 146
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 457}, // at index 147
 {"<select_gtl_5F_expression_5F_parser_8>", "gtl_expression_parser", 460}, // at index 148
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 461}, // at index 149
 {"<select_gtl_5F_expression_5F_parser_9>", "gtl_expression_parser", 462}, // at index 150
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 466}, // at index 151
 {"<select_gtl_5F_expression_5F_parser_10>", "gtl_expression_parser", 471}, // at index 152
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 472}, // at index 153
 {"<select_gtl_5F_expression_5F_parser_11>", "gtl_expression_parser", 475}, // at index 154
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 477}, // at index 155
 {"<select_gtl_5F_expression_5F_parser_12>", "gtl_expression_parser", 480}, // at index 156
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 481}, // at index 157
 {"<select_gtl_5F_expression_5F_parser_13>", "gtl_expression_parser", 482}, // at index 158
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 486}, // at index 159
 {"<select_gtl_5F_expression_5F_parser_14>", "gtl_expression_parser", 491}, // at index 160
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 492}, // at index 161
 {"<select_gtl_5F_expression_5F_parser_15>", "gtl_expression_parser", 493}, // at index 162
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 499}, // at index 163
 {"<select_gtl_5F_expression_5F_parser_16>", "gtl_expression_parser", 504}, // at index 164
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 505}, // at index 165
 {"<select_gtl_5F_expression_5F_parser_17>", "gtl_expression_parser", 506}, // at index 166
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 512}, // at index 167
 {"<select_gtl_5F_expression_5F_parser_18>", "gtl_expression_parser", 515}, // at index 168
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 516}, // at index 169
 {"<select_gtl_5F_expression_5F_parser_19>", "gtl_expression_parser", 517}, // at index 170
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 521}, // at index 171
 {"<select_gtl_5F_expression_5F_parser_20>", "gtl_expression_parser", 522}, // at index 172
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 527}, // at index 173
 {"<select_gtl_5F_expression_5F_parser_21>", "gtl_expression_parser", 532}, // at index 174
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 533}, // at index 175
 {"<select_gtl_5F_expression_5F_parser_22>", "gtl_expression_parser", 538}, // at index 176
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 539}, // at index 177
 {"<select_gtl_5F_expression_5F_parser_23>", "gtl_expression_parser", 540}, // at index 178
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 545}, // at index 179
 {"<select_gtl_5F_expression_5F_parser_24>", "gtl_expression_parser", 547}, // at index 180
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 549}, // at index 181
 {"<select_gtl_5F_expression_5F_parser_25>", "gtl_expression_parser", 553}, // at index 182
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 554}, // at index 183
 {"<select_gtl_5F_expression_5F_parser_26>", "gtl_expression_parser", 555}, // at index 184
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 560}, // at index 185
 {"<select_gtl_5F_expression_5F_parser_27>", "gtl_expression_parser", 564}, // at index 186
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 565}, // at index 187
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 568}, // at index 188
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 571}, // at index 189
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 574}, // at index 190
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 577}, // at index 191
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 580}, // at index 192
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 583}, // at index 193
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 586}, // at index 194
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 589}, // at index 195
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 592}, // at index 196
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 595}, // at index 197
 {"<select_gtl_5F_instruction_5F_parser_0>", "gtl_instruction_parser", 598}, // at index 198
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 599}, // at index 199
 {"<select_gtl_5F_instruction_5F_parser_1>", "gtl_instruction_parser", 601}, // at index 200
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 602}, // at index 201
 {"<select_gtl_5F_instruction_5F_parser_2>", "gtl_instruction_parser", 604}, // at index 202
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 605}, // at index 203
 {"<select_gtl_5F_instruction_5F_parser_3>", "gtl_instruction_parser", 610}, // at index 204
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 612}, // at index 205
 {"<select_gtl_5F_instruction_5F_parser_4>", "gtl_instruction_parser", 613}, // at index 206
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 618}, // at index 207
 {"<select_gtl_5F_instruction_5F_parser_5>", "gtl_instruction_parser", 619}, // at index 208
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 623}, // at index 209
 {"<select_gtl_5F_instruction_5F_parser_6>", "gtl_instruction_parser", 624}, // at index 210
 {"<select_gtl_5F_instruction_5F_parser_7>", "gtl_instruction_parser", 628}, // at index 211
 {"<select_gtl_5F_instruction_5F_parser_7>", "gtl_instruction_parser", 630}, // at index 212
 {"<>", "", 632} // at index 213
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 L L ( 1 )    P R O D U C T I O N    I N D E X E S                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionIndexes_gtl_grammar [214] = {
0, // index 0 : <gtl_expression>, in file 'gtl_expression_parser.ggs', line 33
3, // index 1 : <gtl_variable>, in file 'gtl_expression_parser.ggs', line 687
7, // index 2 : <gtl_variable_or_here>, in file 'gtl_expression_parser.ggs', line 722
9, // index 3 : <gtl_import>, in file 'gtl_instruction_parser.ggs', line 391
12, // index 4 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 40
16, // index 5 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 154
19, // index 6 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 167
24, // index 7 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 185
29, // index 8 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 203
32, // index 9 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 218
35, // index 10 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 241
38, // index 11 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 264
41, // index 12 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 279
45, // index 13 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 312
48, // index 14 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 326
50, // index 15 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 338
52, // index 16 : <gtl_simple_instruction>, in file 'gtl_instruction_parser.ggs', line 349
58, // index 17 : <gtl_argument_list>, in file 'gtl_expression_parser.ggs', line 736
62, // index 18 : <gtl_start_symbol>, in file 'gtl_parser.ggs', line 50
65, // index 19 : <gtl_template_instruction_list>, in file 'gtl_parser.ggs', line 63
67, // index 20 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 90
70, // index 21 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 108
79, // index 22 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 128
83, // index 23 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 183
86, // index 24 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 196
95, // index 25 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 228
109, // index 26 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 289
120, // index 27 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 331
136, // index 28 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 397
146, // index 29 : <gtl_template_instruction>, in file 'gtl_parser.ggs', line 430
149, // index 30 : <gtl_file_name>, in file 'gtl_parser.ggs', line 443
151, // index 31 : <gtl_relation_term>, in file 'gtl_expression_parser.ggs', line 53
154, // index 32 : <gtl_relation_factor>, in file 'gtl_expression_parser.ggs', line 69
157, // index 33 : <gtl_simple_expression>, in file 'gtl_expression_parser.ggs', line 117
160, // index 34 : <gtl_term>, in file 'gtl_expression_parser.ggs', line 162
163, // index 35 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 192
167, // index 36 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 208
170, // index 37 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 220
173, // index 38 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 232
176, // index 39 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 244
179, // index 40 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 256
181, // index 41 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 269
183, // index 42 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 282
185, // index 43 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 295
187, // index 44 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 308
189, // index 45 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 321
191, // index 46 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 335
197, // index 47 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 369
200, // index 48 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 401
204, // index 49 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 420
207, // index 50 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 429
209, // index 51 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 445
211, // index 52 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 461
213, // index 53 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 477
216, // index 54 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 514
218, // index 55 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 533
220, // index 56 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 552
224, // index 57 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 576
228, // index 58 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 587
232, // index 59 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 606
236, // index 60 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 627
240, // index 61 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 648
244, // index 62 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 667
248, // index 63 : <gtl_factor>, in file 'gtl_expression_parser.ggs', line 678
250, // index 64 : <gtl_sorting_order>, in file 'gtl_instruction_parser.ggs', line 378
252, // index 65 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
253, // index 66 : <select_gtl_5F_parser_0>, in file 'gtl_parser.ggs', line 55
256, // index 67 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
257, // index 68 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
260, // index 69 : <select_gtl_5F_parser_1>, in file 'gtl_parser.ggs', line 67
263, // index 70 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
265, // index 71 : <select_gtl_5F_parser_2>, in file 'gtl_parser.ggs', line 112
266, // index 72 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
270, // index 73 : <select_gtl_5F_parser_3>, in file 'gtl_parser.ggs', line 138
271, // index 74 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
274, // index 75 : <select_gtl_5F_parser_4>, in file 'gtl_parser.ggs', line 141
275, // index 76 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
276, // index 77 : <select_gtl_5F_parser_5>, in file 'gtl_parser.ggs', line 142
280, // index 78 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
286, // index 79 : <select_gtl_5F_parser_6>, in file 'gtl_parser.ggs', line 152
289, // index 80 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
292, // index 81 : <select_gtl_5F_parser_7>, in file 'gtl_parser.ggs', line 156
293, // index 82 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
298, // index 83 : <select_gtl_5F_parser_8>, in file 'gtl_parser.ggs', line 159
299, // index 84 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
302, // index 85 : <select_gtl_5F_parser_9>, in file 'gtl_parser.ggs', line 166
303, // index 86 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
304, // index 87 : <select_gtl_5F_parser_10>, in file 'gtl_parser.ggs', line 202
310, // index 88 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
313, // index 89 : <select_gtl_5F_parser_11>, in file 'gtl_parser.ggs', line 212
314, // index 90 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
317, // index 91 : <select_gtl_5F_parser_12>, in file 'gtl_parser.ggs', line 239
318, // index 92 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
322, // index 93 : <select_gtl_5F_parser_13>, in file 'gtl_parser.ggs', line 245
323, // index 94 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
326, // index 95 : <select_gtl_5F_parser_14>, in file 'gtl_parser.ggs', line 253
327, // index 96 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
330, // index 97 : <select_gtl_5F_parser_15>, in file 'gtl_parser.ggs', line 261
331, // index 98 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
334, // index 99 : <select_gtl_5F_parser_16>, in file 'gtl_parser.ggs', line 266
335, // index 100 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
336, // index 101 : <select_gtl_5F_parser_17>, in file 'gtl_parser.ggs', line 302
340, // index 102 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
343, // index 103 : <select_gtl_5F_parser_18>, in file 'gtl_parser.ggs', line 312
344, // index 104 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
345, // index 105 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
347, // index 106 : <select_gtl_5F_parser_19>, in file 'gtl_parser.ggs', line 347
349, // index 107 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
352, // index 108 : <select_gtl_5F_parser_20>, in file 'gtl_parser.ggs', line 355
353, // index 109 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
356, // index 110 : <select_gtl_5F_parser_21>, in file 'gtl_parser.ggs', line 360
357, // index 111 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
360, // index 112 : <select_gtl_5F_parser_22>, in file 'gtl_parser.ggs', line 368
361, // index 113 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
364, // index 114 : <select_gtl_5F_parser_23>, in file 'gtl_parser.ggs', line 373
365, // index 115 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
369, // index 116 : <select_gtl_5F_parser_24>, in file 'gtl_parser.ggs', line 402
370, // index 117 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
372, // index 118 : <select_gtl_5F_parser_25>, in file 'gtl_parser.ggs', line 446
375, // index 119 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
376, // index 120 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
380, // index 121 : <select_gtl_5F_expression_5F_parser_0>, in file 'gtl_expression_parser.ggs', line 37
384, // index 122 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
385, // index 123 : <select_gtl_5F_expression_5F_parser_1>, in file 'gtl_expression_parser.ggs', line 57
389, // index 124 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
390, // index 125 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
393, // index 126 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
396, // index 127 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
399, // index 128 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
402, // index 129 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
405, // index 130 : <select_gtl_5F_expression_5F_parser_2>, in file 'gtl_expression_parser.ggs', line 73
408, // index 131 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
409, // index 132 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
413, // index 133 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
417, // index 134 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
421, // index 135 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
425, // index 136 : <select_gtl_5F_expression_5F_parser_3>, in file 'gtl_expression_parser.ggs', line 121
429, // index 137 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
430, // index 138 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
434, // index 139 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
438, // index 140 : <select_gtl_5F_expression_5F_parser_4>, in file 'gtl_expression_parser.ggs', line 166
442, // index 141 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
443, // index 142 : <select_gtl_5F_expression_5F_parser_5>, in file 'gtl_expression_parser.ggs', line 348
447, // index 143 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
448, // index 144 : <select_gtl_5F_expression_5F_parser_6>, in file 'gtl_expression_parser.ggs', line 351
452, // index 145 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
453, // index 146 : <select_gtl_5F_expression_5F_parser_7>, in file 'gtl_expression_parser.ggs', line 373
457, // index 147 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
460, // index 148 : <select_gtl_5F_expression_5F_parser_8>, in file 'gtl_expression_parser.ggs', line 381
461, // index 149 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
462, // index 150 : <select_gtl_5F_expression_5F_parser_9>, in file 'gtl_expression_parser.ggs', line 382
466, // index 151 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
471, // index 152 : <select_gtl_5F_expression_5F_parser_10>, in file 'gtl_expression_parser.ggs', line 405
472, // index 153 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
475, // index 154 : <select_gtl_5F_expression_5F_parser_11>, in file 'gtl_expression_parser.ggs', line 557
477, // index 155 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
480, // index 156 : <select_gtl_5F_expression_5F_parser_12>, in file 'gtl_expression_parser.ggs', line 592
481, // index 157 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
482, // index 158 : <select_gtl_5F_expression_5F_parser_13>, in file 'gtl_expression_parser.ggs', line 593
486, // index 159 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
491, // index 160 : <select_gtl_5F_expression_5F_parser_14>, in file 'gtl_expression_parser.ggs', line 611
492, // index 161 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
493, // index 162 : <select_gtl_5F_expression_5F_parser_15>, in file 'gtl_expression_parser.ggs', line 612
499, // index 163 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
504, // index 164 : <select_gtl_5F_expression_5F_parser_16>, in file 'gtl_expression_parser.ggs', line 632
505, // index 165 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
506, // index 166 : <select_gtl_5F_expression_5F_parser_17>, in file 'gtl_expression_parser.ggs', line 633
512, // index 167 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
515, // index 168 : <select_gtl_5F_expression_5F_parser_18>, in file 'gtl_expression_parser.ggs', line 653
516, // index 169 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
517, // index 170 : <select_gtl_5F_expression_5F_parser_19>, in file 'gtl_expression_parser.ggs', line 654
521, // index 171 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
522, // index 172 : <select_gtl_5F_expression_5F_parser_20>, in file 'gtl_expression_parser.ggs', line 691
527, // index 173 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
532, // index 174 : <select_gtl_5F_expression_5F_parser_21>, in file 'gtl_expression_parser.ggs', line 693
533, // index 175 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
538, // index 176 : <select_gtl_5F_expression_5F_parser_22>, in file 'gtl_expression_parser.ggs', line 698
539, // index 177 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
540, // index 178 : <select_gtl_5F_expression_5F_parser_23>, in file 'gtl_expression_parser.ggs', line 703
545, // index 179 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
547, // index 180 : <select_gtl_5F_expression_5F_parser_24>, in file 'gtl_expression_parser.ggs', line 726
549, // index 181 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
553, // index 182 : <select_gtl_5F_expression_5F_parser_25>, in file 'gtl_expression_parser.ggs', line 741
554, // index 183 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
555, // index 184 : <select_gtl_5F_expression_5F_parser_26>, in file 'gtl_expression_parser.ggs', line 742
560, // index 185 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
564, // index 186 : <select_gtl_5F_expression_5F_parser_27>, in file 'gtl_expression_parser.ggs', line 744
565, // index 187 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
568, // index 188 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
571, // index 189 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
574, // index 190 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
577, // index 191 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
580, // index 192 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
583, // index 193 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
586, // index 194 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
589, // index 195 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
592, // index 196 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
595, // index 197 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
598, // index 198 : <select_gtl_5F_instruction_5F_parser_0>, in file 'gtl_instruction_parser.ggs', line 45
599, // index 199 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
601, // index 200 : <select_gtl_5F_instruction_5F_parser_1>, in file 'gtl_instruction_parser.ggs', line 222
602, // index 201 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 245
604, // index 202 : <select_gtl_5F_instruction_5F_parser_2>, in file 'gtl_instruction_parser.ggs', line 245
605, // index 203 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 284
610, // index 204 : <select_gtl_5F_instruction_5F_parser_3>, in file 'gtl_instruction_parser.ggs', line 284
612, // index 205 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 287
613, // index 206 : <select_gtl_5F_instruction_5F_parser_4>, in file 'gtl_instruction_parser.ggs', line 287
618, // index 207 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 357
619, // index 208 : <select_gtl_5F_instruction_5F_parser_5>, in file 'gtl_instruction_parser.ggs', line 357
623, // index 209 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 360
624, // index 210 : <select_gtl_5F_instruction_5F_parser_6>, in file 'gtl_instruction_parser.ggs', line 360
628, // index 211 : <select_gtl_5F_instruction_5F_parser_7>, in file 'gtl_instruction_parser.ggs', line 381
630, // index 212 : <select_gtl_5F_instruction_5F_parser_7>, in file 'gtl_instruction_parser.ggs', line 381
632 // index 213 : <>, in file '.ggs', line 0
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gFirstProductionIndexes_gtl_grammar [80] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_variable_or_here>
3, // at 3 : <gtl_import>
4, // at 4 : <gtl_simple_instruction>
17, // at 5 : <gtl_argument_list>
18, // at 6 : <gtl_start_symbol>
19, // at 7 : <gtl_template_instruction_list>
20, // at 8 : <gtl_template_instruction>
30, // at 9 : <gtl_file_name>
31, // at 10 : <gtl_relation_term>
32, // at 11 : <gtl_relation_factor>
33, // at 12 : <gtl_simple_expression>
34, // at 13 : <gtl_term>
35, // at 14 : <gtl_factor>
64, // at 15 : <gtl_sorting_order>
65, // at 16 : <select_gtl_5F_parser_0>
67, // at 17 : <select_gtl_5F_parser_1>
70, // at 18 : <select_gtl_5F_parser_2>
72, // at 19 : <select_gtl_5F_parser_3>
74, // at 20 : <select_gtl_5F_parser_4>
76, // at 21 : <select_gtl_5F_parser_5>
78, // at 22 : <select_gtl_5F_parser_6>
80, // at 23 : <select_gtl_5F_parser_7>
82, // at 24 : <select_gtl_5F_parser_8>
84, // at 25 : <select_gtl_5F_parser_9>
86, // at 26 : <select_gtl_5F_parser_10>
88, // at 27 : <select_gtl_5F_parser_11>
90, // at 28 : <select_gtl_5F_parser_12>
92, // at 29 : <select_gtl_5F_parser_13>
94, // at 30 : <select_gtl_5F_parser_14>
96, // at 31 : <select_gtl_5F_parser_15>
98, // at 32 : <select_gtl_5F_parser_16>
100, // at 33 : <select_gtl_5F_parser_17>
102, // at 34 : <select_gtl_5F_parser_18>
104, // at 35 : <select_gtl_5F_parser_19>
107, // at 36 : <select_gtl_5F_parser_20>
109, // at 37 : <select_gtl_5F_parser_21>
111, // at 38 : <select_gtl_5F_parser_22>
113, // at 39 : <select_gtl_5F_parser_23>
115, // at 40 : <select_gtl_5F_parser_24>
117, // at 41 : <select_gtl_5F_parser_25>
119, // at 42 : <select_gtl_5F_expression_5F_parser_0>
122, // at 43 : <select_gtl_5F_expression_5F_parser_1>
124, // at 44 : <select_gtl_5F_expression_5F_parser_2>
131, // at 45 : <select_gtl_5F_expression_5F_parser_3>
137, // at 46 : <select_gtl_5F_expression_5F_parser_4>
141, // at 47 : <select_gtl_5F_expression_5F_parser_5>
143, // at 48 : <select_gtl_5F_expression_5F_parser_6>
145, // at 49 : <select_gtl_5F_expression_5F_parser_7>
147, // at 50 : <select_gtl_5F_expression_5F_parser_8>
149, // at 51 : <select_gtl_5F_expression_5F_parser_9>
151, // at 52 : <select_gtl_5F_expression_5F_parser_10>
153, // at 53 : <select_gtl_5F_expression_5F_parser_11>
155, // at 54 : <select_gtl_5F_expression_5F_parser_12>
157, // at 55 : <select_gtl_5F_expression_5F_parser_13>
159, // at 56 : <select_gtl_5F_expression_5F_parser_14>
161, // at 57 : <select_gtl_5F_expression_5F_parser_15>
163, // at 58 : <select_gtl_5F_expression_5F_parser_16>
165, // at 59 : <select_gtl_5F_expression_5F_parser_17>
167, // at 60 : <select_gtl_5F_expression_5F_parser_18>
169, // at 61 : <select_gtl_5F_expression_5F_parser_19>
171, // at 62 : <select_gtl_5F_expression_5F_parser_20>
173, // at 63 : <select_gtl_5F_expression_5F_parser_21>
175, // at 64 : <select_gtl_5F_expression_5F_parser_22>
177, // at 65 : <select_gtl_5F_expression_5F_parser_23>
179, // at 66 : <select_gtl_5F_expression_5F_parser_24>
181, // at 67 : <select_gtl_5F_expression_5F_parser_25>
183, // at 68 : <select_gtl_5F_expression_5F_parser_26>
185, // at 69 : <select_gtl_5F_expression_5F_parser_27>
187, // at 70 : <select_gtl_5F_instruction_5F_parser_0>
199, // at 71 : <select_gtl_5F_instruction_5F_parser_1>
201, // at 72 : <select_gtl_5F_instruction_5F_parser_2>
203, // at 73 : <select_gtl_5F_instruction_5F_parser_3>
205, // at 74 : <select_gtl_5F_instruction_5F_parser_4>
207, // at 75 : <select_gtl_5F_instruction_5F_parser_5>
209, // at 76 : <select_gtl_5F_instruction_5F_parser_6>
211, // at 77 : <select_gtl_5F_instruction_5F_parser_7>
213, // at 78 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    L L ( 1 )    D E C I S I O N    T A B L E S                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecision_gtl_grammar [] = {
// At index 0 : <gtl_expression> only one production, no choice
  -1,
// At index 1 : <gtl_variable> only one production, no choice
  -1,
// At index 2 : <gtl_variable_or_here> only one production, no choice
  -1,
// At index 3 : <gtl_import> only one production, no choice
  -1,
// At index 4 : <gtl_simple_instruction>
C_Lexique_gtl_5F_scanner::kToken_let, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_unlet, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_error, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_warning, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken_print, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_println, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_seed, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_display, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_sort, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_tab, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken_variables, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken_libraries, -1, // Choice 12
C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 13
  -1,
// At index 31 : <gtl_argument_list> only one production, no choice
  -1,
// At index 32 : <gtl_start_symbol> only one production, no choice
  -1,
// At index 33 : <gtl_template_instruction_list> only one production, no choice
  -1,
// At index 34 : <gtl_template_instruction>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_write, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_template, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3F_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken_if, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_foreach, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_for, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_loop, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_repeat, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_input, -1, // Choice 10
  -1,
// At index 55 : <gtl_file_name> only one production, no choice
  -1,
// At index 56 : <gtl_relation_term> only one production, no choice
  -1,
// At index 57 : <gtl_relation_factor> only one production, no choice
  -1,
// At index 58 : <gtl_simple_expression> only one production, no choice
  -1,
// At index 59 : <gtl_term> only one production, no choice
  -1,
// At index 60 : <gtl_factor>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_not, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__7E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_yes, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken_no, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 12
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 13
C_Lexique_gtl_5F_scanner::kToken_exists, -1, // Choice 14
C_Lexique_gtl_5F_scanner::kToken_typeof, -1, // Choice 15
C_Lexique_gtl_5F_scanner::kToken_true, -1, // Choice 16
C_Lexique_gtl_5F_scanner::kToken_false, -1, // Choice 17
C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, -1, // Choice 18
C_Lexique_gtl_5F_scanner::kToken__40_, -1, // Choice 19
C_Lexique_gtl_5F_scanner::kToken_emptylist, -1, // Choice 20
C_Lexique_gtl_5F_scanner::kToken_emptymap, -1, // Choice 21
C_Lexique_gtl_5F_scanner::kToken_mapof, -1, // Choice 22
C_Lexique_gtl_5F_scanner::kToken_listof, -1, // Choice 23
C_Lexique_gtl_5F_scanner::kToken__40__28_, -1, // Choice 24
C_Lexique_gtl_5F_scanner::kToken__40__5B_, -1, // Choice 25
C_Lexique_gtl_5F_scanner::kToken__40__7B_, -1, // Choice 26
C_Lexique_gtl_5F_scanner::kToken__40__21_, -1, // Choice 27
C_Lexique_gtl_5F_scanner::kToken__40__3F_, -1, // Choice 28
C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 29
  -1,
// At index 119 : <gtl_sorting_order> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 120 : <select_gtl_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_import, -1, // Choice 2
  -1,
// At index 148 : <select_gtl_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_input, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 3
  -1,
// At index 183 : <select_gtl_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken_executable, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 2
  -1,
// At index 216 : <select_gtl_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 223 : <select_gtl_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 256 : <select_gtl_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 261 : <select_gtl_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken_if, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 267 : <select_gtl_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 303 : <select_gtl_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken_or, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 338 : <select_gtl_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 373 : <select_gtl_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_elsif, -1, // Choice 2
  -1,
// At index 379 : <select_gtl_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_else, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 384 : <select_gtl_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 390 : <select_gtl_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_in, -1, // Choice 2
  -1,
// At index 395 : <select_gtl_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 400 : <select_gtl_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 406 : <select_gtl_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 411 : <select_gtl_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 416 : <select_gtl_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 421 : <select_gtl_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken_to, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_up, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken_down, -1, // Choice 3
  -1,
// At index 428 : <select_gtl_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken_step, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 434 : <select_gtl_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken_before, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_do, -1, // Choice 2
  -1,
// At index 439 : <select_gtl_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken_between, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 2
  -1,
// At index 445 : <select_gtl_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken_after, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 450 : <select_gtl_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, -1, // Choice 2
  -1,
// At index 478 : <select_gtl_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_from, -1, // Choice 2
  -1,
// At index 483 : <select_gtl_5F_expression_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__5E_, -1, // Choice 3
  -1,
// At index 535 : <select_gtl_5F_expression_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__26_, -1, // Choice 2
  -1,
// At index 587 : <select_gtl_5F_expression_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3D__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__21__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__3C__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__3E__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 7
  -1,
// At index 650 : <select_gtl_5F_expression_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C__3C_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__3E__3E_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2B_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2E_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken__2D_, -1, // Choice 6
  -1,
// At index 717 : <select_gtl_5F_expression_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2A_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2F_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken_mod, -1, // Choice 4
  -1,
// At index 785 : <select_gtl_5F_expression_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 790 : <select_gtl_5F_expression_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 795 : <select_gtl_5F_expression_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__28_, -1, // Choice 2
  -1,
// At index 862 : <select_gtl_5F_expression_5F_parser_8>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 895 : <select_gtl_5F_expression_5F_parser_9>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 900 : <select_gtl_5F_expression_5F_parser_10>
C_Lexique_gtl_5F_scanner::kToken_default, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 967 : <select_gtl_5F_expression_5F_parser_11>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_end, -1, // Choice 2
  -1,
// At index 972 : <select_gtl_5F_expression_5F_parser_12>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1005 : <select_gtl_5F_expression_5F_parser_13>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1010 : <select_gtl_5F_expression_5F_parser_14>
C_Lexique_gtl_5F_scanner::kToken_string, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 2
  -1,
// At index 1015 : <select_gtl_5F_expression_5F_parser_15>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1020 : <select_gtl_5F_expression_5F_parser_16>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 2
  -1,
// At index 1025 : <select_gtl_5F_expression_5F_parser_17>
C_Lexique_gtl_5F_scanner::kToken__7D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1030 : <select_gtl_5F_expression_5F_parser_18>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 2
  -1,
// At index 1063 : <select_gtl_5F_expression_5F_parser_19>
C_Lexique_gtl_5F_scanner::kToken__21_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1068 : <select_gtl_5F_expression_5F_parser_20>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A__3A_, -1, // Choice 2
  -1,
// At index 1148 : <select_gtl_5F_expression_5F_parser_21>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1229 : <select_gtl_5F_expression_5F_parser_22>
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1310 : <select_gtl_5F_expression_5F_parser_23>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_to, C_Lexique_gtl_5F_scanner::kToken__3A_, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken_in, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken_or, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_then, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_before, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_up, C_Lexique_gtl_5F_scanner::kToken_down, C_Lexique_gtl_5F_scanner::kToken_step, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken__7C_, C_Lexique_gtl_5F_scanner::kToken__5E_, C_Lexique_gtl_5F_scanner::kToken__26_, C_Lexique_gtl_5F_scanner::kToken__3D__3D_, C_Lexique_gtl_5F_scanner::kToken__21__3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, C_Lexique_gtl_5F_scanner::kToken__3C__3C_, C_Lexique_gtl_5F_scanner::kToken__3E__3E_, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2E_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken__2A_, C_Lexique_gtl_5F_scanner::kToken__2F_, C_Lexique_gtl_5F_scanner::kToken_mod, C_Lexique_gtl_5F_scanner::kToken__5D_, C_Lexique_gtl_5F_scanner::kToken_default, C_Lexique_gtl_5F_scanner::kToken_by, C_Lexique_gtl_5F_scanner::kToken__7D_, C_Lexique_gtl_5F_scanner::kToken__3A__3A_, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken__3A__3D_, C_Lexique_gtl_5F_scanner::kToken__2B__3D_, C_Lexique_gtl_5F_scanner::kToken__2D__3D_, C_Lexique_gtl_5F_scanner::kToken__2A__3D_, C_Lexique_gtl_5F_scanner::kToken__2F__3D_, C_Lexique_gtl_5F_scanner::kToken_mod_3D_, C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, C_Lexique_gtl_5F_scanner::kToken__26__3D_, C_Lexique_gtl_5F_scanner::kToken__7C__3D_, C_Lexique_gtl_5F_scanner::kToken__5E__3D_, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__5B_, -1, // Choice 2
  -1,
// At index 1391 : <select_gtl_5F_expression_5F_parser_24>
C_Lexique_gtl_5F_scanner::kToken_here, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 2
  -1,
// At index 1396 : <select_gtl_5F_expression_5F_parser_25>
C_Lexique_gtl_5F_scanner::kToken_identifier, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1401 : <select_gtl_5F_expression_5F_parser_26>
C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1406 : <select_gtl_5F_expression_5F_parser_27>
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, C_Lexique_gtl_5F_scanner::kToken__29_, -1, // Choice 2
  -1,
// At index 1412 : <select_gtl_5F_instruction_5F_parser_0>
C_Lexique_gtl_5F_scanner::kToken__3A__3D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2B__3D_, -1, // Choice 2
C_Lexique_gtl_5F_scanner::kToken__2D__3D_, -1, // Choice 3
C_Lexique_gtl_5F_scanner::kToken__2A__3D_, -1, // Choice 4
C_Lexique_gtl_5F_scanner::kToken__2F__3D_, -1, // Choice 5
C_Lexique_gtl_5F_scanner::kToken_mod_3D_, -1, // Choice 6
C_Lexique_gtl_5F_scanner::kToken__3C__3C__3D_, -1, // Choice 7
C_Lexique_gtl_5F_scanner::kToken__3E__3E__3D_, -1, // Choice 8
C_Lexique_gtl_5F_scanner::kToken__26__3D_, -1, // Choice 9
C_Lexique_gtl_5F_scanner::kToken__7C__3D_, -1, // Choice 10
C_Lexique_gtl_5F_scanner::kToken__5E__3D_, -1, // Choice 11
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 12
  -1,
// At index 1467 : <select_gtl_5F_instruction_5F_parser_1>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1530 : <select_gtl_5F_instruction_5F_parser_2>
C_Lexique_gtl_5F_scanner::kToken__28_, C_Lexique_gtl_5F_scanner::kToken_exists, C_Lexique_gtl_5F_scanner::kToken_identifier, C_Lexique_gtl_5F_scanner::kToken__2B_, C_Lexique_gtl_5F_scanner::kToken__2D_, C_Lexique_gtl_5F_scanner::kToken_not, C_Lexique_gtl_5F_scanner::kToken__7E_, C_Lexique_gtl_5F_scanner::kToken_yes, C_Lexique_gtl_5F_scanner::kToken_no, C_Lexique_gtl_5F_scanner::kToken_signed_5F_literal_5F_integer_5F_bigint, C_Lexique_gtl_5F_scanner::kToken_literal_5F_double, C_Lexique_gtl_5F_scanner::kToken_string, C_Lexique_gtl_5F_scanner::kToken_literal_5F_char, C_Lexique_gtl_5F_scanner::kToken__5B_, C_Lexique_gtl_5F_scanner::kToken_typeof, C_Lexique_gtl_5F_scanner::kToken_true, C_Lexique_gtl_5F_scanner::kToken_false, C_Lexique_gtl_5F_scanner::kToken_literal_5F_enum, C_Lexique_gtl_5F_scanner::kToken__40_, C_Lexique_gtl_5F_scanner::kToken_emptylist, C_Lexique_gtl_5F_scanner::kToken_emptymap, C_Lexique_gtl_5F_scanner::kToken_mapof, C_Lexique_gtl_5F_scanner::kToken_listof, C_Lexique_gtl_5F_scanner::kToken__40__28_, C_Lexique_gtl_5F_scanner::kToken__40__5B_, C_Lexique_gtl_5F_scanner::kToken__40__7B_, C_Lexique_gtl_5F_scanner::kToken__40__21_, C_Lexique_gtl_5F_scanner::kToken__40__3F_, C_Lexique_gtl_5F_scanner::kToken__5F__5F_VARS_5F__5F_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 2
  -1,
// At index 1593 : <select_gtl_5F_instruction_5F_parser_3>
C_Lexique_gtl_5F_scanner::kToken_by, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3E_, C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 1599 : <select_gtl_5F_instruction_5F_parser_4>
C_Lexique_gtl_5F_scanner::kToken__21_, C_Lexique_gtl_5F_scanner::kToken_write, C_Lexique_gtl_5F_scanner::kToken_end, C_Lexique_gtl_5F_scanner::kToken_template, C_Lexique_gtl_5F_scanner::kToken_if, C_Lexique_gtl_5F_scanner::kToken__3F_, C_Lexique_gtl_5F_scanner::kToken_elsif, C_Lexique_gtl_5F_scanner::kToken_else, C_Lexique_gtl_5F_scanner::kToken_foreach, C_Lexique_gtl_5F_scanner::kToken_do, C_Lexique_gtl_5F_scanner::kToken_between, C_Lexique_gtl_5F_scanner::kToken_after, C_Lexique_gtl_5F_scanner::kToken_for, C_Lexique_gtl_5F_scanner::kToken_loop, C_Lexique_gtl_5F_scanner::kToken_repeat, C_Lexique_gtl_5F_scanner::kToken_while, C_Lexique_gtl_5F_scanner::kToken_input, C_Lexique_gtl_5F_scanner::kToken_let, C_Lexique_gtl_5F_scanner::kToken_unlet, C_Lexique_gtl_5F_scanner::kToken_error, C_Lexique_gtl_5F_scanner::kToken_warning, C_Lexique_gtl_5F_scanner::kToken_print, C_Lexique_gtl_5F_scanner::kToken_println, C_Lexique_gtl_5F_scanner::kToken_seed, C_Lexique_gtl_5F_scanner::kToken_display, C_Lexique_gtl_5F_scanner::kToken_sort, C_Lexique_gtl_5F_scanner::kToken_tab, C_Lexique_gtl_5F_scanner::kToken_variables, C_Lexique_gtl_5F_scanner::kToken_libraries, C_Lexique_gtl_5F_scanner::kToken__5B__21_, C_Lexique_gtl_5F_scanner::kToken_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1634 : <select_gtl_5F_instruction_5F_parser_5>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3A_, -1, // Choice 2
  -1,
// At index 1639 : <select_gtl_5F_instruction_5F_parser_6>
C_Lexique_gtl_5F_scanner::kToken__5D_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__2C_, -1, // Choice 2
  -1,
// At index 1644 : <select_gtl_5F_instruction_5F_parser_7>
C_Lexique_gtl_5F_scanner::kToken__3E_, -1, // Choice 1
C_Lexique_gtl_5F_scanner::kToken__3C_, -1, // Choice 2
  -1,
// At index 1649 : <> only one production, no choice
  -1,
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gDecisionIndexes_gtl_grammar [80] = {
0, // at 0 : <gtl_expression>
1, // at 1 : <gtl_variable>
2, // at 2 : <gtl_variable_or_here>
3, // at 3 : <gtl_import>
4, // at 4 : <gtl_simple_instruction>
31, // at 5 : <gtl_argument_list>
32, // at 6 : <gtl_start_symbol>
33, // at 7 : <gtl_template_instruction_list>
34, // at 8 : <gtl_template_instruction>
55, // at 9 : <gtl_file_name>
56, // at 10 : <gtl_relation_term>
57, // at 11 : <gtl_relation_factor>
58, // at 12 : <gtl_simple_expression>
59, // at 13 : <gtl_term>
60, // at 14 : <gtl_factor>
119, // at 15 : <gtl_sorting_order>
120, // at 16 : <select_gtl_5F_parser_0>
148, // at 17 : <select_gtl_5F_parser_1>
183, // at 18 : <select_gtl_5F_parser_2>
216, // at 19 : <select_gtl_5F_parser_3>
223, // at 20 : <select_gtl_5F_parser_4>
256, // at 21 : <select_gtl_5F_parser_5>
261, // at 22 : <select_gtl_5F_parser_6>
267, // at 23 : <select_gtl_5F_parser_7>
303, // at 24 : <select_gtl_5F_parser_8>
338, // at 25 : <select_gtl_5F_parser_9>
373, // at 26 : <select_gtl_5F_parser_10>
379, // at 27 : <select_gtl_5F_parser_11>
384, // at 28 : <select_gtl_5F_parser_12>
390, // at 29 : <select_gtl_5F_parser_13>
395, // at 30 : <select_gtl_5F_parser_14>
400, // at 31 : <select_gtl_5F_parser_15>
406, // at 32 : <select_gtl_5F_parser_16>
411, // at 33 : <select_gtl_5F_parser_17>
416, // at 34 : <select_gtl_5F_parser_18>
421, // at 35 : <select_gtl_5F_parser_19>
428, // at 36 : <select_gtl_5F_parser_20>
434, // at 37 : <select_gtl_5F_parser_21>
439, // at 38 : <select_gtl_5F_parser_22>
445, // at 39 : <select_gtl_5F_parser_23>
450, // at 40 : <select_gtl_5F_parser_24>
478, // at 41 : <select_gtl_5F_parser_25>
483, // at 42 : <select_gtl_5F_expression_5F_parser_0>
535, // at 43 : <select_gtl_5F_expression_5F_parser_1>
587, // at 44 : <select_gtl_5F_expression_5F_parser_2>
650, // at 45 : <select_gtl_5F_expression_5F_parser_3>
717, // at 46 : <select_gtl_5F_expression_5F_parser_4>
785, // at 47 : <select_gtl_5F_expression_5F_parser_5>
790, // at 48 : <select_gtl_5F_expression_5F_parser_6>
795, // at 49 : <select_gtl_5F_expression_5F_parser_7>
862, // at 50 : <select_gtl_5F_expression_5F_parser_8>
895, // at 51 : <select_gtl_5F_expression_5F_parser_9>
900, // at 52 : <select_gtl_5F_expression_5F_parser_10>
967, // at 53 : <select_gtl_5F_expression_5F_parser_11>
972, // at 54 : <select_gtl_5F_expression_5F_parser_12>
1005, // at 55 : <select_gtl_5F_expression_5F_parser_13>
1010, // at 56 : <select_gtl_5F_expression_5F_parser_14>
1015, // at 57 : <select_gtl_5F_expression_5F_parser_15>
1020, // at 58 : <select_gtl_5F_expression_5F_parser_16>
1025, // at 59 : <select_gtl_5F_expression_5F_parser_17>
1030, // at 60 : <select_gtl_5F_expression_5F_parser_18>
1063, // at 61 : <select_gtl_5F_expression_5F_parser_19>
1068, // at 62 : <select_gtl_5F_expression_5F_parser_20>
1148, // at 63 : <select_gtl_5F_expression_5F_parser_21>
1229, // at 64 : <select_gtl_5F_expression_5F_parser_22>
1310, // at 65 : <select_gtl_5F_expression_5F_parser_23>
1391, // at 66 : <select_gtl_5F_expression_5F_parser_24>
1396, // at 67 : <select_gtl_5F_expression_5F_parser_25>
1401, // at 68 : <select_gtl_5F_expression_5F_parser_26>
1406, // at 69 : <select_gtl_5F_expression_5F_parser_27>
1412, // at 70 : <select_gtl_5F_instruction_5F_parser_0>
1467, // at 71 : <select_gtl_5F_instruction_5F_parser_1>
1530, // at 72 : <select_gtl_5F_instruction_5F_parser_2>
1593, // at 73 : <select_gtl_5F_instruction_5F_parser_3>
1599, // at 74 : <select_gtl_5F_instruction_5F_parser_4>
1634, // at 75 : <select_gtl_5F_instruction_5F_parser_5>
1639, // at 76 : <select_gtl_5F_instruction_5F_parser_6>
1644, // at 77 : <select_gtl_5F_instruction_5F_parser_7>
1649, // at 78 : <>
0} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_expression' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_expression_i0_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'gtl_variable' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i34_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_ (GALGAS_gtlVarPath & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_i34_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_variable_or_here' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i35_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_variable_5F_or_5F_here_ (GALGAS_gtlVarPath & parameter_1,
                                GALGAS_bool & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_variable_5F_or_5F_here_i35_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_import' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_import_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i14_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_import_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_import_i14_(parameter_1, parameter_2, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_instruction' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_parse(inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i12_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i0_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i1_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i2_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i3_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i4_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i5_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i6_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i7_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i8_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i9_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i10_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i11_(parameter_1, inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_instruction_5F_parser_gtl_5F_simple_5F_instruction_i12_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_argument_list' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_argument_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i36_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_argument_5F_list_ (GALGAS_gtlArgumentList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_argument_5F_list_i36_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'gtl_start_symbol' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_start_5F_symbol_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_start_5F_symbol_ (GALGAS_gtlContext parameter_1,
                                GALGAS_library & parameter_2,
                                GALGAS_gtlInstructionList & parameter_3,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_start_5F_symbol_i0_(parameter_1, parameter_2, parameter_3, inLexique) ;
}

void cGrammar_gtl_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_gtl_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_gtl_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_gtl_5F_scanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                    gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 632) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2,
                                GALGAS_gtlInstructionList &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
    C_Lexique_gtl_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                                      gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 632) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_gtl_5F_grammar grammar ;
        grammar.nt_gtl_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_gtlContext  parameter_1,
                                GALGAS_library &  parameter_2,
                                GALGAS_gtlInstructionList &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_gtl_5F_scanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_gtl_5F_scanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_gtl_grammar, gProductionNames_gtl_grammar, gProductionIndexes_gtl_grammar,
                                                    gFirstProductionIndexes_gtl_grammar, gDecision_gtl_grammar, gDecisionIndexes_gtl_grammar, 632) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_gtl_5F_grammar grammar ;
      grammar.nt_gtl_5F_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'gtl_template_instruction_list' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_5F_list_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_5F_list_ (GALGAS_gtlInstructionList & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_template_5F_instruction_5F_list_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'gtl_template_instruction' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_template_5F_instruction_ (GALGAS_gtlInstruction & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i2_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i3_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i4_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i5_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i6_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i7_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i8_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i9_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i10_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_parser_gtl_5F_template_5F_instruction_i11_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'gtl_file_name' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_file_5F_name_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_file_5F_name_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_parser_gtl_5F_file_5F_name_i12_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_relation_term' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_term_i1_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'gtl_relation_factor' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_relation_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_relation_5F_factor_i2_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'gtl_simple_expression' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_expression_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_simple_5F_expression_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_simple_5F_expression_i3_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'gtl_term' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_term_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_term_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_expression_5F_parser_gtl_5F_term_i4_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'gtl_factor' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_factor_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i5_parse(inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i6_parse(inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i7_parse(inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i8_parse(inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i9_parse(inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i10_parse(inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i11_parse(inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i12_parse(inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i13_parse(inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i14_parse(inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i15_parse(inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i16_parse(inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i17_parse(inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i18_parse(inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i19_parse(inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i20_parse(inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i21_parse(inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i22_parse(inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i23_parse(inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i24_parse(inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i25_parse(inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i26_parse(inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i27_parse(inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i28_parse(inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i29_parse(inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i30_parse(inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i31_parse(inLexique) ;
    break ;
  case 28 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i32_parse(inLexique) ;
    break ;
  case 29 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i33_parse(inLexique) ;
    break ;
  default :
    break ;
  }
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_factor_ (GALGAS_gtlExpression & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 2 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 3 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 4 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i8_(parameter_1, inLexique) ;
    break ;
  case 5 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i9_(parameter_1, inLexique) ;
    break ;
  case 6 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i10_(parameter_1, inLexique) ;
    break ;
  case 7 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i11_(parameter_1, inLexique) ;
    break ;
  case 8 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i12_(parameter_1, inLexique) ;
    break ;
  case 9 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i13_(parameter_1, inLexique) ;
    break ;
  case 10 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i14_(parameter_1, inLexique) ;
    break ;
  case 11 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i15_(parameter_1, inLexique) ;
    break ;
  case 12 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i16_(parameter_1, inLexique) ;
    break ;
  case 13 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 14 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 15 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 16 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i20_(parameter_1, inLexique) ;
    break ;
  case 17 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i21_(parameter_1, inLexique) ;
    break ;
  case 18 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i22_(parameter_1, inLexique) ;
    break ;
  case 19 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i23_(parameter_1, inLexique) ;
    break ;
  case 20 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i24_(parameter_1, inLexique) ;
    break ;
  case 21 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i25_(parameter_1, inLexique) ;
    break ;
  case 22 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i26_(parameter_1, inLexique) ;
    break ;
  case 23 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i27_(parameter_1, inLexique) ;
    break ;
  case 24 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i28_(parameter_1, inLexique) ;
    break ;
  case 25 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i29_(parameter_1, inLexique) ;
    break ;
  case 26 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i30_(parameter_1, inLexique) ;
    break ;
  case 27 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i31_(parameter_1, inLexique) ;
    break ;
  case 28 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i32_(parameter_1, inLexique) ;
    break ;
  case 29 :
    rule_gtl_5F_expression_5F_parser_gtl_5F_factor_i33_(parameter_1, inLexique) ;
    break ;
  default :
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'gtl_sorting_order' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_gtl_5F_grammar::nt_gtl_5F_sorting_5F_order_parse (C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i13_parse(inLexique) ;
}

void cGrammar_gtl_5F_grammar::nt_gtl_5F_sorting_5F_order_ (GALGAS_lsint & parameter_1,
                                C_Lexique_gtl_5F_scanner * inLexique) {
  rule_gtl_5F_instruction_5F_parser_gtl_5F_sorting_5F_order_i13_(parameter_1, inLexique) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_0' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_1' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_2' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_3' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_4' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_5' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_6' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_7' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_8' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'select_gtl_5F_parser_9' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_10' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_11' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_12' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_13' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_14' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_15' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_16' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_17' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_18' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_18 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_19' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_19 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_20' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_20 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_21' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_21 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_22' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_22 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_23' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_23 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_24' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_24 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                            'select_gtl_5F_parser_25' added non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_parser_25 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_7' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_8' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_8 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                      'select_gtl_5F_expression_5F_parser_9' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_9 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_10' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_10 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_11' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_11 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_12' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_12 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_13' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_13 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_14' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_14 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_15' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_15 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_16' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_16 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_17' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_17 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_18' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_18 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_19' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_19 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_20' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_20 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_21' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_21 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_22' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_22 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_23' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_23 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_24' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_24 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_25' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_25 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_26' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_26 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_expression_5F_parser_27' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_expression_5F_parser_27 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_0' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_0 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_1' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_1 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_2' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_2 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_3' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_3 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_4' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_4 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_5' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_5 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_6' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_6 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                     'select_gtl_5F_instruction_5F_parser_7' added non terminal implementation                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_gtl_5F_grammar::select_gtl_5F_instruction_5F_parser_7 (C_Lexique_gtl_5F_scanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//---------------------------------------------------------------------------------------------------------------------*

