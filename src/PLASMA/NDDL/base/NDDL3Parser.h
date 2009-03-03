/** \file
 *  This C header file was generated by $ANTLR version 3.1.1
 *
 *     -  From the grammar source file : ../base/antlr/NDDL3.g
 *     -                            On : 2009-03-02 08:44:07
 *     -                for the parser : NDDL3ParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser NDDL3Parser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pNDDL3Parser, which is returned from a call to NDDL3ParserNew().
 *
 * The methods in pNDDL3Parser are  as follows:
 *
 *  - NDDL3Parser_nddl_return      pNDDL3Parser->nddl(pNDDL3Parser)
 *  - NDDL3Parser_nddlStatement_return      pNDDL3Parser->nddlStatement(pNDDL3Parser)
 *  - NDDL3Parser_typeDefinition_return      pNDDL3Parser->typeDefinition(pNDDL3Parser)
 *  - NDDL3Parser_typeWithBaseDomain_return      pNDDL3Parser->typeWithBaseDomain(pNDDL3Parser)
 *  - NDDL3Parser_domain_return      pNDDL3Parser->domain(pNDDL3Parser)
 *  - NDDL3Parser_intervalNumericDomain_return      pNDDL3Parser->intervalNumericDomain(pNDDL3Parser)
 *  - NDDL3Parser_enumeratedNumericDomain_return      pNDDL3Parser->enumeratedNumericDomain(pNDDL3Parser)
 *  - NDDL3Parser_numericSet_return      pNDDL3Parser->numericSet(pNDDL3Parser)
 *  - NDDL3Parser_enumeratedObjectDomain_return      pNDDL3Parser->enumeratedObjectDomain(pNDDL3Parser)
 *  - NDDL3Parser_objectSet_return      pNDDL3Parser->objectSet(pNDDL3Parser)
 *  - NDDL3Parser_enumeratedStringDomain_return      pNDDL3Parser->enumeratedStringDomain(pNDDL3Parser)
 *  - NDDL3Parser_stringSet_return      pNDDL3Parser->stringSet(pNDDL3Parser)
 *  - NDDL3Parser_enumeratedBoolDomain_return      pNDDL3Parser->enumeratedBoolDomain(pNDDL3Parser)
 *  - NDDL3Parser_boolSet_return      pNDDL3Parser->boolSet(pNDDL3Parser)
 *  - NDDL3Parser_variableDeclaration_return      pNDDL3Parser->variableDeclaration(pNDDL3Parser)
 *  - NDDL3Parser_nameWithBaseDomain_return      pNDDL3Parser->nameWithBaseDomain(pNDDL3Parser)
 *  - NDDL3Parser_anyValue_return      pNDDL3Parser->anyValue(pNDDL3Parser)
 *  - NDDL3Parser_allocation_return      pNDDL3Parser->allocation(pNDDL3Parser)
 *  - NDDL3Parser_constructorInvocation_return      pNDDL3Parser->constructorInvocation(pNDDL3Parser)
 *  - NDDL3Parser_qualified_return      pNDDL3Parser->qualified(pNDDL3Parser)
 *  - NDDL3Parser_assignment_return      pNDDL3Parser->assignment(pNDDL3Parser)
 *  - NDDL3Parser_classDeclaration_return      pNDDL3Parser->classDeclaration(pNDDL3Parser)
 *  - NDDL3Parser_classBlock_return      pNDDL3Parser->classBlock(pNDDL3Parser)
 *  - NDDL3Parser_classStatement_return      pNDDL3Parser->classStatement(pNDDL3Parser)
 *  - NDDL3Parser_constructor_return      pNDDL3Parser->constructor(pNDDL3Parser)
 *  - NDDL3Parser_constructorBlock_return      pNDDL3Parser->constructorBlock(pNDDL3Parser)
 *  - NDDL3Parser_constructorStatement_return      pNDDL3Parser->constructorStatement(pNDDL3Parser)
 *  - NDDL3Parser_constructorParameterList_return      pNDDL3Parser->constructorParameterList(pNDDL3Parser)
 *  - NDDL3Parser_constructorParameters_return      pNDDL3Parser->constructorParameters(pNDDL3Parser)
 *  - NDDL3Parser_constructorParameter_return      pNDDL3Parser->constructorParameter(pNDDL3Parser)
 *  - NDDL3Parser_predicate_return      pNDDL3Parser->predicate(pNDDL3Parser)
 *  - NDDL3Parser_predicateBlock_return      pNDDL3Parser->predicateBlock(pNDDL3Parser)
 *  - NDDL3Parser_predicateStatement_return      pNDDL3Parser->predicateStatement(pNDDL3Parser)
 *  - NDDL3Parser_rule_return      pNDDL3Parser->rule(pNDDL3Parser)
 *  - NDDL3Parser_ruleBlock_return      pNDDL3Parser->ruleBlock(pNDDL3Parser)
 *  - NDDL3Parser_ruleStatement_return      pNDDL3Parser->ruleStatement(pNDDL3Parser)
 *  - NDDL3Parser_type_return      pNDDL3Parser->type(pNDDL3Parser)
 *  - NDDL3Parser_relation_return      pNDDL3Parser->relation(pNDDL3Parser)
 *  - NDDL3Parser_problemStmt_return      pNDDL3Parser->problemStmt(pNDDL3Parser)
 *  - NDDL3Parser_predicateArgumentList_return      pNDDL3Parser->predicateArgumentList(pNDDL3Parser)
 *  - NDDL3Parser_predicateArguments_return      pNDDL3Parser->predicateArguments(pNDDL3Parser)
 *  - NDDL3Parser_predicateArgument_return      pNDDL3Parser->predicateArgument(pNDDL3Parser)
 *  - NDDL3Parser_constraintInstantiation_return      pNDDL3Parser->constraintInstantiation(pNDDL3Parser)
 *  - NDDL3Parser_superInvocation_return      pNDDL3Parser->superInvocation(pNDDL3Parser)
 *  - NDDL3Parser_variableArgumentList_return      pNDDL3Parser->variableArgumentList(pNDDL3Parser)
 *  - NDDL3Parser_variableArguments_return      pNDDL3Parser->variableArguments(pNDDL3Parser)
 *  - NDDL3Parser_variableArgument_return      pNDDL3Parser->variableArgument(pNDDL3Parser)
 *  - NDDL3Parser_typeArgumentList_return      pNDDL3Parser->typeArgumentList(pNDDL3Parser)
 *  - NDDL3Parser_typeArguments_return      pNDDL3Parser->typeArguments(pNDDL3Parser)
 *  - NDDL3Parser_typeArgument_return      pNDDL3Parser->typeArgument(pNDDL3Parser)
 *  - NDDL3Parser_flowControl_return      pNDDL3Parser->flowControl(pNDDL3Parser)
 *  - NDDL3Parser_guardExpression_return      pNDDL3Parser->guardExpression(pNDDL3Parser)
 *  - NDDL3Parser_allocationStmt_return      pNDDL3Parser->allocationStmt(pNDDL3Parser)
 *  - NDDL3Parser_temporalRelation_return      pNDDL3Parser->temporalRelation(pNDDL3Parser)
 *  - NDDL3Parser_numericLiteral_return      pNDDL3Parser->numericLiteral(pNDDL3Parser)
 *  - NDDL3Parser_boolLiteral_return      pNDDL3Parser->boolLiteral(pNDDL3Parser)
 *  - NDDL3Parser_methodInvocation_return      pNDDL3Parser->methodInvocation(pNDDL3Parser)
 *  - NDDL3Parser_tokenNameList_return      pNDDL3Parser->tokenNameList(pNDDL3Parser)
 *  - NDDL3Parser_tokenNames_return      pNDDL3Parser->tokenNames(pNDDL3Parser)
 *  - NDDL3Parser_noopstatement_return      pNDDL3Parser->noopstatement(pNDDL3Parser)
 *  - NDDL3Parser_constraintSignature_return      pNDDL3Parser->constraintSignature(pNDDL3Parser)
 *  - NDDL3Parser_signatureBlock_return      pNDDL3Parser->signatureBlock(pNDDL3Parser)
 *  - NDDL3Parser_signatureExpression_return      pNDDL3Parser->signatureExpression(pNDDL3Parser)
 *  - NDDL3Parser_signatureAtom_return      pNDDL3Parser->signatureAtom(pNDDL3Parser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
#ifndef	_NDDL3Parser_H
#define _NDDL3Parser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct NDDL3Parser_Ctx_struct NDDL3Parser, * pNDDL3Parser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#endif
typedef struct NDDL3Parser_nddl_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_nddl_return;

typedef struct NDDL3Parser_nddlStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_nddlStatement_return;

typedef struct NDDL3Parser_typeDefinition_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_typeDefinition_return;

typedef struct NDDL3Parser_typeWithBaseDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_typeWithBaseDomain_return;

typedef struct NDDL3Parser_domain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_domain_return;

typedef struct NDDL3Parser_intervalNumericDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_intervalNumericDomain_return;

typedef struct NDDL3Parser_enumeratedNumericDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_enumeratedNumericDomain_return;

typedef struct NDDL3Parser_numericSet_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_numericSet_return;

typedef struct NDDL3Parser_enumeratedObjectDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_enumeratedObjectDomain_return;

typedef struct NDDL3Parser_objectSet_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_objectSet_return;

typedef struct NDDL3Parser_enumeratedStringDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_enumeratedStringDomain_return;

typedef struct NDDL3Parser_stringSet_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_stringSet_return;

typedef struct NDDL3Parser_enumeratedBoolDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_enumeratedBoolDomain_return;

typedef struct NDDL3Parser_boolSet_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_boolSet_return;

typedef struct NDDL3Parser_variableDeclaration_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_variableDeclaration_return;

typedef struct NDDL3Parser_nameWithBaseDomain_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_nameWithBaseDomain_return;

typedef struct NDDL3Parser_anyValue_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_anyValue_return;

typedef struct NDDL3Parser_allocation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_allocation_return;

typedef struct NDDL3Parser_constructorInvocation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorInvocation_return;

typedef struct NDDL3Parser_qualified_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_qualified_return;

typedef struct NDDL3Parser_assignment_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_assignment_return;

typedef struct NDDL3Parser_classDeclaration_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_classDeclaration_return;

typedef struct NDDL3Parser_classBlock_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_classBlock_return;

typedef struct NDDL3Parser_classStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_classStatement_return;

typedef struct NDDL3Parser_constructor_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructor_return;

typedef struct NDDL3Parser_constructorBlock_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorBlock_return;

typedef struct NDDL3Parser_constructorStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorStatement_return;

typedef struct NDDL3Parser_constructorParameterList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorParameterList_return;

typedef struct NDDL3Parser_constructorParameters_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorParameters_return;

typedef struct NDDL3Parser_constructorParameter_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constructorParameter_return;

typedef struct NDDL3Parser_predicate_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicate_return;

typedef struct NDDL3Parser_predicateBlock_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicateBlock_return;

typedef struct NDDL3Parser_predicateStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicateStatement_return;

typedef struct NDDL3Parser_rule_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_rule_return;

typedef struct NDDL3Parser_ruleBlock_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_ruleBlock_return;

typedef struct NDDL3Parser_ruleStatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_ruleStatement_return;

typedef struct NDDL3Parser_type_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_type_return;

typedef struct NDDL3Parser_relation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_relation_return;

typedef struct NDDL3Parser_problemStmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_problemStmt_return;

typedef struct NDDL3Parser_predicateArgumentList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicateArgumentList_return;

typedef struct NDDL3Parser_predicateArguments_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicateArguments_return;

typedef struct NDDL3Parser_predicateArgument_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_predicateArgument_return;

typedef struct NDDL3Parser_constraintInstantiation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constraintInstantiation_return;

typedef struct NDDL3Parser_superInvocation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_superInvocation_return;

typedef struct NDDL3Parser_variableArgumentList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_variableArgumentList_return;

typedef struct NDDL3Parser_variableArguments_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_variableArguments_return;

typedef struct NDDL3Parser_variableArgument_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_variableArgument_return;

typedef struct NDDL3Parser_typeArgumentList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_typeArgumentList_return;

typedef struct NDDL3Parser_typeArguments_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_typeArguments_return;

typedef struct NDDL3Parser_typeArgument_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_typeArgument_return;

typedef struct NDDL3Parser_flowControl_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_flowControl_return;

typedef struct NDDL3Parser_guardExpression_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_guardExpression_return;

typedef struct NDDL3Parser_allocationStmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_allocationStmt_return;

typedef struct NDDL3Parser_temporalRelation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_temporalRelation_return;

typedef struct NDDL3Parser_numericLiteral_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_numericLiteral_return;

typedef struct NDDL3Parser_boolLiteral_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_boolLiteral_return;

typedef struct NDDL3Parser_methodInvocation_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_methodInvocation_return;

typedef struct NDDL3Parser_tokenNameList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_tokenNameList_return;

typedef struct NDDL3Parser_tokenNames_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_tokenNames_return;

typedef struct NDDL3Parser_noopstatement_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_noopstatement_return;

typedef struct NDDL3Parser_constraintSignature_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_constraintSignature_return;

typedef struct NDDL3Parser_signatureBlock_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_signatureBlock_return;

typedef struct NDDL3Parser_signatureExpression_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_signatureExpression_return;

typedef struct NDDL3Parser_signatureAtom_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    NDDL3Parser_signatureAtom_return;




/** Context tracking structure for NDDL3Parser
 */
struct NDDL3Parser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     NDDL3Parser_nddl_return (*nddl)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_nddlStatement_return (*nddlStatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_typeDefinition_return (*typeDefinition)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_typeWithBaseDomain_return (*typeWithBaseDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_domain_return (*domain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_intervalNumericDomain_return (*intervalNumericDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_enumeratedNumericDomain_return (*enumeratedNumericDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_numericSet_return (*numericSet)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_enumeratedObjectDomain_return (*enumeratedObjectDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_objectSet_return (*objectSet)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_enumeratedStringDomain_return (*enumeratedStringDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_stringSet_return (*stringSet)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_enumeratedBoolDomain_return (*enumeratedBoolDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_boolSet_return (*boolSet)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_variableDeclaration_return (*variableDeclaration)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_nameWithBaseDomain_return (*nameWithBaseDomain)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_anyValue_return (*anyValue)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_allocation_return (*allocation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorInvocation_return (*constructorInvocation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_qualified_return (*qualified)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_assignment_return (*assignment)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_classDeclaration_return (*classDeclaration)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_classBlock_return (*classBlock)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_classStatement_return (*classStatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructor_return (*constructor)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorBlock_return (*constructorBlock)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorStatement_return (*constructorStatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorParameterList_return (*constructorParameterList)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorParameters_return (*constructorParameters)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constructorParameter_return (*constructorParameter)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicate_return (*predicate)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicateBlock_return (*predicateBlock)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicateStatement_return (*predicateStatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_rule_return (*rule)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_ruleBlock_return (*ruleBlock)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_ruleStatement_return (*ruleStatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_type_return (*type)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_relation_return (*relation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_problemStmt_return (*problemStmt)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicateArgumentList_return (*predicateArgumentList)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicateArguments_return (*predicateArguments)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_predicateArgument_return (*predicateArgument)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constraintInstantiation_return (*constraintInstantiation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_superInvocation_return (*superInvocation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_variableArgumentList_return (*variableArgumentList)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_variableArguments_return (*variableArguments)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_variableArgument_return (*variableArgument)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_typeArgumentList_return (*typeArgumentList)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_typeArguments_return (*typeArguments)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_typeArgument_return (*typeArgument)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_flowControl_return (*flowControl)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_guardExpression_return (*guardExpression)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_allocationStmt_return (*allocationStmt)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_temporalRelation_return (*temporalRelation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_numericLiteral_return (*numericLiteral)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_boolLiteral_return (*boolLiteral)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_methodInvocation_return (*methodInvocation)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_tokenNameList_return (*tokenNameList)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_tokenNames_return (*tokenNames)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_noopstatement_return (*noopstatement)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_constraintSignature_return (*constraintSignature)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_signatureBlock_return (*signatureBlock)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_signatureExpression_return (*signatureExpression)	(struct NDDL3Parser_Ctx_struct * ctx);
     NDDL3Parser_signatureAtom_return (*signatureAtom)	(struct NDDL3Parser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct NDDL3Parser_Ctx_struct * ctx);
    /* @headerFile.members() */
    pANTLR3_BASE_TREE_ADAPTOR	adaptor;
    pANTLR3_VECTOR_FACTORY		vectors;
    /* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pNDDL3Parser NDDL3ParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pNDDL3Parser NDDL3ParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EXPONENT      22
#define FLOAT_SUFFIX      23
#define T__29      29
#define T__28      28
#define T__27      27
#define T__26      26
#define CONSTRUCTOR_INVOCATION      5
#define OCTAL_ESC      18
#define EOF      -1
#define T__93      93
#define T__94      94
#define T__91      91
#define T__92      92
#define T__90      90
#define INCLUDE      15
#define COMMENT      24
#define T__99      99
#define T__98      98
#define T__97      97
#define T__96      96
#define T__95      95
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define LINE_COMMENT      25
#define INT      12
#define T__85      85
#define T__84      84
#define T__87      87
#define T__86      86
#define T__89      89
#define T__88      88
#define T__71      71
#define WS      14
#define T__72      72
#define VARIABLE      9
#define T__70      70
#define T__76      76
#define T__75      75
#define T__74      74
#define T__73      73
#define CONSTRUCTOR      4
#define T__79      79
#define T__78      78
#define T__77      77
#define T__68      68
#define T__69      69
#define T__66      66
#define T__67      67
#define T__64      64
#define T__65      65
#define INT_SUFFIX      21
#define T__62      62
#define T__63      63
#define FLOAT      13
#define TOKEN_RELATION      8
#define T__61      61
#define T__60      60
#define T__55      55
#define T__56      56
#define ESCAPE_SEQUENCE      16
#define T__57      57
#define T__58      58
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define T__59      59
#define IDENT      10
#define DIGIT      20
#define T__50      50
#define T__42      42
#define T__43      43
#define T__40      40
#define T__41      41
#define T__46      46
#define T__47      47
#define T__44      44
#define T__45      45
#define T__48      48
#define T__49      49
#define UNICODE_ESC      17
#define HEX_DIGIT      19
#define T__30      30
#define T__31      31
#define T__32      32
#define T__33      33
#define T__34      34
#define T__35      35
#define T__36      36
#define T__37      37
#define T__38      38
#define NDDL      7
#define T__39      39
#define CONSTRAINT_INSTANTIATION      6
#define STRING      11
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for NDDL3Parser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */