%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <vector>
 #include <iostream>
 #include <string>
 #include <queue>
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
    string type;
    string resultID;
 };
 struct decline_struct {
    string code;
    string type;
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
    string resultID;
 };
 struct term_struct {
    string code;
    string resultID;
    string type;
    string name;
 };
 struct term1_struct {
    string code;
    string resultID;
    string type;
    string name;
 };
 struct expression_struct {
    string code;
    string resultID;
    string name;
 };
 struct exprhelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
 };
 struct expresscomm_struct {
    string code;
    string name;
 };
 struct multiplicativeexp_struct {
    string code;
    string resultID;
    string name;
 };
 struct multiphelper_struct{
    string code;
    string resultID;
    string operand;
    string op;
    string name;
 };
 struct var_struct {
    string code;
    string name;
    string resultID;
    string type;
    string index;
 };
 struct varline_struct {
    string code;
    string resultID;
    string type;
    string index;
    string name;
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
 int labelCounter = 0;
 string createTemp(){
    ostringstream os;
    os << "__temp__" << tempCounter++;
    return os.str();
 }
 string createLabel(){
    ostringstream os;
    os << "__label__" << labelCounter++;
    return os.str();
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
  struct boolexp_struct *boolexp_val;
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
               os << "func " << $2->resultID<<endl;
               os << $5->code << $8->code;
               os << $11->code << "endfunc\n";
               delete $2;
               delete $5;
               delete $8;
               delete $11;
               $$->code = os.str();
            }
               ;

declaration:      identifier COMMA declaration         {
                     $$ = new declaration_struct();
                     ostringstream os;
                     string tp = $3->type;
                     $$->type = tp;
                     $$->resultID = $3->resultID;
                     if(tp == "array"){
                        os << ".[] " << $1->resultID << ", " << $3->resultID << endl;
                     }
                     else if (tp == "ident"){
                        os << ". " << $1->resultID << endl;
                     }
                     os << $3->code;
                     $$->code = os.str();
                  }
                | identifier COLON INTEGER {  
                  ostringstream os;
                  $$ = new declaration_struct();
                  os << ". " << $1->resultID << endl;
                  $$->type = "ident";
                  delete $1;
                  $$->code = os.str();
               }
                | identifier COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER {
                   $$ = new declaration_struct();
                   ostringstream os;
                   $$->type = "array";
                   os << ".[] " << $1->resultID << ", " << $5->resultID << endl;
                   $$->resultID = $5->resultID;
                   //os << ". " << $1->code;
                  
                   $$->code = os.str();
                }
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
                  //$$->code = os.str();
                  $$->resultID = os.str();
               }               
            ;

statement:  var ASSIGN expression{  
               $$ = new statement_struct();
               ostringstream os;
               os <<  $1->code;
               os <<  $3->code;
               string tp = $1->type;
               if(tp == "ident")
                  os << "= " << $1->resultID;
               else if(tp == "array")
                  os << "[]= " << $1->name << ", " << $1->index;
               os  << ", " << $3->resultID << endl;
               delete $1;
               delete $3;
               $$->code = os.str();
            }
            | IF boolexp THEN statline stathelp ENDIF {
               $$ = new statement_struct();
               string taken = createLabel();
               string not_taken = createLabel();
               string ex = createLabel();
               ostringstream os;
               os << $2->code;
               os << "?:= " << taken << ", " << $2->resultID << endl;
               os << ":= " << not_taken << endl;
               os << ": " << taken << endl;
               os << $4->code;
               os << ":= " << ex << endl;
               os << ": " << not_taken << endl;
               os << $5->code;
               os << ": " << ex << endl;
               delete $2;
               delete $4;
               delete $5;
               $$->code = os.str();
            }
            | WHILE boolexp BEGINLOOP statline ENDLOOP         {
               $$ = new statement_struct();
               string cond = createLabel();
               string start_loop = createLabel();
               string end_loop = createLabel();
               ostringstream os; 
               os << ": " << cond << endl;
               os << $2->code;
               os << "?:= " << start_loop << ", " << $2->resultID << endl;
               os << ":= " << end_loop << endl;
               os << ": " << start_loop << endl;
               os << $4->code;
               os << ":= " << cond << endl;
               os << ": " << end_loop << endl;
               delete $2;
               delete $4;
               $$->code = os.str();
            }
            | DO BEGINLOOP statline ENDLOOP WHILE boolexp         {printf("statement -> DO BEGINLOOP statline ENDLOOP WHILE boolexp\n");}
            | FOR var ASSIGN number SEMICOLON boolexp SEMICOLON var ASSIGN expression BEGINLOOP statline ENDLOOP         {
               $$ = new statement_struct();
               string cond = createLabel();
               string start_loop = createLabel();
               string end_loop = createLabel();
               ostringstream os;
               os << $2->code;
               os << ". " << $2->resultID << endl;
               os << "= " << $2->resultID << ", " << $4->resultID << endl;
               os << ": " << cond << endl;
               os << $6->code;
               os << "?:= " << start_loop << ", " << $6->resultID << endl;
               os << ":= " << end_loop << endl;
               //actual work done in loop
               os << ": " << start_loop << endl;
               os << $12->code;
               //increment counter
               os <<  $8->code;
               os <<  $10->code;
               string tp = $8->type;
               if(tp == "ident")
                  os << "= " << $8->resultID;
               else if(tp == "array")
                  os << "[]= " << $8->name << ", " << $8->index;
               os  << ", " << $10->resultID << endl;
               //branch to recheck the loop condition
               os << ":= " << cond << endl;
               //exit the loop
               os << ": " << end_loop << endl;
               delete $2;
               delete $4;
               delete $6;
               delete $8;
               delete $10;
               delete $12;
               $$->code = os.str();
               }
            | READ varline {
               $$ = new statement_struct();
               ostringstream os;
               os << $2->code;
               string tp = $2->type;
               if(tp == "array"){
                  os << ".[]< " << $2->name << ", " << $2->index << endl;
               }
               else
                  os << ".< " << $2->resultID<< endl;
               delete $2;
               $$->code = os.str();
            }
            | WRITE varline {
               $$ = new statement_struct();
               ostringstream os;
               os << $2->code;
               string tp = $2->type;
               if(tp == "array"){
                  os << ".[]> " << $2->name << ", " << $2->index << endl;
               }
               else
                  os << ".> " << $2->name << endl;
               $$->code = os.str();
               delete $2;
               }
            | CONTINUE         {printf("statement -> CONTINUE\n");}
            | RETURN expression         {printf("statement -> RETURN expression\n");}
            ;
            
stathelp:            {$$ =new stathelp_struct(); }
            | ELSE statline         {
               $$ = new stathelp_struct();
               ostringstream os;
               os << $2->code;
               delete $2;
               $$->code = os.str();
            }
            ;

varline:    var {
               $$ = new varline_struct();
               ostringstream os;
               os << $1->code;
               ostringstream os1;
               os1 << $1->resultID;
               $$->resultID = os1.str();
               $$->type = $1->type;
               $$->name = $1->name;
               $$->index = $1->index;
               delete $1;
               $$->code = os.str();
            }   
            | var COMMA varline         {    
               $$ = new varline_struct();
               ostringstream os;
               os << $1->code << $3->code;
               $$->type = $1->type;
               $$->index = $1->index;
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

boolexp:    relationandexpr         {
               $$ = new boolexp_struct();
               $$->code = $1->code;
               $$->resultID = $1->resultID;
               delete $1;
            }
            | relationandexpr OR boolexp         {
                  $$ = new boolexp_struct();
                  ostringstream os; 
                  os << $1->code;
                  os << $3->code;
                  string temp = createTemp();
                  os << ". " << temp << endl;
                  os << "|| " << temp << ", " << $1->resultID << ", " << $3->resultID << endl;
                  $$->code = os.str();
                  $$->resultID = temp;
            }
            ;

relationandexpr:    relationexpr         {
                        $$ = new relationandexpr_struct();
                        $$->code = $1->code;
                        $$->resultID = $1->resultID;
                        delete $1;
                     }
                    | relationexpr AND relationandexpr         {
                        $$ = new relationandexpr_struct();
                        ostringstream os; 
                        os << $1->code;
                        os << $3->code;
                        string temp = createTemp();
                        os << ". " << temp << endl;
                        os << "&& " << temp << ", " << $1->resultID << ", " << $3->resultID << endl;
                        $$->code = os.str();
                        $$->resultID = temp;
                    }
                    ;
relationexpr:   NOT relationhelper         {
                     $$ = new relationexpr_struct();
                     string temp = createTemp();
                     ostringstream os;
                     os << $2->code;
                     os << ". " << temp << endl;
                     os << "! " << temp << $2->resultID << endl;
                     delete $2;
                     $$->resultID = temp;
                     $$->code = os.str();
                  }
                | relationhelper         {
                     $$ = new relationexpr_struct();
                     $$->code = $1->code;
                     $$->resultID = $1->resultID;
                     delete $1;
                }
                ;

relationhelper:    expression comp expression         {
                     $$ = new relationhelper_struct();
                     string temp = createTemp();
                     ostringstream os;
                     os << ". " << temp << endl;
                     os << $2->resultID << temp << ", " << $1->resultID << ", " << $3->resultID << endl;
                     $$->code = os.str();
                     delete $2;
                     $$->resultID = temp;
                  }
                  | TRUE         {
                     $$ = new relationhelper_struct();
                     $$->resultID = "1";
                  }
                  | FALSE         {
                     $$ = new relationhelper_struct();
                     $$->resultID = "0";
                  }
                  | L_PAREN boolexp R_PAREN         {
                     $$ = new relationhelper_struct();
                     $$->resultID = $2->resultID;
                     $$->code = $2->code;
                     delete $2;
                  }
                  ;

comp:       EQ {
               $$ = new comp_struct();
               $$->resultID = "== ";
            }
            | NEQ         {
               $$ = new comp_struct();
               $$->resultID = "!= ";
            }
            | LT         {
               $$ = new comp_struct();
               $$->resultID = "< ";
            }
            | GT         {
               $$ = new comp_struct();
               $$->resultID = "> ";
            }
            | LTE         {
               $$ = new comp_struct();
               $$->resultID = "<= ";
            }
            | GTE         {
               $$ = new comp_struct();
               $$->resultID = ">= ";
            }
            ;

expression:     multiplicativeexp          {
                  $$ = new expression_struct();
                  ostringstream os;
                  os << $1->code;
                  $$->code = os.str();
                  ostringstream os1;
                  $$->name = $1->name;
                  os1 << $1->resultID;
                  delete $1;
                  $$->resultID = os1.str();
               }
                | expression ADD multiplicativeexp {
                     $$ = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << $1->code;
                     os << $3->code;
                     os << ". " << temp2 << endl;
                     os << "+ " << temp2 << ", " << $1->resultID << ", " << $3->resultID << endl;
                     delete $1;
                     delete $3;
                     $$->resultID = temp2;
                     $$->code = os.str();
                  }
                | expression SUB multiplicativeexp {
                     $$ = new expression_struct();
                     ostringstream os;
                     string temp2 = createTemp();
                     os << $1->code;
                     os << $3->code;
                     os << ". " << temp2 << endl;
                     os << "- " << temp2 << ", " << $1->resultID << ", " << $3->resultID << endl;
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
                        $$->name = $1->name;
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
                        //possible newline issue
                        os << $1->code;
                        os << $3->code;
                        os << ". " << temp2 << endl;
                        os << "* " << temp2 << ", " << $1->resultID << ", " << $3->resultID << endl;
                        delete $1;
                        delete $3;
                        $$->resultID = temp2;
                        $$->code = os.str();
                    }
                    | multiplicativeexp DIV term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << $1->code;
                        os << $3->code;
                        os << ". " << temp2 << endl;
                        os << "/ " << temp2 << ", " << $1->resultID << ", " << $3->resultID << endl;
                        delete $1;
                        delete $3;
                        $$->resultID = temp2;
                        $$->code = os.str();
                    }
                    | multiplicativeexp MOD term {
                        $$ = new multiplicativeexp_struct();
                        ostringstream os;
                        string temp2 = createTemp();
                        os << $1->code;
                        os << $3->code;
                        os << ". " << temp2 << endl;
                        os << "% " << temp2 << ", " << $1->resultID << ", " << $3->resultID << endl;
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
                     $$->name = $1->name;
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
               $$->code = $1->code;
               $$->type = $1->type;
               $$->name = $1->name;
               $$->resultID = $1->resultID;
               delete $1;
            }
            | number {
               $$ = new term1_struct();
               //$$->code = $1->code;
               $$->resultID = $1->resultID;
               delete $1;
            }
            | L_PAREN expression R_PAREN         {printf("term1 -> L_PAREN expression R_PAREN\n");}
            ;

var:        identifier {
               $$ = new var_struct();
               ostringstream os;
               os << $1->code;
               //$$->code = os.str();
               ostringstream os1;
               os1 << $1->resultID;
               $$->resultID = os1.str();
               $$->name = os1.str();
               $$->type = "ident";
            }
            | identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET         {
               $$ = new var_struct();
               ostringstream os;
               os << $3->code;
               //os << ". " << temp << endl;
               //os << "=[] " << temp << ", " << $1->resultID << ", " << $3->resultID << endl;
               //$$->code = $3->code;
               $$->name = $1->resultID;
               $$->index = $3->resultID;
               $$->type = "array";
               $$->code = os.str();
            }
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
