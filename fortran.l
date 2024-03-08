%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(char *);
#include "y.tab.h"
%}
%option case-insensitive
%%
program { printf("T_PROGRAM ");return T_PROGRAM; }
subroutine {printf("T_SUBROUTINE ");return T_SUBROUTINE; }
function {printf("T_FUNCTION "); return T_FUNCTION; }
result {printf("T_RESULT ");return T_RESULT;}
contains {printf("T_CONTAINS ");return T_RESULT;}
end { printf("T_END ");return T_END; }
REAL { printf("T_REAL ");return T_REAL_DATA_TYPE; }
INTEGER { printf("T_INTEGER ");return T_INT_DATA_TYPE; }
COMPLEX { printf("T_COMPLEX ");return T_COMPLEX_DATA_TYPE; }
CHARACTER { return T_CHARACTER_DATA_TYPE; }
LOGICAL { return T_LOGICAL_DATA_TYPE; }
DIMENSION { return T_DIMENSION; }
ALLOCATABLE { return T_DYNAMIC; }
LEN { return T_LENGTH; }
TYPE { printf("T_TYPE ");return T_TYPE; }
INTENT {printf("T_INTENT ");return T_INTENT; }
IN {printf("T_IN ");return T_IN; }
OUT {printf("T_OUT ");return T_OUT; }
PRINT { printf("T_PRINT ");return T_PRINT; };
IF {printf("T_IF ");return T_IF; }
THEN {printf("T_THEN ");return T_THEN;}
ELSEIF {printf("T_ELSEIF ");return T_ELSEIF;}
ELSE {printf("T_ELSE ");return T_ELSE;}
SELECT { printf("T_SELECT ");return T_SELECT; }
CASE {printf("T_CASE ");return T_CASE;}
DEFAULT {printf("T_DEFAULT ");return T_DEFAULT;}
DO {printf("T_DO ");return T_DO; }
WHILE {printf("T_WHILE ");return T_WHILE;}
CALL {printf("T_CALL ");return T_CALL;}
EXIT {printf("T_EXIT ");return T_EXIT;}
CYCLE {printf("T_CYCLE ");return T_CYCLE;}
\!.*[\n] {printf("T_COMMENT ");return T_COMMENT; }
SWITCH {printf("T_SWITCH ");return T_SWITCH;}
\.NOT\. {return T_NOT;}
\.AND\. {return T_AND;}
\.OR\. {return T_OR;}
\.NEQV\. {return T_XOR;}
\IAND {printf("T_BAND ");return T_BAND;}
\IOR {return T_BOR; }
\IEOR {return T_BXOR; }
\( { printf("T_OPEN_BRACKET ");return T_OPEN_PARANTHESIS; }
\) { printf("T_CLOSE_BRACKET ");return T_CLOSE_PARANTHESIS; }
\=\= { return T_EQUAL; }
\/\= { return T_NOTEQUAL; }
\= { return T_ASSIGNMENT; }
:: { printf("T_DOUBLECOLON "); return T_DOUBLECOLON; }
: {printf("T_COLON "); return T_COLON; }
\* {printf("T_ASTERISK "); return T_ASTERISK;}
\, { printf("T_COMMA ");return T_COMMA;}
([ \t]*[\n]+[ \t\n]*)+ { printf("T_ENDLINE ");return T_NEWLINE; }
[ \t]+ {printf ("T_SEP ");}
\** { return T_EXPONENT; }
\+ { return T_PLUS; }
\- { return T_MINUS; }
\% { return T_PERCENTAGE; }
\/ { return T_DIVISION; }
\< { return T_LESS_THAN; }
\> { printf("T_GREATER_THAN ");return T_GREATER_THAN; }
\<\= { return T_LESSEQUAL; }
\>\= { return T_GREATEQUAL; }
\.true\. { return T_LOGICAL_VAL; }
\.false\. { return T_LOGICAL_VAL; }
[a-zA-Z]+[0-9a-zA-Z_]* { printf("T_ID ");return T_ID; }
[0-9]+ {/*INTEGER VALUE */ yylval=atoi(yytext);printf("T_INTEGER_VAL");return T_INTEGER_VAL; }
[0-9]+\.[0-9]+ {/*REAL VALUE*/return T_REAL_VAL ; }
[0-9]+[e|E][+|-]?[0-9]+ {/*DOUBLE VALUE*/return T_DOUBLE_VAL ;}
[0-9]+\.[0-9]+[d|D][0]? {/*DOUBLE VALUE*/return T_DOUBLE_VAL ;}

\"[a-z|A-Z|\_|\.|\ |\~|\`|\!|\@|\#|\$|\%|\^|\*|\(|\)|\{|\}|\[|\]|\{|\}|\;|\:|\'|\'|\?|\<|\>|\=|\+|\-|0-9]+\" {/*CHARACTER(STRING) VALUE*/printf("T_CHARACTER_VALUE ");return T_CHARACTER_VAL ;}
\'[a-z|A-Z|\_|\.|\ |\~|\`|\!|\@|\#|\$|\%|\^|\*|\(|\)|\{|\}|\[|\]|\{|\}|\;|\:|\'|\'|\?|\<|\>|\=|\+|\-|0-9]+\' {/*CHARACTER(STRING) VALUE*/printf("T_CHARACTER_VALUE ");return T_CHARACTER_VAL ;}

\([0-9]+\.[0-9]+\,[0-9]+\.[0-9]+\) {/*COMPLEX VALUE*/return T_COMPLEX_VAL ;}
\([0-9]+\.[0-9]+\,[0-9]+\) {/*COMPLEX VALUE*/return T_COMPLEX_VAL ;}
\([0-9]+\,[0-9]+\.[0-9]+\) {/*COMPLEX VALUE*/return T_COMPLEX_VAL ;}
\([0-9]+\,[0-9]+\) {/*COMPLEX VALUE*/printf("T_COMPLEX ");return T_COMPLEX_VAL ;}
\([0-9]+\.[0-9]+([d|D])0?\,[0-9]+\.[0-9]+([d|D])0?\) {/*COMPLEX VALUE*/return T_COMPLEX_VAL ;}
\([0-9]+\.[0-9]+([d|D])0?\,[0-9]+\.[0-9]+\) {/*COMPLEX VALUE*/return T_COMPLEX_VAL ;}
. { yyerror("invalid character"); }
%%
int yywrap(void) {
return 1;
}
