%option noyywrap
%{
    int currLine = 1, currPos = 1;
%}

IDENT   (([a-z]|[A-Z])+(([0-9]|[a-z]|[A-Z]|"_")*([a-z]|[A-Z]|[0-9])+)?)
COMM    (##)(.)*


%%
"+"             {printf("%s PLUS\n",yytext); currPos++;}
"-"             {printf("%s MINUS\n", yytext); currPos++;}
"*"             {printf("%s MULT\n", yytext); currPos++;}
"/"             {printf("%s DIV\n", yytext); currPos++;}
"%"             {printf("%s REMAINDER\n", yytext); currPos++;}
"("             {printf("%s L_PAREN\n", yytext); currPos++;}
")"             {printf("%s R_PAREN\n", yytext); currPos++;}
"="             {printf("%s EQUAL\n", yytext); currPos++;}
"["             {printf("%s L_SQAURE\n", yytext); currPos++;}
"]"             {printf("%s R_SQAURE\n", yytext); currPos++;}
"<"             {printf("%s LESS\n", yytext); currPos++;}
"<="            {printf("%s LESS_EQ\n", yytext); currPos++;}
">"             {printf("%s GREATER\n", yytext); currPos++;}
">="            {printf("%s GREATER_EQ\n", yytext); currPos+=yyleng;}
"=="            {printf("%s RELATION_EQUAL\n", yytext); currPos+=yyleng;}
"<>"            {printf("%s OP_!\n", yytext); currPos+=yyleng;}
"not"           {printf("%s NOT\n", yytext); currPos+=yyleng;}
"and"           {printf("%s AND\n", yytext); currPos+=yyleng;}
"or"            {printf("%s OR\n", yytext); currPos+=yyleng;}
":="            {printf("%s ASSIGNMENT\n", yytext); currPos++;}
{COMM}          {printf("%s COMMENT\n", yytext); currLine++; currPos = 1;}
"if"            {printf("%s IF\n", yytext); currPos+=yyleng;}
"else"          {printf("%s ELSE\n", yytext); currPos+=yyleng;}
"then"          {printf("%s THEN\n", yytext); currPos+=yyleng;}
"endif"         {printf("%s ENDIF\n", yytext); currPos+=yyleng;}
"while"         {printf("%s WHILE\n", yytext); currPos+=yyleng;}
"beginloop"     {printf("%s BEGINLOOP\n", yytext); currPos+=yyleng;}
"do"            {printf("%s DO\n", yytext); currPos+=yyleng;}
"for"           {printf("%s FOR\n", yytext); currPos+=yyleng;}
"beginlocals"   {printf("%s BEGINLOCALS\n", yytext); currPos+=yyleng;}
"endlocals"     {printf("%s ENDLOCALS\n", yytext); currPos+=yyleng;}
"endloop"       {printf("%s ENDLOOP\n", yytext); currPos+=yyleng;}
"beginbody"     {printf("%s BEGINBODY\n", yytext); currPos+=yyleng;}
"endbody"       {printf("%s ENDBODY\n", yytext); currPos+=yyleng;}
":"             {printf("%s COLON\n", yytext); currPos++;}
","             {printf("%s COMMA\n", yytext); currPos++;}
"array"         {printf("%s ARRAY\n", yytext); currPos+=yyleng;}
"of"            {printf("%s OF\n", yytext); currPos+yyleng;}
"integer"       {printf("%s INTEGER\n", yytext); currPos+yyleng;}
";"             {printf("%s SEMICOLON\n", yytext); currPos++;}
"read"          {printf("%s READ\n", yytext); currPos+=yyleng;}
"write"         {printf("%s WRITE\n", yytext); currPos+=yyleng;}
"continue"      {printf("%s CONTINUE\n", yytext); currPos+=yyleng;}
"return"        {printf("%s RETURN\n", yytext); currPos+=yyleng;}
"main"          {printf("%s MAIN\n", yytext); currPos+=yyleng;}
"true"          {printf("%s TRUE\n", yytext); currPos+=yyleng;}
"false"         {printf("%s FALSE\n", yytext); currPos+=yyleng;}
[0-9]+          {printf("%s NUMBER\n", yytext); currPos+=yyleng;}                
"function"      {printf("%s FUNCTION\n", yytext); currPos+=yyleng;}

{IDENT}         {printf("%s IDENTIFIER\n", yytext); currPos+=yyleng;}
[ \t]+          {/*  ignore white spaces  */ currPos = yyleng;}
"\n"            {currLine++; currPos = 1;}
.               {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext);
        return(0);}
%%

int main(){
    yylex();
    return 0;
}
