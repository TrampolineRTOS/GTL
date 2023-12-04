//----------------------------------------------------------------------------------------------------------------------
//
//  AC_GALGAS_graph : Base class for GALGAS graph
//
//  This file is part of libpm library
//
//  Copyright (C) 2008, ..., 2023 Pierre Molinaro.
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
#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_Compiler.h"
#include "utilities/C_DirectedGraph.h"

//----------------------------------------------------------------------------------------------------------------------

class cGraphNode {
  public: cGraphNode * mInfPtr ;
  public: cGraphNode * mSupPtr ;
  public: int32_t mBalance ;
  public: const C_String mKey ;
  public: const uint32_t mNodeID ;
  public: capCollectionElement mAttributes ;
  public: GALGAS_location mDefinitionLocation ;
  public: TC_UniqueArray <GALGAS_location> mReferenceLocationArray ;
  public: bool mIsDefined ;

//--- Constructors
  public: cGraphNode (const C_String & inKey,
                      const uint32_t inNodeID) ;

  public: cGraphNode (cGraphNode * inNode) ;

  public: void accumulateNodes (capCollectionElementArray & outNodeList) const ;

//--- Destructor
  public: virtual ~ cGraphNode (void) ;

//--- No copy
  private: cGraphNode (const cGraphNode &) = delete ;
  private: cGraphNode & operator = (const cGraphNode &) = delete ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cGraphNode::~ cGraphNode (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//----------------------------------------------------------------------------------------------------------------------

class cSharedGraph : public C_SharedObject {
//--------------------------------- Attributes
  private: cGraphNode * mRoot ;
  public: inline const cGraphNode * root (void) const { return mRoot ; }
  private: C_DirectedGraph mDirectedGraph ;
  private: TC_UniqueArray <cGraphNode *> mNodeArray ;

//--- Constructor
  public: cSharedGraph (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ cSharedGraph (void) ;

//--- Count
  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }

//--- isNodeDefined
  public: bool isNodeDefined (const C_String & inKey) const ;

//--- locationForKey
  public: GALGAS_location locationForKey (const C_String & inKey,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const ;

//--- Internal methods
  public: void description (C_String & ioString,
                             const int32_t inIndentation) const ;

  public: void copyFrom (const cSharedGraph * inSource) ;

  public: void copyReversedGraphFrom (const cSharedGraph * inSource) ;

  public: int32_t graphCompare (const cSharedGraph * inOperand) const ;

  public: cGraphNode * findOrAddNodeForKey (const C_String & inKey) ;

  protected: cGraphNode * internalInsert (cGraphNode * & ioRootPtr,
                                           const C_String & inKey,
                                           bool & ioExtension) ;

  public: void internalAddNode (const GALGAS_lstring & inKey,
                                 const char * inErrorMessage,
                                 const capCollectionElement & inAttributes,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;

  public: void addEdge (const C_String & inSourceNodeKey,
                         const GALGAS_location & inSourceNodeLocation,
                         const C_String & inTargetNodeKey,
                         const GALGAS_location & inTargetNodeLocation) ;

  public: void removeEdgesToDominators (LOCATION_ARGS) ;

  public: void removeEdgesToNode (const C_String & inNodeName,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

  public: void internalTopologicalSort (capCollectionElementArray & outSortedList,
                                         GALGAS_lstringlist & outSortedNodeKeyList,
                                         capCollectionElementArray & outUnsortedList,
                                         GALGAS_lstringlist & outUnsortedNodeKeyList) const ;


  public: void internalFindCircularities (capCollectionElementArray & outInfoList,
                                           GALGAS_lstringlist & outNodeKeyList) const ;

  public: void internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                                GALGAS_lstringlist & outNodeKeyList) const ;

  public: void internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                              GALGAS_lstringlist & outNodeKeyList) const ;

  public: void internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                   GALGAS_lstringlist & outSortedNodeKeyList,
                                                   capCollectionElementArray & outUnsortedList,
                                                   GALGAS_lstringlist & outUnsortedNodeKeyList) const ;

  public: void subGraph (AC_GALGAS_graph & outResultingGraph,
                          const GALGAS_lstringlist & inStartNodes,
                          const GALGAS_stringset & inNodesToExclude,
                          C_Compiler * inCompiler
                          COMMA_LOCATION_ARGS) const ;

  public: void graph (capCollectionElementArray & outNodeList) const ;

  public: GALGAS_stringlist keyList (void) const ;

  public: GALGAS_lstringlist lkeyList (void) const ;

  public: C_String getter_graphviz (void) const ;

  public: void edges (GALGAS__32_stringlist & ioList) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkGraph (LOCATION_ARGS) const ;
  #endif

//--- No copy
  private: cSharedGraph (const cSharedGraph &) ;
  private: cSharedGraph & operator = (const cSharedGraph &) ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cSharedGraph::cSharedGraph (LOCATION_ARGS) :
C_SharedObject (THERE),
mRoot (nullptr),
mDirectedGraph (),
mNodeArray () {
}

//----------------------------------------------------------------------------------------------------------------------

cSharedGraph::~ cSharedGraph (void) {
  macroMyDelete (mRoot) ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Copy
#endif

//----------------------------------------------------------------------------------------------------------------------

cGraphNode::cGraphNode (cGraphNode * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance),
mKey (inNode->mKey),
mNodeID (inNode->mNodeID),
mAttributes (inNode->mAttributes),
mDefinitionLocation (inNode->mDefinitionLocation),
mReferenceLocationArray (),
mIsDefined (inNode->mIsDefined) {
  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;
  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;
  }
  if (nullptr != inNode->mInfPtr) {
    macroMyNew (mInfPtr, cGraphNode (inNode->mInfPtr)) ;
  }
  if (nullptr != inNode->mSupPtr) {
    macroMyNew (mSupPtr, cGraphNode (inNode->mSupPtr)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void buildNodeArray (cGraphNode * inNode,
                            TC_UniqueArray <cGraphNode *> & ioNodeArray) {
  if (nullptr != inNode) {
    MF_Assert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, "ioNodeArray (%lld COMMA_HERE) != nullptr", inNode->mNodeID, 0) ;
    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;
    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;
    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::copyFrom (const cSharedGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cGraphNode (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}
//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::description (C_String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString << " ("
           << cStringWithUnsigned (mDirectedGraph.nodeCount ())
           << " node" << ((mDirectedGraph.nodeCount () > 1) ? "s" : "")
           << ", " << cStringWithUnsigned (mDirectedGraph.edgeCount ())
           << " edge" << ((mDirectedGraph.edgeCount () > 1) ? "s" : "")
           << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cSharedGraph::checkGraph (LOCATION_ARGS) const {
    TC_UniqueArray <cGraphNode *> nodeArray (mNodeArray.count () COMMA_HERE) ;
    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, nodeArray) ;
    MF_AssertThere (nodeArray.count() == mNodeArray.count (), "nodeArray.count() == %lld != mNodeArray.count () %lld", nodeArray.count(), mNodeArray.count ()) ;
    for (int32_t i=0 ; i<nodeArray.count() ; i++) {
      MF_AssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), "nodeArray.(%lld) != mNodeArray.(%lld)", i, i) ;
      MF_AssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), "! mDirectedGraph.isNodeDefined (i) : %lld != 0", i, 0) ;
    }
  }
#endif

//----------------------------------------------------------------------------------------------------------------------
//    AC_GALGAS_graph
//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_graph::AC_GALGAS_graph (void) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_graph::~ AC_GALGAS_graph (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_graph::AC_GALGAS_graph (const AC_GALGAS_graph & inSource) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_graph & AC_GALGAS_graph::operator = (const AC_GALGAS_graph & inSource) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::makeNewEmptyGraph (LOCATION_ARGS) {
  macroMyNew (mSharedGraph, cSharedGraph (THERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<graph @"
           << staticTypeDescriptor ()->mGalgasTypeName ;
  if (isValid ()) {
    mSharedGraph->description (ioString, inIndentation) ;
  }else{
    ioString << " not built" ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t AC_GALGAS_graph::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedGraph->allNodeCount () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint AC_GALGAS_graph::getter_count (UNUSED_LOCATION_ARGS) const {
  return GALGAS_uint (count ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::drop (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::insulateGraph (LOCATION_ARGS) {
  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {
    cSharedGraph * p = nullptr ;
    macroMyNew (p, cSharedGraph (THERE)) ;
    p->copyFrom (mSharedGraph) ;
    macroAssignSharedObject (mSharedGraph, p) ;
    macroDetachSharedObject (p) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_hasKey
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool AC_GALGAS_graph::getter_isNodeDefined (const GALGAS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool cSharedGraph::isNodeDefined (const C_String & inKey) const {
  bool result = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    result = p->mIsDefined && (p->mKey == inKey) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_locationForKey
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location AC_GALGAS_graph::getter_locationForKey (const GALGAS_string & inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cSharedGraph::locationForKey (const C_String & inKey,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GALGAS_location result ;
  bool found = false ;
  bool ok = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    found = p->mKey == inKey ;
    if (found && p->mIsDefined) {
      ok = true ;
      result = p->mDefinitionLocation ;
    }
  }
  if (!ok) {
    inCompiler->emitSemanticError (GALGAS_location (),
                                   C_String ("graph locationForKey: node '") + inKey + "' is undefined",
                                   TC_Array <C_FixItDescription> ()
                                   COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_keyList
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cSharedGraph::keyList (void) const {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    result.addAssign_operation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist AC_GALGAS_graph::getter_keyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid ()) {
    result = mSharedGraph->keyList () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_lkeyList
#endif

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cSharedGraph::lkeyList (void) const {
  GALGAS_lstringlist result = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    const cGraphNode * p = mNodeArray (i COMMA_HERE) ;
    GALGAS_location loc = p->mDefinitionLocation ;
    if (! loc.isValid ()) {
      loc = GALGAS_location::constructor_nowhere (HERE) ;
    }
    result.addAssign_operation (GALGAS_lstring (p->mKey, loc) COMMA_HERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist AC_GALGAS_graph::getter_lkeyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid ()) {
    result = mSharedGraph->lkeyList () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalFindNode
#endif

//----------------------------------------------------------------------------------------------------------------------

static const cGraphNode * findNode (const C_String & inKey,
                                    const cGraphNode * inNode) {
  const cGraphNode * result = nullptr ;
  while ((nullptr != inNode) && (result == nullptr)) {
    const int32_t r = inKey.compare (inNode->mKey) ;
    if (r < 0) {
      inNode = inNode->mInfPtr ;
    }else if (r > 0) {
      inNode = inNode->mSupPtr ;
    }else{
      result = inNode ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark graph
#endif

//----------------------------------------------------------------------------------------------------------------------

void cGraphNode::accumulateNodes (capCollectionElementArray & outNodeList) const {
  outNodeList.appendObject (mAttributes) ;
  if (mInfPtr != nullptr) {
    mInfPtr->accumulateNodes (outNodeList) ;
  }
  if (mSupPtr != nullptr) {
    mSupPtr->accumulateNodes (outNodeList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::graph (capCollectionElementArray & outNodeList) const {
  if (mRoot != nullptr) {
    mRoot->accumulateNodes (outNodeList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

capCollectionElementArray AC_GALGAS_graph::graph (void) const {
  capCollectionElementArray result ;
  if (isValid ()) {
    mSharedGraph->graph (result) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark subGraph
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::subGraph (AC_GALGAS_graph & outResultingGraph,
                             const GALGAS_lstringlist & inStartNodes,
                             const GALGAS_stringset & inNodesToExclude,
                             C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) const {
//--- Build start node set
  C_UIntSet startNodeSet ;
  cEnumerator_lstringlist enumerator1 (inStartNodes, kENUMERATION_UP) ;
  while (enumerator1.hasCurrentObject ()) {
    const cGraphNode * nodePtr = findNode (enumerator1.current_mValue (THERE).mProperty_string.stringValue(), root()) ;
    if (nullptr == nodePtr) {
      C_String message = "subgraphFromNodes: '" ;
      message << enumerator1.current_mValue (THERE).mProperty_string.stringValue() ;
      message << "' is not a declared node, cannot start from it" ;
      inCompiler->emitSemanticError (enumerator1.current_mValue (THERE).mProperty_location,
                                     message,
                                     TC_Array <C_FixItDescription> ()
                                     COMMA_THERE) ;
    }else{
      startNodeSet.add (nodePtr->mNodeID) ;
    }
    enumerator1.gotoNextObject () ;
  }
//--- Build node to exclude set
  C_UIntSet nodesToExcludeSet ;
  cEnumerator_stringset enumerator2 (inNodesToExclude, kENUMERATION_UP) ;
  while (enumerator2.hasCurrentObject ()) {
    const cGraphNode * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;
    if (nullptr == nodePtr) {
      C_String message = "subgraphFromNodes: '" ;
      message << enumerator2.current_key (THERE).stringValue() ;
      message << "' is not a declared node, cannot be excluded" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      nodesToExcludeSet.add (nodePtr->mNodeID) ;
    }
    enumerator2.gotoNextObject () ;
  }
//--- Build sub graph
  const C_DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (
    startNodeSet,
    nodesToExcludeSet
  ) ;
//--- Enter nodes
  TC_UniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_string = nodePtr->mKey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    outResultingGraph.internalAddNode (lkey,
                                       "subgraphFromNodes Internal error",
                                       nodePtr->mAttributes,
                                       inCompiler
                                       COMMA_THERE) ;
  }
//--- Enter edges
  TC_UniqueArray <cEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;
    const cGraphNode * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;
    GALGAS_lstring source ;
    source.mProperty_string = sourceNodePtr->mKey ;
    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;
    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;
    const cGraphNode * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;
    GALGAS_lstring target ;
    target.mProperty_string = targetNodePtr->mKey ;
    target.mProperty_location = targetNodePtr->mDefinitionLocation ;
    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::subGraph (AC_GALGAS_graph & outResultingGraph,
                                const GALGAS_lstringlist & inStartNodes,
                                const GALGAS_stringset & inNodesToExclude,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {
    outResultingGraph.makeNewEmptyGraph (THERE) ;
    mSharedGraph->subGraph (outResultingGraph,
                            inStartNodes,
                            inNodesToExclude,
                            inCompiler
                            COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Reversed Graph
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::copyReversedGraphFrom (const cSharedGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, cGraphNode (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::reversedGraphFromGraph (const AC_GALGAS_graph & inGraph
                                              COMMA_LOCATION_ARGS) {
  macroDetachSharedObject (mSharedGraph) ;
  if (inGraph.isValid ()) {
    macroMyNew (mSharedGraph, cSharedGraph (THERE)) ;
    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object Compare
#endif

//----------------------------------------------------------------------------------------------------------------------

int32_t cSharedGraph::graphCompare (const cSharedGraph * inOperand) const {
  int32_t r = ((int32_t) allNodeCount ()) - ((int32_t) inOperand->allNodeCount ()) ;
  if (r == 0) {
    // TODO
  }
  return r ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult AC_GALGAS_graph::objectCompare (const AC_GALGAS_graph & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;
    if (r < 0) {
      result = kFirstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Node Insertion
#endif

//----------------------------------------------------------------------------------------------------------------------

static void rotateLeft (cGraphNode * & ioRootPtr) {
  cGraphNode * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance++ ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance++ ;
  }
  ioRootPtr = b ;
}

//----------------------------------------------------------------------------------------------------------------------

static void rotateRight (cGraphNode * & ioRootPtr) {
  cGraphNode * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance-- ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance-- ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//----------------------------------------------------------------------------------------------------------------------

cGraphNode::cGraphNode (const C_String & inKey,
                        const uint32_t inNodeID) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey),
mNodeID (inNodeID),
mAttributes (),
mDefinitionLocation (),
mReferenceLocationArray (),
mIsDefined (false) {
}

//----------------------------------------------------------------------------------------------------------------------

cGraphNode * cSharedGraph::internalInsert (cGraphNode * & ioRootPtr,
                                           const C_String & inKey,
                                           bool & ioExtension) {
  cGraphNode * matchingEntry = nullptr ;
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, cGraphNode (inKey, (uint32_t) mNodeArray.count ())) ;
    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;
    mNodeArray.appendObject (ioRootPtr) ;
    ioExtension = true ;
    matchingEntry = ioRootPtr ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance ++ ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{ // Entry already exists
      matchingEntry = ioRootPtr ;
      ioExtension = false ;
    }
  }
  return matchingEntry ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalAddNode
#endif

//----------------------------------------------------------------------------------------------------------------------

cGraphNode * cSharedGraph::findOrAddNodeForKey (const C_String & inKey) {
  bool extension = false ; // Unused here
  return internalInsert (mRoot, inKey, extension) ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalAddNode (const GALGAS_lstring & inKey,
                                    const char * inErrorMessage,
                                    const capCollectionElement & inAttributes,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cGraphNode * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;
  if (node->mAttributes.ptr () == nullptr) { // Node exists, but is undefined
    node->mAttributes = inAttributes ;
    node->mDefinitionLocation = inKey.mProperty_location ;
    node->mIsDefined = true ;
  }else{ // Error : node redefinition
    GALGAS_lstring existingKey ;
    existingKey.mProperty_location = node->mDefinitionLocation ;
    existingKey.mProperty_string = GALGAS_string (node->mKey) ;
    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalAddNode (const GALGAS_lstring & inKey,
                                       const char * inErrorMessage,
                                       const capCollectionElement & inAttributes,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inAttributes.isValid ()) {
    insulateGraph (THERE) ;
    MF_Assert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->internalAddNode (inKey, inErrorMessage, inAttributes, inCompiler COMMA_THERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}


//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark modifier noteNode
#endif

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_noteNode (const GALGAS_lstring & inKey
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulateGraph (THERE) ;
    MF_Assert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    cGraphNode * node = (nullptr == mSharedGraph)
      ? nullptr
      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())
    ;
    if (nullptr != node) {
      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier addEdge
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::addEdge (const C_String & inSourceNodeKey,
                            const GALGAS_location & inSourceNodeLocation,
                            const C_String & inTargetNodeKey,
                            const GALGAS_location & inTargetNodeLocation) {
  cGraphNode * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;
  macroValidPointer (sourceNode) ;
  cGraphNode * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;
  macroValidPointer (targetNode) ;
  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;
  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;
  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_addEdge (const GALGAS_lstring & inSourceNodeKey,
                                        const GALGAS_lstring & inTargetNodeKey
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {
    insulateGraph (HERE) ;
    MF_Assert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),
                             inSourceNodeKey.mProperty_location,
                             inTargetNodeKey.mProperty_string.stringValue (),
                             inTargetNodeKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output graphviz text
#endif

//----------------------------------------------------------------------------------------------------------------------

C_String cSharedGraph::getter_graphviz (void) const {
  TC_UniqueArray <C_String> nodeNameArray ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;
  }
  return mDirectedGraph.graphvizString (nodeNameArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string AC_GALGAS_graph::getter_graphviz (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (isValid ()) {
    result = GALGAS_string (mSharedGraph->getter_graphviz ()) ;
  }
  return result ;
}


//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output arc list
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::edges (GALGAS__32_stringlist & ioList) const {
  TC_UniqueArray <cEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const cEdge edge = edgeArray (i COMMA_HERE) ;
    ioList.addAssign_operation (mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,
                                mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey
                                COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist AC_GALGAS_graph::getter_edges (LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid ()) {
    result = GALGAS__32_stringlist::constructor_emptyList (THERE) ;
    mSharedGraph->edges (result) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeCount
#endif

//----------------------------------------------------------------------------------------------------------------------

static void countUndefinedNodeCount (const cGraphNode * inNode, uint32_t & ioCount) {
  if (nullptr != inNode) {
    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;
    if (! inNode->mIsDefined) {
      ioCount ++ ;
    }
    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint AC_GALGAS_graph::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    result = GALGAS_uint (undefinedNodeCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeKeyList
#endif

//----------------------------------------------------------------------------------------------------------------------

static void buildUndefinedNodeKeyList (const cGraphNode * inNode, GALGAS_stringlist & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;
    if (! inNode->mIsDefined) {
      ioResult.addAssign_operation (GALGAS_string (inNode->mKey) COMMA_HERE) ;
    }
    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist AC_GALGAS_graph::getter_undefinedNodeKeyList (LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid ()) {
    result = GALGAS_stringlist::constructor_emptyList (THERE) ;
    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Find circularities
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalFindCircularities (capCollectionElementArray & outInfoList,
                                              GALGAS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalFindCircularities (capCollectionElementArray & outInfoList,
                                                 GALGAS_lstringlist & outNodeKeyList
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no predecessor
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                                   GALGAS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalNodesWithNoPredecessor (capCollectionElementArray & outInfoList,
                                                      GALGAS_lstringlist & outNodeKeyList
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no successor
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                                 GALGAS_lstringlist & outNodeKeyList) const {
  TC_UniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAllObjects() ;
  outNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalNodesWithNoSuccessor (capCollectionElementArray & outInfoList,
                                                    GALGAS_lstringlist & outNodeKeyList
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Breath First Topological sort
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalTopologicalSort (capCollectionElementArray & outSortedList,
                                            GALGAS_lstringlist & outSortedNodeKeyList,
                                            capCollectionElementArray & outUnsortedList,
                                            GALGAS_lstringlist & outUnsortedNodeKeyList) const {
  TC_UniqueArray <uint32_t> sortedNodes ;
  TC_UniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAllObjects() ;
  outSortedNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAllObjects() ;
  outUnsortedNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalTopologicalSort (capCollectionElementArray & outSortedList,
                                               GALGAS_lstringlist & outSortedNodeKeyList,
                                               capCollectionElementArray & outUnsortedList,
                                               GALGAS_lstringlist & outUnsortedNodeKeyList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      C_String s ;
      s << "Cannot apply graph topologicalSort: there " ;
      if (undefinedNodeCount > 1) {
        s << "are " << cStringWithUnsigned (undefinedNodeCount) << " undefined nodes" ;
      }else{
        s << "is 1 undefined node" ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Depth First Topological sort
#endif

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                      GALGAS_lstringlist & outSortedNodeKeyList,
                                                      capCollectionElementArray & outUnsortedList,
                                                      GALGAS_lstringlist & outUnsortedNodeKeyList) const {
  TC_UniqueArray <uint32_t> sortedNodes ;
  TC_UniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAllObjects() ;
  outSortedNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAllObjects() ;
  outUnsortedNodeKeyList = GALGAS_lstringlist::constructor_emptyList (HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const cGraphNode * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.appendObject (nodePtr->mAttributes) ;
    GALGAS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GALGAS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.addAssign_operation (lkey COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::internalDepthFirstTopologicalSort (capCollectionElementArray & outSortedList,
                                                         GALGAS_lstringlist & outSortedNodeKeyList,
                                                         capCollectionElementArray & outUnsortedList,
                                                         GALGAS_lstringlist & outUnsortedNodeKeyList,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      C_String s ;
      s << "Cannot apply graph topologicalSort: there " ;
      if (undefinedNodeCount > 1) {
        s << "are " << cStringWithUnsigned (undefinedNodeCount) << " undefined nodes" ;
      }else{
        s << "is 1 undefined node" ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeReferenceList
#endif

//----------------------------------------------------------------------------------------------------------------------

static void buildUndefinedNodeReferenceList (const cGraphNode * inNode,
                                             GALGAS_lstringlist & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;
    if (nullptr == inNode->mAttributes.ptr ()) {
      GALGAS_lstring lkey ;
      lkey.mProperty_string = GALGAS_string (inNode->mKey) ;
      for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;
        ioResult.addAssign_operation (lkey COMMA_HERE) ;
      }
    }
    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist AC_GALGAS_graph::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid ()) {
    result = GALGAS_lstringlist::constructor_emptyList (THERE) ;
    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToNode
#endif

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_removeEdgesToNode (const GALGAS_string & inNodeName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inNodeName.isValid ()) {
    insulateGraph (HERE) ;
    MF_Assert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::removeEdgesToNode (const C_String & inNodeName,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
//--- Find node
  const cGraphNode * node = findNode (inNodeName, mRoot) ;
  if (nullptr == node) {
    C_String s = "graph removeEdgesToNode: node '" ;
    s << inNodeName << "' does not exist" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t nodeIndex = node->mNodeID ;
    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToDominators
#endif

//----------------------------------------------------------------------------------------------------------------------

void AC_GALGAS_graph::setter_removeEdgesToDominators (LOCATION_ARGS) {
  if (isValid ()) {
    insulateGraph (HERE) ;
    MF_Assert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToDominators (THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cSharedGraph::removeEdgesToDominators (LOCATION_ARGS) {
//--- Find start nodes
  TC_UniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;
//--- Add a dummy start node for handling case where there several start nodes
  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;
//--- Add edges from dummy node to start nodes
  for (int32_t i=0 ; i<startNodes.count () ; i++) {
    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;
  }
//--- Remove edge to dominator
  mDirectedGraph.removeEdgesToDominator (THERE) ;
//--- Remove dummy node
  mDirectedGraph.removeNode (dummyNodeIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------
