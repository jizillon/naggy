//===-- ExprEngine.h - Path-Sensitive Expression-Level Dataflow ---*- C++ -*-=//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//  This file defines a meta-engine for path-sensitive dataflow analysis that
//  is built on CoreEngine, but provides the boilerplate to execute transfer
//  functions and build the ExplodedGraph at the expression level.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_GR_EXPRENGINE
#define LLVM_CLANG_GR_EXPRENGINE

#include "clang/StaticAnalyzer/Core/PathSensitive/AnalysisManager.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/SubEngine.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/CoreEngine.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/GRState.h"
#include "clang/StaticAnalyzer/Core/PathSensitive/TransferFuncs.h"
#include "clang/StaticAnalyzer/Core/BugReporter/BugReporter.h"
#include "clang/AST/Type.h"
#include "clang/AST/ExprObjC.h"
#include "clang/AST/ExprCXX.h"
#include "clang/AST/StmtObjC.h"

namespace clang {

class ObjCForCollectionStmt;

namespace ento {

class AnalysisManager;

class ExprEngine : public SubEngine {
  AnalysisManager &AMgr;

  CoreEngine Engine;

  /// G - the simulation graph.
  ExplodedGraph& G;

  /// Builder - The current StmtNodeBuilder which is used when building the
  ///  nodes for a given statement.
  StmtNodeBuilder* Builder;

  /// StateMgr - Object that manages the data for all created states.
  GRStateManager StateMgr;

  /// SymMgr - Object that manages the symbol information.
  SymbolManager& SymMgr;

  /// svalBuilder - SValBuilder object that creates SVals from expressions.
  SValBuilder &svalBuilder;

  /// EntryNode - The immediate predecessor node.
  ExplodedNode* EntryNode;

  /// CleanedState - The state for EntryNode "cleaned" of all dead
  ///  variables and symbols (as determined by a liveness analysis).
  const GRState* CleanedState;

  /// currentStmt - The current block-level statement.
  const Stmt* currentStmt;

  // Obj-C Class Identifiers.
  IdentifierInfo* NSExceptionII;

  // Obj-C Selectors.
  Selector* NSExceptionInstanceRaiseSelectors;
  Selector RaiseSel;

  /// The BugReporter associated with this engine.  It is important that
  ///  this object be placed at the very end of member variables so that its
  ///  destructor is called before the rest of the ExprEngine is destroyed.
  GRBugReporter BR;
  
  llvm::OwningPtr<TransferFuncs> TF;

public:
  ExprEngine(AnalysisManager &mgr, TransferFuncs *tf);

  ~ExprEngine();

  void ExecuteWorkList(const LocationContext *L, unsigned Steps = 150000) {
    Engine.ExecuteWorkList(L, Steps, 0);
  }

  /// Execute the work list with an initial state. Nodes that reaches the exit
  /// of the function are added into the Dst set, which represent the exit
  /// state of the function call.
  void ExecuteWorkListWithInitialState(const LocationContext *L, unsigned Steps,
                                       const GRState *InitState, 
                                       ExplodedNodeSet &Dst) {
    Engine.ExecuteWorkListWithInitialState(L, Steps, InitState, Dst);
  }

  /// getContext - Return the ASTContext associated with this analysis.
  ASTContext& getContext() const { return AMgr.getASTContext(); }

  virtual AnalysisManager &getAnalysisManager() { return AMgr; }

  CheckerManager &getCheckerManager() const {
    return *AMgr.getCheckerManager();
  }

  SValBuilder &getSValBuilder() { return svalBuilder; }

  TransferFuncs& getTF() { return *TF; }

  BugReporter& getBugReporter() { return BR; }

  StmtNodeBuilder &getBuilder() { assert(Builder); return *Builder; }

  // FIXME: Remove once TransferFuncs is no longer referenced.
  void setTransferFunction(TransferFuncs* tf);

  /// ViewGraph - Visualize the ExplodedGraph created by executing the
  ///  simulation.
  void ViewGraph(bool trim = false);

  void ViewGraph(ExplodedNode** Beg, ExplodedNode** End);

  /// getInitialState - Return the initial state used for the root vertex
  ///  in the ExplodedGraph.
  const GRState* getInitialState(const LocationContext *InitLoc);

  ExplodedGraph& getGraph() { return G; }
  const ExplodedGraph& getGraph() const { return G; }

  /// processCFGElement - Called by CoreEngine. Used to generate new successor
  ///  nodes by processing the 'effects' of a CFG element.
  void processCFGElement(const CFGElement E, StmtNodeBuilder& builder);

  void ProcessStmt(const CFGStmt S, StmtNodeBuilder &builder);

  void ProcessInitializer(const CFGInitializer I, StmtNodeBuilder &builder);

  void ProcessImplicitDtor(const CFGImplicitDtor D, StmtNodeBuilder &builder);

  void ProcessAutomaticObjDtor(const CFGAutomaticObjDtor D, 
                            StmtNodeBuilder &builder);
  void ProcessBaseDtor(const CFGBaseDtor D, StmtNodeBuilder &builder);
  void ProcessMemberDtor(const CFGMemberDtor D, StmtNodeBuilder &builder);
  void ProcessTemporaryDtor(const CFGTemporaryDtor D, 
                            StmtNodeBuilder &builder);

  /// Called by CoreEngine when processing the entrance of a CFGBlock.
  virtual void processCFGBlockEntrance(ExplodedNodeSet &dstNodes,
                                GenericNodeBuilder<BlockEntrance> &nodeBuilder);
  
  /// ProcessBranch - Called by CoreEngine.  Used to generate successor
  ///  nodes by processing the 'effects' of a branch condition.
  void processBranch(const Stmt* Condition, const Stmt* Term, 
                     BranchNodeBuilder& builder);

  /// processIndirectGoto - Called by CoreEngine.  Used to generate successor
  ///  nodes by processing the 'effects' of a computed goto jump.
  void processIndirectGoto(IndirectGotoNodeBuilder& builder);

  /// ProcessSwitch - Called by CoreEngine.  Used to generate successor
  ///  nodes by processing the 'effects' of a switch statement.
  void processSwitch(SwitchNodeBuilder& builder);

  /// ProcessEndPath - Called by CoreEngine.  Used to generate end-of-path
  ///  nodes when the control reaches the end of a function.
  void processEndOfFunction(EndOfFunctionNodeBuilder& builder);

  /// Generate the entry node of the callee.
  void processCallEnter(CallEnterNodeBuilder &builder);

  /// Generate the first post callsite node.
  void processCallExit(CallExitNodeBuilder &builder);

  /// Called by CoreEngine when the analysis worklist has terminated.
  void processEndWorklist(bool hasWorkRemaining);

  /// evalAssume - Callback function invoked by the ConstraintManager when
  ///  making assumptions about state values.
  const GRState *processAssume(const GRState *state, SVal cond,bool assumption);

  /// wantsRegionChangeUpdate - Called by GRStateManager to determine if a
  ///  region change should trigger a processRegionChanges update.
  bool wantsRegionChangeUpdate(const GRState* state);

  /// processRegionChanges - Called by GRStateManager whenever a change is made
  ///  to the store. Used to update checkers that track region values.
  const GRState* processRegionChanges(const GRState *state,
                                      const MemRegion * const *Begin,
                                      const MemRegion * const *End);

  virtual GRStateManager& getStateManager() { return StateMgr; }

  StoreManager& getStoreManager() { return StateMgr.getStoreManager(); }

  ConstraintManager& getConstraintManager() {
    return StateMgr.getConstraintManager();
  }

  // FIXME: Remove when we migrate over to just using SValBuilder.
  BasicValueFactory& getBasicVals() {
    return StateMgr.getBasicVals();
  }
  const BasicValueFactory& getBasicVals() const {
    return StateMgr.getBasicVals();
  }

  // FIXME: Remove when we migrate over to just using ValueManager.
  SymbolManager& getSymbolManager() { return SymMgr; }
  const SymbolManager& getSymbolManager() const { return SymMgr; }

  // Functions for external checking of whether we have unfinished work
  bool wasBlocksExhausted() const { return Engine.wasBlocksExhausted(); }
  bool hasEmptyWorkList() const { return !Engine.getWorkList()->hasWork(); }
  bool hasWorkRemaining() const { return Engine.hasWorkRemaining(); }

  const CoreEngine &getCoreEngine() const { return Engine; }

protected:
  const GRState* GetState(ExplodedNode* N) {
    return N == EntryNode ? CleanedState : N->getState();
  }

public:
  ExplodedNode* MakeNode(ExplodedNodeSet& Dst, const Stmt* S, 
                         ExplodedNode* Pred, const GRState* St,
                         ProgramPoint::Kind K = ProgramPoint::PostStmtKind,
                         const void *tag = 0);

  /// Visit - Transfer function logic for all statements.  Dispatches to
  ///  other functions that handle specific kinds of statements.
  void Visit(const Stmt* S, ExplodedNode* Pred, ExplodedNodeSet& Dst);

  /// VisitArraySubscriptExpr - Transfer function for array accesses.
  void VisitLvalArraySubscriptExpr(const ArraySubscriptExpr* Ex,
                                   ExplodedNode* Pred,
                                   ExplodedNodeSet& Dst);

  /// VisitAsmStmt - Transfer function logic for inline asm.
  void VisitAsmStmt(const AsmStmt* A, ExplodedNode* Pred, ExplodedNodeSet& Dst);

  void VisitAsmStmtHelperOutputs(const AsmStmt* A,
                                 AsmStmt::const_outputs_iterator I,
                                 AsmStmt::const_outputs_iterator E,
                                 ExplodedNode* Pred, ExplodedNodeSet& Dst);

  void VisitAsmStmtHelperInputs(const AsmStmt* A,
                                AsmStmt::const_inputs_iterator I,
                                AsmStmt::const_inputs_iterator E,
                                ExplodedNode* Pred, ExplodedNodeSet& Dst);
  
  /// VisitBlockExpr - Transfer function logic for BlockExprs.
  void VisitBlockExpr(const BlockExpr *BE, ExplodedNode *Pred, 
                      ExplodedNodeSet &Dst);

  /// VisitBinaryOperator - Transfer function logic for binary operators.
  void VisitBinaryOperator(const BinaryOperator* B, ExplodedNode* Pred, 
                           ExplodedNodeSet& Dst);


  /// VisitCall - Transfer function for function calls.
  void VisitCallExpr(const CallExpr* CE, ExplodedNode* Pred,
                     ExplodedNodeSet& Dst);

  /// VisitCast - Transfer function logic for all casts (implicit and explicit).
  void VisitCast(const CastExpr *CastE, const Expr *Ex, ExplodedNode *Pred,
                ExplodedNodeSet &Dst);

  /// VisitCompoundLiteralExpr - Transfer function logic for compound literals.
  void VisitCompoundLiteralExpr(const CompoundLiteralExpr* CL, 
                                ExplodedNode* Pred, ExplodedNodeSet& Dst);

  /// Transfer function logic for DeclRefExprs and BlockDeclRefExprs.
  void VisitCommonDeclRefExpr(const Expr* DR, const NamedDecl *D,
                              ExplodedNode* Pred, ExplodedNodeSet& Dst);
  
  /// VisitDeclStmt - Transfer function logic for DeclStmts.
  void VisitDeclStmt(const DeclStmt* DS, ExplodedNode* Pred, 
                     ExplodedNodeSet& Dst);

  /// VisitGuardedExpr - Transfer function logic for ?, __builtin_choose
  void VisitGuardedExpr(const Expr* Ex, const Expr* L, const Expr* R, 
                        ExplodedNode* Pred, ExplodedNodeSet& Dst);
  
  void VisitInitListExpr(const InitListExpr* E, ExplodedNode* Pred,
                         ExplodedNodeSet& Dst);

  /// VisitLogicalExpr - Transfer function logic for '&&', '||'
  void VisitLogicalExpr(const BinaryOperator* B, ExplodedNode* Pred,
                        ExplodedNodeSet& Dst);

  /// VisitMemberExpr - Transfer function for member expressions.
  void VisitMemberExpr(const MemberExpr* M, ExplodedNode* Pred, 
                           ExplodedNodeSet& Dst);

  /// Transfer function logic for ObjCAtSynchronizedStmts.
  void VisitObjCAtSynchronizedStmt(const ObjCAtSynchronizedStmt *S,
                                   ExplodedNode *Pred, ExplodedNodeSet &Dst);

  void VisitObjCPropertyRefExpr(const ObjCPropertyRefExpr *E,
                                ExplodedNode *Pred, ExplodedNodeSet &Dst);

  /// Transfer function logic for computing the lvalue of an Objective-C ivar.
  void VisitLvalObjCIvarRefExpr(const ObjCIvarRefExpr* DR, ExplodedNode* Pred,
                                ExplodedNodeSet& Dst);

  /// VisitObjCForCollectionStmt - Transfer function logic for
  ///  ObjCForCollectionStmt.
  void VisitObjCForCollectionStmt(const ObjCForCollectionStmt* S, 
                                  ExplodedNode* Pred, ExplodedNodeSet& Dst);

  void VisitObjCForCollectionStmtAux(const ObjCForCollectionStmt* S, 
                                     ExplodedNode* Pred,
                                     ExplodedNodeSet& Dst, SVal ElementV);

  /// VisitObjCMessageExpr - Transfer function for ObjC message expressions.
  void VisitObjCMessageExpr(const ObjCMessageExpr* ME, ExplodedNode* Pred, 
                            ExplodedNodeSet& Dst);
  void VisitObjCMessage(const ObjCMessage &msg, ExplodedNodeSet &Src,
                        ExplodedNodeSet& Dst);

  /// VisitReturnStmt - Transfer function logic for return statements.
  void VisitReturnStmt(const ReturnStmt* R, ExplodedNode* Pred, 
                       ExplodedNodeSet& Dst);
  
  /// VisitOffsetOfExpr - Transfer function for offsetof.
  void VisitOffsetOfExpr(const OffsetOfExpr* Ex, ExplodedNode* Pred,
                         ExplodedNodeSet& Dst);

  /// VisitUnaryExprOrTypeTraitExpr - Transfer function for sizeof.
  void VisitUnaryExprOrTypeTraitExpr(const UnaryExprOrTypeTraitExpr* Ex,
                              ExplodedNode* Pred, ExplodedNodeSet& Dst);

  /// VisitUnaryOperator - Transfer function logic for unary operators.
  void VisitUnaryOperator(const UnaryOperator* B, ExplodedNode* Pred, 
                          ExplodedNodeSet& Dst);

  void VisitCXXThisExpr(const CXXThisExpr *TE, ExplodedNode *Pred, 
                        ExplodedNodeSet & Dst);

  void VisitCXXTemporaryObjectExpr(const CXXTemporaryObjectExpr *expr,
                                   ExplodedNode *Pred, ExplodedNodeSet &Dst) {
    VisitCXXConstructExpr(expr, 0, Pred, Dst);
  }

  void VisitCXXConstructExpr(const CXXConstructExpr *E, const MemRegion *Dest,
                             ExplodedNode *Pred, ExplodedNodeSet &Dst);

  void VisitCXXDestructor(const CXXDestructorDecl *DD,
                          const MemRegion *Dest, const Stmt *S,
                          ExplodedNode *Pred, ExplodedNodeSet &Dst);

  void VisitCXXNewExpr(const CXXNewExpr *CNE, ExplodedNode *Pred,
                       ExplodedNodeSet &Dst);

  void VisitCXXDeleteExpr(const CXXDeleteExpr *CDE, ExplodedNode *Pred,
                          ExplodedNodeSet &Dst);

  void VisitAggExpr(const Expr *E, const MemRegion *Dest, ExplodedNode *Pred,
                    ExplodedNodeSet &Dst);

  /// Create a C++ temporary object for an rvalue.
  void CreateCXXTemporaryObject(const Expr *Ex, ExplodedNode *Pred, 
                                ExplodedNodeSet &Dst);

  /// Synthesize CXXThisRegion.
  const CXXThisRegion *getCXXThisRegion(const CXXRecordDecl *RD,
                                        const StackFrameContext *SFC);

  const CXXThisRegion *getCXXThisRegion(const CXXMethodDecl *decl,
                                        const StackFrameContext *frameCtx);

  /// Evaluate arguments with a work list algorithm.
  void evalArguments(ConstExprIterator AI, ConstExprIterator AE,
                     const FunctionProtoType *FnType, 
                     ExplodedNode *Pred, ExplodedNodeSet &Dst,
                     bool FstArgAsLValue = false);
  
  /// Evaluate callee expression (for a function call).
  void evalCallee(const CallExpr *callExpr, const ExplodedNodeSet &src,
                  ExplodedNodeSet &dest);

  /// evalEagerlyAssume - Given the nodes in 'Src', eagerly assume symbolic
  ///  expressions of the form 'x != 0' and generate new nodes (stored in Dst)
  ///  with those assumptions.
  void evalEagerlyAssume(ExplodedNodeSet& Dst, ExplodedNodeSet& Src, 
                         const Expr *Ex);

  SVal evalMinus(SVal X) {
    return X.isValid() ? svalBuilder.evalMinus(cast<NonLoc>(X)) : X;
  }

  SVal evalComplement(SVal X) {
    return X.isValid() ? svalBuilder.evalComplement(cast<NonLoc>(X)) : X;
  }

public:

  SVal evalBinOp(const GRState *state, BinaryOperator::Opcode op,
                 NonLoc L, NonLoc R, QualType T) {
    return svalBuilder.evalBinOpNN(state, op, L, R, T);
  }

  SVal evalBinOp(const GRState *state, BinaryOperator::Opcode op,
                 NonLoc L, SVal R, QualType T) {
    return R.isValid() ? svalBuilder.evalBinOpNN(state,op,L, cast<NonLoc>(R), T) : R;
  }

  SVal evalBinOp(const GRState *ST, BinaryOperator::Opcode Op,
                 SVal LHS, SVal RHS, QualType T) {
    return svalBuilder.evalBinOp(ST, Op, LHS, RHS, T);
  }
  
protected:
  void evalObjCMessage(ExplodedNodeSet& Dst, const ObjCMessage &msg, 
                       ExplodedNode* Pred, const GRState *state) {
    assert (Builder && "StmtNodeBuilder must be defined.");
    getTF().evalObjCMessage(Dst, *this, *Builder, msg, Pred, state);
  }

  const GRState* MarkBranch(const GRState* St, const Stmt* Terminator,
                            bool branchTaken);

  /// evalBind - Handle the semantics of binding a value to a specific location.
  ///  This method is used by evalStore, VisitDeclStmt, and others.
  void evalBind(ExplodedNodeSet& Dst, const Stmt* StoreE, ExplodedNode* Pred,
                const GRState* St, SVal location, SVal Val,
                bool atDeclInit = false);

public:
  // FIXME: 'tag' should be removed, and a LocationContext should be used
  // instead.
  // FIXME: Comment on the meaning of the arguments, when 'St' may not
  // be the same as Pred->state, and when 'location' may not be the
  // same as state->getLValue(Ex).
  /// Simulate a read of the result of Ex.
  void evalLoad(ExplodedNodeSet& Dst, const Expr* Ex, ExplodedNode* Pred,
                const GRState* St, SVal location, const void *tag = 0,
                QualType LoadTy = QualType());

  // FIXME: 'tag' should be removed, and a LocationContext should be used
  // instead.
  void evalStore(ExplodedNodeSet& Dst, const Expr* AssignE, const Expr* StoreE,
                 ExplodedNode* Pred, const GRState* St, SVal TargetLV, SVal Val,
                 const void *tag = 0);
private:
  void evalLoadCommon(ExplodedNodeSet& Dst, const Expr* Ex, ExplodedNode* Pred,
                      const GRState* St, SVal location, const void *tag,
                      QualType LoadTy);

  // FIXME: 'tag' should be removed, and a LocationContext should be used
  // instead.
  void evalLocation(ExplodedNodeSet &Dst, const Stmt *S, ExplodedNode* Pred,
                    const GRState* St, SVal location,
                    const void *tag, bool isLoad);

  bool InlineCall(ExplodedNodeSet &Dst, const CallExpr *CE, ExplodedNode *Pred);
};

} // end ento namespace

} // end clang namespace

#endif
