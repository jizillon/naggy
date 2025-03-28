#ifdef PARSESTART
__PARSESTART = DIAG_START_PARSE,
#undef PARSESTART
#endif

DIAG(auto_storage_class, CLASS_EXTENSION, diag::MAP_WARNING, "'auto' storage class specifier is redundant and will be removed in future releases", 0, true, false, 1, "", "")
DIAG(err_address_of_label_outside_fn, CLASS_ERROR, diag::MAP_ERROR, "use of address-of-label extension outside of a function body", 0, true, false, 1, "", "")
DIAG(err_alias_declaration_not_identifier, CLASS_ERROR, diag::MAP_ERROR, "name defined in alias declaration must be an identifier", 0, true, false, 1, "", "")
DIAG(err_anon_type_definition, CLASS_ERROR, diag::MAP_ERROR, "declaration of anonymous %0 must be a definition", 0, true, false, 1, "", "")
DIAG(err_argument_required_after_attribute, CLASS_ERROR, diag::MAP_ERROR, "argument required after attribute", 0, true, false, 1, "", "")
DIAG(err_at_defs_cxx, CLASS_ERROR, diag::MAP_ERROR, "@defs is not supported in Objective-C++", 0, true, false, 1, "", "")
DIAG(err_at_in_class, CLASS_ERROR, diag::MAP_ERROR, "unexpected '@' in member specification", 0, true, false, 1, "", "")
DIAG(err_attributes_not_allowed, CLASS_ERROR, diag::MAP_ERROR, "an attribute list cannot appear here", 0, true, false, 1, "", "")
DIAG(err_availability_expected_change, CLASS_ERROR, diag::MAP_ERROR, "expected 'introduced', 'deprecated', or 'obsoleted'", 0, true, false, 1, "", "")
DIAG(err_availability_expected_platform, CLASS_ERROR, diag::MAP_ERROR, "expected a platform name, e.g., 'macosx'", 0, true, false, 1, "", "")
DIAG(err_availability_redundant, CLASS_ERROR, diag::MAP_ERROR, "redundant %0 availability change; only the last specified change will be used", 0, true, false, 1, "", "")
DIAG(err_availability_unknown_change, CLASS_ERROR, diag::MAP_ERROR, "%0 is not an availability stage; use 'introduced', 'deprecated', or 'obsoleted'", 0, true, false, 1, "", "")
DIAG(err_bool_redeclaration, CLASS_ERROR, diag::MAP_ERROR, "redeclaration of C++ built-in type 'bool'", 0, true, false, 1, "", "")
DIAG(err_ctor_init_missing_comma, CLASS_ERROR, diag::MAP_ERROR, "missing ',' between base or member initializers", 0, true, false, 1, "", "")
DIAG(err_cxx0x_attribute_forbids_arguments, CLASS_ERROR, diag::MAP_ERROR, "C++0x attribute '%0' cannot have an argument list", 0, true, false, 1, "", "")
DIAG(err_cxx0x_attribute_requires_arguments, CLASS_ERROR, diag::MAP_ERROR, "C++0x attribute '%0' must have an argument list", 0, true, false, 1, "", "")
DIAG(err_declaration_does_not_declare_param, CLASS_ERROR, diag::MAP_ERROR, "declaration does not declare a parameter", 0, true, false, 1, "", "")
DIAG(err_default_arg_unparsed, CLASS_ERROR, diag::MAP_ERROR, "unexpected end of default argument expression", 0, true, false, 1, "", "")
DIAG(err_default_template_template_parameter_not_template, CLASS_ERROR, diag::MAP_ERROR, "default template argument for a template template parameter must be a class template", 0, true, false, 1, "", "")
DIAG(err_destructor_template_id, CLASS_ERROR, diag::MAP_ERROR, "destructor name %0 does not refer to a template", 0, true, false, 1, "", "")
DIAG(err_destructor_tilde_identifier, CLASS_ERROR, diag::MAP_ERROR, "expected a class name after '~' to name a destructor", 0, true, false, 1, "", "")
DIAG(err_dup_virtual, CLASS_ERROR, diag::MAP_ERROR, "duplicate 'virtual' in base specifier", 0, true, false, 1, "", "")
DIAG(err_duplicate_class_virt_specifier, CLASS_ERROR, diag::MAP_ERROR, "class already marked '%0'", 0, true, false, 1, "", "")
DIAG(err_duplicate_default_assoc, CLASS_ERROR, diag::MAP_ERROR, "duplicate default generic association", 0, true, false, 1, "", "")
DIAG(err_duplicate_virt_specifier, CLASS_ERROR, diag::MAP_ERROR, "class member already marked '%0'", 0, true, false, 1, "", "")
DIAG(err_dynamic_and_noexcept_specification, CLASS_ERROR, diag::MAP_ERROR, "cannot have both throw() and noexcept() clause on the same function", 0, true, false, 1, "", "")
DIAG(err_enum_template, CLASS_ERROR, diag::MAP_ERROR, "enumeration cannot be a template", 0, true, false, 1, "", "")
DIAG(err_enumerator_list_missing_comma, CLASS_ERROR, diag::MAP_ERROR, "missing ',' between enumerators", 0, true, false, 1, "", "")
DIAG(err_enumerator_unnamed_no_def, CLASS_ERROR, diag::MAP_ERROR, "unnamed enumeration must be a definition", 0, true, false, 1, "", "")
DIAG(err_expected_asm_operand, CLASS_ERROR, diag::MAP_ERROR, "expected string literal or '[' for asm operand", 0, true, false, 1, "", "")
DIAG(err_expected_case_before_expression, CLASS_ERROR, diag::MAP_ERROR, "expected 'case' keyword before expression", 0, true, false, 1, "", "")
DIAG(err_expected_catch, CLASS_ERROR, diag::MAP_ERROR, "expected catch", 0, true, false, 1, "", "")
DIAG(err_expected_class_before, CLASS_ERROR, diag::MAP_ERROR, "expected 'class' before '%0'", 0, true, false, 1, "", "")
DIAG(err_expected_class_name, CLASS_ERROR, diag::MAP_ERROR, "expected class name", 0, true, false, 1, "", "")
DIAG(err_expected_colon_after, CLASS_ERROR, diag::MAP_ERROR, "expected ':' after %0", 0, true, false, 1, "", "")
DIAG(err_expected_comma, CLASS_ERROR, diag::MAP_ERROR, "expected ','", 0, true, false, 1, "", "")
DIAG(err_expected_comma_greater, CLASS_ERROR, diag::MAP_ERROR, "expected ',' or '>' in template-parameter-list", 0, true, false, 1, "", "")
DIAG(err_expected_equal_after, CLASS_ERROR, diag::MAP_ERROR, "expected '=' after %0", 0, true, false, 1, "", "")
DIAG(err_expected_equal_after_declarator, CLASS_ERROR, diag::MAP_ERROR, "expected '=' after declarator", 0, true, false, 1, "", "")
DIAG(err_expected_equal_designator, CLASS_ERROR, diag::MAP_ERROR, "expected '=' or another designator", 0, true, false, 1, "", "")
DIAG(err_expected_expression, CLASS_ERROR, diag::MAP_ERROR, "expected expression", 0, true, false, 1, "", "")
DIAG(err_expected_external_declaration, CLASS_ERROR, diag::MAP_ERROR, "expected external declaration", 0, true, false, 1, "", "")
DIAG(err_expected_field_designator, CLASS_ERROR, diag::MAP_ERROR, "expected a field designator, such as '.field = 4'", 0, true, false, 1, "", "")
DIAG(err_expected_fn_body, CLASS_ERROR, diag::MAP_ERROR, "expected function body after function declarator", 0, true, false, 1, "", "")
DIAG(err_expected_ggg, CLASS_ERROR, diag::MAP_ERROR, "expected '>>>'", 0, true, false, 1, "", "")
DIAG(err_expected_greater, CLASS_ERROR, diag::MAP_ERROR, "expected '>'", 0, true, false, 1, "", "")
DIAG(err_expected_ident, CLASS_ERROR, diag::MAP_ERROR, "expected identifier", 0, true, false, 1, "", "")
DIAG(err_expected_ident_in_using, CLASS_ERROR, diag::MAP_ERROR, "expected an identifier in using directive", 0, true, false, 1, "", "")
DIAG(err_expected_ident_lbrace, CLASS_ERROR, diag::MAP_ERROR, "expected identifier or '{'", 0, true, false, 1, "", "")
DIAG(err_expected_ident_lparen, CLASS_ERROR, diag::MAP_ERROR, "expected identifier or '('", 0, true, false, 1, "", "")
DIAG(err_expected_implementation, CLASS_ERROR, diag::MAP_ERROR, "@end must appear in an @implementation context", 0, true, false, 1, "", "")
DIAG(err_expected_lbrace, CLASS_ERROR, diag::MAP_ERROR, "expected '{'", 0, true, false, 1, "", "")
DIAG(err_expected_lbrace_after_base_specifiers, CLASS_ERROR, diag::MAP_ERROR, "expected '{' after base class list", 0, true, false, 1, "", "")
DIAG(err_expected_lbrace_in_compound_literal, CLASS_ERROR, diag::MAP_ERROR, "expected '{' in compound literal", 0, true, false, 1, "", "")
DIAG(err_expected_lbrace_or_comma, CLASS_ERROR, diag::MAP_ERROR, "expected '{' or ','", 0, true, false, 1, "", "")
DIAG(err_expected_less_after, CLASS_ERROR, diag::MAP_ERROR, "expected '<' after '%0'", 0, true, false, 1, "", "")
DIAG(err_expected_lparen, CLASS_ERROR, diag::MAP_ERROR, "expected '('", 0, true, false, 1, "", "")
DIAG(err_expected_lparen_after, CLASS_ERROR, diag::MAP_ERROR, "expected '(' after '%0'", 0, true, false, 1, "", "")
DIAG(err_expected_lparen_after_id, CLASS_ERROR, diag::MAP_ERROR, "expected '(' after %0", 0, true, false, 1, "", "")
DIAG(err_expected_lparen_after_type, CLASS_ERROR, diag::MAP_ERROR, "expected '(' for function-style cast or type construction", 0, true, false, 1, "", "")
DIAG(err_expected_lsquare, CLASS_ERROR, diag::MAP_ERROR, "expected '['", 0, true, false, 1, "", "")
DIAG(err_expected_member_name_or_semi, CLASS_ERROR, diag::MAP_ERROR, "expected member name or ';' after declaration specifiers", 0, true, false, 1, "", "")
DIAG(err_expected_member_or_base_name, CLASS_ERROR, diag::MAP_ERROR, "expected class member or base class name", 0, true, false, 1, "", "")
DIAG(err_expected_method_body, CLASS_ERROR, diag::MAP_ERROR, "expected method body", 0, true, false, 1, "", "")
DIAG(err_expected_minus_or_plus, CLASS_ERROR, diag::MAP_ERROR, "method type specifier must start with '-' or '+'", 0, true, false, 1, "", "")
DIAG(err_expected_parameter_pack, CLASS_ERROR, diag::MAP_ERROR, "expected the name of a parameter pack", 0, true, false, 1, "", "")
DIAG(err_expected_property_name, CLASS_ERROR, diag::MAP_ERROR, "expected property name", 0, true, false, 1, "", "")
DIAG(err_expected_qualified_after_typename, CLASS_ERROR, diag::MAP_ERROR, "expected a qualified name after 'typename'", 0, true, false, 1, "", "")
DIAG(err_expected_rbrace, CLASS_ERROR, diag::MAP_ERROR, "expected '}'", 0, true, false, 1, "", "")
DIAG(err_expected_rparen, CLASS_ERROR, diag::MAP_ERROR, "expected ')'", 0, true, false, 1, "", "")
DIAG(err_expected_rsquare, CLASS_ERROR, diag::MAP_ERROR, "expected ']'", 0, true, false, 1, "", "")
DIAG(err_expected_selector_for_method, CLASS_ERROR, diag::MAP_ERROR, "expected selector for Objective-C method", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after %0", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_attribute_list, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after attribute list", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_expr, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after expression", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_method_proto, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after method prototype", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_namespace_name, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after namespace name", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_static_assert, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after static_assert", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_stmt, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after %0 statement", 0, true, false, 1, "", "")
DIAG(err_expected_semi_after_tagdecl, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after %0", 0, true, false, 1, "", "")
DIAG(err_expected_semi_decl_list, CLASS_ERROR, diag::MAP_ERROR, "expected ';' at end of declaration list", 0, true, false, 1, "", "")
DIAG(err_expected_semi_declaration, CLASS_ERROR, diag::MAP_ERROR, "expected ';' at end of declaration", 0, true, false, 1, "", "")
DIAG(err_expected_semi_for, CLASS_ERROR, diag::MAP_ERROR, "expected ';' in 'for' statement specifier", 0, true, false, 1, "", "")
DIAG(err_expected_statement, CLASS_ERROR, diag::MAP_ERROR, "expected statement", 0, true, false, 1, "", "")
DIAG(err_expected_string_literal, CLASS_ERROR, diag::MAP_ERROR, "expected string literal", 0, true, false, 1, "", "")
DIAG(err_expected_template, CLASS_ERROR, diag::MAP_ERROR, "expected template", 0, true, false, 1, "", "")
DIAG(err_expected_type, CLASS_ERROR, diag::MAP_ERROR, "expected a type", 0, true, false, 1, "", "")
DIAG(err_expected_type_id_after, CLASS_ERROR, diag::MAP_ERROR, "expected type-id after '%0'", 0, true, false, 1, "", "")
DIAG(err_expected_type_name_after_typename, CLASS_ERROR, diag::MAP_ERROR, "expected an identifier or template-id after '::'", 0, true, false, 1, "", "")
DIAG(err_expected_unqualified_id, CLASS_ERROR, diag::MAP_ERROR, "expected %select{identifier|unqualified-id}0", 0, true, false, 1, "", "")
DIAG(err_expected_version, CLASS_ERROR, diag::MAP_ERROR, "expected a version of the form 'major[.minor[.subminor]]'", 0, true, false, 1, "", "")
DIAG(err_expected_while, CLASS_ERROR, diag::MAP_ERROR, "expected 'while' in do/while loop", 0, true, false, 1, "", "")
DIAG(err_explicit_instantiation_with_definition, CLASS_ERROR, diag::MAP_ERROR, "explicit template instantiation cannot have a definition; if this definition is meant to be an explicit specialization, add '<>' after the 'template' keyword", 0, true, false, 1, "", "")
DIAG(err_explicit_spec_non_template, CLASS_ERROR, diag::MAP_ERROR, "explicit %select{specialization|instantiation}0 of non-template %select{class|struct|union}1 %2", 0, true, false, 1, "", "")
DIAG(err_extraneous_token_before_semi, CLASS_ERROR, diag::MAP_ERROR, "extraneous '%0' before ';'", 0, true, false, 1, "", "")
DIAG(err_friend_decl_defines_class, CLASS_ERROR, diag::MAP_ERROR, "cannot define a type in a friend declaration", 0, true, false, 1, "", "")
DIAG(err_friend_invalid_in_context, CLASS_ERROR, diag::MAP_ERROR, "'friend' used outside of class", 0, true, false, 1, "", "")
DIAG(err_friend_storage_spec, CLASS_ERROR, diag::MAP_ERROR, "'%0' is invalid in friend declarations", 0, true, false, 1, "", "")
DIAG(err_func_def_no_params, CLASS_ERROR, diag::MAP_ERROR, "function definition does not declare parameters", 0, true, false, 1, "", "")
DIAG(err_function_declared_typedef, CLASS_ERROR, diag::MAP_ERROR, "function definition declared 'typedef'", 0, true, false, 1, "", "")
DIAG(err_iboutletcollection_builtintype, CLASS_ERROR, diag::MAP_ERROR, "type argument of iboutletcollection attribute cannot be a builtin type", 0, true, false, 1, "", "")
DIAG(err_id_after_template_in_nested_name_spec, CLASS_ERROR, diag::MAP_ERROR, "expected template name after 'template' keyword in nested name specifier", 0, true, false, 1, "", "")
DIAG(err_id_after_template_in_typename_spec, CLASS_ERROR, diag::MAP_ERROR, "expected template name after 'template' keyword in typename specifier", 0, true, false, 1, "", "")
DIAG(err_illegal_decl_reference_to_reference, CLASS_ERROR, diag::MAP_ERROR, "%0 declared as a reference to a reference", 0, true, false, 1, "", "")
DIAG(err_illegal_super_cast, CLASS_ERROR, diag::MAP_ERROR, "cannot cast 'super' (it isn't an expression)", 0, true, false, 1, "", "")
DIAG(err_inline_namespace_alias, CLASS_ERROR, diag::MAP_ERROR, "namespace alias cannot be inline", 0, true, false, 1, "", "")
DIAG(err_invalid_complex_spec, CLASS_ERROR, diag::MAP_ERROR, "'_Complex %0' is invalid", 0, true, false, 1, "", "")
DIAG(err_invalid_decl_spec_combination, CLASS_ERROR, diag::MAP_ERROR, "cannot combine with previous '%0' declaration specifier", 0, true, false, 1, "", "")
DIAG(err_invalid_equalequal_after_declarator, CLASS_ERROR, diag::MAP_ERROR, "invalid '==' at end of declaration; did you mean '='?", 0, true, false, 1, "", "")
DIAG(err_invalid_long_spec, CLASS_ERROR, diag::MAP_ERROR, "'long %0' is invalid", 0, true, false, 1, "", "")
DIAG(err_invalid_longlong_spec, CLASS_ERROR, diag::MAP_ERROR, "'long long %0' is invalid", 0, true, false, 1, "", "")
DIAG(err_invalid_pixel_decl_spec_combination, CLASS_ERROR, diag::MAP_ERROR, "'__pixel' must be preceded by '__vector'.  '%0' declaration specifier not allowed here", 0, true, false, 1, "", "")
DIAG(err_invalid_reference_qualifier_application, CLASS_ERROR, diag::MAP_ERROR, "'%0' qualifier may not be applied to a reference", 0, true, false, 1, "", "")
DIAG(err_invalid_short_spec, CLASS_ERROR, diag::MAP_ERROR, "'short %0' is invalid", 0, true, false, 1, "", "")
DIAG(err_invalid_sign_spec, CLASS_ERROR, diag::MAP_ERROR, "'%0' cannot be signed or unsigned", 0, true, false, 1, "", "")
DIAG(err_invalid_token_after_toplevel_declarator, CLASS_ERROR, diag::MAP_ERROR, "expected ';' after top level declarator", 0, true, false, 1, "", "")
DIAG(err_invalid_vector_bool_decl_spec, CLASS_ERROR, diag::MAP_ERROR, "cannot use '%0' with '__vector bool'", 0, true, false, 1, "", "")
DIAG(err_invalid_vector_decl_spec, CLASS_ERROR, diag::MAP_ERROR, "cannot use '%0' with '__vector'", 0, true, false, 1, "", "")
DIAG(err_invalid_vector_decl_spec_combination, CLASS_ERROR, diag::MAP_ERROR, "cannot combine with previous '%0' declaration specifier. '__vector' must be first", 0, true, false, 1, "", "")
DIAG(err_label_end_of_compound_statement, CLASS_ERROR, diag::MAP_ERROR, "label at end of compound statement: expected statement", 0, true, false, 1, "", "")
DIAG(err_less_after_template_name_in_nested_name_spec, CLASS_ERROR, diag::MAP_ERROR, "expected '<' after 'template %0' in nested name specifier", 0, true, false, 1, "", "")
DIAG(err_missing_catch_finally, CLASS_ERROR, diag::MAP_ERROR, "@try statement without a @catch and @finally clause", 0, true, false, 1, "", "")
DIAG(err_missing_class_definition, CLASS_ERROR, diag::MAP_ERROR, "cannot find definition of 'Class'", 0, true, false, 1, "", "")
DIAG(err_missing_comma_before_ellipsis, CLASS_ERROR, diag::MAP_ERROR, "C requires a comma prior to the ellipsis in a variadic function type", 0, true, false, 1, "", "")
DIAG(err_missing_dependent_template_keyword, CLASS_ERROR, diag::MAP_ERROR, "use 'template' keyword to treat '%0' as a dependent template name", 0, true, false, 1, "", "")
DIAG(err_missing_id_definition, CLASS_ERROR, diag::MAP_ERROR, "cannot find definition of 'id'", 0, true, false, 1, "", "")
DIAG(err_missing_param, CLASS_ERROR, diag::MAP_ERROR, "expected parameter declarator", 0, true, false, 1, "", "")
DIAG(err_missing_proto_definition, CLASS_ERROR, diag::MAP_ERROR, "cannot find definition of 'Protocol'", 0, true, false, 1, "", "")
DIAG(err_missing_sel_definition, CLASS_ERROR, diag::MAP_ERROR, "cannot find definition of 'SEL'", 0, true, false, 1, "", "")
DIAG(err_missing_whitespace_digraph, CLASS_ERROR, diag::MAP_ERROR, "found '<::' after a %select{template name|const_cast|dynamic_cast|reinterpret_cast|static_cast}0 which forms the digraph '<:' (aka '[') and a ':', did you mean '< ::'?", 0, true, false, 1, "", "")
DIAG(err_multiple_template_declarators, CLASS_ERROR, diag::MAP_ERROR, "%select{|a template declaration|an explicit template specialization|an explicit template instantiation}0 can only %select{|declare|declare|instantiate}0 a single entity", 0, true, false, 1, "", "")
DIAG(err_namespace_nonnamespace_scope, CLASS_ERROR, diag::MAP_ERROR, "namespaces can only be defined in global or namespace scope", 0, true, false, 1, "", "")
DIAG(err_no_matching_param, CLASS_ERROR, diag::MAP_ERROR, "parameter named %0 is missing", 0, true, false, 1, "", "")
DIAG(err_not_opencl_storage_class_specifier, CLASS_ERROR, diag::MAP_ERROR, "OpenCL does not support the '%0' storage class specifier", 0, true, false, 1, "", "")
DIAG(err_objc_concat_string, CLASS_ERROR, diag::MAP_ERROR, "unexpected token after Objective-C string", 0, true, false, 1, "", "")
DIAG(err_objc_directive_only_in_protocol, CLASS_ERROR, diag::MAP_ERROR, "directive may only be specified in protocols only", 0, true, false, 1, "", "")
DIAG(err_objc_expected_equal_for_getter, CLASS_ERROR, diag::MAP_ERROR, "expected '=' for Objective-C getter", 0, true, false, 1, "", "")
DIAG(err_objc_expected_equal_for_setter, CLASS_ERROR, diag::MAP_ERROR, "expected '=' for Objective-C setter", 0, true, false, 1, "", "")
DIAG(err_objc_expected_property_attr, CLASS_ERROR, diag::MAP_ERROR, "unknown property attribute %0", 0, true, false, 1, "", "")
DIAG(err_objc_expected_selector_for_getter_setter, CLASS_ERROR, diag::MAP_ERROR, "expected selector for Objective-C %select{setter|getter}0", 0, true, false, 1, "", "")
DIAG(err_objc_illegal_interface_qual, CLASS_ERROR, diag::MAP_ERROR, "illegal interface qualifier", 0, true, false, 1, "", "")
DIAG(err_objc_illegal_visibility_spec, CLASS_ERROR, diag::MAP_ERROR, "illegal visibility specification", 0, true, false, 1, "", "")
DIAG(err_objc_missing_end, CLASS_ERROR, diag::MAP_ERROR, "missing @end", 0, true, false, 1, "", "")
DIAG(err_objc_no_attributes_on_category, CLASS_ERROR, diag::MAP_ERROR, "attributes may not be specified on a category", 0, true, false, 1, "", "")
DIAG(err_objc_properties_require_objc2, CLASS_ERROR, diag::MAP_ERROR, "properties are an Objective-C 2 feature", 0, true, false, 1, "", "")
DIAG(err_objc_property_bitfield, CLASS_ERROR, diag::MAP_ERROR, "property name cannot be a bitfield", 0, true, false, 1, "", "")
DIAG(err_objc_property_requires_field_name, CLASS_ERROR, diag::MAP_ERROR, "property requires fields to be named", 0, true, false, 1, "", "")
DIAG(err_objc_unexpected_attr, CLASS_ERROR, diag::MAP_ERROR, "prefix attribute must be followed by an interface or protocol", 0, true, false, 1, "", "")
DIAG(err_objc_unknown_at, CLASS_ERROR, diag::MAP_ERROR, "expected an Objective-C directive after '@'", 0, true, false, 1, "", "")
DIAG(err_operator_string_not_empty, CLASS_ERROR, diag::MAP_ERROR, "string literal after 'operator' must be '\"\"'", 0, true, false, 1, "", "")
DIAG(err_out_of_line_constructor_template_id, CLASS_ERROR, diag::MAP_ERROR, "out-of-line constructor for %0 cannot have template arguments", 0, true, false, 1, "", "")
DIAG(err_out_of_line_template_id_names_constructor, CLASS_ERROR, diag::MAP_ERROR, "qualified reference to %0 is a constructor name rather than a template name wherever a constructor can be declared", 0, true, false, 1, "", "")
DIAG(err_out_of_line_type_names_constructor, CLASS_ERROR, diag::MAP_ERROR, "qualified reference to %0 is a constructor name rather than a type wherever a constructor can be declared", 0, true, false, 1, "", "")
DIAG(err_paren_sizeof_parameter_pack, CLASS_ERROR, diag::MAP_ERROR, "missing parentheses around the size of parameter pack %0", 0, true, false, 1, "", "")
DIAG(err_parse_error, CLASS_ERROR, diag::MAP_ERROR, "parse error", 0, true, false, 1, "", "")
DIAG(err_scoped_enum_missing_identifier, CLASS_ERROR, diag::MAP_ERROR, "scoped enumeration requires a name", 0, true, false, 1, "", "")
DIAG(err_seh___except_block, CLASS_ERROR, diag::MAP_ERROR, "%0 only allowed in __except block", 0, true, false, 1, "", "")
DIAG(err_seh___except_filter, CLASS_ERROR, diag::MAP_ERROR, "%0 only allowed in __except filter expression", 0, true, false, 1, "", "")
DIAG(err_seh___finally_block, CLASS_ERROR, diag::MAP_ERROR, "%0 only allowed in __finally block", 0, true, false, 1, "", "")
DIAG(err_seh_expected_handler, CLASS_ERROR, diag::MAP_ERROR, "expected '__except' or '__finally' block", 0, true, false, 1, "", "")
DIAG(err_sizeof_parameter_pack, CLASS_ERROR, diag::MAP_ERROR, "expected parenthesized parameter pack name in 'sizeof...' expression", 0, true, false, 1, "", "")
DIAG(err_synthesized_property_name, CLASS_ERROR, diag::MAP_ERROR, "expected a property name in @synthesize", 0, true, false, 1, "", "")
DIAG(err_template_spec_syntax_non_template, CLASS_ERROR, diag::MAP_ERROR, "identifier followed by '<' indicates a class template specialization but %0 %select{does not refer to a template|refers to a function template|<unused>|refers to a template template parameter}1", 0, true, false, 1, "", "")
DIAG(err_templated_using_declaration, CLASS_ERROR, diag::MAP_ERROR, "cannot template a using declaration", 0, true, false, 1, "", "")
DIAG(err_templated_using_directive, CLASS_ERROR, diag::MAP_ERROR, "cannot template a using directive", 0, true, false, 1, "", "")
DIAG(err_two_right_angle_brackets_need_space, CLASS_ERROR, diag::MAP_ERROR, "a space is required between consecutive right angle brackets (use '> >')", 0, true, false, 1, "", "")
DIAG(err_typename_invalid_functionspec, CLASS_ERROR, diag::MAP_ERROR, "type name does not allow function specifier to be specified", 0, true, false, 1, "", "")
DIAG(err_typename_invalid_storageclass, CLASS_ERROR, diag::MAP_ERROR, "type name does not allow storage class to be specified", 0, true, false, 1, "", "")
DIAG(err_typename_refers_to_non_type_template, CLASS_ERROR, diag::MAP_ERROR, "typename specifier refers to a non-template", 0, true, false, 1, "", "")
DIAG(err_typename_requires_specqual, CLASS_ERROR, diag::MAP_ERROR, "type name requires a specifier or qualifier", 0, true, false, 1, "", "")
DIAG(err_unexected_colon_in_nested_name_spec, CLASS_ERROR, diag::MAP_ERROR, "unexpected ':' in nested name specifier", 0, true, false, 1, "", "")
DIAG(err_unexpected_at, CLASS_ERROR, diag::MAP_ERROR, "unexpected '@' in program", 0, true, false, 1, "", "")
DIAG(err_unexpected_namespace_attributes_alias, CLASS_ERROR, diag::MAP_ERROR, "attributes can not be specified on namespace alias", 0, true, false, 1, "", "")
DIAG(err_unexpected_typedef_ident, CLASS_ERROR, diag::MAP_ERROR, "unexpected type name %0: expected identifier", 0, true, false, 1, "", "")
DIAG(err_unknown_template_name, CLASS_ERROR, diag::MAP_ERROR, "unknown template name %0", 0, true, false, 1, "", "")
DIAG(err_unknown_typename, CLASS_ERROR, diag::MAP_ERROR, "unknown type name %0", 0, true, false, 1, "", "")
DIAG(err_unspecified_vla_size_with_static, CLASS_ERROR, diag::MAP_ERROR, "'static' may not be used with an unspecified variable length array size", 0, true, false, 1, "", "")
DIAG(err_use_of_tag_name_without_tag, CLASS_ERROR, diag::MAP_ERROR, "must use '%1' tag to refer to type %0%select{| in this scope}2", 0, true, false, 1, "", "")
DIAG(err_using_namespace_in_class, CLASS_ERROR, diag::MAP_ERROR, "'using namespace' is not allowed in classes", 0, true, false, 1, "", "")
DIAG(err_zero_version, CLASS_ERROR, diag::MAP_ERROR, "version number must have non-zero major, minor, or sub-minor version", 0, true, false, 1, "", "")
DIAG(error_empty_enum, CLASS_ERROR, diag::MAP_ERROR, "use of empty enum", 0, true, false, 1, "", "")
DIAG(error_property_ivar_decl, CLASS_ERROR, diag::MAP_ERROR, "property synthesize requires specification of an ivar", 0, true, false, 1, "", "")
DIAG(ext_alias_declaration, CLASS_EXTENSION, diag::MAP_WARNING, "alias declarations accepted as a C++0x extension", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_c1x_generic_selection, CLASS_EXTENSION, diag::MAP_IGNORE, "generic selections are a C1X-specific feature", 0, true, false, 1, "", "")
DIAG(ext_c1x_static_assert, CLASS_EXTENSION, diag::MAP_IGNORE, "_Static_assert is a C1X-specific feature", 0, true, false, 1, "", "")
DIAG(ext_c99_compound_literal, CLASS_EXTENSION, diag::MAP_IGNORE, "compound literals are a C99-specific feature", 0, true, false, 1, "", "")
DIAG(ext_c99_variable_decl_in_for_loop, CLASS_EXTENSION, diag::MAP_IGNORE, "variable declaration in for loop is a C99-specific feature", 0, true, false, 1, "", "")
DIAG(ext_duplicate_declspec, CLASS_EXTENSION, diag::MAP_IGNORE, "duplicate '%0' declaration specifier", 0, true, false, 1, "", "")
DIAG(ext_ellipsis_exception_spec, CLASS_EXTENSION, diag::MAP_IGNORE, "exception specification of '...' is a Microsoft extension", 0, true, false, 1, "", "")
DIAG(ext_empty_source_file, CLASS_EXTENSION, diag::MAP_IGNORE, "ISO C forbids an empty source file", 0, true, false, 1, "", "")
DIAG(ext_empty_struct_union, CLASS_EXTENSION, diag::MAP_IGNORE, "empty %select{struct|union}0 (accepted as an extension) has size 0 in C, size 1 in C++", "c++-compat", true, false, 1, "", "")
DIAG(ext_enumerator_list_comma, CLASS_EXTENSION, diag::MAP_IGNORE, "commas at the end of enumerator lists are a %select{C99|C++0x}0-specific feature", 0, true, false, 1, "", "")
DIAG(ext_expected_semi_decl_list, CLASS_EXTENSION, diag::MAP_WARNING, "expected ';' at end of declaration list", 0, true, false, 1, "", "")
DIAG(ext_extra_ivar_semi, CLASS_EXTENSION, diag::MAP_IGNORE, "extra ';' inside instance variable list", 0, true, false, 1, "", "")
DIAG(ext_extra_struct_semi, CLASS_EXTENSION, diag::MAP_IGNORE, "extra ';' inside a %0", 0, true, false, 1, "", "")
DIAG(ext_generalized_initializer_lists, CLASS_EXTENSION, diag::MAP_WARNING, "generalized initializer lists are a C++0x extension unsupported in Clang", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_gnu_address_of_label, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU address-of-label extension", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_array_range, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU array range extension", "gnu-designator", true, false, 1, "", "")
DIAG(ext_gnu_case_range, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU case range extension", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_conditional_expr, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU ?: expression extension, eliding middle term", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_empty_initializer, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU empty initializer extension", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_indirect_goto, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU indirect-goto extension", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_local_label, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU locally declared label extension", "gnu", true, false, 1, "", "")
DIAG(ext_gnu_missing_equal_designator, CLASS_EXTENSION, diag::MAP_WARNING, "use of GNU 'missing =' extension in designator", "gnu-designator", true, false, 1, "", "")
DIAG(ext_gnu_old_style_field_designator, CLASS_EXTENSION, diag::MAP_WARNING, "use of GNU old-style field designator extension", "gnu-designator", true, false, 1, "", "")
DIAG(ext_gnu_statement_expr, CLASS_EXTENSION, diag::MAP_IGNORE, "use of GNU statement expression extension", "gnu", true, false, 1, "", "")
DIAG(ext_ident_list_in_param, CLASS_EXTENSION, diag::MAP_IGNORE, "type-less parameter names in function declaration", 0, true, false, 1, "", "")
DIAG(ext_inline_namespace, CLASS_EXTENSION, diag::MAP_WARNING, "inline namespaces are a C++0x feature", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_integer_complex, CLASS_EXTENSION, diag::MAP_IGNORE, "complex integer types are an extension", 0, true, false, 1, "", "")
DIAG(ext_ms_enum_fixed_underlying_type, CLASS_EXTENSION, diag::MAP_IGNORE, "enumeration types with a fixed underlying type are a Microsoft extension", "microsoft", true, false, 1, "", "")
DIAG(ext_override_control_keyword, CLASS_EXTENSION, diag::MAP_IGNORE, "'%0' keyword accepted as a C++0x extension", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_plain_complex, CLASS_EXTENSION, diag::MAP_WARNING, "plain '_Complex' requires a type specifier; assuming '_Complex double'", 0, true, false, 1, "", "")
DIAG(ext_ref_qualifier, CLASS_EXTENSION, diag::MAP_WARNING, "reference qualifiers on functions are a C++0x extension", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_rvalue_reference, CLASS_EXTENSION, diag::MAP_WARNING, "rvalue references are a C++0x extension", "c++0x-extensions", true, false, 1, "", "")
DIAG(ext_thread_before, CLASS_EXTENSION, diag::MAP_IGNORE, "'__thread' before 'static'", 0, true, false, 1, "", "")
DIAG(ext_top_level_semi, CLASS_EXTENSION, diag::MAP_IGNORE, "extra ';' outside of a function", 0, true, false, 1, "", "")
DIAG(note_previous_default_assoc, CLASS_NOTE, diag::MAP_FATAL, "previous default generic association is here", 0, true, false, 1, "", "")
DIAG(w_asm_qualifier_ignored, CLASS_WARNING, diag::MAP_WARNING, "ignored %0 qualifier on asm", 0, true, false, 4, "", "")
DIAG(warn_availability_and_unavailable, CLASS_WARNING, diag::MAP_WARNING, "'unavailable' availability overrides all other availability information", 0, true, false, 1, "", "")
DIAG(warn_cxx0x_right_shift_in_template_arg, CLASS_WARNING, diag::MAP_WARNING, "use of right-shift operator ('>>') in template argument will require parentheses in C++0x", 0, true, false, 1, "", "")
DIAG(warn_deleted_function_accepted_as_extension, CLASS_EXTENSION, diag::MAP_WARNING, "deleted function definition accepted as a C++0x extension", "c++0x-extensions", true, false, 1, "", "")
DIAG(warn_expected_qualified_after_typename, CLASS_EXTENSION, diag::MAP_WARNING, "expected a qualified name after 'typename'", 0, true, false, 1, "", "")
DIAG(warn_file_asm_volatile, CLASS_WARNING, diag::MAP_WARNING, "meaningless 'volatile' on asm outside function", 0, true, false, 4, "", "")
DIAG(warn_missing_dependent_template_keyword, CLASS_EXTENSION, diag::MAP_WARNING, "use 'template' keyword to treat '%0' as a dependent template name", 0, true, false, 1, "", "")
DIAG(warn_objc_protocol_qualifier_missing_id, CLASS_WARNING, diag::MAP_WARNING, "protocol qualifiers without 'id' is archaic", 0, true, false, 1, "", "")
DIAG(warn_parens_disambiguated_as_function_decl, CLASS_WARNING, diag::MAP_WARNING, "parentheses were disambiguated as a function declarator", 0, true, false, 1, "", "")
DIAG(warn_pragma_align_expected_equal, CLASS_WARNING, diag::MAP_WARNING, "expected '=' following '#pragma %select{align|options align}0' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_align_invalid_option, CLASS_WARNING, diag::MAP_WARNING, "invalid alignment option in '#pragma %select{align|options align}0' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_expected_colon, CLASS_WARNING, diag::MAP_WARNING, "missing ':' after %0 - ignoring", 0, true, false, 1, "", "")
DIAG(warn_pragma_expected_enable_disable, CLASS_WARNING, diag::MAP_WARNING, "expected 'enable' or 'disable' - ignoring", 0, true, false, 1, "", "")
DIAG(warn_pragma_expected_identifier, CLASS_WARNING, diag::MAP_WARNING, "expected identifier in '#pragma %0' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_expected_lparen, CLASS_WARNING, diag::MAP_WARNING, "missing '(' after '#pragma %0' - ignoring", 0, true, false, 1, "", "")
DIAG(warn_pragma_expected_rparen, CLASS_WARNING, diag::MAP_WARNING, "missing ')' after '#pragma %0' - ignoring", 0, true, false, 1, "", "")
DIAG(warn_pragma_extra_tokens_at_eol, CLASS_WARNING, diag::MAP_WARNING, "extra tokens at end of '#pragma %0' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_ms_struct, CLASS_WARNING, diag::MAP_WARNING, "incorrect use of '#pragma ms_struct on|off' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_options_expected_align, CLASS_WARNING, diag::MAP_WARNING, "expected 'align' following '#pragma options' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_pack_invalid_action, CLASS_WARNING, diag::MAP_WARNING, "unknown action for '#pragma pack' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_pack_invalid_constant, CLASS_WARNING, diag::MAP_WARNING, "invalid constant for '#pragma pack', expected %0 - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_pack_malformed, CLASS_WARNING, diag::MAP_WARNING, "expected integer or identifier in '#pragma pack' - ignored", 0, true, false, 1, "", "")
DIAG(warn_pragma_unknown_extension, CLASS_WARNING, diag::MAP_WARNING, "unknown OpenCL extension %0 - ignoring", 0, true, false, 1, "", "")
DIAG(warn_pragma_unused_expected_punc, CLASS_WARNING, diag::MAP_WARNING, "expected ')' or ',' in '#pragma unused'", 0, true, false, 1, "", "")
DIAG(warn_pragma_unused_expected_var, CLASS_WARNING, diag::MAP_WARNING, "expected '#pragma unused' argument to be a variable name", 0, true, false, 1, "", "")
DIAG(warn_semicolon_before_method_body, CLASS_WARNING, diag::MAP_IGNORE, "semicolon before method body is ignored", "semicolon-before-method-body", true, false, 1, "", "")
DIAG(warn_static_inline_explicit_inst_ignored, CLASS_WARNING, diag::MAP_WARNING, "ignoring '%select{static|inline}0' keyword on explicit template instantiation", 0, true, false, 1, "", "")
DIAG(warn_vector_long_decl_spec_combination, CLASS_WARNING, diag::MAP_WARNING, "Use of 'long' with '__vector' is deprecated", "deprecated", true, false, 6, "", "")
