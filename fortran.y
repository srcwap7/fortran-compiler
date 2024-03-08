%{#include <stdio.h>
#include <math.h>
#include <signal.h>
#include <stdlib.h>
int yylex(void);
long long int power(int a,int b);
void yyerror(char *);
%}
%token T_COMMENT
%token T_PROGRAM T_SUBROUTINE
%token T_END
%token T_ID
%token T_EXIT T_CYCLE
%token T_REAL_DATA_TYPE T_COMPLEX_DATA_TYPE T_INT_DATA_TYPE T_LOGICAL_DATA_TYPE
%token T_DIMENSION
%token T_DYNAMIC
%token T_LENGTH
%token T_OPEN_PARANTHESIS T_CLOSE_PARANTHESIS
%token T_CHARACTER_DATA_TYPE
%token T_COMMA
%token T_DOUBLECOLON
%token T_TYPE
%token T_COLON
%token T_NEWLINE
%token T_INTENT
%token T_IN
%token T_OUT
%token T_ASSIGNMENT
%token T_REAL_VAL T_DOUBLE_VAL T_COMPLEX_VAL T_CHARACTER_VAL T_LOGICAL_VAL T_INTEGER_VAL
%token T_DEC_SEP
%token T_PRINT T_ASTERISK
%token T_PLUS
%token T_MINUS
%token T_PERCENTAGE
%token T_DIVISION
%token T_NOTEQUAL
%token T_LESS_THAN
%token T_GREATER_THAN
%token T_LESSEQUAL
%token T_GREATEQUAL
%token T_EQUAL
%token T_EXPONENT
%token T_CONTAINS
%token T_FUNCTION
%token T_RESULT
%token T_CALL
%token T_DO T_WHILE
%token T_CASE T_SWITCH T_DEFAULT T_SELECT
%token T_IF T_THEN T_ELSEIF T_ELSE
%token T_AND T_OR T_XOR T_NOT
%token T_BAND T_BOR T_BXOR
%left  T_PLUS T_MINUS
%left  T_ASTERISK T_DIVISION
%right T_EXPONENT
%start program
/* Rule Section */
%% 
program:subFuncdefinition T_PROGRAM T_ID EOS statements T_END T_PROGRAM T_ID EOS{printf("Ok\n");exit(1);};


subFuncdefinition:|subroutine_definition EOS subFuncdefinition|function_definition EOS subFuncdefinition|EOS subFuncdefinition;

subroutine_definition:subroutine_begin statements subroutine_end;
subroutine_begin:T_SUBROUTINE T_ID T_OPEN_PARANTHESIS arglist T_CLOSE_PARANTHESIS EOS;
arglist:|T_COMMA parameter_attribute T_ID arglist|parameter_attribute T_ID arglist;
parameter_attribute:|T_INTENT T_OPEN_PARANTHESIS IO_type T_CLOSE_PARANTHESIS T_DOUBLECOLON;
IO_type:T_IN|T_OUT;
subroutine_end:T_END T_SUBROUTINE T_ID;


function_definition:function_begin statements function_end;
function_begin:T_FUNCTION T_ID T_OPEN_PARANTHESIS arglist T_CLOSE_PARANTHESIS T_RESULT T_OPEN_PARANTHESIS arglist T_CLOSE_PARANTHESIS EOS;
function_end:T_END T_FUNCTION T_ID;


statements:|statement EOS statements;
statement:|declaration |print_stmt|assignment|derived_data_type_definition|derived_data_type_declaration|assigning_derived_data_type|subFuncCall|if_else|switch_statement|loop_stmt|do_while_stmt|named_loops|T_EXIT end_label|T_CYCLE end_label/*case_expr1*/;

print_stmt:T_PRINT  T_ASTERISK argument_list;
argument_list: |T_COMMA T_CHARACTER_VAL argument_list | T_COMMA T_ID argument_list;


subFuncCall: T_CALL function_invoke ;
function_invoke: T_ID T_OPEN_PARANTHESIS function_parameters T_CLOSE_PARANTHESIS | T_ID T_COMPLEX_VAL;
function_parameters:|expression T_COMMA function_parameters|expression;
 
expression: arithmatic_expression | logical_expression;

assignment:T_ID T_ASSIGNMENT expression;
arithmatic_expression :  arithmatic_expression T_PLUS arithmatic_expression {$$=$1+$3;}| arithmatic_expression T_MINUS arithmatic_expression {$$=$1-$3;}; 
arithmatic_expression :  arithmatic_expression T_ASTERISK arithmatic_expression {$$=$1*$3;}| arithmatic_expression T_DIVISION arithmatic_expression {$$=$1/$3;};
arithmatic_expression :  T_OPEN_PARANTHESIS arithmatic_expression T_CLOSE_PARANTHESIS{$$=$2;};
arithmatic_expression :  arithmatic_expression T_EXPONENT arithmatic_expression {$$=power($1,$3);};
arithmatic_expression :  T_BAND T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS {$$=$3 & $5;} | T_BAND T_COMPLEX_VAL ;
arithmatic_expression :  T_BOR T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS {$$=$3|$5;} | T_BOR T_COMPLEX_VAL ;
arithmatic_expression :  T_BXOR T_OPEN_PARANTHESIS arithmatic_expression T_COMMA arithmatic_expression T_CLOSE_PARANTHESIS {$$=$3^$5;} | T_BXOR T_COMPLEX_VAL;
arithmatic_expression :  T_MINUS literals {$$=-$2;} | T_MINUS T_ID{$$=-$2;};
arithmatic_expression :  function_invoke;
arithmatic_expression :  literals {$$=$1;} | T_ID {$$=$1;};    


relational_expression :  arithmatic_expression rel_op arithmatic_expression;
rel_op : T_NOTEQUAL | T_LESS_THAN | T_GREATER_THAN | T_LESSEQUAL | T_GREATEQUAL | T_EQUAL;
literals:T_REAL_VAL | T_DOUBLE_VAL | T_COMPLEX_VAL | T_CHARACTER_VAL | T_LOGICAL_VAL |T_INTEGER_VAL;



logical_expression : relational_expression more;
more : | logical_op logical_expression;
logical_op : T_AND | T_OR;



if_else: begin_label T_IF T_OPEN_PARANTHESIS if_clause T_CLOSE_PARANTHESIS T_THEN T_NEWLINE statements else_statement T_END T_IF end_label;
else_statement: |T_ELSEIF T_OPEN_PARANTHESIS if_clause T_CLOSE_PARANTHESIS T_THEN T_NEWLINE statements else_statement | T_ELSE T_NEWLINE statements;
if_clause:function_invoke|logical_expression; 
begin_label: | T_ID T_COLON;
end_label: |T_ID;


switch_statement: T_SELECT T_CASE T_OPEN_PARANTHESIS expression T_CLOSE_PARANTHESIS EOS case_statement T_END T_SELECT;
case_statement: |T_CASE case_expr EOS statements case_statement;
case_expr: T_OPEN_PARANTHESIS expression T_CLOSE_PARANTHESIS | T_DEFAULT;


step:|T_COMMA expression;
loop_stmt: T_DO T_ID T_ASSIGNMENT expression T_COMMA expression step EOS statements T_END T_DO;
do_while_stmt: T_DO T_WHILE T_OPEN_PARANTHESIS logical_expression T_CLOSE_PARANTHESIS EOS statements T_END T_DO;
named_loops: T_ID T_COLON loop T_ID;
loop:loop_stmt|do_while_stmt;

declaration: data_type data_type_attribute T_DOUBLECOLON T_ID dec;
data_type_attribute: | T_COMMA T_INTENT T_OPEN_PARANTHESIS T_IN T_CLOSE_PARANTHESIS | T_COMMA T_INTENT T_OPEN_PARANTHESIS T_OUT T_CLOSE_PARANTHESIS;
dec:|T_ASSIGNMENT expression dec|T_COMMA T_ID dec;
data_type: T_INT_DATA_TYPE| T_REAL_DATA_TYPE| T_CHARACTER_DATA_TYPE T_OPEN_PARANTHESIS T_LENGTH T_ASSIGNMENT T_INTEGER_VAL T_CLOSE_PARANTHESIS| T_LOGICAL_DATA_TYPE| T_COMPLEX_DATA_TYPE;


derived_data_type_definition: T_TYPE T_DOUBLECOLON T_ID EOS member_definitions T_END T_TYPE T_ID;
member_definitions: |declaration EOS member_definitions;
derived_data_type_declaration:T_TYPE T_OPEN_PARANTHESIS T_ID T_CLOSE_PARANTHESIS T_DOUBLECOLON T_ID argumentlist;
assigning_derived_data_type:T_ID T_PERCENTAGE T_ID T_ASSIGNMENT expression;
argumentlist:|T_COMMA T_ID argumentlist;
EOS:T_NEWLINE|T_COMMENT;


%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
exit(1);
}
long long int power(int a,int b){
	long long int res=1;
	for (int i=1;i<=b;i++) res=res*a;
	return res;
}
int main(void) {
//signal(SIGINT, handle_sigint);
yyparse();
return 0;
}
