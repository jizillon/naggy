//==--- DiagnosticDriverKinds.td - libdriver diagnostics ------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

let Component = "Driver" in {

def err_drv_no_such_file : Error<"no such file or directory: '%0'">;
def err_drv_unsupported_opt : Error<"unsupported option '%0'">;
def err_drv_unsupported_option_argument : Error<
  "unsupported argument '%1' to option '%0'">;
def err_drv_unknown_stdin_type : Error<
  "-E or -x required when input is from standard input">;
def err_drv_unknown_language : Error<"language not recognized: '%0'">;
def err_drv_invalid_arch_name : Error<
  "invalid arch name '%0'">;
def err_drv_invalid_stdlib_name : Error<
  "invalid library name in argument '%0'">;
def err_drv_invalid_opt_with_multiple_archs : Error<
  "option '%0' cannot be used with multiple -arch options">;
def err_drv_invalid_output_with_multiple_archs : Error<
  "cannot use '%0' output with multiple -arch options">;
def err_drv_no_input_files : Error<"no input files">;
def err_drv_use_of_Z_option : Error<
  "unsupported use of internal gcc -Z option '%0'">;
def err_drv_output_argument_with_multiple_files : Error<
  "cannot specify -o when generating multiple output files">;
def err_drv_unable_to_make_temp : Error<
  "unable to make temporary file: %0">;
def err_drv_unable_to_remove_file : Error<
  "unable to remove file: %0">;
def err_drv_command_failure : Error<
  "unable to execute command: %0">;
def err_drv_invalid_darwin_version : Error<
  "invalid Darwin version number: %0">;
def err_drv_missing_argument : Error<
  "argument to '%0' is missing (expected %1 %plural{1:value|:values}1)">;
def err_drv_invalid_Xarch_argument_with_args : Error<
  "invalid Xarch argument: '%0', options requiring arguments are unsupported">;
def err_drv_invalid_Xarch_argument_isdriver : Error<
  "invalid Xarch argument: '%0', cannot change driver behavior inside Xarch argument">;
def err_drv_argument_only_allowed_with : Error<
  "invalid argument '%0' only allowed with '%1'">;
def err_drv_argument_not_allowed_with : Error<
  "invalid argument '%0' not allowed with '%1'">;
def err_drv_invalid_version_number : Error<
  "invalid version number in '%0'">;
def err_drv_no_linker_llvm_support : Error<
  "'%0': unable to pass LLVM bit-code files to linker">;
def err_drv_no_ast_support : Error<
  "'%0': unable to use AST files with this tool">;
def err_drv_clang_unsupported : Error<
  "the clang compiler does not support '%0'">;
def err_drv_clang_unsupported_per_platform : Error<
  "the clang compiler does not support '%0' on this platform">;
def err_drv_clang_unsupported_opt_cxx_darwin_i386 : Error<
  "the clang compiler does not support '%0' for C++ on Darwin/i386">;
def err_drv_command_failed : Error<
  "%0 command failed with exit code %1 (use -v to see invocation)">;
def err_drv_command_signalled : Error<
  "%0 command failed due to signal %1 (use -v to see invocation)">;
def err_drv_invalid_mfloat_abi : Error<
  "invalid float ABI '%0'">;
def err_drv_I_dash_not_supported : Error<
  "'%0' not supported, please use -iquote instead">;
def err_drv_unknown_argument : Error<"unknown argument: '%0'">;
def err_drv_invalid_value : Error<"invalid value '%1' in '%0'">;
def err_drv_invalid_int_value : Error<"invalid integral value '%1' in '%0'">;
def err_drv_invalid_remap_file : Error<
    "invalid option '%0' not of the form <from-file>;<to-file>">;
def err_drv_invalid_gcc_output_type : Error<
    "invalid output type '%0' for use with gcc tool">;
def err_drv_cc_print_options_failure : Error<
    "unable to open CC_PRINT_OPTIONS file: %0">;
def err_drv_preamble_format : Error<
    "incorrect format for -preamble-bytes=N,END">;
def err_drv_conflicting_deployment_targets : Error<
  "conflicting deployment targets, both '%0' and '%1' are present in environment">;
def err_drv_invalid_arch_for_deployment_target : Error<
  "invalid architecture '%0' for deployment target '%1'">;

def warn_c_kext : Warning<
  "ignoring -fapple-kext which is valid for c++ and objective-c++ only">;
def warn_drv_unsupported_option_argument : Warning<
  "ignoring unsupported argument '%1' to option '%0'">;
def warn_drv_input_file_unused : Warning<
  "%0: '%1' input unused when '%2' is present">;
def warn_drv_preprocessed_input_file_unused : Warning<
  "%0: previously preprocessed input unused when '%1' is present">;
def warn_drv_unused_argument : Warning<
  "argument unused during compilation: '%0'">;
def warn_drv_pipe_ignored_with_save_temps : Warning<
  "-pipe ignored because -save-temps specified">;
def warn_drv_not_using_clang_cpp : Warning<
  "not using the clang preprocessor due to user override">;
def warn_drv_not_using_clang_cxx : Warning<
  "not using the clang compiler for C++ inputs">;
def warn_drv_not_using_clang_arch : Warning<
  "not using the clang compiler for the '%0' architecture">;
def warn_drv_clang_unsupported : Warning<
  "the clang compiler does not support '%0'">;
def warn_drv_assuming_mfloat_abi_is : Warning<
  "unknown platform, assuming -mfloat-abi=%0">;
def warn_ignoring_ftabstop_value : Warning<
  "ignoring invalid -ftabstop value '%0', using default value %1">;
def warn_drv_conflicting_deployment_targets : Warning<
  "conflicting deployment targets, both MACOSX_DEPLOYMENT_TARGET '%0' and IPHONEOS_DEPLOYMENT_TARGET '%1' are present in environment">;
def warn_drv_treating_input_as_cxx : Warning<
  "treating '%0' input as '%1' when in C++ mode, this behavior is deprecated">,
  InGroup<Deprecated>;
def warn_drv_objc_gc_unsupported : Warning<
  "Objective-C garbage collection is not supported on this platform, ignoring '%0'">;
def warn_drv_pch_not_first_include : Warning<
  "precompiled header '%0' was ignored because '%1' is not first '-include'">;

}
