%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <vector>
 #include <iostream>
 #include <string>
 #include <sstream>
 using namespace std;
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 struct program_struct {
   string code;
 };
 struct function_struct {
    string code;
    string resultID;
 };
 struct statement_struct {
    string code;
 };
 struct stathelp_struct {
    string code;
 };
 struct statline_struct {
    string code;
 };
 struct declaration_struct {
    string code;
 };
 struct decline_struct {
    string code;
 };
 struct boolexp_struct {
    string code;
    string resultID;
 };
 struct relationandexpr_struct {
    string code;
    string resultID;
 };
 struct relationexpr_struct {
    string code;
    string resultID;
 };
 struct relationhelper_struct {
    string code;
    string resultID;
 };
 struct comp_struct {
    string code;
 };
 struct term_struct {
    string code;
    string resultID;
 };
 struct term1_struct {
    string code;
    string resultID;
 };
 struct expression_struct {
    string code;
    string resultID;
 };
 struct exprhelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
 };
 struct expresscomm_struct {
    string code;
 };
 struct multiplicativeexp_struct {
    string code;
    string resultID;
 };
 struct multiphelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
 };
 struct var_struct {
    string code;
    string resultID;
 };
 struct varline_struct {
    string code;
    string resultID;
 };
 struct number_struct {
    string code;
    string resultID;
 };
 struct identifier_struct {
    string code;
    string resultID;
 };
 extern FILE * yyin;
 int yylex();
 int tempCounter = 0;
 string createTemp(){
    return "__temp__" + to_string(tempCounter++);
 }
%}

%union{
  int ival;
  char* sval;
  struct program_struct *program_val;
  struct function_struct *function_val;
  struct statement_struct *statement_val;
  struct stathelp_struct *stathelp_val;
  struct statline_struct *statline_val;
  struct declaration_struct *declaration_val;
  struct decline_struct *decline_val;
  struct boolexp_struct *boolexp_struct_val;
  struct relationandexpr_struct *relationandexpr_val;
  struct relationexpr_struct *relationexpr_val;
  struct relationhelper_struct *relationhelper_val;
  struct comp_struct *comp_val;
  struct term_struct *term_val;
  struct term1_struct *term1_val;
  struct expression_struct *expression_val;
  struct expresscomm_struct *expresscomm_val;
  struct multiplicativeexp_struct *multiplicativeexp_val;
  struct var_struct *var_val;
  struct varline_struct *varline_val;
  struct identifier_struct *identifier_val;
  struct number_struct *number_val;
}

%error-verbose
%start program
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER SEMICOLON COMMA COLON L_SQUARE_BRACKET R_SQUARE_BRACKET ARRAY OF  
%token ASSIGN IF THEN ELSE ENDIF WHILE BEGINLOOP ENDLOOP READ WRITE CONTINUE RETURN DO FOR 
%token OR AND NOT TRUE FALSE L_PAREN R_PAREN
%token <sval> IDENT 
%token <ival> NUMBER
%type <number_val> number
%type <identifier_val> identifier
%type <program_val> program
%type <function_val> function
%type <statement_val> statement
%type <stathelp_val> stathelp
%type <statline_val> statline
%type <declaration_val> declaration
%type <decline_val> decline
%type <boolexp_val> boolexp
%type <relationandexpr_val> relationandexpr
%type <relationexpr_val> relationexpr
%type <relationhelper_val> relationhelper
%type <comp_val> comp
%type <term_val> term
%type <term1_val> term1
%type <expression_val> expression
%type <expresscomm_val> expresscomm
%type <multiplicativeexp_val> multiplicativeexp
%type <var_val> var
%type <varline_val> varline
%left ADD SUB
%left MULT DIV MOD 
%left LTE GT LT GTE EQ NEQ
%% 

program:	                         {$$ = new program_struct();} 
			| function program {
            $$ = new program_struct(); 
            ostringstream os;
            os << $1->code << $2->code;
            $$ ->code = os.str();
            cout << $$->code;
            }
			   ;


function:   FUNCTION identifier SEMICOLON BEGIN_PARAMS decline END_PARAMS BEGIN_LOCALS decline END_LOCALS BEGIN_BODY statline END_BODY{  
               ostringstream os;
               $$ = new function_struct();
               os << "func " << $2->code<<endl;
               os << $5->code << $8->code;
               os << $11->code << "endfunc\n";
               delete $2;
               delete $5;
               delete $8;
               delete $11;
               $$->code = os.str();
            }
               ;

declaration:    identifier COMMA declaration         {printf("declaration -> identifier COMMA declaration\n");}
                | identifier COLON INTEGER {  
                  ostringstream os;
                  $$ = new declaration_struct();
                  os << ". " << $1->code << endl;
                  delete $1;
                  $$->code = os.str();
               }
                | identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER         {printf("declaration -> identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER\n");}
               ;

number:     NUMBER     {
               $$ = new number_struct();
               ostringstream os; 
               os << $1;
               $$->code = os.str();
               $$->resultID = os.str();
            }    
               ;

decline:    {
               $$ = new decline_struct();
            }
            | declaration SEMICOLON decline         
            {
               $$ = new decline_struct();
               ostringstream os;
               os << $1->code << $3->code;
               delete $1;
               delete $3;
               $$->code = os.str();
            }
            ;

identifier:    IDENT   {
                  $$ = new identifier_struct;
                  ostringstream os; 
                  os << $1;
                  $$->code = os.str();
                  $$->resultID = os.str();
               }               
            ;

statement:  var ASSIGN expression{  
               $$ = new statement_struct();
               ostringstream os;
               //os <<  $1->code;
               os <<  $3->code << endl;
               os << "= " << $1->resultID << ", " << $3->resultID << endl;
               delete $1;
               delete $3;
               $$->code = os.str();
            }
            | IF boolexp THEN statline stathelp ENDIF         {printf("statement -> IF boolexp THEN statline stathelp ENDIF\n");}
            | WHILE boolexp BEGINLOOP statline ENDLOOP         {printf("statement -> WHILE boolexp BEGINLOOP statline ENDLOOP\n");}
            | DO BEGINLOOP statline ENDLOOP WHILE boolexp         {printf("statement -> DO BEGINLOOP statline ENDLOOP WHILE boolexp\n");}
            | FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP         {printf("statement -> FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP\n");}
            | READ varline {
               $$ = new statement_struct();
               ostringstream os;
               os << ".< " << $2->resultID << endl;
               delete $2;
               $$->code = os.str();
            }
            | WRITE varline {
               $$ = new statement_struct();
               ostringstream os;
               os << ".> " << $2->code<< endl;
               $$->code = os.str();
               delete $2;
               }
            | CONTINUE         {printf("statement -> CONTINUE\n");}
            | RETURN expression         {printf("statement -> RETURN expression\n");}
            ;
            
stathelp:   
            | ELSE statline         {printf("stathelp -> ELSE statline\n");}
            ;

varline:    var {
               $$ = new varline_struct();
               ostringstream os;
               os << $1->code;
               ostringstream os1;
               os1 << $1->resultID;
               $$->resultID = os1.str();
               delete $1;
               $$->code = os.str();
            }   
            | var COMMA varline         {    
               $$ = new varline_struct();
               ostringstream os;
               os << $1->code << $3->code;
               delete $1;
               delete $3;
               $$->code = os.str();
               }
            ;

statline:                                          { 
                                                      $$ = new statline_struct();
                                                   }
            | statement SEMICOLON statline        {
               $$ = new statline_struct();
               ostringstream os;
               os << $1->code;
               os << $3->code;
               delete $1;
               delete $3;
               $$->code = os.str();
            }
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

expression:     multiplicativeexp          {
                  $$ = new expression_struct();
                  ostringstream os;
                  os << $1->code;
                  $$->code = os.str();
                  ostringstream os1;
                  os1 << $1->resultID;
                  delete $1;
                  $$->resultID = os1.str();
               }
                | expression ADD multiplicativeexp {
                     $$ = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << $1->code << endl;
                     os << $3->code << endl;
                     os << ". " << temp2 << endl;
                     os << "+ " << temp2 << ", " << $1->resultID << ", " << $3->resultID;
                     delete $1;
                     delete $3;
                     $$->resultID = temp2;
                     $$->code = os.str();
                  }
                | expression SUB multiplicativeexp {
                     $$ = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << $1->code << endl;
                     os << $3->code << endl;
                     os << ". " << temp2 << endl;
                     os << "- " << temp2 << ", " << $1->resultID << ", " << $3->resultID;
                     delete $1;
                     delete $3;
                     $$->resultID = temp2;
                     $$->code = os.str();
                  }
                ;

multiplicativeexp:  term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        os << $1->code;
                        $$->code = os.str();
                        ostringstream os1;
                        os1 << $1->resultID;
                        delete $1;
                        $$->resultID = os1.str();
                     }
                    | multiplicativeexp MULT term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << $1->code << endl;
                        os << $3->code << endl;
                        os << ". " << temp2 << endl;
                        os << "* " << temp2 << ", " << $1->resultID << ", " << $3->resultID;
                        delete $1;
                        delete $3;
                        $$->resultID = temp2;
                        $$->code = os.str();
                    }
                    | multiplicativeexp DIV term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << $1->code << endl;
                        os << $3->code << endl;
                        os << ". " << temp2 << endl;
                        os << "/ " << temp2 << ", " << $1->resultID << ", " << $3->resultID;
                        delete $1;
                        delete $3;
                        $$->resultID = temp2;
                        $$->code = os.str();
                    }
                    | multiplicativeexp MOD term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << $1->code << endl;
                        os << $3->code << endl;
                        os << ". " << temp2 << endl;
                        os << "% " << temp2 << ", " << $1->resultID << ", " << $3->resultID;
                        delete $1;
                        delete $3;
                        $$->resultID = temp2;
                        $$->code = os.str();
                    }
                    ;

term:       term1{
                     $$ = new term_struct();
                     ostringstream os;
                     os << $1->code;
                     $$->code = os.str();
                     ostringstream os1;
                     os1 << $1->resultID;
                     delete $1;
                     $$->resultID = os1.str();
            }
            | SUB term1         {printf("term -> SUB term1\n");}
            | identifier L_PAREN expresscomm R_PAREN         {printf("term -> identifier L_PAREN expresscomm R_PAREN\n");}
            ;

term1:      var{
               $$ = new term1_struct();
               string temp = createTemp();
               ostringstream os;
               os << ". " << temp << endl;
               os << "= " << temp << ", " << $1->resultID;
               delete $1;
               $$->code = os.str();
               $$->resultID = temp;
            }
            | number {
               $$ = new term1_struct();
               ostringstream os;
               string temp = createTemp();
               os << ". " << temp << endl;
               os << "= " << temp << ", " << $1->resultID;
               delete $1;
               $$->code = os.str();
               $$->resultID = temp;
            }
            | L_PAREN expression R_PAREN         {printf("term1 -> L_PAREN expression R_PAREN\n");}
            ;

var:        identifier {
               $$ = new var_struct();
               ostringstream os;
               os << $1->resultID;
               $$->code = os.str();
               ostringstream os1;
               os1 << $1->resultID;
               $$->resultID = os1.str();
            }
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
