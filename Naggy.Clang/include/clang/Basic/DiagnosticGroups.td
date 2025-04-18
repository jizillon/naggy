//==--- DiagnosticGroups.td - Diagnostic Group Definitions ----------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

def ImplicitFunctionDeclare : DiagGroup<"implicit-function-declaration">;
def ImplicitInt : DiagGroup<"implicit-int">;

// Aggregation warning settings.
def Implicit : DiagGroup<"implicit", [
    ImplicitFunctionDeclare,
    ImplicitInt
]>;

// Empty DiagGroups are recognized by clang but ignored.
def : DiagGroup<"abi">;
def : DiagGroup<"address">;
def AddressOfTemporary : DiagGroup<"address-of-temporary">;
def : DiagGroup<"aggregate-return">;
def AmbigMemberTemplate : DiagGroup<"ambiguous-member-template">;
def : DiagGroup<"attributes">;
def : DiagGroup<"bad-function-cast">;
def Availability : DiagGroup<"availability">;
def BoolConversions : DiagGroup<"bool-conversions">;
def CXXCompat: DiagGroup<"c++-compat">;
def CastAlign : DiagGroup<"cast-align">;
def : DiagGroup<"cast-qual">;
def : DiagGroup<"char-align">;
def Comment : DiagGroup<"comment">;
def : DiagGroup<"ctor-dtor-privacy">;
def : DiagGroup<"declaration-after-statement">;
def GNUDesignator : DiagGroup<"gnu-designator">;

def DeprecatedDeclarations : DiagGroup<"deprecated-declarations">;
def DeprecatedWritableStr : DiagGroup<"deprecated-writable-strings">;
def Deprecated : DiagGroup<"deprecated", [ DeprecatedDeclarations] >,
                 DiagCategory<"Deprecations">;

def DeprecatedImplementations :DiagGroup<"deprecated-implementations">;

def : DiagGroup<"disabled-optimization">;
def : DiagGroup<"discard-qual">;
def : DiagGroup<"div-by-zero">;
def EmptyBody : DiagGroup<"empty-body">;
def ExtraTokens : DiagGroup<"extra-tokens">;

def FormatExtraArgs : DiagGroup<"format-extra-args">;
def FormatZeroLength : DiagGroup<"format-zero-length">;

def CXXHexFloats : DiagGroup<"c++-hex-floats">;

def : DiagGroup<"c++0x-compat", [CXXHexFloats]>;
def : DiagGroup<"effc++">;
def ExitTimeDestructors : DiagGroup<"exit-time-destructors">;
def FourByteMultiChar : DiagGroup<"four-char-constants">;
def GlobalConstructors : DiagGroup<"global-constructors">;
def : DiagGroup<"idiomatic-parentheses">;
def LogicalOpParentheses: DiagGroup<"logical-op-parentheses">;
def IgnoredQualifiers : DiagGroup<"ignored-qualifiers">;
def : DiagGroup<"import">;
def : DiagGroup<"init-self">;
def : DiagGroup<"inline">;
def : DiagGroup<"int-to-pointer-cast">;
def : DiagGroup<"invalid-pch">;
def LiteralRange : DiagGroup<"literal-range">;
def LocalTypeTemplateArgs : DiagGroup<"local-type-template-args">;
def : DiagGroup<"main">;
def MissingBraces : DiagGroup<"missing-braces">;
def MissingDeclarations: DiagGroup<"missing-declarations">;
def : DiagGroup<"missing-format-attribute">;
def : DiagGroup<"missing-include-dirs">;
def : DiagGroup<"missing-noreturn">;
def MultiChar : DiagGroup<"multichar">;
def : DiagGroup<"nested-externs">;
def : DiagGroup<"newline-eof">;
def LongLong : DiagGroup<"long-long">;
def MismatchedTags : DiagGroup<"mismatched-tags">;
def MissingFieldInitializers : DiagGroup<"missing-field-initializers">;
def NullDereference : DiagGroup<"null-dereference">;
def InitializerOverrides : DiagGroup<"initializer-overrides">;
def NonNull : DiagGroup<"nonnull">;
def : DiagGroup<"nonportable-cfstrings">;
def NonVirtualDtor : DiagGroup<"non-virtual-dtor">;
def : DiagGroup<"old-style-cast">;
def : DiagGroup<"old-style-definition">;
def OutOfLineDeclaration : DiagGroup<"out-of-line-declaration">;
def : DiagGroup<"overflow">;
def OverlengthStrings : DiagGroup<"overlength-strings">;
def OverloadedVirtual : DiagGroup<"overloaded-virtual">;
def Packed : DiagGroup<"packed">;
def Padded : DiagGroup<"padded">;
def PointerArith : DiagGroup<"pointer-arith">;
def PoundWarning : DiagGroup<"#warnings">,
                   DiagCategory<"#warning Directive">;
def PoundPragmaMessage : DiagGroup<"#pragma messages">,
                         DiagCategory<"#pragma message Directive">;
def : DiagGroup<"pointer-to-int-cast">;
def : DiagGroup<"redundant-decls">;
def ReturnType : DiagGroup<"return-type">;
def BindToTemporaryCopy : DiagGroup<"bind-to-temporary-copy">;
def SelfAssignment : DiagGroup<"self-assign">;
def SemiBeforeMethodBody : DiagGroup<"semicolon-before-method-body">;
def : DiagGroup<"sequence-point">;
def Shadow : DiagGroup<"shadow">;
def : DiagGroup<"shorten-64-to-32">;
def : DiagGroup<"sign-promo">;
def SignCompare : DiagGroup<"sign-compare">;
def : DiagGroup<"stack-protector">;
def : DiagGroup<"switch-default">;
def : DiagGroup<"synth">;
def TautologicalCompare : DiagGroup<"tautological-compare">;
def HeaderHygiene : DiagGroup<"header-hygiene">;

// Preprocessor warnings.
def : DiagGroup<"builtin-macro-redefined">;

// Just silence warnings about -Wstrict-aliasing for now.
def : DiagGroup<"strict-aliasing=0">;
def : DiagGroup<"strict-aliasing=1">;
def : DiagGroup<"strict-aliasing=2">;
def : DiagGroup<"strict-aliasing">;

// Just silence warnings about -Wstrict-overflow for now.
def : DiagGroup<"strict-overflow=0">;
def : DiagGroup<"strict-overflow=1">;
def : DiagGroup<"strict-overflow=2">;
def : DiagGroup<"strict-overflow=3">;
def : DiagGroup<"strict-overflow=4">;
def : DiagGroup<"strict-overflow=5">;
def : DiagGroup<"strict-overflow">;

def InvalidOffsetof : DiagGroup<"invalid-offsetof">;
def : DiagGroup<"strict-prototypes">;
def StrictSelector : DiagGroup<"strict-selector-match">;
def SwitchEnum     : DiagGroup<"switch-enum">;
def Switch         : DiagGroup<"switch", [SwitchEnum]>;
def Trigraphs      : DiagGroup<"trigraphs">;

def : DiagGroup<"type-limits">;
def Uninitialized  : DiagGroup<"uninitialized">;
def UninitializedMaybe : DiagGroup<"conditional-uninitialized">;
def UnknownPragmas : DiagGroup<"unknown-pragmas">;
def UnknownAttributes : DiagGroup<"unknown-attributes">;
def UnnamedTypeTemplateArgs : DiagGroup<"unnamed-type-template-args">;
def UnusedArgument : DiagGroup<"unused-argument">;
def UnusedExceptionParameter : DiagGroup<"unused-exception-parameter">;
def UnneededInternalDecl : DiagGroup<"unneeded-internal-declaration">;
def UnneededMemberFunction : DiagGroup<"unneeded-member-function">;
def UnusedFunction : DiagGroup<"unused-function", [UnneededInternalDecl]>;
def UnusedMemberFunction : DiagGroup<"unused-member-function",
                                     [UnneededMemberFunction]>;
def UnusedLabel : DiagGroup<"unused-label">;
def UnusedParameter : DiagGroup<"unused-parameter">;
def UnusedValue    : DiagGroup<"unused-value">;
def UnusedVariable : DiagGroup<"unused-variable">;
def UsedButMarkedUnused : DiagGroup<"used-but-marked-unused">;
def ReadOnlySetterAttrs : DiagGroup<"readonly-setter-attrs">;
def Reorder : DiagGroup<"reorder">;
def UndeclaredSelector : DiagGroup<"undeclared-selector">;
def ImplicitAtomic : DiagGroup<"implicit-atomic-properties">;
def CustomAtomic : DiagGroup<"custom-atomic-properties">;
def AtomicProperties : DiagGroup<"atomic-properties",
                                 [ImplicitAtomic, CustomAtomic]>;
def Selector : DiagGroup<"selector">;
def NonfragileAbi2 : DiagGroup<"nonfragile-abi2">;
def Protocol : DiagGroup<"protocol">;
def SuperSubClassMismatch : DiagGroup<"super-class-method-mismatch">;
def : DiagGroup<"variadic-macros">;
def VariadicMacros : DiagGroup<"variadic-macros">;
def VectorConversions : DiagGroup<"vector-conversions">;      // clang specific
def VLA : DiagGroup<"vla">;
def VolatileRegisterVar : DiagGroup<"volatile-register-var">;

// GCC calls -Wdeprecated-writable-strings -Wwrite-strings.
def GCCWriteStrings : DiagGroup<"write-strings" , [DeprecatedWritableStr]>;

def CharSubscript : DiagGroup<"char-subscripts">;
def LargeByValueCopy : DiagGroup<"large-by-value-copy">;
def DuplicateArgDecl : DiagGroup<"duplicate-method-arg">;

// Aggregation warning settings.

// -Widiomatic-parentheses contains warnings about 'idiomatic'
// missing parentheses;  it is off by default.  We do not include it
// in -Wparentheses because most users who use -Wparentheses explicitly
// do not want these warnings.
def Parentheses : DiagGroup<"parentheses",
                            [LogicalOpParentheses]>;

// -Wconversion has its own warnings, but we split a few out for
// legacy reasons:
//   - some people want just 64-to-32 warnings
//   - conversion warnings with constant sources are on by default
//   - conversion warnings for literals are on by default
//   - bool-to-pointer conversion warnings are on by default
def Conversion : DiagGroup<"conversion",
                           [DiagGroup<"shorten-64-to-32">,
                            DiagGroup<"constant-conversion">,
                            DiagGroup<"literal-conversion">,
                            DiagGroup<"sign-conversion">,
                            BoolConversions]>,
                 DiagCategory<"Value Conversion Issue">;

def Unused : DiagGroup<"unused",
                       [UnusedArgument, UnusedFunction, UnusedLabel,
                        // UnusedParameter, (matches GCC's behavior)
                        // UnusedMemberFunction, (clean-up llvm before enabling)
                        UnusedValue, UnusedVariable]>,
                        DiagCategory<"Unused Entity Issue">;

// Format settings.
def FormatSecurity : DiagGroup<"format-security">;
def Format : DiagGroup<"format",
                       [FormatExtraArgs, FormatZeroLength, NonNull,
                        FormatSecurity]>,
             DiagCategory<"Format String Issue">;
def FormatNonLiteral : DiagGroup<"format-nonliteral", [FormatSecurity]>;
def FormatY2K : DiagGroup<"format-y2k", [Format]>;
def Format2 : DiagGroup<"format=2",
                        [FormatNonLiteral, FormatSecurity, FormatY2K]>;

def Extra : DiagGroup<"extra", [
    MissingFieldInitializers,
    IgnoredQualifiers,
    InitializerOverrides,
    SemiBeforeMethodBody,
    SignCompare,
    UnusedParameter
  ]>;

def Most : DiagGroup<"most", [
    CharSubscript,
    Comment,
    Format,
    Implicit,
    MismatchedTags,
    MissingBraces,
    MultiChar,
    Reorder,
    ReturnType,
    SelfAssignment,
    Switch,
    Trigraphs,
    Uninitialized,
    UnknownPragmas,
    Unused,
    VectorConversions,
    VolatileRegisterVar,
    OverloadedVirtual
 ]>;

// -Wall is -Wmost -Wparentheses
def : DiagGroup<"all", [Most, Parentheses]>;

// Aliases.
def : DiagGroup<"", [Extra]>;                   // -W = -Wextra
def : DiagGroup<"endif-labels", [ExtraTokens]>; // -Wendif-labels=-Wendif-tokens
def : DiagGroup<"comments", [Comment]>;         // -Wcomments = -Wcomment

// A warning group for warnings that we want to have on by default in clang,
// but which aren't on by default in GCC.
def NonGCC : DiagGroup<"non-gcc",
    [SignCompare, Conversion, LiteralRange]>;

// A warning group for warnings about using C++0x features as extensions in
// earlier C++ versions.
def CXX0xStaticNonIntegralInitializer :
  DiagGroup<"c++0x-static-nonintegral-init">;
def CXX0x : DiagGroup<"c++0x-extensions", [CXX0xStaticNonIntegralInitializer]>;

// A warning group for warnings about GCC extensions.
def GNU : DiagGroup<"gnu", [GNUDesignator, VLA]>;

// A warning group for warnings about Microsoft extensions.
def Microsoft : DiagGroup<"microsoft">;
