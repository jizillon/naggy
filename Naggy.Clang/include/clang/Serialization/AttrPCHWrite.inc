  switch (A->getKind()) {
  default:
    llvm_unreachable("Unknown attribute kind!");
    break;
  case attr::Alias: {
    const AliasAttr *SA = cast<AliasAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getAliasee(), Record);
    break;
  }
  case attr::AlignMac68k: {
    const AlignMac68kAttr *SA = cast<AlignMac68kAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Aligned: {
    const AlignedAttr *SA = cast<AlignedAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->isAlignmentExpr());
    if (SA->isAlignmentExpr())
      AddStmt(SA->getAlignmentExpr());
    else
      AddTypeSourceInfo(SA->getAlignmentType(), Record);
    break;
  }
  case attr::AlwaysInline: {
    const AlwaysInlineAttr *SA = cast<AlwaysInlineAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::AnalyzerNoReturn: {
    const AnalyzerNoReturnAttr *SA = cast<AnalyzerNoReturnAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Annotate: {
    const AnnotateAttr *SA = cast<AnnotateAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getAnnotation(), Record);
    break;
  }
  case attr::AsmLabel: {
    const AsmLabelAttr *SA = cast<AsmLabelAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getLabel(), Record);
    break;
  }
  case attr::Availability: {
    const AvailabilityAttr *SA = cast<AvailabilityAttr>(A);
    Record.push_back(SA->isInherited());
    AddIdentifierRef(SA->getPlatform(), Record);
    AddVersionTuple(SA->getIntroduced(), Record);
    AddVersionTuple(SA->getDeprecated(), Record);
    AddVersionTuple(SA->getObsoleted(), Record);
    Record.push_back(SA->getUnavailable());
    break;
  }
  case attr::Blocks: {
    const BlocksAttr *SA = cast<BlocksAttr>(A);
    Record.push_back(SA->isInherited());
Record.push_back(SA->getType());
    break;
  }
  case attr::CDecl: {
    const CDeclAttr *SA = cast<CDeclAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CFConsumed: {
    const CFConsumedAttr *SA = cast<CFConsumedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CFReturnsNotRetained: {
    const CFReturnsNotRetainedAttr *SA = cast<CFReturnsNotRetainedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CFReturnsRetained: {
    const CFReturnsRetainedAttr *SA = cast<CFReturnsRetainedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CUDAConstant: {
    const CUDAConstantAttr *SA = cast<CUDAConstantAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CUDADevice: {
    break;
  }
  case attr::CUDAGlobal: {
    const CUDAGlobalAttr *SA = cast<CUDAGlobalAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CUDAHost: {
    break;
  }
  case attr::CUDALaunchBounds: {
    const CUDALaunchBoundsAttr *SA = cast<CUDALaunchBoundsAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getMaxThreads());
    Record.push_back(SA->getMinBlocks());
    break;
  }
  case attr::CUDAShared: {
    const CUDASharedAttr *SA = cast<CUDASharedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::CarriesDependency: {
    const CarriesDependencyAttr *SA = cast<CarriesDependencyAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Cleanup: {
    const CleanupAttr *SA = cast<CleanupAttr>(A);
    Record.push_back(SA->isInherited());
    AddDeclRef(SA->getFunctionDecl(), Record);
    break;
  }
  case attr::Common: {
    const CommonAttr *SA = cast<CommonAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Const: {
    const ConstAttr *SA = cast<ConstAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Constructor: {
    const ConstructorAttr *SA = cast<ConstructorAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getPriority());
    break;
  }
  case attr::DLLExport: {
    const DLLExportAttr *SA = cast<DLLExportAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::DLLImport: {
    const DLLImportAttr *SA = cast<DLLImportAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Deprecated: {
    const DeprecatedAttr *SA = cast<DeprecatedAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getMessage(), Record);
    break;
  }
  case attr::Destructor: {
    const DestructorAttr *SA = cast<DestructorAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getPriority());
    break;
  }
  case attr::FastCall: {
    const FastCallAttr *SA = cast<FastCallAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Final: {
    const FinalAttr *SA = cast<FinalAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Format: {
    const FormatAttr *SA = cast<FormatAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getType(), Record);
    Record.push_back(SA->getFormatIdx());
    Record.push_back(SA->getFirstArg());
    break;
  }
  case attr::FormatArg: {
    const FormatArgAttr *SA = cast<FormatArgAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getFormatIdx());
    break;
  }
  case attr::GNUInline: {
    const GNUInlineAttr *SA = cast<GNUInlineAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::IBAction: {
    const IBActionAttr *SA = cast<IBActionAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::IBOutlet: {
    const IBOutletAttr *SA = cast<IBOutletAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::IBOutletCollection: {
    const IBOutletCollectionAttr *SA = cast<IBOutletCollectionAttr>(A);
    Record.push_back(SA->isInherited());
    AddTypeRef(SA->getInterFace(), Record);
    break;
  }
  case attr::InitPriority: {
    const InitPriorityAttr *SA = cast<InitPriorityAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getPriority());
    break;
  }
  case attr::MBlazeInterruptHandler: {
    const MBlazeInterruptHandlerAttr *SA = cast<MBlazeInterruptHandlerAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::MBlazeSaveVolatiles: {
    const MBlazeSaveVolatilesAttr *SA = cast<MBlazeSaveVolatilesAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::MSP430Interrupt: {
    const MSP430InterruptAttr *SA = cast<MSP430InterruptAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getNumber());
    break;
  }
  case attr::Malloc: {
    const MallocAttr *SA = cast<MallocAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::MaxFieldAlignment: {
    const MaxFieldAlignmentAttr *SA = cast<MaxFieldAlignmentAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getAlignment());
    break;
  }
  case attr::MayAlias: {
    const MayAliasAttr *SA = cast<MayAliasAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::MsStruct: {
    const MsStructAttr *SA = cast<MsStructAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NSConsumed: {
    const NSConsumedAttr *SA = cast<NSConsumedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NSConsumesSelf: {
    const NSConsumesSelfAttr *SA = cast<NSConsumesSelfAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NSReturnsAutoreleased: {
    const NSReturnsAutoreleasedAttr *SA = cast<NSReturnsAutoreleasedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NSReturnsNotRetained: {
    const NSReturnsNotRetainedAttr *SA = cast<NSReturnsNotRetainedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NSReturnsRetained: {
    const NSReturnsRetainedAttr *SA = cast<NSReturnsRetainedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Naked: {
    const NakedAttr *SA = cast<NakedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoCommon: {
    const NoCommonAttr *SA = cast<NoCommonAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoDebug: {
    const NoDebugAttr *SA = cast<NoDebugAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoInline: {
    const NoInlineAttr *SA = cast<NoInlineAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoInstrumentFunction: {
    const NoInstrumentFunctionAttr *SA = cast<NoInstrumentFunctionAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoReturn: {
    const NoReturnAttr *SA = cast<NoReturnAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NoThrow: {
    const NoThrowAttr *SA = cast<NoThrowAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::NonNull: {
    const NonNullAttr *SA = cast<NonNullAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->args_size());
    for (NonNullAttr::args_iterator i = SA->args_begin(), e = SA->args_end(); i != e; ++i)
      Record.push_back((*i));
    break;
  }
  case attr::ObjCException: {
    const ObjCExceptionAttr *SA = cast<ObjCExceptionAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::ObjCMethodFamily: {
    const ObjCMethodFamilyAttr *SA = cast<ObjCMethodFamilyAttr>(A);
    Record.push_back(SA->isInherited());
Record.push_back(SA->getFamily());
    break;
  }
  case attr::ObjCNSObject: {
    const ObjCNSObjectAttr *SA = cast<ObjCNSObjectAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::OpenCLKernel: {
    break;
  }
  case attr::Overloadable: {
    break;
  }
  case attr::Override: {
    const OverrideAttr *SA = cast<OverrideAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Ownership: {
    const OwnershipAttr *SA = cast<OwnershipAttr>(A);
    Record.push_back(SA->isInherited());
Record.push_back(SA->getOwnKind());
    AddString(SA->getModule(), Record);
    Record.push_back(SA->args_size());
    for (OwnershipAttr::args_iterator i = SA->args_begin(), e = SA->args_end(); i != e; ++i)
      Record.push_back((*i));
    break;
  }
  case attr::Packed: {
    const PackedAttr *SA = cast<PackedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Pascal: {
    const PascalAttr *SA = cast<PascalAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Pcs: {
    const PcsAttr *SA = cast<PcsAttr>(A);
    Record.push_back(SA->isInherited());
Record.push_back(SA->getPCS());
    break;
  }
  case attr::Pure: {
    const PureAttr *SA = cast<PureAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Regparm: {
    const RegparmAttr *SA = cast<RegparmAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getNumParams());
    break;
  }
  case attr::ReqdWorkGroupSize: {
    const ReqdWorkGroupSizeAttr *SA = cast<ReqdWorkGroupSizeAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getXDim());
    Record.push_back(SA->getYDim());
    Record.push_back(SA->getZDim());
    break;
  }
  case attr::Section: {
    const SectionAttr *SA = cast<SectionAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getName(), Record);
    break;
  }
  case attr::Sentinel: {
    const SentinelAttr *SA = cast<SentinelAttr>(A);
    Record.push_back(SA->isInherited());
    Record.push_back(SA->getSentinel());
    Record.push_back(SA->getNullPos());
    break;
  }
  case attr::StdCall: {
    const StdCallAttr *SA = cast<StdCallAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::ThisCall: {
    const ThisCallAttr *SA = cast<ThisCallAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::TransparentUnion: {
    const TransparentUnionAttr *SA = cast<TransparentUnionAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Unavailable: {
    const UnavailableAttr *SA = cast<UnavailableAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getMessage(), Record);
    break;
  }
  case attr::Unused: {
    const UnusedAttr *SA = cast<UnusedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Used: {
    const UsedAttr *SA = cast<UsedAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Uuid: {
    const UuidAttr *SA = cast<UuidAttr>(A);
    Record.push_back(SA->isInherited());
    AddString(SA->getGuid(), Record);
    break;
  }
  case attr::VecReturn: {
    const VecReturnAttr *SA = cast<VecReturnAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Visibility: {
    const VisibilityAttr *SA = cast<VisibilityAttr>(A);
    Record.push_back(SA->isInherited());
Record.push_back(SA->getVisibility());
    break;
  }
  case attr::WarnUnusedResult: {
    const WarnUnusedResultAttr *SA = cast<WarnUnusedResultAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::Weak: {
    const WeakAttr *SA = cast<WeakAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::WeakImport: {
    const WeakImportAttr *SA = cast<WeakImportAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::WeakRef: {
    const WeakRefAttr *SA = cast<WeakRefAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  case attr::X86ForceAlignArgPointer: {
    const X86ForceAlignArgPointerAttr *SA = cast<X86ForceAlignArgPointerAttr>(A);
    Record.push_back(SA->isInherited());
    break;
  }
  }
