%option noyywrap
%{
    #include "y.tab.h"
    int currLine = 1, currPos = 1;
%}


IDENT   (([a-z]|[A-Z])+(([0-9]|[a-z]|[A-Z]|(_))*([0-9]|[a-z]|[A-Z])+)?)
COMM    (##)(.)*


%%
"-"             {currPos++; return SUB;}
"+"             {currPos++; return ADD;}
"*"             {currPos++; return MULT;}
"/"             {currPos++; return DIV;}
"%"             {currPos++; return MOD;}
"("             {currPos++; return L_PAREN;}
")"             {currPos++; return R_PAREN;}
"["             {currPos++; return L_SQUARE_BRACKET;}
"]"             {currPos++; return R_SQUARE_BRACKET;}
"<"             {currPos++; return LT;}
"<="            {currPos+=yyleng; return LTE;}
">"             {currPos++; return GT;}
">="            {currPos+=yyleng; return GTE;}
"=="            {currPos+=yyleng; return EQ;}
"<>"            {currPos+=yyleng; return NEQ;}
"not"           {currPos+=yyleng; return NOT;}
"and"           {currPos+=yyleng; return AND;}
"or"            {currPos+=yyleng; return OR;}
":="            {currPos+=yyleng; return ASSIGN;}
{COMM}          {currPos+=yyleng;}
"if"            {currPos+=yyleng; return IF;}
"else"          {currPos+=yyleng; return ELSE;}
"then"          {currPos+=yyleng; return THEN;}
"endif"         {currPos+=yyleng; return ENDIF;}
"while"         {currPos+=yyleng; return WHILE;}
"beginloop"     {currPos+=yyleng; return BEGINLOOP;}
"do"            {currPos+=yyleng; return DO;}
"for"           {currPos+=yyleng; return FOR;}
"beginparams"	{currPos+=yyleng; return BEGIN_PARAMS;}
"endparams"	    {currPos+=yyleng; return END_PARAMS;}
"beginlocals"   {currPos+=yyleng; return BEGIN_LOCALS;}
"endlocals"     {currPos+=yyleng; return END_LOCALS;}
"endloop"       {currPos+=yyleng; return ENDLOOP;}
"beginbody"     {currPos+=yyleng; return BEGIN_BODY;}
"endbody"       {currPos+=yyleng; return END_BODY;}
";"		        {currPos++; return SEMICOLON;}
":"             {currPos++; return COLON;}
","             {currPos++; return COMMA;}
"array"         {currPos+=yyleng; return ARRAY;}
"of"            {currPos+=yyleng; return OF;}
"integer"       {currPos+=yyleng; return INTEGER;}
"read"          {currPos+=yyleng; return READ;}
"write"         {currPos+=yyleng; return WRITE;}
"continue"      {currPos+=yyleng; return CONTINUE;}
"return"        {currPos+=yyleng; return RETURN;}
"true"          {currPos+=yyleng; return TRUE;}
"false"         {currPos+=yyleng; return FALSE;}
"function"      {currPos+=yyleng; return FUNCTION;}
[ \t\y]+          {/*  ignore white spaces  */ currPos+=yyleng;}
[\n\f\r]           {currLine++; currPos = 1;}
({IDENT}(_)+)   {printf("Error at line %d, column %d: identifier symbol \"%s\" cannot end with an underscore\n", currLine, currPos,yytext); exit(0);}
([0-9]+{IDENT}) {printf("Error at line %d, column %d: unrecognized symbol \"%s\" must begin with a letter\n", currLine, currPos,yytext); exit(0);}
([0-9]+(_)+{IDENT}*)    {printf("Error at line %d, column %d: unrecognized symbol \"%s\" must begin with a letter\n", currLine, currPos,yytext); exit(0);}
{IDENT}         {currPos+=yyleng; yylval.sval = (yytext); return IDENT;}
[0-9]+          {currPos+=yyleng; yylval.ival = atoi(yytext); return NUMBER;}                
.               {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos,yytext);exit(0);}
%%