%option noyywrap
%{
    int currLine = 1, currPos = 1;
%}

IDENT   (([a-z]|[A-Z])+(([0-9]|[a-z]|[A-Z]|"_")*([a-z]|[A-Z]|[0-9])+)?)
COMM    (##)(.)*


%%
"+"             {printf("ADD\n",yytext); currPos++;}
"-"             {printf("SUB\n"); currPos++;}
"*"             {printf("MULT\n"); currPos++;}
"/"             {printf("DIV\n"); currPos++;}
"%"             {printf("MOD\n"); currPos++;}
"("             {printf("L_PAREN\n"); currPos++;}
")"             {printf("R_PAREN\n"); currPos++;}
"["             {printf("L_SQUARE_BRACKET\n"); currPos++;}
"]"             {printf("R_SQUARE_BRACKET\n"); currPos++;}
"<"             {printf("LT\n"); currPos++;}
"<="            {printf("LTE\n"); currPos+=yyleng;}
">"             {printf("GT\n"); currPos++;}
">="            {printf("GTE\n"); currPos+=yyleng;}
"=="            {printf("EQ\n"); currPos+=yyleng;}
"<>"            {printf("NEQ\n"); currPos+=yyleng;}
"not"           {printf("NOT\n"); currPos+=yyleng;}
"and"           {printf("AND\n"); currPos+=yyleng;}
"or"            {printf("OR\n"); currPos+=yyleng;}
":="            {printf("ASSIGN\n"); currPos+=yyleng;}
{COMM}          {currLine=yyleng;}
"if"            {printf("IF\n"); currPos+=yyleng;}
"else"          {printf("ELSE\n"); currPos+=yyleng;}
"then"          {printf("THEN\n"); currPos+=yyleng;}
"endif"         {printf("ENDIF\n"); currPos+=yyleng;}
"while"         {printf("WHILE\n"); currPos+=yyleng;}
"beginloop"     {printf("BEGINLOOP\n"); currPos+=yyleng;}
"do"            {printf("DO\n"); currPos+=yyleng;}
"for"           {printf("FOR\n"); currPos+=yyleng;}
"beginparams"	{printf("BEGIN_PARAMS\n"); currPos +=yyleng;}
"endparams"	{printf("END_PARAMS\n"); currPos +=yyleng;}
"beginlocals"   {printf("BEGIN_LOCALS\n"); currPos=yyleng;}
"endlocals"     {printf("END_LOCALS\n"); currPos+=yyleng;}
"endloop"       {printf("ENDLOOP\n"); currPos+=yyleng;}
"beginbody"     {printf("BEGIN_BODY\n"); currPos+=yyleng;}
"endbody"       {printf("END_BODY\n"); currPos+=yyleng;}
";"		{printf("SEMICOLON\n"); currPos++;}
":"             {printf("COLON\n"); currPos++;}
","             {printf("COMMA\n"); currPos++;}
"array"         {printf("ARRAY\n"); currPos+=yyleng;}
"of"            {printf("OF\n"); currPos+yyleng;}
"integer"       {printf("INTEGER\n"); currPos+yyleng;}
"read"          {printf("READ\n"); currPos+=yyleng;}
"write"         {printf("WRITE\n"); currPos+=yyleng;}
"continue"      {printf("CONTINUE\n"); currPos+=yyleng;}
"return"        {printf("RETURN\n"); currPos+=yyleng;}
"true"          {printf("TRUE\n"); currPos+=yyleng;}
"false"         {printf("FALSE\n"); currPos+=yyleng;}
[0-9]+          {printf("NUMBER %s\n",yytext); currPos+=yyleng;}                
"function"      {printf("FUNCTION\n"); currPos+=yyleng;}
{IDENT}         {printf("IDENT %s\n", yytext); currPos+=yyleng;}
[ \t]+          {/*  ignore white spaces  */ currPos = yyleng;}
"\n"            {currLine++; currPos = 1;}
.               {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos);
        return(0);}
%%

int main(){
    yylex();
    return 0;
}
