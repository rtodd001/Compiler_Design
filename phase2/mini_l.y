
%{
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern FILE * yyin;
 int yylex();
%}

%union{
  int ival;
  char* sval;
}

%error-verbose
%start program
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER SEMICOLON COMMA COLON L_SQUARE_BRACKET R_SQUARE_BRACKET ARRAY OF  
%token ASSIGN IF THEN ELSE ENDIF WHILE BEGINLOOP ENDLOOP READ WRITE CONTINUE RETURN DO FOR 
%token OR AND NOT TRUE FALSE L_PAREN R_PAREN EQ NEQ LT GT LTE GTE
%token ADD SUB MULT DIV MOD 
%token <sval> IDENT 
%token <ival> NUMBER
%left ADD SUB
%left MULT DIV MOD LTE GT LT GTE EQ NEQ
%% 

program:	
			| function program         {printf("program -> function program \n");}
			   ;


function:   FUNCTION identifier SEMICOLON BEGIN_PARAMS decline END_PARAMS BEGIN_LOCALS decline END_LOCALS BEGIN_BODY statline END_BODY          {printf("function -> FUNCTION identifier SEMICOLON BEGIN_PARAMS decline END_PARAMS BEGIN_LOCALS decline END_LOCALS BEGIN_BODY statline END_BODY\n");}
               ;

declaration:    identifier COMMA declaration         {printf("declaration -> identifier COMMA declaration\n");}
                | identifier COLON INTEGER         {printf("declaration -> identifier COLON INTEGER\n");}
                | identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER         {printf("declaration -> identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER\n");}
               ;

number:     NUMBER     {printf("number -> NUMBER %i\n", $1);}    
               ;

decline:    
            | declaration SEMICOLON decline         {printf("decline -> declaration SEMICOLON decline\n");}
            ;

identifier:    IDENT   {printf("identifier -> IDENT %s\n", $1);}               
            ;

statement:  var ASSIGN expression         {printf("statement -> var ASSIGN expression\n");}
            | IF boolexp THEN statline stathelp ENDIF         {printf("statement -> IF boolexp THEN statline stathelp ENDIF\n");}
            | WHILE boolexp BEGINLOOP statline ENDLOOP         {printf("statement -> WHILE boolexp BEGINLOOP statline ENDLOOP\n");}
            | DO BEGINLOOP statline ENDLOOP WHILE boolexp         {printf("statement -> DO BEGINLOOP statline ENDLOOP WHILE boolexp\n");}
            | FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP         {printf("statement -> FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP\n");}
            | READ varline         {printf("statement -> READ varline\n");}
            | WRITE varline         {printf("statement -> WRITE varline\n");}
            | CONTINUE         {printf("statement -> CONTINUE\n");}
            | RETURN expression         {printf("statement -> RETURN expression\n");}
            ;
            
stathelp:   
            | ELSE statline         {printf("stathelp -> ELSE statline\n");}
            ;

varline:    var                              {printf("varline -> var\n");}
            | var COMMA varline         {printf("varline -> var COMMA varline\n");}
            ;

statline:    
            | statement SEMICOLON statline         {printf("statline -> statement SEMICOLON statline\n");}
            ;

boolexp:    relationandexpr         {printf("boolexp -> relationandexpr\n");}
            | relationandexpr OR boolexp         {printf("boolexp -> relationandexpr OR boolexp\n");}
            ;

relationandexpr:    relationexpr         {printf("relationandexpr -> relationexpr\n");}
                    | relationexpr AND relationandexpr         {printf("relationandexpr -> relationexpr OR relationandexpr\n");}
                    ;
relationexpr:   NOT relationhelper         {printf("relationexpr -> NOT relationhelper\n");}
                | relationhelper         {printf("relationexpr -> relationhelper\n");}
                ;

relationhelper:    expression comp expression         {printf("relationhelper -> expression comp expression\n");}
                  | TRUE         {printf("relationhelper -> TRUE\n");}
                  | FALSE         {printf("relationhelper -> FALSE\n");}
                  | L_PAREN boolexp R_PAREN         {printf("relationhelper -> L_PAREN boolexp R_PAREN\n");}
                  ;

comp:       EQ         {printf("comp -> EQ\n");}
            | NEQ         {printf("comp -> NEQ\n");}
            | LT         {printf("comp -> LT\n");}
            | GT         {printf("comp -> GT\n");}
            | LTE         {printf("comp -> LTE\n");}
            | GTE         {printf("comp -> GTE\n");}
            ;

expression:     multiplicativeexp exprhelper          {printf("expression -> multiplicativeexp exprhelper\n");}
                ;

exprhelper:  
               | ADD multiplicativeexp exprhelper      {printf("exprhelper -> ADD multiplicativeexp exprhelper\n");}
               | SUB multiplicativeexp exprhelper      {printf("exprhelper -> SUB multiplicativeexp exprhelper\n");}
               ;

multiplicativeexp:  term  multhelper             {printf("multiplicativeexp -> term\n");}
                    ;

multhelper: 
               | MULT multiplicativeexp multhelper        {printf("multiplicativeexp -> term MULT multiplicativeexp\n");}
               | DIV multiplicativeexp  multhelper       {printf("multiplicativeexp -> term DIV multiplicativeexp\n");}
               | MOD multiplicativeexp  multhelper       {printf("multiplicativeexp -> term MOD multiplicativeexp\n");} 
               ;
term:       term1         {printf("term -> term1\n");}
            | SUB term1         {printf("term -> SUB term1\n");}
            | identifier L_PAREN expresscomm R_PAREN         {printf("term -> identifier L_PAREN expresscomm R_PAREN\n");}
            ;

term1:      var         {printf("term1 -> var\n");}
            | number         {printf("term1 -> number\n");}
            | L_PAREN expression R_PAREN         {printf("term1 -> L_PAREN expression R_PAREN\n");}
            ;

var:        identifier         {printf("var -> identifier\n");}
            | identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET         {printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
            ;

expresscomm:    expression                 {printf("expresscomm -> expression\n");}
                | expression COMMA expresscomm         {printf("expresscomm -> expression COMMA expresscomm\n");}
                ;
%%

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r\n");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}
